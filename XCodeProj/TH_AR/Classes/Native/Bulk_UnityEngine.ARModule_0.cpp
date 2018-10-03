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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Action
struct Action_t1264377477;
// System.Action`1<UnityEngine.XR.Tango.CoordinateFrame>
struct Action_1_t4271497161;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t2206337031;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.XR.ARBackgroundRenderer
struct ARBackgroundRenderer_t852496440;

extern RuntimeClass* CommandBuffer_t2206337031_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* TangoDevice_t2970124841_il2cpp_TypeInfo_var;
extern RuntimeClass* TangoInputTracking_t4005594645_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3184621405;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral819432915;
extern const RuntimeMethod* ARBackgroundRenderer_set_mode_m3553019916_RuntimeMethod_var;
extern const uint32_t ARBackgroundRenderer_DisableARBackgroundRendering_m1735733166_MetadataUsageId;
extern const uint32_t ARBackgroundRenderer_EnableARBackgroundRendering_m1104614478_MetadataUsageId;
extern const uint32_t ARBackgroundRenderer_set_backgroundMaterial_m3540290638_MetadataUsageId;
extern const uint32_t ARBackgroundRenderer_set_camera_m2911511959_MetadataUsageId;
extern const uint32_t ARBackgroundRenderer_set_mode_m3553019916_MetadataUsageId;
extern const uint32_t TangoDevice__cctor_m585081299_MetadataUsageId;
extern const uint32_t TangoInputTracking_TryGetPoseAtTime_m3134437062_MetadataUsageId;
extern const uint32_t TangoInputTracking__cctor_m2382021019_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745536_H
#define U3CMODULEU3E_T692745536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745536 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745536_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef TANGODEVICE_T2970124841_H
#define TANGODEVICE_T2970124841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.TangoDevice
struct  TangoDevice_t2970124841  : public RuntimeObject
{
public:

public:
};

struct TangoDevice_t2970124841_StaticFields
{
public:
	// UnityEngine.XR.ARBackgroundRenderer UnityEngine.XR.Tango.TangoDevice::m_BackgroundRenderer
	ARBackgroundRenderer_t852496440 * ___m_BackgroundRenderer_0;
	// System.String UnityEngine.XR.Tango.TangoDevice::m_AreaDescriptionUUID
	String_t* ___m_AreaDescriptionUUID_1;

public:
	inline static int32_t get_offset_of_m_BackgroundRenderer_0() { return static_cast<int32_t>(offsetof(TangoDevice_t2970124841_StaticFields, ___m_BackgroundRenderer_0)); }
	inline ARBackgroundRenderer_t852496440 * get_m_BackgroundRenderer_0() const { return ___m_BackgroundRenderer_0; }
	inline ARBackgroundRenderer_t852496440 ** get_address_of_m_BackgroundRenderer_0() { return &___m_BackgroundRenderer_0; }
	inline void set_m_BackgroundRenderer_0(ARBackgroundRenderer_t852496440 * value)
	{
		___m_BackgroundRenderer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BackgroundRenderer_0), value);
	}

	inline static int32_t get_offset_of_m_AreaDescriptionUUID_1() { return static_cast<int32_t>(offsetof(TangoDevice_t2970124841_StaticFields, ___m_AreaDescriptionUUID_1)); }
	inline String_t* get_m_AreaDescriptionUUID_1() const { return ___m_AreaDescriptionUUID_1; }
	inline String_t** get_address_of_m_AreaDescriptionUUID_1() { return &___m_AreaDescriptionUUID_1; }
	inline void set_m_AreaDescriptionUUID_1(String_t* value)
	{
		___m_AreaDescriptionUUID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AreaDescriptionUUID_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TANGODEVICE_T2970124841_H
#ifndef TANGOINPUTTRACKING_T4005594645_H
#define TANGOINPUTTRACKING_T4005594645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.TangoInputTracking
struct  TangoInputTracking_t4005594645  : public RuntimeObject
{
public:

public:
};

struct TangoInputTracking_t4005594645_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.Tango.CoordinateFrame> UnityEngine.XR.Tango.TangoInputTracking::trackingAcquired
	Action_1_t4271497161 * ___trackingAcquired_0;
	// System.Action`1<UnityEngine.XR.Tango.CoordinateFrame> UnityEngine.XR.Tango.TangoInputTracking::trackingLost
	Action_1_t4271497161 * ___trackingLost_1;

public:
	inline static int32_t get_offset_of_trackingAcquired_0() { return static_cast<int32_t>(offsetof(TangoInputTracking_t4005594645_StaticFields, ___trackingAcquired_0)); }
	inline Action_1_t4271497161 * get_trackingAcquired_0() const { return ___trackingAcquired_0; }
	inline Action_1_t4271497161 ** get_address_of_trackingAcquired_0() { return &___trackingAcquired_0; }
	inline void set_trackingAcquired_0(Action_1_t4271497161 * value)
	{
		___trackingAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((&___trackingAcquired_0), value);
	}

	inline static int32_t get_offset_of_trackingLost_1() { return static_cast<int32_t>(offsetof(TangoInputTracking_t4005594645_StaticFields, ___trackingLost_1)); }
	inline Action_1_t4271497161 * get_trackingLost_1() const { return ___trackingLost_1; }
	inline Action_1_t4271497161 ** get_address_of_trackingLost_1() { return &___trackingLost_1; }
	inline void set_trackingLost_1(Action_1_t4271497161 * value)
	{
		___trackingLost_1 = value;
		Il2CppCodeGenWriteBarrier((&___trackingLost_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TANGOINPUTTRACKING_T4005594645_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef CAMERACLEARFLAGS_T2362496923_H
#define CAMERACLEARFLAGS_T2362496923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t2362496923 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t2362496923, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T2362496923_H
#ifndef CUBEMAPFACE_T1358225318_H
#define CUBEMAPFACE_T1358225318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CubemapFace
struct  CubemapFace_t1358225318 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CubemapFace_t1358225318, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEMAPFACE_T1358225318_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef BUILTINRENDERTEXTURETYPE_T2399837169_H
#define BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t2399837169 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t2399837169, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifndef CAMERAEVENT_T2033959522_H
#define CAMERAEVENT_T2033959522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t2033959522 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEvent_t2033959522, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEVENT_T2033959522_H
#ifndef COMMANDBUFFER_T2206337031_H
#define COMMANDBUFFER_T2206337031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t2206337031  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t2206337031, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDBUFFER_T2206337031_H
#ifndef SCREENORIENTATION_T1705519499_H
#define SCREENORIENTATION_T1705519499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t1705519499 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t1705519499, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T1705519499_H
#ifndef ARRENDERMODE_T1271567069_H
#define ARRENDERMODE_T1271567069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARRenderMode
struct  ARRenderMode_t1271567069 
{
public:
	// System.Int32 UnityEngine.XR.ARRenderMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARRenderMode_t1271567069, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRENDERMODE_T1271567069_H
#ifndef COORDINATEFRAME_T4099029566_H
#define COORDINATEFRAME_T4099029566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.CoordinateFrame
struct  CoordinateFrame_t4099029566 
{
public:
	// System.Int32 UnityEngine.XR.Tango.CoordinateFrame::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoordinateFrame_t4099029566, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATEFRAME_T4099029566_H
#ifndef POSESTATUS_T2577078539_H
#define POSESTATUS_T2577078539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.PoseStatus
struct  PoseStatus_t2577078539 
{
public:
	// System.Int32 UnityEngine.XR.Tango.PoseStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PoseStatus_t2577078539, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSESTATUS_T2577078539_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef RENDERTARGETIDENTIFIER_T2079184500_H
#define RENDERTARGETIDENTIFIER_T2079184500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t2079184500 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTARGETIDENTIFIER_T2079184500_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ARBACKGROUNDRENDERER_T852496440_H
#define ARBACKGROUNDRENDERER_T852496440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARBackgroundRenderer
struct  ARBackgroundRenderer_t852496440  : public RuntimeObject
{
public:
	// UnityEngine.Camera UnityEngine.XR.ARBackgroundRenderer::m_Camera
	Camera_t4157153871 * ___m_Camera_0;
	// UnityEngine.Material UnityEngine.XR.ARBackgroundRenderer::m_BackgroundMaterial
	Material_t340375123 * ___m_BackgroundMaterial_1;
	// UnityEngine.Texture UnityEngine.XR.ARBackgroundRenderer::m_BackgroundTexture
	Texture_t3661962703 * ___m_BackgroundTexture_2;
	// UnityEngine.XR.ARRenderMode UnityEngine.XR.ARBackgroundRenderer::m_RenderMode
	int32_t ___m_RenderMode_3;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.ARBackgroundRenderer::m_CommandBuffer
	CommandBuffer_t2206337031 * ___m_CommandBuffer_4;
	// UnityEngine.CameraClearFlags UnityEngine.XR.ARBackgroundRenderer::m_CameraClearFlags
	int32_t ___m_CameraClearFlags_5;
	// System.Action UnityEngine.XR.ARBackgroundRenderer::backgroundRendererChanged
	Action_t1264377477 * ___backgroundRendererChanged_6;

public:
	inline static int32_t get_offset_of_m_Camera_0() { return static_cast<int32_t>(offsetof(ARBackgroundRenderer_t852496440, ___m_Camera_0)); }
	inline Camera_t4157153871 * get_m_Camera_0() const { return ___m_Camera_0; }
	inline Camera_t4157153871 ** get_address_of_m_Camera_0() { return &___m_Camera_0; }
	inline void set_m_Camera_0(Camera_t4157153871 * value)
	{
		___m_Camera_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Camera_0), value);
	}

	inline static int32_t get_offset_of_m_BackgroundMaterial_1() { return static_cast<int32_t>(offsetof(ARBackgroundRenderer_t852496440, ___m_BackgroundMaterial_1)); }
	inline Material_t340375123 * get_m_BackgroundMaterial_1() const { return ___m_BackgroundMaterial_1; }
	inline Material_t340375123 ** get_address_of_m_BackgroundMaterial_1() { return &___m_BackgroundMaterial_1; }
	inline void set_m_BackgroundMaterial_1(Material_t340375123 * value)
	{
		___m_BackgroundMaterial_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_BackgroundMaterial_1), value);
	}

	inline static int32_t get_offset_of_m_BackgroundTexture_2() { return static_cast<int32_t>(offsetof(ARBackgroundRenderer_t852496440, ___m_BackgroundTexture_2)); }
	inline Texture_t3661962703 * get_m_BackgroundTexture_2() const { return ___m_BackgroundTexture_2; }
	inline Texture_t3661962703 ** get_address_of_m_BackgroundTexture_2() { return &___m_BackgroundTexture_2; }
	inline void set_m_BackgroundTexture_2(Texture_t3661962703 * value)
	{
		___m_BackgroundTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_BackgroundTexture_2), value);
	}

	inline static int32_t get_offset_of_m_RenderMode_3() { return static_cast<int32_t>(offsetof(ARBackgroundRenderer_t852496440, ___m_RenderMode_3)); }
	inline int32_t get_m_RenderMode_3() const { return ___m_RenderMode_3; }
	inline int32_t* get_address_of_m_RenderMode_3() { return &___m_RenderMode_3; }
	inline void set_m_RenderMode_3(int32_t value)
	{
		___m_RenderMode_3 = value;
	}

	inline static int32_t get_offset_of_m_CommandBuffer_4() { return static_cast<int32_t>(offsetof(ARBackgroundRenderer_t852496440, ___m_CommandBuffer_4)); }
	inline CommandBuffer_t2206337031 * get_m_CommandBuffer_4() const { return ___m_CommandBuffer_4; }
	inline CommandBuffer_t2206337031 ** get_address_of_m_CommandBuffer_4() { return &___m_CommandBuffer_4; }
	inline void set_m_CommandBuffer_4(CommandBuffer_t2206337031 * value)
	{
		___m_CommandBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_CommandBuffer_4), value);
	}

	inline static int32_t get_offset_of_m_CameraClearFlags_5() { return static_cast<int32_t>(offsetof(ARBackgroundRenderer_t852496440, ___m_CameraClearFlags_5)); }
	inline int32_t get_m_CameraClearFlags_5() const { return ___m_CameraClearFlags_5; }
	inline int32_t* get_address_of_m_CameraClearFlags_5() { return &___m_CameraClearFlags_5; }
	inline void set_m_CameraClearFlags_5(int32_t value)
	{
		___m_CameraClearFlags_5 = value;
	}

	inline static int32_t get_offset_of_backgroundRendererChanged_6() { return static_cast<int32_t>(offsetof(ARBackgroundRenderer_t852496440, ___backgroundRendererChanged_6)); }
	inline Action_t1264377477 * get_backgroundRendererChanged_6() const { return ___backgroundRendererChanged_6; }
	inline Action_t1264377477 ** get_address_of_backgroundRendererChanged_6() { return &___backgroundRendererChanged_6; }
	inline void set_backgroundRendererChanged_6(Action_t1264377477 * value)
	{
		___backgroundRendererChanged_6 = value;
		Il2CppCodeGenWriteBarrier((&___backgroundRendererChanged_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARBACKGROUNDRENDERER_T852496440_H
#ifndef COORDINATEFRAMEPAIR_T1560405616_H
#define COORDINATEFRAMEPAIR_T1560405616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.CoordinateFramePair
struct  CoordinateFramePair_t1560405616 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.CoordinateFramePair::baseFrame
					int32_t ___baseFrame_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___baseFrame_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___targetFrame_1_OffsetPadding[4];
					// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.CoordinateFramePair::targetFrame
					int32_t ___targetFrame_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___targetFrame_1_OffsetPadding_forAlignmentOnly[4];
					int32_t ___targetFrame_1_forAlignmentOnly;
				};
			};
		};
		uint8_t CoordinateFramePair_t1560405616__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseFrame_0() { return static_cast<int32_t>(offsetof(CoordinateFramePair_t1560405616, ___baseFrame_0)); }
	inline int32_t get_baseFrame_0() const { return ___baseFrame_0; }
	inline int32_t* get_address_of_baseFrame_0() { return &___baseFrame_0; }
	inline void set_baseFrame_0(int32_t value)
	{
		___baseFrame_0 = value;
	}

	inline static int32_t get_offset_of_targetFrame_1() { return static_cast<int32_t>(offsetof(CoordinateFramePair_t1560405616, ___targetFrame_1)); }
	inline int32_t get_targetFrame_1() const { return ___targetFrame_1; }
	inline int32_t* get_address_of_targetFrame_1() { return &___targetFrame_1; }
	inline void set_targetFrame_1(int32_t value)
	{
		___targetFrame_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATEFRAMEPAIR_T1560405616_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T4271497161_H
#define ACTION_1_T4271497161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.Tango.CoordinateFrame>
struct  Action_1_t4271497161  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T4271497161_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef POSEDATA_T3034736766_H
#define POSEDATA_T3034736766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.PoseData
struct  PoseData_t3034736766 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt32 UnityEngine.XR.Tango.PoseData::version
					uint32_t ___version_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint32_t ___version_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___timestamp_1_OffsetPadding[8];
					// System.Double UnityEngine.XR.Tango.PoseData::timestamp
					double ___timestamp_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___timestamp_1_OffsetPadding_forAlignmentOnly[8];
					double ___timestamp_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_x_2_OffsetPadding[16];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_x
					double ___orientation_x_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_x_2_OffsetPadding_forAlignmentOnly[16];
					double ___orientation_x_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_y_3_OffsetPadding[24];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_y
					double ___orientation_y_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_y_3_OffsetPadding_forAlignmentOnly[24];
					double ___orientation_y_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_z_4_OffsetPadding[32];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_z
					double ___orientation_z_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_z_4_OffsetPadding_forAlignmentOnly[32];
					double ___orientation_z_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_w_5_OffsetPadding[40];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_w
					double ___orientation_w_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_w_5_OffsetPadding_forAlignmentOnly[40];
					double ___orientation_w_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_x_6_OffsetPadding[48];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_x
					double ___translation_x_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_x_6_OffsetPadding_forAlignmentOnly[48];
					double ___translation_x_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_y_7_OffsetPadding[56];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_y
					double ___translation_y_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_y_7_OffsetPadding_forAlignmentOnly[56];
					double ___translation_y_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_z_8_OffsetPadding[64];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_z
					double ___translation_z_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_z_8_OffsetPadding_forAlignmentOnly[64];
					double ___translation_z_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___statusCode_9_OffsetPadding[72];
					// UnityEngine.XR.Tango.PoseStatus UnityEngine.XR.Tango.PoseData::statusCode
					int32_t ___statusCode_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___statusCode_9_OffsetPadding_forAlignmentOnly[72];
					int32_t ___statusCode_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frame_10_OffsetPadding[76];
					// UnityEngine.XR.Tango.CoordinateFramePair UnityEngine.XR.Tango.PoseData::frame
					CoordinateFramePair_t1560405616  ___frame_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frame_10_OffsetPadding_forAlignmentOnly[76];
					CoordinateFramePair_t1560405616  ___frame_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___confidence_11_OffsetPadding[84];
					// System.UInt32 UnityEngine.XR.Tango.PoseData::confidence
					uint32_t ___confidence_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___confidence_11_OffsetPadding_forAlignmentOnly[84];
					uint32_t ___confidence_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___accuracy_12_OffsetPadding[88];
					// System.Single UnityEngine.XR.Tango.PoseData::accuracy
					float ___accuracy_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___accuracy_12_OffsetPadding_forAlignmentOnly[88];
					float ___accuracy_12_forAlignmentOnly;
				};
			};
		};
		uint8_t PoseData_t3034736766__padding[92];
	};

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___version_0)); }
	inline uint32_t get_version_0() const { return ___version_0; }
	inline uint32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___timestamp_1)); }
	inline double get_timestamp_1() const { return ___timestamp_1; }
	inline double* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(double value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_orientation_x_2() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_x_2)); }
	inline double get_orientation_x_2() const { return ___orientation_x_2; }
	inline double* get_address_of_orientation_x_2() { return &___orientation_x_2; }
	inline void set_orientation_x_2(double value)
	{
		___orientation_x_2 = value;
	}

	inline static int32_t get_offset_of_orientation_y_3() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_y_3)); }
	inline double get_orientation_y_3() const { return ___orientation_y_3; }
	inline double* get_address_of_orientation_y_3() { return &___orientation_y_3; }
	inline void set_orientation_y_3(double value)
	{
		___orientation_y_3 = value;
	}

	inline static int32_t get_offset_of_orientation_z_4() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_z_4)); }
	inline double get_orientation_z_4() const { return ___orientation_z_4; }
	inline double* get_address_of_orientation_z_4() { return &___orientation_z_4; }
	inline void set_orientation_z_4(double value)
	{
		___orientation_z_4 = value;
	}

	inline static int32_t get_offset_of_orientation_w_5() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_w_5)); }
	inline double get_orientation_w_5() const { return ___orientation_w_5; }
	inline double* get_address_of_orientation_w_5() { return &___orientation_w_5; }
	inline void set_orientation_w_5(double value)
	{
		___orientation_w_5 = value;
	}

	inline static int32_t get_offset_of_translation_x_6() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_x_6)); }
	inline double get_translation_x_6() const { return ___translation_x_6; }
	inline double* get_address_of_translation_x_6() { return &___translation_x_6; }
	inline void set_translation_x_6(double value)
	{
		___translation_x_6 = value;
	}

	inline static int32_t get_offset_of_translation_y_7() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_y_7)); }
	inline double get_translation_y_7() const { return ___translation_y_7; }
	inline double* get_address_of_translation_y_7() { return &___translation_y_7; }
	inline void set_translation_y_7(double value)
	{
		___translation_y_7 = value;
	}

	inline static int32_t get_offset_of_translation_z_8() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_z_8)); }
	inline double get_translation_z_8() const { return ___translation_z_8; }
	inline double* get_address_of_translation_z_8() { return &___translation_z_8; }
	inline void set_translation_z_8(double value)
	{
		___translation_z_8 = value;
	}

	inline static int32_t get_offset_of_statusCode_9() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___statusCode_9)); }
	inline int32_t get_statusCode_9() const { return ___statusCode_9; }
	inline int32_t* get_address_of_statusCode_9() { return &___statusCode_9; }
	inline void set_statusCode_9(int32_t value)
	{
		___statusCode_9 = value;
	}

	inline static int32_t get_offset_of_frame_10() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___frame_10)); }
	inline CoordinateFramePair_t1560405616  get_frame_10() const { return ___frame_10; }
	inline CoordinateFramePair_t1560405616 * get_address_of_frame_10() { return &___frame_10; }
	inline void set_frame_10(CoordinateFramePair_t1560405616  value)
	{
		___frame_10 = value;
	}

	inline static int32_t get_offset_of_confidence_11() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___confidence_11)); }
	inline uint32_t get_confidence_11() const { return ___confidence_11; }
	inline uint32_t* get_address_of_confidence_11() { return &___confidence_11; }
	inline void set_confidence_11(uint32_t value)
	{
		___confidence_11 = value;
	}

	inline static int32_t get_offset_of_accuracy_12() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___accuracy_12)); }
	inline float get_accuracy_12() const { return ___accuracy_12; }
	inline float* get_address_of_accuracy_12() { return &___accuracy_12; }
	inline void set_accuracy_12(float value)
	{
		___accuracy_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATA_T3034736766_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H



// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARBackgroundRenderer::RemoveCommandBuffersIfNeeded()
extern "C" IL2CPP_METHOD_ATTR bool ARBackgroundRenderer_RemoveCommandBuffersIfNeeded_m3367156410 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARBackgroundRenderer::ReapplyCommandBuffersIfNeeded()
extern "C" IL2CPP_METHOD_ATTR bool ARBackgroundRenderer_ReapplyCommandBuffersIfNeeded_m3305909150 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARBackgroundRenderer::DisableARBackgroundRendering()
extern "C" IL2CPP_METHOD_ATTR void ARBackgroundRenderer_DisableARBackgroundRendering_m1735733166 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARBackgroundRenderer::EnableARBackgroundRendering()
extern "C" IL2CPP_METHOD_ATTR bool ARBackgroundRenderer_EnableARBackgroundRendering_m1104614478 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_clearFlags_m992534691 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m2207032996 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m3028411456 (CommandBuffer_t2206337031 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Material_HasProperty_m2704238996 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * Material_GetTexture_m3545614349 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
extern "C" IL2CPP_METHOD_ATTR RenderTargetIdentifier_t2079184500  RenderTargetIdentifier_op_Implicit_m2644497587 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m1578015716 (CommandBuffer_t2206337031 * __this, Texture_t3661962703 * p0, RenderTargetIdentifier_t2079184500  p1, Material_t340375123 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void Camera_AddCommandBuffer_m1363239337 (Camera_t4157153871 * __this, int32_t p0, CommandBuffer_t2206337031 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C" IL2CPP_METHOD_ATTR void Camera_RemoveCommandBuffer_m773243127 (Camera_t4157153871 * __this, int32_t p0, CommandBuffer_t2206337031 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  PoseData_get_rotation_m1034883957 (PoseData_t3034736766 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PoseData_get_position_m1980100049 (PoseData_t3034736766 * __this, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m3354122719 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(System.Double,UnityEngine.ScreenOrientation,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.PoseData&)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306 (RuntimeObject * __this /* static, unused */, double ___time0, int32_t ___screenOrientation1, int32_t ___baseFrame2, int32_t ___targetFrame3, PoseData_t3034736766 * ___pose4, const RuntimeMethod* method);
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
// System.Void UnityEngine.XR.ARBackgroundRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARBackgroundRenderer__ctor_m2878598361 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Camera_0((Camera_t4157153871 *)NULL);
		__this->set_m_BackgroundMaterial_1((Material_t340375123 *)NULL);
		__this->set_m_BackgroundTexture_2((Texture_t3661962703 *)NULL);
		__this->set_m_RenderMode_3(0);
		__this->set_m_CommandBuffer_4((CommandBuffer_t2206337031 *)NULL);
		__this->set_m_CameraClearFlags_5(1);
		__this->set_backgroundRendererChanged_6((Action_t1264377477 *)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARBackgroundRenderer::set_backgroundMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void ARBackgroundRenderer_set_backgroundMaterial_m3540290638 (ARBackgroundRenderer_t852496440 * __this, Material_t340375123 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARBackgroundRenderer_set_backgroundMaterial_m3540290638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = __this->get_m_BackgroundMaterial_1();
		Material_t340375123 * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0042;
	}

IL_0017:
	{
		ARBackgroundRenderer_RemoveCommandBuffersIfNeeded_m3367156410(__this, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = ___value0;
		__this->set_m_BackgroundMaterial_1(L_3);
		Action_t1264377477 * L_4 = __this->get_backgroundRendererChanged_6();
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Action_t1264377477 * L_5 = __this->get_backgroundRendererChanged_6();
		NullCheck(L_5);
		Action_Invoke_m937035532(L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		ARBackgroundRenderer_ReapplyCommandBuffersIfNeeded_m3305909150(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARBackgroundRenderer::set_camera(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void ARBackgroundRenderer_set_camera_m2911511959 (ARBackgroundRenderer_t852496440 * __this, Camera_t4157153871 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARBackgroundRenderer_set_camera_m2911511959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = __this->get_m_Camera_0();
		Camera_t4157153871 * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0042;
	}

IL_0017:
	{
		ARBackgroundRenderer_RemoveCommandBuffersIfNeeded_m3367156410(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_3 = ___value0;
		__this->set_m_Camera_0(L_3);
		Action_t1264377477 * L_4 = __this->get_backgroundRendererChanged_6();
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Action_t1264377477 * L_5 = __this->get_backgroundRendererChanged_6();
		NullCheck(L_5);
		Action_Invoke_m937035532(L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		ARBackgroundRenderer_ReapplyCommandBuffersIfNeeded_m3305909150(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARBackgroundRenderer::set_mode(UnityEngine.XR.ARRenderMode)
extern "C" IL2CPP_METHOD_ATTR void ARBackgroundRenderer_set_mode_m3553019916 (ARBackgroundRenderer_t852496440 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARBackgroundRenderer_set_mode_m3553019916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_m_RenderMode_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_006a;
	}

IL_0012:
	{
		int32_t L_2 = ___value0;
		__this->set_m_RenderMode_3(L_2);
		int32_t L_3 = __this->get_m_RenderMode_3();
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0049;
	}

IL_0032:
	{
		ARBackgroundRenderer_DisableARBackgroundRendering_m1735733166(__this, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_003d:
	{
		ARBackgroundRenderer_EnableARBackgroundRendering_m1104614478(__this, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_0049:
	{
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_6, _stringLiteral819432915, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ARBackgroundRenderer_set_mode_m3553019916_RuntimeMethod_var);
	}

IL_0054:
	{
		Action_t1264377477 * L_7 = __this->get_backgroundRendererChanged_6();
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		Action_t1264377477 * L_8 = __this->get_backgroundRendererChanged_6();
		NullCheck(L_8);
		Action_Invoke_m937035532(L_8, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARBackgroundRenderer::EnableARBackgroundRendering()
extern "C" IL2CPP_METHOD_ATTR bool ARBackgroundRenderer_EnableARBackgroundRendering_m1104614478 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARBackgroundRenderer_EnableARBackgroundRendering_m1104614478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Camera_t4157153871 * V_1 = NULL;
	Texture_t3661962703 * V_2 = NULL;
	{
		Material_t340375123 * L_0 = __this->get_m_BackgroundMaterial_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00e2;
	}

IL_0019:
	{
		Camera_t4157153871 * L_2 = __this->get_m_Camera_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Camera_t4157153871 * L_4 = __this->get_m_Camera_0();
		V_1 = L_4;
		goto IL_003c;
	}

IL_0036:
	{
		Camera_t4157153871 * L_5 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_003c:
	{
		Camera_t4157153871 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00e2;
	}

IL_004f:
	{
		Camera_t4157153871 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = Camera_get_clearFlags_m992534691(L_8, /*hidden argument*/NULL);
		__this->set_m_CameraClearFlags_5(L_9);
		Camera_t4157153871 * L_10 = V_1;
		NullCheck(L_10);
		Camera_set_clearFlags_m2207032996(L_10, 3, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_11 = (CommandBuffer_t2206337031 *)il2cpp_codegen_object_new(CommandBuffer_t2206337031_il2cpp_TypeInfo_var);
		CommandBuffer__ctor_m3028411456(L_11, /*hidden argument*/NULL);
		__this->set_m_CommandBuffer_4(L_11);
		Texture_t3661962703 * L_12 = __this->get_m_BackgroundTexture_2();
		V_2 = L_12;
		Texture_t3661962703 * L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a8;
		}
	}
	{
		Material_t340375123 * L_15 = __this->get_m_BackgroundMaterial_1();
		NullCheck(L_15);
		bool L_16 = Material_HasProperty_m2704238996(L_15, _stringLiteral3184621405, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a7;
		}
	}
	{
		Material_t340375123 * L_17 = __this->get_m_BackgroundMaterial_1();
		NullCheck(L_17);
		Texture_t3661962703 * L_18 = Material_GetTexture_m3545614349(L_17, _stringLiteral3184621405, /*hidden argument*/NULL);
		V_2 = L_18;
	}

IL_00a7:
	{
	}

IL_00a8:
	{
		CommandBuffer_t2206337031 * L_19 = __this->get_m_CommandBuffer_4();
		Texture_t3661962703 * L_20 = V_2;
		RenderTargetIdentifier_t2079184500  L_21 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		Material_t340375123 * L_22 = __this->get_m_BackgroundMaterial_1();
		NullCheck(L_19);
		CommandBuffer_Blit_m1578015716(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		Camera_t4157153871 * L_23 = V_1;
		CommandBuffer_t2206337031 * L_24 = __this->get_m_CommandBuffer_4();
		NullCheck(L_23);
		Camera_AddCommandBuffer_m1363239337(L_23, ((int32_t)10), L_24, /*hidden argument*/NULL);
		Camera_t4157153871 * L_25 = V_1;
		CommandBuffer_t2206337031 * L_26 = __this->get_m_CommandBuffer_4();
		NullCheck(L_25);
		Camera_AddCommandBuffer_m1363239337(L_25, 4, L_26, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_00e2;
	}

IL_00e2:
	{
		bool L_27 = V_0;
		return L_27;
	}
}
// System.Void UnityEngine.XR.ARBackgroundRenderer::DisableARBackgroundRendering()
extern "C" IL2CPP_METHOD_ATTR void ARBackgroundRenderer_DisableARBackgroundRendering_m1735733166 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARBackgroundRenderer_DisableARBackgroundRendering_m1735733166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	Camera_t4157153871 * G_B4_0 = NULL;
	Camera_t4157153871 * G_B3_0 = NULL;
	{
		CommandBuffer_t2206337031 * L_0 = __this->get_m_CommandBuffer_4();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_005c;
	}

IL_0011:
	{
		Camera_t4157153871 * L_1 = __this->get_m_Camera_0();
		Camera_t4157153871 * L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0023;
		}
	}
	{
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = L_3;
	}

IL_0023:
	{
		V_0 = G_B4_0;
		Camera_t4157153871 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_005c;
	}

IL_0035:
	{
		Camera_t4157153871 * L_6 = V_0;
		int32_t L_7 = __this->get_m_CameraClearFlags_5();
		NullCheck(L_6);
		Camera_set_clearFlags_m2207032996(L_6, L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_8 = V_0;
		CommandBuffer_t2206337031 * L_9 = __this->get_m_CommandBuffer_4();
		NullCheck(L_8);
		Camera_RemoveCommandBuffer_m773243127(L_8, ((int32_t)10), L_9, /*hidden argument*/NULL);
		Camera_t4157153871 * L_10 = V_0;
		CommandBuffer_t2206337031 * L_11 = __this->get_m_CommandBuffer_4();
		NullCheck(L_10);
		Camera_RemoveCommandBuffer_m773243127(L_10, 4, L_11, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARBackgroundRenderer::ReapplyCommandBuffersIfNeeded()
extern "C" IL2CPP_METHOD_ATTR bool ARBackgroundRenderer_ReapplyCommandBuffersIfNeeded_m3305909150 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_RenderMode_3();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0022;
	}

IL_0014:
	{
		ARBackgroundRenderer_EnableARBackgroundRendering_m1104614478(__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARBackgroundRenderer::RemoveCommandBuffersIfNeeded()
extern "C" IL2CPP_METHOD_ATTR bool ARBackgroundRenderer_RemoveCommandBuffersIfNeeded_m3367156410 (ARBackgroundRenderer_t852496440 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_RenderMode_3();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0021;
	}

IL_0014:
	{
		ARBackgroundRenderer_DisableARBackgroundRendering_m1735733166(__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_1 = V_0;
		return L_1;
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
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  PoseData_get_rotation_m1034883957 (PoseData_t3034736766 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		double L_0 = __this->get_orientation_x_2();
		double L_1 = __this->get_orientation_y_3();
		double L_2 = __this->get_orientation_z_4();
		double L_3 = __this->get_orientation_w_5();
		Quaternion_t2301928331  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Quaternion__ctor_m435141806((&L_4), (((float)((float)L_0))), (((float)((float)L_1))), (((float)((float)L_2))), (((float)((float)L_3))), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		Quaternion_t2301928331  L_5 = V_0;
		return L_5;
	}
}
extern "C"  Quaternion_t2301928331  PoseData_get_rotation_m1034883957_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PoseData_t3034736766 * _thisAdjusted = reinterpret_cast<PoseData_t3034736766 *>(__this + 1);
	return PoseData_get_rotation_m1034883957(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PoseData_get_position_m1980100049 (PoseData_t3034736766 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		double L_0 = __this->get_translation_x_6();
		double L_1 = __this->get_translation_y_7();
		double L_2 = __this->get_translation_z_8();
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (((float)((float)L_0))), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t3722313464  L_4 = V_0;
		return L_4;
	}
}
extern "C"  Vector3_t3722313464  PoseData_get_position_m1980100049_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PoseData_t3034736766 * _thisAdjusted = reinterpret_cast<PoseData_t3034736766 *>(__this + 1);
	return PoseData_get_position_m1980100049(_thisAdjusted, method);
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
// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.TangoDevice::get_baseCoordinateFrame()
extern "C" IL2CPP_METHOD_ATTR int32_t TangoDevice_get_baseCoordinateFrame_m1024580885 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*TangoDevice_get_baseCoordinateFrame_m1024580885_ftn) ();
	static TangoDevice_get_baseCoordinateFrame_m1024580885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TangoDevice_get_baseCoordinateFrame_m1024580885_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.Tango.TangoDevice::get_baseCoordinateFrame()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.Tango.TangoDevice::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TangoDevice__cctor_m585081299 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TangoDevice__cctor_m585081299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TangoDevice_t2970124841_StaticFields*)il2cpp_codegen_static_fields_for(TangoDevice_t2970124841_il2cpp_TypeInfo_var))->set_m_BackgroundRenderer_0((ARBackgroundRenderer_t852496440 *)NULL);
		((TangoDevice_t2970124841_StaticFields*)il2cpp_codegen_static_fields_for(TangoDevice_t2970124841_il2cpp_TypeInfo_var))->set_m_AreaDescriptionUUID_1(_stringLiteral757602046);
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
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(System.Double,UnityEngine.ScreenOrientation,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.PoseData&)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306 (RuntimeObject * __this /* static, unused */, double ___time0, int32_t ___screenOrientation1, int32_t ___baseFrame2, int32_t ___targetFrame3, PoseData_t3034736766 * ___pose4, const RuntimeMethod* method)
{
	typedef bool (*TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_ftn) (double, int32_t, int32_t, int32_t, PoseData_t3034736766 *);
	static TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(System.Double,UnityEngine.ScreenOrientation,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.PoseData&)");
	bool retVal = _il2cpp_icall_func(___time0, ___screenOrientation1, ___baseFrame2, ___targetFrame3, ___pose4);
	return retVal;
}
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_TryGetPoseAtTime_m3134437062 (RuntimeObject * __this /* static, unused */, PoseData_t3034736766 * ___pose0, int32_t ___baseFrame1, int32_t ___targetFrame2, double ___time3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TangoInputTracking_TryGetPoseAtTime_m3134437062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		double L_0 = ___time3;
		int32_t L_1 = Screen_get_orientation_m3354122719(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ___baseFrame1;
		int32_t L_3 = ___targetFrame2;
		PoseData_t3034736766 * L_4 = ___pose0;
		IL2CPP_RUNTIME_CLASS_INIT(TangoInputTracking_t4005594645_il2cpp_TypeInfo_var);
		bool L_5 = TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (PoseData_t3034736766 *)L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.XR.Tango.TangoInputTracking::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TangoInputTracking__cctor_m2382021019 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TangoInputTracking__cctor_m2382021019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TangoInputTracking_t4005594645_StaticFields*)il2cpp_codegen_static_fields_for(TangoInputTracking_t4005594645_il2cpp_TypeInfo_var))->set_trackingAcquired_0((Action_1_t4271497161 *)NULL);
		((TangoInputTracking_t4005594645_StaticFields*)il2cpp_codegen_static_fields_for(TangoInputTracking_t4005594645_il2cpp_TypeInfo_var))->set_trackingLost_1((Action_1_t4271497161 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
