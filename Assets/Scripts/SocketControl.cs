using System.Collections;
using System.Net;
using System.Net.Sockets;
using System;
using System.Text;
using System.Threading;
using System.Collections.Generic;
using UnityEngine;

public class DeviceStatusListener : ThreadedJob
{
    public bool isConnected = false;
    
    public DeviceStatusListener()
    {

    }

    protected override void ThreadFunction()
    {
        TCPListener();
    }



    void TCPListener()
    {
        TcpListener server = null;
        try
        {
            // Set the TcpListener on specified port.
            Int32 port = 9997;
            IPHostEntry ipHostInfo = Dns.Resolve(Dns.GetHostName());
            Debug.Log("iphost ipv4 " + ipHostInfo.AddressList[0].ToString());
            //IPAddress localAddr = IPAddress.Parse("192.168.0.102");

            // TcpListener server = new TcpListener(port);
            server = new TcpListener(ipHostInfo.AddressList[0], port);

            // Start listening for client requests.
            server.Start();

            // Buffer for reading data
            Byte[] bytes = new Byte[256];
            String data = null;

            // Enter the listening loop.
            while (true)
            {
                Debug.Log("Waiting for a connection... ");

                // Perform a blocking call to accept requests.
                // You could also user server.AcceptSocket() here.
                TcpClient client = server.AcceptTcpClient();
                Debug.Log("Connected!");

                data = null;

                // Get a stream object for reading and writing
                NetworkStream stream = client.GetStream();

                int i;

                // Loop to receive all the data sent by the client.
                while ((i = stream.Read(bytes, 0, bytes.Length)) != 0)
                {
                    // Translate data bytes to a ASCII string.
                    data = System.Text.Encoding.ASCII.GetString(bytes, 0, i);
                    Debug.Log("Received: " + data);

                    bool parseResult = bool.TryParse(data, out bool res);

                    if (parseResult)
                    {
                        Configuration.neuralDeviceConnected = res;
                    }
                }

                // Shutdown and end connection
                client.Close();
            }
        }
        catch (SocketException e)
        {
            Debug.Log("SocketException: " + e);
        }
        finally
        {
            // Stop listening for new clients.
            server.Stop();
        }
    }

    protected override void OnFinished()
    {
        base.OnFinished();
    }

    public virtual void close()
    {

    }
}

public class ClientThread : ThreadedJob
{

    public bool isConnected = false;
    List<string> messageBuffer;
    //DeviceStatusListener deviceStatusListener;
    public IPAddress serverAddress;
    public ClientThread()
    {
        messageBuffer = new List<string>();
    }

    protected override void ThreadFunction()
    {
        //StartClient();

        //if input field is empty with default string "0.0.0.0", then perform device discovery
        if (Configuration.directIPAddress.Contains("0.0.0.0"))
        {

            PrintSomething("attempting device discovery");
            
            serverAddress = ClientSocket();
        }
        else
        {
            PrintSomething("doing direct ip connection");
            PrintSomething(Configuration.directIPAddress);
            serverAddress = IPAddress.Parse(Configuration.directIPAddress); // we are not doing TryParse here as we already did that in NetworkManager before switching to main experiment scene
        }
        if (serverAddress != IPAddress.Parse("0.0.0.0"))
        {
            //ConnectToServer(serverAddress);
            //deviceStatusListener = new DeviceStatusListener();
            //deviceStatusListener.Start();
            TCPClient(serverAddress);
        }


    }

    void PrintSomething(string msg)
    {
        UnityEngine.Debug.Log("PRINT: " + msg);
    }



    public void AddMessageToBuffer(string newMessage)
    {
        Debug.Log("added message to buffer");
        messageBuffer.Add(newMessage);
    }

    void TCPClient(IPAddress servAddr)
    {
        Debug.Log("outside try");
        try
        {
            Debug.Log("about to create client");
            // Create a TcpClient.
            // Note, for this client to work you need to have a TcpServer 
            // connected to the same address as specified by the server, port
            // combination.
            Debug.Log("server address " + servAddr.ToString());
            try
            {
                TcpClient client = new TcpClient(servAddr.ToString(), 9998);
          
            Debug.Log("created client");
            isConnected = true;
                Byte[] data = new byte[256];
                NetworkStream stream;
            while (isConnected)
                {
                    // Buffer for reading data
                    //Byte[] bytes = new Byte[256];
                    //string readBuffer;
                    // Translate the first passed message in the message buffer and convert into ASCII and store it as a Byte array.
                    if (messageBuffer.Count > 0)
                    {
                        Debug.Log("got message in the buffer");
                        //convert the last message
                        data = System.Text.Encoding.ASCII.GetBytes(messageBuffer[messageBuffer.Count-1]);

                        // Get a client stream for reading and writing.
                        //  Stream stream = client.GetStream();

                        stream = client.GetStream();
                        //    int i;

                        //    // Loop to receive all the data sent by the client.
                        //    while ((i = stream.Read(bytes, 0, bytes.Length)) != 0)
                        //    {
                        //        // Translate data bytes to a ASCII string.
                        //        readBuffer = System.Text.Encoding.ASCII.GetString(bytes, 0, i);
                        //        Debug.Log("RECEIVED: " + readBuffer);


                        //    }
                        Debug.Log("writing into the stream");
                        // Send the message to the connected TcpServer. 
                        stream.Write(data, 0, data.Length);

                    //remove the message from the buffer
                    messageBuffer.RemoveAt(messageBuffer.Count - 1);

                    Debug.Log("Sent message");
                        //stream.Close();
                    }
                    Thread.Sleep(100);

            }

            //close the client
            client.Close();
            }
            catch (SocketException e)
            {
                Debug.Log("got socket exception " + e.Message);
                Debug.Log(e.SocketErrorCode.ToString());
                Debug.Log("attempting to run again");
                Thread.Sleep(500);
                TCPClient(serverAddress);
            }
        }
        catch (ArgumentNullException e)
        {
            Console.WriteLine("ArgumentNullException: {0}", e);
        }
        catch (SocketException e)
        {
            Console.WriteLine("SocketException: {0}", e);
        }
    }

    void ConnectToServer(IPAddress servAddr)
    {
        Debug.Log("establishing connection via socket");
        Socket s = new Socket(AddressFamily.InterNetwork,
         SocketType.Stream,
         ProtocolType.Tcp);
        s.Connect(servAddr,9999);
        Debug.Log("connected");
        isConnected = true;

        while(isConnected)
        {
            string msg = "ok";
            byte[] bytes = new byte[256];
            bytes = Encoding.UTF8.GetBytes(msg.ToCharArray());
            Debug.Log("about to send");
            s.Send(bytes);
            Debug.Log("sent; about to sleep");
            Thread.Sleep(2000);
            Debug.Log("back");
        }

        s.Close();




    }

    public static void StartClient()
    {
        // Data buffer for incoming data.  
        byte[] bytes = new byte[1024];

        // Connect to a remote device.  
        try
        {
            // Establish the remote endpoint for the socket.  
            // This example uses port 11000 on the local computer.  
            IPHostEntry ipHostInfo = Dns.GetHostEntry(Dns.GetHostName());
            IPAddress ipAddress = ipHostInfo.AddressList[1];
            IPEndPoint remoteEP = new IPEndPoint(IPAddress.Parse("192.168.0.102"), 9999);

            // Create a TCP/IP  socket.  
            Socket sender = new Socket(ipAddress.AddressFamily,
                SocketType.Stream, ProtocolType.Tcp);

            // Connect the socket to the remote endpoint. Catch any errors.  
            try
            {
                sender.Connect(remoteEP);

               Debug.Log("Socket connected to " +
                    sender.RemoteEndPoint.ToString());

                // Encode the data string into a byte array.  
                byte[] msg = Encoding.ASCII.GetBytes("This is a test<EOF>");

                // Send the data through the socket.  
                int bytesSent = sender.Send(msg);
                Debug.Log("sent byte count " + bytesSent.ToString());
                // Receive the response from the remote device.  
                int bytesRec = sender.Receive(bytes);
                Debug.Log("Echoed test = " +
                    Encoding.ASCII.GetString(bytes, 0, bytesRec));

                // Release the socket.  
                sender.Shutdown(SocketShutdown.Both);
                sender.Close();

            }
            catch (ArgumentNullException ane)
            {
                Debug.Log("ArgumentNullException : " + ane.ToString());
            }
            catch (SocketException se)
            {
               Debug.Log("SocketException : "+ se.ToString());
            }
            catch (Exception e)
            {
                Debug.Log("Unexpected exception : " + e.ToString());
            }

        }
        catch (Exception e)
        {
            Debug.Log(e.ToString());
        }
    }


    protected override void OnFinished()
    {
        isConnected = false;
    }

    IPAddress ClientSocket()
    {
        var Client = new UdpClient();
        Debug.Log("about to get subject name");
        string message = "SUBJ \t" + Configuration.subjectName;
        var RequestData = Encoding.ASCII.GetBytes(message);
        var ServerEp = new IPEndPoint(IPAddress.Any, 0);

        Client.EnableBroadcast = true;
        Client.Send(RequestData, RequestData.Length, new IPEndPoint(IPAddress.Broadcast, 9999));
        Debug.Log("waiting to receive as client");
        //var ServerResponseData = Client.Receive(ref ServerEp);
        //var ServerResponse = Encoding.ASCII.GetString(ServerResponseData);

        var ServerResponseData = Client.ReceiveAsync();
        var ServerResponse = ServerResponseData.Result.Buffer.ToString();

        IPAddress targetAddr = ServerResponseData.Result.RemoteEndPoint.Address;

        UnityEngine.Debug.Log("Received " + ServerResponse + " from " + ServerResponseData.Result.RemoteEndPoint.Address.ToString());
        Client.Close();
        Debug.Log("close udp socket");
        return targetAddr;

    }

    public virtual void close()
    {
        isConnected = false;
    }
}

public class SocketControl : MonoBehaviour
{
    public ClientThread _client;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
    }

    public IEnumerator RunClient()
    {
        UnityEngine.Debug.Log("starting client thread");
        _client = new ClientThread();
        _client.Start();
        yield return null;
    }

    private void OnApplicationQuit()
    {
        if (_client != null)
        {
            Debug.Log("about to abort client");
            _client.close();
        }
    }
}
