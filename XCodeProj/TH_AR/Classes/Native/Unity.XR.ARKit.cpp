#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t3F365260232979E3376DDF7E674235AA6466EC8E;
// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider
struct Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider
struct Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3;
// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem
struct ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017;
// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider
struct Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider
struct Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider
struct Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider
struct Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider
struct IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi
struct IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider
struct IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider
struct IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider
struct IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428;

IL2CPP_EXTERN_C RuntimeClass* ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08625AE77F17730A156178CF9D3A928F1B3E455D;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA969A2127457410F59C5D0F641E7216F1939EF;
IL2CPP_EXTERN_C String_t* _stringLiteral21E7ADB5BD97C82496FD88B2FC35C83E90C194C2;
IL2CPP_EXTERN_C String_t* _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F;
IL2CPP_EXTERN_C String_t* _stringLiteralA715B159C2223C334BF184A1E148A6DB8873E79E;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC6E02E34BDC35D11B42F798B00A990953D7586;
IL2CPP_EXTERN_C String_t* _stringLiteralE4063A4F84FF2019BD9AEB8FD9B07C7603968424;
IL2CPP_EXTERN_C String_t* _stringLiteralE9E9BCFAFB6DCB88A2B98A04AC20F62F3FF46B43;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF79EA505459F01F984988600F23CC4756E4537;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_Register_m3D8A7915373F1DA0A6314C400B037FEA2248888E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitRaycastSubsystem_RegisterDescriptor_m3C04FEF3B986B37DA138B88077A49EF11177C5C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitReferencePointSubsystem_RegisterDescriptor_m5CBBC49AAEEE95C8881F77ED5961E7462C16A7C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_RegisterDescriptor_mCCA118F936A334DE404EBCA2795CB53E4EC22A67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem__cctor_m22FC887F2A8E048696D465D457F3F1ADA3BAE7F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRDepthSubsystem_RegisterDescriptor_m972EAC5A226DB4FB874CD7DFB0B835DDB08912C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRPlaneSubsystem_RegisterDescriptor_m001CE02AF166B4240843E41B740CE3B36CF56B41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnAsyncConversionCompleteDelegate_BeginInvoke_m8E7181CF93E60C8234DA520737051AFFE5716061_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider__cctor_m4E1CA25EC70EA527EB9FA3F8865E66590E4A135C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t8276593D2182AD0E8D12AF6BAFC4DCCD5C1DB6C1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Subsystem
struct  Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi
struct  NativeApi_tAC74EBF9B7EAB0504916300254C661F63CF9173A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem_NativeApi
struct  NativeApi_tB7917295BEDEB8E60FC3C8181CFDEB126B4DDB2A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi
struct  NativeApi_t164DECAC3F6004936824870871CC817A16AC9050  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions
struct  ARWorldMapRequestStatusExtensions_t8FC86F2BC224C9CCC808FF3B4610B22BE5F8051F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.Api
struct  Api_t4000D9F2E2A2012E34CA6CA8B3EA3E0BF565182C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_IProvider
struct  IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_IDepthApi
struct  IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider
struct  IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider
struct  IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider
struct  IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider
struct  IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct  Subsystem_1_t54655F7C7F723FDA59325E1AC875A3FD66C9C684  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct  Subsystem_1_t699EE52FD744695EFB393B312D6BFA04DCC68870  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  Subsystem_1_tA832EBA21E41FF7EBCA30AE7C32EC78033F63E37  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct  Subsystem_1_t1D44399B8190A9E3533EE5C5D5915B75D79B2E66  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct  Subsystem_1_t1A38EF1402A7E5DBC48E0755E358926BB0054890  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider
struct  Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E  : public IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C
{
public:

public:
};

struct Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::k_TextureYPropertyNameId
	int32_t ___k_TextureYPropertyNameId_0;
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::k_TextureCbCrPropertyNameId
	int32_t ___k_TextureCbCrPropertyNameId_1;

public:
	inline static int32_t get_offset_of_k_TextureYPropertyNameId_0() { return static_cast<int32_t>(offsetof(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields, ___k_TextureYPropertyNameId_0)); }
	inline int32_t get_k_TextureYPropertyNameId_0() const { return ___k_TextureYPropertyNameId_0; }
	inline int32_t* get_address_of_k_TextureYPropertyNameId_0() { return &___k_TextureYPropertyNameId_0; }
	inline void set_k_TextureYPropertyNameId_0(int32_t value)
	{
		___k_TextureYPropertyNameId_0 = value;
	}

	inline static int32_t get_offset_of_k_TextureCbCrPropertyNameId_1() { return static_cast<int32_t>(offsetof(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields, ___k_TextureCbCrPropertyNameId_1)); }
	inline int32_t get_k_TextureCbCrPropertyNameId_1() const { return ___k_TextureCbCrPropertyNameId_1; }
	inline int32_t* get_address_of_k_TextureCbCrPropertyNameId_1() { return &___k_TextureCbCrPropertyNameId_1; }
	inline void set_k_TextureCbCrPropertyNameId_1(int32_t value)
	{
		___k_TextureCbCrPropertyNameId_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem_Provider
struct  Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3  : public IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider
struct  Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986  : public IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider
struct  Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B  : public IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider
struct  Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70  : public IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider
struct  Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A  : public IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469
{
public:

public:
};


// UnityEngine.XR.ARKit.ARWorldMap
struct  ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::<nativeHandle>k__BackingField
	int32_t ___U3CnativeHandleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnativeHandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE, ___U3CnativeHandleU3Ek__BackingField_0)); }
	inline int32_t get_U3CnativeHandleU3Ek__BackingField_0() const { return ___U3CnativeHandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CnativeHandleU3Ek__BackingField_0() { return &___U3CnativeHandleU3Ek__BackingField_0; }
	inline void set_U3CnativeHandleU3Ek__BackingField_0(int32_t value)
	{
		___U3CnativeHandleU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct  XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsColorCorrection>k__BackingField
	bool ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CimplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_1() const { return ___U3CimplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_1() { return &___U3CimplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsAverageBrightnessU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsAverageBrightnessU3Ek__BackingField_2() const { return ___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return &___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline void set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsAverageBrightnessU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() const { return ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return &___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline void set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsColorCorrectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsColorCorrectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsColorCorrectionU3Ek__BackingField_4() const { return ___U3CsupportsColorCorrectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsColorCorrectionU3Ek__BackingField_4() { return &___U3CsupportsColorCorrectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsColorCorrectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsColorCorrectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsDisplayMatrixU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsDisplayMatrixU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsDisplayMatrixU3Ek__BackingField_5() const { return ___U3CsupportsDisplayMatrixU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsDisplayMatrixU3Ek__BackingField_5() { return &___U3CsupportsDisplayMatrixU3Ek__BackingField_5; }
	inline void set_U3CsupportsDisplayMatrixU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsDisplayMatrixU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsProjectionMatrixU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsProjectionMatrixU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsProjectionMatrixU3Ek__BackingField_6() const { return ___U3CsupportsProjectionMatrixU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsProjectionMatrixU3Ek__BackingField_6() { return &___U3CsupportsProjectionMatrixU3Ek__BackingField_6; }
	inline void set_U3CsupportsProjectionMatrixU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsProjectionMatrixU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTimestampU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsTimestampU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsTimestampU3Ek__BackingField_7() const { return ___U3CsupportsTimestampU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsTimestampU3Ek__BackingField_7() { return &___U3CsupportsTimestampU3Ek__BackingField_7; }
	inline void set_U3CsupportsTimestampU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsTimestampU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo
struct  Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor_Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo
struct  Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo
struct  Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CidU3Ek__BackingField_1)); }
	inline String_t* get_U3CidU3Ek__BackingField_1() const { return ___U3CidU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_1() { return &___U3CidU3Ek__BackingField_1; }
	inline void set_U3CidU3Ek__BackingField_1(String_t* value)
	{
		___U3CidU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_2() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_2() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_2; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	char* ___U3CidU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	Il2CppChar* ___U3CidU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_2;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_Availability
struct  Availability_tFD76A2177DDFE5A5A8CDB75EB9CF784CDD9A7487 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_Availability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Availability_tFD76A2177DDFE5A5A8CDB75EB9CF784CDD9A7487, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatus
struct  ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389  : public Subsystem_1_tA832EBA21E41FF7EBCA30AE7C32EC78033F63E37
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct  TrackingSubsystem_2_t70B6F8BBDCEA193299D7F4FC34F9D63A1996CE0C  : public Subsystem_1_t699EE52FD744695EFB393B312D6BFA04DCC68870
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct  TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899  : public Subsystem_1_t1A38EF1402A7E5DBC48E0755E358926BB0054890
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct  XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF  : public Subsystem_1_t54655F7C7F723FDA59325E1AC875A3FD66C9C684
{
public:
	// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_Provider
	IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_Provider_0)); }
	inline IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * get_m_Provider_0() const { return ___m_Provider_0; }
	inline IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities
struct  Capabilities_t4BAC3FA7758E1334A38C073AB595944DAE05308E 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t4BAC3FA7758E1334A38C073AB595944DAE05308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7
{
public:
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ___m_Provider_0;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Provider_0)); }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * get_m_Provider_0() const { return ___m_Provider_0; }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct  NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct  NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct  ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614  : public XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct  ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A  : public XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0
{
public:

public:
};

struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate UnityEngine.XR.ARKit.ARKitSessionSubsystem::s_OnAsyncWorldMapCompleted
	OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * ___s_OnAsyncWorldMapCompleted_1;

public:
	inline static int32_t get_offset_of_s_OnAsyncWorldMapCompleted_1() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields, ___s_OnAsyncWorldMapCompleted_1)); }
	inline OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * get_s_OnAsyncWorldMapCompleted_1() const { return ___s_OnAsyncWorldMapCompleted_1; }
	inline OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF ** get_address_of_s_OnAsyncWorldMapCompleted_1() { return &___s_OnAsyncWorldMapCompleted_1; }
	inline void set_s_OnAsyncWorldMapCompleted_1(OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * value)
	{
		___s_OnAsyncWorldMapCompleted_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncWorldMapCompleted_1), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_SubsumedById_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Center_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_SubsumedById_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_SubsumedById_1() const { return ___m_SubsumedById_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_SubsumedById_1() { return &___m_SubsumedById_1; }
	inline void set_m_SubsumedById_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_SubsumedById_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Center_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Size_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Alignment_5)); }
	inline int32_t get_m_Alignment_5() const { return ___m_Alignment_5; }
	inline int32_t* get_address_of_m_Alignment_5() { return &___m_Alignment_5; }
	inline void set_m_Alignment_5(int32_t value)
	{
		___m_Alignment_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo
struct  Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::implementationType
	Type_t * ___implementationType_1;
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor_Cinfo::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_1() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___implementationType_1)); }
	inline Type_t * get_implementationType_1() const { return ___implementationType_1; }
	inline Type_t ** get_address_of_implementationType_1() { return &___implementationType_1; }
	inline void set_implementationType_1(Type_t * value)
	{
		___implementationType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___U3CcapabilitiesU3Ek__BackingField_2)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_2() const { return ___U3CcapabilitiesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_2() { return &___U3CcapabilitiesU3Ek__BackingField_2; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_2(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRPointCloud
struct  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_2;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_HitType_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_HitType_3)); }
	inline int32_t get_m_HitType_3() const { return ___m_HitType_3; }
	inline int32_t* get_address_of_m_HitType_3() { return &___m_HitType_3; }
	inline void set_m_HitType_3(int32_t value)
	{
		___m_HitType_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo
struct  Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor_Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportedTrackableTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_4() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct  Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate
struct  OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob
struct  TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsIn
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsOut
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsIn_0)); }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsOut_1)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___positionsOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke
{
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com
{
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_FlipBoundaryWindingJob
struct  FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_FlipBoundaryWindingJob::positions
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312, ___positions_0)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positions_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_pinvoke
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_com
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_TransformBoundaryPositionsJob
struct  TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider_TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A, ___positionsIn_0)); }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A, ___positionsOut_1)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positionsOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_pinvoke
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_com
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;
};

// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct  XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7  : public TrackingSubsystem_2_t70B6F8BBDCEA193299D7F4FC34F9D63A1996CE0C
{
public:
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_IDepthApi UnityEngine.XR.ARSubsystems.XRDepthSubsystem::m_Interface
	IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * ___m_Interface_0;
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRDepthSubsystem::m_DefaultPointCloud
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___m_DefaultPointCloud_1;

public:
	inline static int32_t get_offset_of_m_Interface_0() { return static_cast<int32_t>(offsetof(XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7, ___m_Interface_0)); }
	inline IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * get_m_Interface_0() const { return ___m_Interface_0; }
	inline IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 ** get_address_of_m_Interface_0() { return &___m_Interface_0; }
	inline void set_m_Interface_0(IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * value)
	{
		___m_Interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interface_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultPointCloud_1() { return static_cast<int32_t>(offsetof(XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7, ___m_DefaultPointCloud_1)); }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  get_m_DefaultPointCloud_1() const { return ___m_DefaultPointCloud_1; }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * get_address_of_m_DefaultPointCloud_1() { return &___m_DefaultPointCloud_1; }
	inline void set_m_DefaultPointCloud_1(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  value)
	{
		___m_DefaultPointCloud_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct  XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909  : public TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389
{
public:
	// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_Provider
	IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * ___m_Provider_0;
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_DefaultPlane
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___m_DefaultPlane_1;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909, ___m_Provider_0)); }
	inline IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * get_m_Provider_0() const { return ___m_Provider_0; }
	inline IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultPlane_1() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909, ___m_DefaultPlane_1)); }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  get_m_DefaultPlane_1() const { return ___m_DefaultPlane_1; }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * get_address_of_m_DefaultPlane_1() { return &___m_DefaultPlane_1; }
	inline void set_m_DefaultPlane_1(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  value)
	{
		___m_DefaultPlane_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct  XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20  : public Subsystem_1_t1D44399B8190A9E3533EE5C5D5915B75D79B2E66
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_Provider
	IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * ___m_Provider_0;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_DefaultRaycastHit
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_DefaultRaycastHit_1;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_Provider_0)); }
	inline IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * get_m_Provider_0() const { return ___m_Provider_0; }
	inline IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultRaycastHit_1() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_DefaultRaycastHit_1)); }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  get_m_DefaultRaycastHit_1() const { return ___m_DefaultRaycastHit_1; }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * get_address_of_m_DefaultRaycastHit_1() { return &___m_DefaultRaycastHit_1; }
	inline void set_m_DefaultRaycastHit_1(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  value)
	{
		___m_DefaultRaycastHit_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct  XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3  : public TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_Provider
	IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * ___m_Provider_0;
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_DefaultReferencePoint
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___m_DefaultReferencePoint_1;

public:
	inline static int32_t get_offset_of_m_Provider_0() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_Provider_0)); }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * get_m_Provider_0() const { return ___m_Provider_0; }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 ** get_address_of_m_Provider_0() { return &___m_Provider_0; }
	inline void set_m_Provider_0(IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * value)
	{
		___m_Provider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultReferencePoint_1() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_DefaultReferencePoint_1)); }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  get_m_DefaultReferencePoint_1() const { return ___m_DefaultReferencePoint_1; }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * get_address_of_m_DefaultReferencePoint_1() { return &___m_DefaultReferencePoint_1; }
	inline void set_m_DefaultReferencePoint_1(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  value)
	{
		___m_DefaultReferencePoint_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct  ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09  : public XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem
struct  ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017  : public XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct  ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501  : public XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct  ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A  : public XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m514AB5C30ECAB1DFA1C2D1430759E7EF343E4756_gshared (Action_2_t3F365260232979E3376DDF7E674235AA6466EC8E * __this, int32_t ___arg10, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___arg21, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m559DBD38CBD75958E02AF1F62D676E431F661520_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_m49F9345BCD43251FFDC4DD68E1C006AFB98E3634_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageBrightness(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_m2F3DA568B12203F175FEAF777DA8753394F4780B_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m697272008DF9F4DA4287992BF6968433A46FD977_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m15E696085A5B470BC086F59B6EB2B4ED67E6BC6E_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_m392F1AA0BE94C4F9BE41B4B501373769BC32BBE3_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsTimestamp(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mC0811CD8D662F79DA2C8144617A3C4B3F57475CD_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::Register(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_Register_m703AA08482A5B9AFE8DCCCC33CF7D65BA4B56508 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  ___cameraSubsystemParams0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystem__ctor_m494821143D51BD2028BDC82ED7FCFACAD928B92D (XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m150A5C3918FBAF3A786015108195701F3DC66999 (IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_mAC435246B997078CC1067CD3DE5A83BCD111B42D (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8813B5E5B04EA6294D09901E7526D8A32D1D7416 (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mFFFBB447D6D0DF4A27428D414FE23BCCB16D78D1_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m00E3D77F5C33C670222169A514C9804886D4FD72_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mBA63D727FCB8E5FE2EF1BD5CA2192B54768DEF0D_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_mDDA30FB5ADF2800F44467B727F19668AAE05AFEF_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m91638341F04B3BC3688660AFFE66308C19B13C6B_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_mFA32B9879B902AA46943CF8809094299062A41DB (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_mE8BD2BFB3AFD44403F3A663CA5D5AAC707419506 (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_mC08FB7162685B068A1CA780F9AB010796EA6F83D (IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m59EBC1836CDC7E93309447E51535B4F742DBC5D7 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_Create_m4E9D9DF5FCE2FE3F8672653BC733F87D3A4327D0 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystem__ctor_mD93381DE24CA18A7BA022014E77BEBA9AA2CD6E9 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m56C9E2DB691648499825B3D03C0FCD6B534FE641 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508 (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m4FF36D4AB8AF605DF92F850550BFF7620C0EEBAC (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m570D55848E9206E726B14940CACD652E67157CF3 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8 (int32_t ___status0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
inline void Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435 (Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * __this, int32_t ___arg10, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A *, int32_t, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE , const RuntimeMethod*))Action_2_Invoke_m514AB5C30ECAB1DFA1C2D1430759E7EF343E4756_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m7A9F84E8A57323CDB5DC415BA05E72D6A72025E4 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m7CBD7C46ACF50FF49255251388ED6E6D1F3233DB (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_construct_mC863967FCF8BA090EE1CCF7E4B8A4EAF81675C03 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m87E63C927C7DD687F02E114B2EF261E9ADB60751 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_m05831EFF5A03CCC424A2DB1E8C8460E54385E798 (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m2FCA1C93FDE8DC5DC4A553F9EF32E399844C0F79 (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mE8AA1B05D64ABF1690D4B30E5C245B9A923A9116 (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_RegisterDescriptor_m53237B806014993075B559C44D9A743DB447154F (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  ___descriptorParams0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystem__ctor_m1374F0D0EDEA230229CC5ADFF30647B3D2D100D3 (XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDepthApi__ctor_m6DB7AD960B45DEAB48C7EC9034864A61D180D90F (IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m216F6FEB7AB12FABB6D18E68C41988A1CE553D52 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mB3D68A1AEE80E5941EBE7DEFFFB34AC44AB92A8E_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mDACCFA76DE27D24DAD241496ABCE1606EA51E97C_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m03E0099B1BAC214B26A2F4D476DA2A7D5AE01EF9_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m3F6EDFE99022E0D214BEAD727F1AB7A77370DBF4_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m26BE6DBE028AC98927B6E9349599DAF9E4213D18_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m8B0526794B4738A739CD44345ACBA74639B0F1F5_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_m3C5EB6950F78DFA4DEF405243ED67F0CBE2110CA (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mD446FA374A919AF2EDD1A1D7C47913E621CBF809 (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m4A9509E28D15EA223DA0EB272B727A5740A9CBBE (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_inline (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23 (int32_t ___worldMapId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36_inline (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem_Register_m3D8A7915373F1DA0A6314C400B037FEA2248888E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_Register_m3D8A7915373F1DA0A6314C400B037FEA2248888E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC ));
		XRCameraSubsystemCinfo_set_id_m559DBD38CBD75958E02AF1F62D676E431F661520_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_implementationType_m49F9345BCD43251FFDC4DD68E1C006AFB98E3634_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), L_1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageBrightness_m2F3DA568B12203F175FEAF777DA8753394F4780B_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m697272008DF9F4DA4287992BF6968433A46FD977_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m15E696085A5B470BC086F59B6EB2B4ED67E6BC6E_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsProjectionMatrix_m392F1AA0BE94C4F9BE41B4B501373769BC32BBE3_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsTimestamp_mC0811CD8D662F79DA2C8144617A3C4B3F57475CD_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  L_2 = V_0;
		bool L_3 = XRCameraSubsystem_Register_m703AA08482A5B9AFE8DCCCC33CF7D65BA4B56508(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_006d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralE4063A4F84FF2019BD9AEB8FD9B07C7603968424, L_5, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem_IProvider UnityEngine.XR.ARKit.ARKitCameraSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987 (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * L_0 = (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E *)il2cpp_codegen_object_new(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var);
		Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem__ctor_m275098DB546565F2F505C5229244BC965D532B89 (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614 * __this, const RuntimeMethod* method)
{
	{
		XRCameraSubsystem__ctor_m494821143D51BD2028BDC82ED7FCFACAD928B92D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Construct(int32_t, int32_t);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_mAC435246B997078CC1067CD3DE5A83BCD111B42D (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Construct)(___textureYPropertyNameId0, ___textureCbCrPropertyNameId1);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider__ctor_m8A8782B8F0C96CD0EE289A43CBF0357E7AF1F9C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IProvider__ctor_m150A5C3918FBAF3A786015108195701F3DC66999(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->get_k_TextureYPropertyNameId_0();
		int32_t L_1 = ((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->get_k_TextureCbCrPropertyNameId_1();
		NativeApi_UnityARKit_Camera_Construct_mAC435246B997078CC1067CD3DE5A83BCD111B42D(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem_Provider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__cctor_m4E1CA25EC70EA527EB9FA3F8865E66590E4A135C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider__cctor_m4E1CA25EC70EA527EB9FA3F8865E66590E4A135C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteralFCF79EA505459F01F984988600F23CC4756E4537, /*hidden argument*/NULL);
		((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->set_k_TextureYPropertyNameId_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral08625AE77F17730A156178CF9D3A928F1B3E455D, /*hidden argument*/NULL);
		((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->set_k_TextureCbCrPropertyNameId_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider UnityEngine.XR.ARKit.ARKitRaycastSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3 (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * L_0 = (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 *)il2cpp_codegen_object_new(Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3_il2cpp_TypeInfo_var);
		Provider__ctor_m8813B5E5B04EA6294D09901E7526D8A32D1D7416(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem_RegisterDescriptor_m3C04FEF3B986B37DA138B88077A49EF11177C5C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitRaycastSubsystem_RegisterDescriptor_m3C04FEF3B986B37DA138B88077A49EF11177C5C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 ));
		Cinfo_set_id_mFFFBB447D6D0DF4A27428D414FE23BCCB16D78D1_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), _stringLiteral21E7ADB5BD97C82496FD88B2FC35C83E90C194C2, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m00E3D77F5C33C670222169A514C9804886D4FD72_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsViewportBasedRaycast_mBA63D727FCB8E5FE2EF1BD5CA2192B54768DEF0D_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsWorldBasedRaycast_mDDA30FB5ADF2800F44467B727F19668AAE05AFEF_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportedTrackableTypes_m91638341F04B3BC3688660AFFE66308C19B13C6B_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), ((int32_t)31), /*hidden argument*/NULL);
		Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  L_2 = V_0;
		XRRaycastSubsystemDescriptor_RegisterDescriptor_mFA32B9879B902AA46943CF8809094299062A41DB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem__ctor_mDB78CC8D89B5216B41DB4D37FC41EDD0C7F44CC4 (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09 * __this, const RuntimeMethod* method)
{
	{
		XRRaycastSubsystem__ctor_mE8BD2BFB3AFD44403F3A663CA5D5AAC707419506(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8813B5E5B04EA6294D09901E7526D8A32D1D7416 (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_mC08FB7162685B068A1CA780F9AB010796EA6F83D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09 (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * L_0 = (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 *)il2cpp_codegen_object_new(Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986_il2cpp_TypeInfo_var);
		Provider__ctor_m59EBC1836CDC7E93309447E51535B4F742DBC5D7(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitReferencePointSubsystem_RegisterDescriptor_m5CBBC49AAEEE95C8881F77ED5961E7462C16A7C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitReferencePointSubsystem_RegisterDescriptor_m5CBBC49AAEEE95C8881F77ED5961E7462C16A7C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD ));
		Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), _stringLiteralE9E9BCFAFB6DCB88A2B98A04AC20F62F3FF46B43, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  L_2 = V_0;
		XRReferencePointSubsystemDescriptor_Create_m4E9D9DF5FCE2FE3F8672653BC733F87D3A4327D0(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitReferencePointSubsystem__ctor_mB1C5C4D1098E1B9264AC45C28561396DA90C5558 (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017 * __this, const RuntimeMethod* method)
{
	{
		XRReferencePointSubsystem__ctor_mD93381DE24CA18A7BA022014E77BEBA9AA2CD6E9(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m59EBC1836CDC7E93309447E51535B4F742DBC5D7 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m56C9E2DB691648499825B3D03C0FCD6B534FE641(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508(int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508(___status0, ___worldMapId1, ___context2, NULL);

}
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider UnityEngine.XR.ARKit.ARKitSessionSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * L_0 = (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B *)il2cpp_codegen_object_new(Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B_il2cpp_TypeInfo_var);
		Provider__ctor_m4FF36D4AB8AF605DF92F850550BFF7620C0EEBAC(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__cctor_m22FC887F2A8E048696D465D457F3F1ADA3BAE7F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem__cctor_m22FC887F2A8E048696D465D457F3F1ADA3BAE7F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * L_0 = (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF *)il2cpp_codegen_object_new(OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF_il2cpp_TypeInfo_var);
		OnAsyncConversionCompleteDelegate__ctor_m570D55848E9206E726B14940CACD652E67157CF3(L_0, NULL, (intptr_t)((intptr_t)ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508_RuntimeMethod_var), /*hidden argument*/NULL);
		((ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var))->set_s_OnAsyncWorldMapCompleted_1(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508 (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * V_1 = NULL;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		intptr_t L_0 = ___context2;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A *)CastclassSealed((RuntimeObject*)L_2, Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A_il2cpp_TypeInfo_var));
		int32_t L_3 = ___status0;
		bool L_4 = ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * L_5 = V_1;
		int32_t L_6 = ___status0;
		il2cpp_codegen_initobj((&V_2), sizeof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE ));
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_7 = V_2;
		NullCheck(L_5);
		Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435(L_5, L_6, L_7, /*hidden argument*/Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var);
		goto IL_003e;
	}

IL_002e:
	{
		int32_t L_8 = ___worldMapId1;
		ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&V_3), L_8, /*hidden argument*/NULL);
		Action_2_t84AF1D0E414DA3F3CC83837D20CF4E7B5050620A * L_9 = V_1;
		int32_t L_10 = ___status0;
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_11 = V_3;
		NullCheck(L_9);
		Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435(L_9, L_10, L_11, /*hidden argument*/Action_2_Invoke_m2B078E4FAAD6BB392B32D5CCDAC7AC41EF522435_RuntimeMethod_var);
	}

IL_003e:
	{
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_RegisterDescriptor_mCCA118F936A334DE404EBCA2795CB53E4EC22A67 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_RegisterDescriptor_mCCA118F936A334DE404EBCA2795CB53E4EC22A67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A ));
		Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), _stringLiteral0DA969A2127457410F59C5D0F641E7216F1939EF, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  L_2 = V_0;
		XRSessionSubsystemDescriptor_RegisterDescriptor_m7A9F84E8A57323CDB5DC415BA05E72D6A72025E4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__ctor_mB2A7973492EA467AF55FD4D06330C69048B74C2B (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, const RuntimeMethod* method)
{
	{
		XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_construct();
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi::UnityARKit_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_construct_mC863967FCF8BA090EE1CCF7E4B8A4EAF81675C03 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_construct)();

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___worldMapId1, ___context2);

}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m570D55848E9206E726B14940CACD652E67157CF3 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::Invoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_Invoke_mF372DBFF4F533DE6A5150BDCF933B629C8A42B2E (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
					else
						VirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::BeginInvoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAsyncConversionCompleteDelegate_BeginInvoke_m8E7181CF93E60C8234DA520737051AFFE5716061 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnAsyncConversionCompleteDelegate_BeginInvoke_m8E7181CF93E60C8234DA520737051AFFE5716061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___worldMapId1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_EndInvoke_m621CAD30EADED030F40CEE39E76F4C9DC70D2553 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m4FF36D4AB8AF605DF92F850550BFF7620C0EEBAC (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m7CBD7C46ACF50FF49255251388ED6E6D1F3233DB(__this, /*hidden argument*/NULL);
		NativeApi_UnityARKit_session_construct_mC863967FCF8BA090EE1CCF7E4B8A4EAF81675C03(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem_IDepthApi UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::GetInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * L_0 = (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 *)il2cpp_codegen_object_new(Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70_il2cpp_TypeInfo_var);
		Provider__ctor_m87E63C927C7DD687F02E114B2EF261E9ADB60751(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem_RegisterDescriptor_m972EAC5A226DB4FB874CD7DFB0B835DDB08912C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRDepthSubsystem_RegisterDescriptor_m972EAC5A226DB4FB874CD7DFB0B835DDB08912C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 ));
		(&V_0)->set_id_0(_stringLiteralAAC6E02E34BDC35D11B42F798B00A990953D7586);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		(&V_0)->set_implementationType_1(L_1);
		Cinfo_set_supportsFeaturePoints_m05831EFF5A03CCC424A2DB1E8C8460E54385E798((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsConfidence_m2FCA1C93FDE8DC5DC4A553F9EF32E399844C0F79((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsUniqueIds_mE8AA1B05D64ABF1690D4B30E5C245B9A923A9116((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  L_2 = V_0;
		XRDepthSubsystemDescriptor_RegisterDescriptor_m53237B806014993075B559C44D9A743DB447154F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem__ctor_mB3A0AA699984B24DDE1B60AA93B5DB332BF2AFC3 (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501 * __this, const RuntimeMethod* method)
{
	{
		XRDepthSubsystem__ctor_m1374F0D0EDEA230229CC5ADFF30647B3D2D100D3(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m87E63C927C7DD687F02E114B2EF261E9ADB60751 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		IDepthApi__ctor_m6DB7AD960B45DEAB48C7EC9034864A61D180D90F(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_pinvoke(const TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283& unmarshaled, TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke& marshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_pinvoke_back(const TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke& marshaled, TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283& unmarshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_pinvoke_cleanup(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_com(const TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283& unmarshaled, TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com& marshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_com_back(const TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com& marshaled, TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283& unmarshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
IL2CPP_EXTERN_C void TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshal_com_cleanup(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212 (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * L_0 = (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A *)il2cpp_codegen_object_new(Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A_il2cpp_TypeInfo_var);
		Provider__ctor_m216F6FEB7AB12FABB6D18E68C41988A1CE553D52(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem_RegisterDescriptor_m001CE02AF166B4240843E41B740CE3B36CF56B41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRPlaneSubsystem_RegisterDescriptor_m001CE02AF166B4240843E41B740CE3B36CF56B41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 ));
		Cinfo_set_id_mB3D68A1AEE80E5941EBE7DEFFFB34AC44AB92A8E_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), _stringLiteralA715B159C2223C334BF184A1E148A6DB8873E79E, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_mDACCFA76DE27D24DAD241496ABCE1606EA51E97C_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsHorizontalPlaneDetection_m03E0099B1BAC214B26A2F4D476DA2A7D5AE01EF9_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsVerticalPlaneDetection_m3F6EDFE99022E0D214BEAD727F1AB7A77370DBF4_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsArbitraryPlaneDetection_m26BE6DBE028AC98927B6E9349599DAF9E4213D18_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsBoundaryVertices_m8B0526794B4738A739CD44345ACBA74639B0F1F5_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  L_2 = V_0;
		XRPlaneSubsystemDescriptor_Create_m3C5EB6950F78DFA4DEF405243ED67F0CBE2110CA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem__ctor_m0D68D2EC3958ACBD3BA70622EE9A7C2AFD059C7B (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A * __this, const RuntimeMethod* method)
{
	{
		XRPlaneSubsystem__ctor_mD446FA374A919AF2EDD1A1D7C47913E621CBF809(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m216F6FEB7AB12FABB6D18E68C41988A1CE553D52 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m4A9509E28D15EA223DA0EB272B727A5740A9CBBE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_pinvoke(const FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312& unmarshaled, FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_pinvoke& marshaled)
{
	Exception_t* ___positions_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positions' of type 'FlipBoundaryWindingJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positions_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_pinvoke_back(const FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_pinvoke& marshaled, FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312& unmarshaled)
{
	Exception_t* ___positions_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positions' of type 'FlipBoundaryWindingJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positions_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_pinvoke_cleanup(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_com(const FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312& unmarshaled, FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_com& marshaled)
{
	Exception_t* ___positions_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positions' of type 'FlipBoundaryWindingJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positions_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_com_back(const FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_com& marshaled, FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312& unmarshaled)
{
	Exception_t* ___positions_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positions' of type 'FlipBoundaryWindingJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positions_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
IL2CPP_EXTERN_C void FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshal_com_cleanup(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_pinvoke(const TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A& unmarshaled, TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformBoundaryPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_pinvoke_back(const TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_pinvoke& marshaled, TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A& unmarshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformBoundaryPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_pinvoke_cleanup(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_com(const TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A& unmarshaled, TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_com& marshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformBoundaryPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_com_back(const TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_com& marshaled, TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A& unmarshaled)
{
	Exception_t* ___positionsIn_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'positionsIn' of type 'TransformBoundaryPositionsJob'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___positionsIn_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
IL2CPP_EXTERN_C void TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshal_com_cleanup(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23(L_0, /*hidden argument*/NULL);
		ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, 0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_GetHashCode_m084D4D95A1BF2B18C93825E155B889AE07C2C1A9(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, ((*(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)UnBox(L_1, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_Equals_mD02750E273F0FCF3A2A085776D8B2789809E6332(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894_AdjustorThunk (RuntimeObject * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_Equals_mF4CBBC2F7B48A3FF6C5EAB73E86A0A6C54E15894(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___nativeHandle0;
		ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC_AdjustorThunk (RuntimeObject * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap__ctor_m603DA112F27C776D33AC7F285A5B0F268AFA1DFC(_thisAdjusted, ___nativeHandle0, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	return ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + 1);
	ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8 (int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_disposeWorldMap(int32_t);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m76AA975C391A2D1DAF0100E05DD619C460C4AD23 (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_disposeWorldMap)(___worldMapId0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m559DBD38CBD75958E02AF1F62D676E431F661520_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_m49F9345BCD43251FFDC4DD68E1C006AFB98E3634_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CimplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_m2F3DA568B12203F175FEAF777DA8753394F4780B_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m697272008DF9F4DA4287992BF6968433A46FD977_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m15E696085A5B470BC086F59B6EB2B4ED67E6BC6E_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsDisplayMatrixU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_m392F1AA0BE94C4F9BE41B4B501373769BC32BBE3_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsProjectionMatrixU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mC0811CD8D662F79DA2C8144617A3C4B3F57475CD_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsTimestampU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mFFFBB447D6D0DF4A27428D414FE23BCCB16D78D1_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m00E3D77F5C33C670222169A514C9804886D4FD72_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mBA63D727FCB8E5FE2EF1BD5CA2192B54768DEF0D_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_mDDA30FB5ADF2800F44467B727F19668AAE05AFEF_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m91638341F04B3BC3688660AFFE66308C19B13C6B_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mB3D68A1AEE80E5941EBE7DEFFFB34AC44AB92A8E_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mDACCFA76DE27D24DAD241496ABCE1606EA51E97C_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m03E0099B1BAC214B26A2F4D476DA2A7D5AE01EF9_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m3F6EDFE99022E0D214BEAD727F1AB7A77370DBF4_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m26BE6DBE028AC98927B6E9349599DAF9E4213D18_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m8B0526794B4738A739CD44345ACBA74639B0F1F5_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m4BDFD6601FBDE4DCAF00485C162D2DD5E70F8A93_inline (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_m60628E8F40C1190D9AE2EF2A28F9B01EE7F94A36_inline (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
