//
//  main.cpp
//  zmqtest
//
//  Created by Ansh Patel on 11/7/19.
//  Copyright © 2019 Ansh Patel. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <iostream>
#include <random>
#include <chrono>
#include "zmq.h"
#include <sstream>
#include <zmq.hpp>
#include "zhelpers.hpp"
#include <thread>

#include <cstring>
#include <errno.h>
#include <unistd.h>     ///< close

#include <atomic>
#include <string>

#ifdef _WIN32
#include <WS2tcpip.h>
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif // _WIN32

#include "zmq.hpp"

#ifdef _WIN32
#pragma comment(lib, "Ws2_32.lib")
#endif // _WIN32

#define PING_PORT_NUMBER    9999
#define PING_MSG_SIZE       2
#define PING_INTERVAL       500
#define SOCKET_POLL_TIMEOUT 3000

#define MIN_JITTER_DURATION 0.5
#define MAX_JITTER_DURATION 1

#define INTER_PULSE_DURATION 2


#define INFO_OUT(MSG)  std::cout << "[INFO]   " << " " << (MSG) << std::endl
#define ERROR_OUT(MSG) std::cerr << "[ERROR]  " << " " << (MSG) << std::endl

#ifndef _WIN32
#define SOCKET int
#define INVALID_SOCKET (SOCKET)(~0)
#define SOCKET_ERROR (SOCKET)(~1)
#define NO_ERROR 0
#endif // _WIN32

using namespace std::chrono;

std::atomic<bool> g_threadInterupted(false);
std::string targetIPAddress = "0.0.0.0";
std::string machineIPAddress = "0.0.0.0";
bool pulseSent=false;

bool isConnected=false;

/**
* Create a socket and use ZeroMQ to poll.
*/

std::string get_ip_addr()
{

    const char* google_dns_server = "8.8.8.8";
    int dns_port = 53;

    struct sockaddr_in serv;
    int sock = socket(AF_INET, SOCK_DGRAM, 0);

    //Socket could not be created
    if(sock < 0)
    {
        std::cout << "Socket error" << std::endl;
    }

    memset(&serv, 0, sizeof(serv));
    serv.sin_family = AF_INET;
    serv.sin_addr.s_addr = inet_addr(google_dns_server);
    serv.sin_port = htons(dns_port);

    int err = connect(sock, (const struct sockaddr*)&serv, sizeof(serv));
    if (err < 0)
    {
        std::cout << "Error number: " << errno
            << ". Error message: " << strerror(errno) << std::endl;
    }

    struct sockaddr_in name;
    socklen_t namelen = sizeof(name);
    err = getsockname(sock, (struct sockaddr*)&name, &namelen);

    char buffer[80];
    const char* p = inet_ntop(AF_INET, &name.sin_addr, buffer, 80);
    if(p != NULL)
    {
        std::cout << "Local IP address is: " << buffer << std::endl;
    }
    else
    {
        std::cout << "Error number: " << errno
            << ". Error message: " << strerror(errno) << std::endl;
    }

    close(sock);
    std::string ipAddr = buffer;
    return ipAddr;
}


void listener()
{
    #ifdef _WIN32
    WSADATA wsaData;
    
    #endif // _WIN32
    int nResult = 0;
    
    //reset the address before performing network discovery
    targetIPAddress="";

    #ifdef _WIN32
    // Initialize Winsock
    nResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (nResult != NO_ERROR)
    {
        ERROR_OUT("zmqListen : WSAStartup failed");
    }
    #endif // _WIN32

    // Create UDP socket
    SOCKET fdSocket;
    fdSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (fdSocket == INVALID_SOCKET)
    {
        ERROR_OUT("zmqListen : Socket creation failed");
    }

    // Set up the sockaddr structure
    struct sockaddr_in saListen = {0};
    saListen.sin_family = AF_INET;
    saListen.sin_port = htons(PING_PORT_NUMBER);
    saListen.sin_addr.s_addr = htonl(INADDR_ANY);
    
    // Bind the socket
    nResult = bind(fdSocket, (sockaddr*)&saListen, sizeof(saListen));
    if (nResult != NO_ERROR)
    {
        ERROR_OUT("zmqListen : socket bind failed");
    }

    while (!g_threadInterupted)
    {
        // Poll socket for a message
        zmq::pollitem_t items[] = {{NULL, fdSocket, ZMQ_POLLIN, 0}};
        zmq::poll(&items[0], 1, SOCKET_POLL_TIMEOUT);

        // If we get a message, print the contents
        if (items[0].revents & ZMQ_POLLIN)
        {
            char recvBuf[PING_MSG_SIZE] = {0};
            #ifdef _WIN32
            int saSize = sizeof(struct sockaddr_in);
            #else
            socklen_t saSize = sizeof(struct sockaddr_in);
            #endif // _WIN32
            size_t size = recvfrom(fdSocket, recvBuf, PING_MSG_SIZE + 1, 0, (sockaddr*)&saListen, &saSize);
            {
                std::string ip(inet_ntoa(saListen.sin_addr));
                INFO_OUT("received: " + std::string(recvBuf) + " from " + ip);
                if(ip !=machineIPAddress)
                {
                targetIPAddress = ip;
                std::cout<<"new target ip addr is "<<targetIPAddress<<std::endl;
                g_threadInterupted=true;
                }
            }
        }
    }
    
    #ifdef _WIN32
    closesocket(fdSocket);
    WSACleanup();
    #endif // _WIN32
}

/**
* Main function starts a listener thread and then sends out 5 broadcast pings
*/
extern "C"
    {
int InitiateDiscovery()
{
    g_threadInterupted = false;
    
    machineIPAddress = get_ip_addr();

    // Start listener in a seperate thread
    std::thread listenerThread(listener);

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    {
        #ifdef _WIN32
        WSADATA wsaData;
        #endif // _WIN32
        int nResult = 0;
        int nOptOffVal = 0;
        int nOptOnVal = 1;
        int nOptLen = sizeof(int);

        #ifdef _WIN32
        // Initialize Winsock
        nResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
        if (nResult != NO_ERROR)
        {
            ERROR_OUT("broadcast : WSAStartup failed");
        }
        #endif // _WIN32

        // Create UDP socket
        SOCKET fdSocket;
        fdSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
        if (fdSocket == INVALID_SOCKET)
        {
            ERROR_OUT("broadcast : socket creation failed");
        }

        // Ask operating system to let us do broadcasts from socket
        nResult = setsockopt(fdSocket, SOL_SOCKET, SO_BROADCAST, (char *)&nOptOnVal, nOptLen);
        if (nResult != NO_ERROR)
        {
            ERROR_OUT("broadcast : setsockopt SO_BROADCAST failed");
        }

        // Set up the sockaddr structure
        struct sockaddr_in saBroadcast = {0};
        saBroadcast.sin_family = AF_INET;
        saBroadcast.sin_port = htons(PING_PORT_NUMBER);
        saBroadcast.sin_addr.s_addr = htonl(INADDR_BROADCAST);

        // Broadcast 5 beacon messages
        while(!g_threadInterupted)
        {
            char buffer[PING_MSG_SIZE] = {0};
            strcpy(&buffer[0], "!");
            int bytes = sendto(fdSocket, buffer, PING_MSG_SIZE + 1, 0, (sockaddr*)&saBroadcast, sizeof(struct sockaddr_in));
            if (bytes == SOCKET_ERROR)
            {
                ERROR_OUT("broadcast : sendto failed");
            }

            std::this_thread::sleep_for(std::chrono::milliseconds(PING_INTERVAL));
        }

        #ifdef _WIN32
        closesocket(fdSocket);
        WSACleanup();
        #endif // _WIN32
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    g_threadInterupted = true;

    listenerThread.join();
    
    std::cout<<"new target ip addr is "<<targetIPAddress<<std::endl;

    return 1;
}
    
}

std::string get_current_unix_time()
{

    // std::time_t result = std::time(nullptr);
    // std::cout << std::asctime(std::localtime(&result))
    //           << result << " seconds since the Epoch\n";

    long now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    std::stringstream ss;
    ss << now;
    return ss.str();

}

float get_randomized_jitter()
{
    return rand() % 1 + MIN_JITTER_DURATION;
}

extern "C"
{
    void Subscriber()
    {
        
        std::cout<<"starting up subscriber thread"<<std::endl;
        zmq::context_t context(1);
        zmq::socket_t subscriber (context, ZMQ_SUB);
        std::cout<<"targeting ip addr " <<targetIPAddress<<std::endl;
        subscriber.connect("tcp://"+targetIPAddress + ":5563");
        subscriber.setsockopt( ZMQ_SUBSCRIBE, "B", 1);

           while (1) {

               //  Read envelope with address
               std::string address = s_recv (subscriber);
               //  Read message contents
               std::string contents = s_recv (subscriber);
               
               std::cout << "[" << address << "] " << contents << std::endl;
           }
        
    }

}

extern "C"
{
    void TerminateConnection()
    {
        isConnected=false;
    }
}

extern "C"
{
    int CheckIfPulseSent()
    {
        if(pulseSent)
            return 1;
        else
            return 0;
    }
}

void ChangePulseFlag()
{
    pulseSent=true;
}

extern "C"
{

void Publisher()
{
    std::cout<<"starting up publisher thread"<<std::endl;
    isConnected=true;
    float rand_jitter= MIN_JITTER_DURATION;
        //  Prepare our context and publisher
        zmq::context_t context(1);
        zmq::socket_t publisher(context, ZMQ_PUB);
        publisher.bind("tcp://*:5563");

        while (isConnected) {
            //  Write two messages, each with an envelope and content
            s_sendmore (publisher, "A");
            s_send(publisher, get_current_unix_time());
            ChangePulseFlag();

            rand_jitter = get_randomized_jitter();
            // s_send (publisher, "We don't want to see this");
            // s_sendmore (publisher, "B");
            // s_send (publisher, "We would like to see this");
            sleep (INTER_PULSE_DURATION + rand_jitter);
        }
}

}
