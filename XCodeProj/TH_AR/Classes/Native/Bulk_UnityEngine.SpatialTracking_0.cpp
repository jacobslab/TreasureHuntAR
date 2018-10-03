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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t593865784;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_t2890249332;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t929709876;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Experimental.XR.Interaction.BaseArmModel
struct BaseArmModel_t419611294;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t1312448601;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t1867984025;
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose[]
struct TrackedPoseU5BU5D_t791479415;
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData[]
struct PoseDataU5BU5D_t2795636683;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t1311914507;

extern RuntimeClass* InputTracking_t2240286067_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2890249332_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t593865784_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t929709876_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PoseDataSource_t1389501421_il2cpp_TypeInfo_var;
extern RuntimeClass* Pose_t545244865_il2cpp_TypeInfo_var;
extern RuntimeClass* TangoDevice_t2970124841_il2cpp_TypeInfo_var;
extern RuntimeClass* TangoInputTracking_t4005594645_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral134673545;
extern String_t* _stringLiteral1534079751;
extern String_t* _stringLiteral2478019389;
extern String_t* _stringLiteral2646604272;
extern String_t* _stringLiteral3242476622;
extern String_t* _stringLiteral3476230729;
extern String_t* _stringLiteral431746829;
extern String_t* _stringLiteral571192390;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2105317552_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m307146964_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m216776860_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1332165401_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2861735381_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m963389022_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2662576365_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m321362438_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m871525267_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3341200234_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3628814819_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1636217762_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m640079513_RuntimeMethod_var;
extern const uint32_t BaseArmModel_TryGetTrackingDataFromSource_m2883939478_MetadataUsageId;
extern const uint32_t PoseDataSource_TryGetDataFromSource_m720982218_MetadataUsageId;
extern const uint32_t PoseDataSource_TryGetNodePoseData_m3333983646_MetadataUsageId;
extern const uint32_t PoseDataSource_TryGetTangoPose_m675410062_MetadataUsageId;
extern const uint32_t PoseDataSource__cctor_m1981184558_MetadataUsageId;
extern const uint32_t TrackedPoseDriverDataDescription__cctor_m2513534467_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_Awake_m357232108_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_HasStereoCamera_m3266718412_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_OnDisable_m3908821101_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_OnEnable_m564992003_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_PerformUpdate_m349344482_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_SetPoseSource_m2091764154_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_TryGetPoseData_m1413985800_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745551_H
#define U3CMODULEU3E_T692745551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745551 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745551_H
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
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef LIST_1_T593865784_H
#define LIST_1_T593865784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct  List_1_t593865784  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackedPoseU5BU5D_t791479415* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t593865784, ____items_1)); }
	inline TrackedPoseU5BU5D_t791479415* get__items_1() const { return ____items_1; }
	inline TrackedPoseU5BU5D_t791479415** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackedPoseU5BU5D_t791479415* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t593865784, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t593865784, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t593865784_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TrackedPoseU5BU5D_t791479415* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t593865784_StaticFields, ___EmptyArray_4)); }
	inline TrackedPoseU5BU5D_t791479415* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TrackedPoseU5BU5D_t791479415** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TrackedPoseU5BU5D_t791479415* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T593865784_H
#ifndef LIST_1_T2890249332_H
#define LIST_1_T2890249332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct  List_1_t2890249332  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoseDataU5BU5D_t2795636683* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2890249332, ____items_1)); }
	inline PoseDataU5BU5D_t2795636683* get__items_1() const { return ____items_1; }
	inline PoseDataU5BU5D_t2795636683** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoseDataU5BU5D_t2795636683* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2890249332, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2890249332, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2890249332_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PoseDataU5BU5D_t2795636683* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2890249332_StaticFields, ___EmptyArray_4)); }
	inline PoseDataU5BU5D_t2795636683* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PoseDataU5BU5D_t2795636683** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PoseDataU5BU5D_t2795636683* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2890249332_H
#ifndef LIST_1_T929709876_H
#define LIST_1_T929709876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct  List_1_t929709876  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_t1311914507* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t929709876, ____items_1)); }
	inline XRNodeStateU5BU5D_t1311914507* get__items_1() const { return ____items_1; }
	inline XRNodeStateU5BU5D_t1311914507** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRNodeStateU5BU5D_t1311914507* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t929709876, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t929709876, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t929709876_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	XRNodeStateU5BU5D_t1311914507* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t929709876_StaticFields, ___EmptyArray_4)); }
	inline XRNodeStateU5BU5D_t1311914507* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline XRNodeStateU5BU5D_t1311914507** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(XRNodeStateU5BU5D_t1311914507* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T929709876_H
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
#ifndef POSEDATASOURCE_T1389501421_H
#define POSEDATASOURCE_T1389501421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.PoseDataSource
struct  PoseDataSource_t1389501421  : public RuntimeObject
{
public:

public:
};

struct PoseDataSource_t1389501421_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.SpatialTracking.PoseDataSource::nodeStates
	List_1_t929709876 * ___nodeStates_0;

public:
	inline static int32_t get_offset_of_nodeStates_0() { return static_cast<int32_t>(offsetof(PoseDataSource_t1389501421_StaticFields, ___nodeStates_0)); }
	inline List_1_t929709876 * get_nodeStates_0() const { return ___nodeStates_0; }
	inline List_1_t929709876 ** get_address_of_nodeStates_0() { return &___nodeStates_0; }
	inline void set_nodeStates_0(List_1_t929709876 * value)
	{
		___nodeStates_0 = value;
		Il2CppCodeGenWriteBarrier((&___nodeStates_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATASOURCE_T1389501421_H
#ifndef TRACKEDPOSEDRIVERDATADESCRIPTION_T1675062289_H
#define TRACKEDPOSEDRIVERDATADESCRIPTION_T1675062289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct  TrackedPoseDriverDataDescription_t1675062289  : public RuntimeObject
{
public:

public:
};

struct TrackedPoseDriverDataDescription_t1675062289_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::DeviceData
	List_1_t2890249332 * ___DeviceData_0;

public:
	inline static int32_t get_offset_of_DeviceData_0() { return static_cast<int32_t>(offsetof(TrackedPoseDriverDataDescription_t1675062289_StaticFields, ___DeviceData_0)); }
	inline List_1_t2890249332 * get_DeviceData_0() const { return ___DeviceData_0; }
	inline List_1_t2890249332 ** get_address_of_DeviceData_0() { return &___DeviceData_0; }
	inline void set_DeviceData_0(List_1_t2890249332 * value)
	{
		___DeviceData_0 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSEDRIVERDATADESCRIPTION_T1675062289_H
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
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef POSEDATA_T1418174590_H
#define POSEDATA_T1418174590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct  PoseData_t1418174590 
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_t3319525431 * ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_t593865784 * ___Poses_1;

public:
	inline static int32_t get_offset_of_PoseNames_0() { return static_cast<int32_t>(offsetof(PoseData_t1418174590, ___PoseNames_0)); }
	inline List_1_t3319525431 * get_PoseNames_0() const { return ___PoseNames_0; }
	inline List_1_t3319525431 ** get_address_of_PoseNames_0() { return &___PoseNames_0; }
	inline void set_PoseNames_0(List_1_t3319525431 * value)
	{
		___PoseNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___PoseNames_0), value);
	}

	inline static int32_t get_offset_of_Poses_1() { return static_cast<int32_t>(offsetof(PoseData_t1418174590, ___Poses_1)); }
	inline List_1_t593865784 * get_Poses_1() const { return ___Poses_1; }
	inline List_1_t593865784 ** get_address_of_Poses_1() { return &___Poses_1; }
	inline void set_Poses_1(List_1_t593865784 * value)
	{
		___Poses_1 = value;
		Il2CppCodeGenWriteBarrier((&___Poses_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t1418174590_marshaled_pinvoke
{
	List_1_t3319525431 * ___PoseNames_0;
	List_1_t593865784 * ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t1418174590_marshaled_com
{
	List_1_t3319525431 * ___PoseNames_0;
	List_1_t593865784 * ___Poses_1;
};
#endif // POSEDATA_T1418174590_H
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
#ifndef POSE_T545244865_H
#define POSE_T545244865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t545244865 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t2301928331  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___rotation_1)); }
	inline Quaternion_t2301928331  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t2301928331  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t545244865_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t545244865  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t545244865_StaticFields, ___k_Identity_2)); }
	inline Pose_t545244865  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t545244865 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t545244865  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T545244865_H
#ifndef DEVICETYPE_T207466640_H
#define DEVICETYPE_T207466640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType
struct  DeviceType_t207466640 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeviceType_t207466640, ___value___1)); }
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
#endif // DEVICETYPE_T207466640_H
#ifndef TRACKEDPOSE_T3416758338_H
#define TRACKEDPOSE_T3416758338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose
struct  TrackedPose_t3416758338 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrackedPose_t3416758338, ___value___1)); }
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
#endif // TRACKEDPOSE_T3416758338_H
#ifndef TRACKINGTYPE_T3423517968_H
#define TRACKINGTYPE_T3423517968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType
struct  TrackingType_t3423517968 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrackingType_t3423517968, ___value___1)); }
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
#endif // TRACKINGTYPE_T3423517968_H
#ifndef UPDATETYPE_T282890708_H
#define UPDATETYPE_T282890708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType
struct  UpdateType_t282890708 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpdateType_t282890708, ___value___1)); }
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
#endif // UPDATETYPE_T282890708_H
#ifndef AVAILABLETRACKINGDATA_T3752197997_H
#define AVAILABLETRACKINGDATA_T3752197997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_t3752197997 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AvailableTrackingData_t3752197997, ___value___1)); }
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
#endif // AVAILABLETRACKINGDATA_T3752197997_H
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
#ifndef XRNODE_T3929440994_H
#define XRNODE_T3929440994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNode
struct  XRNode_t3929440994 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XRNode_t3929440994, ___value___1)); }
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
#endif // XRNODE_T3929440994_H
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
#ifndef XRNODESTATE_T3752602430_H
#define XRNODESTATE_T3752602430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNodeState
struct  XRNodeState_t3752602430 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t3722313464  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t2301928331  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t3722313464  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t3722313464  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t3722313464  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t3722313464  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Position_2)); }
	inline Vector3_t3722313464  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t3722313464 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t3722313464  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Rotation_3)); }
	inline Quaternion_t2301928331  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t2301928331 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t2301928331  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Velocity_4)); }
	inline Vector3_t3722313464  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t3722313464  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AngularVelocity_5)); }
	inline Vector3_t3722313464  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t3722313464 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t3722313464  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Acceleration_6)); }
	inline Vector3_t3722313464  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t3722313464 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t3722313464  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AngularAcceleration_7)); }
	inline Vector3_t3722313464  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t3722313464 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t3722313464  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODESTATE_T3752602430_H
#ifndef ENUMERATOR_T2818953753_H
#define ENUMERATOR_T2818953753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>
struct  Enumerator_t2818953753 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t929709876 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRNodeState_t3752602430  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2818953753, ___l_0)); }
	inline List_1_t929709876 * get_l_0() const { return ___l_0; }
	inline List_1_t929709876 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t929709876 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2818953753, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2818953753, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2818953753, ___current_3)); }
	inline XRNodeState_t3752602430  get_current_3() const { return ___current_3; }
	inline XRNodeState_t3752602430 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRNodeState_t3752602430  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2818953753_H
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
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
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
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BASEPOSEPROVIDER_T1312448601_H
#define BASEPOSEPROVIDER_T1312448601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct  BasePoseProvider_t1312448601  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEPOSEPROVIDER_T1312448601_H
#ifndef TRACKEDPOSEDRIVER_T1867984025_H
#define TRACKEDPOSEDRIVER_T1867984025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct  TrackedPoseDriver_t1867984025  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t1312448601 * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t545244865  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t1312448601 * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t1312448601 ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t1312448601 * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_PoseProviderComponent_6), value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t1867984025, ___m_OriginPose_10)); }
	inline Pose_t545244865  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t545244865 * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t545244865  value)
	{
		___m_OriginPose_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSEDRIVER_T1867984025_H
#ifndef BASEARMMODEL_T419611294_H
#define BASEARMMODEL_T419611294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Interaction.BaseArmModel
struct  BaseArmModel_t419611294  : public BasePoseProvider_t1312448601
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.Experimental.XR.Interaction.BaseArmModel::m_HeadPoseSource
	int32_t ___m_HeadPoseSource_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.Experimental.XR.Interaction.BaseArmModel::m_PoseSource
	int32_t ___m_PoseSource_5;

public:
	inline static int32_t get_offset_of_m_HeadPoseSource_4() { return static_cast<int32_t>(offsetof(BaseArmModel_t419611294, ___m_HeadPoseSource_4)); }
	inline int32_t get_m_HeadPoseSource_4() const { return ___m_HeadPoseSource_4; }
	inline int32_t* get_address_of_m_HeadPoseSource_4() { return &___m_HeadPoseSource_4; }
	inline void set_m_HeadPoseSource_4(int32_t value)
	{
		___m_HeadPoseSource_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(BaseArmModel_t419611294, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEARMMODEL_T419611294_H


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2818953753  List_1_GetEnumerator_m963389022_gshared (List_1_t929709876 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
extern "C" IL2CPP_METHOD_ATTR XRNodeState_t3752602430  Enumerator_get_Current_m216776860_gshared (Enumerator_t2818953753 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m307146964_gshared (Enumerator_t2818953753 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2105317552_gshared (Enumerator_t2818953753 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m321362438_gshared (List_1_t929709876 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3628814819_gshared (List_1_t2890249332 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PoseData_t1418174590  List_1_get_Item_m640079513_gshared (List_1_t2890249332 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m1636217762_gshared (List_1_t593865784 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3341200234_gshared (List_1_t593865784 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m871525267_gshared (List_1_t2890249332 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2662576365_gshared (List_1_t593865784 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1332165401_gshared (List_1_t593865784 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2861735381_gshared (List_1_t2890249332 * __this, PoseData_t1418174590  p0, const RuntimeMethod* method);

// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_m1410511218 (BasePoseProvider_t1312448601 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetDataFromSource_m720982218 (RuntimeObject * __this /* static, unused */, int32_t ___poseSource0, Pose_t545244865 * ___resultPose1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
extern "C" IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_m713678237 (RuntimeObject * __this /* static, unused */, List_1_t929709876 * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
inline Enumerator_t2818953753  List_1_GetEnumerator_m963389022 (List_1_t929709876 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2818953753  (*) (List_1_t929709876 *, const RuntimeMethod*))List_1_GetEnumerator_m963389022_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
inline XRNodeState_t3752602430  Enumerator_get_Current_m216776860 (Enumerator_t2818953753 * __this, const RuntimeMethod* method)
{
	return ((  XRNodeState_t3752602430  (*) (Enumerator_t2818953753 *, const RuntimeMethod*))Enumerator_get_Current_m216776860_gshared)(__this, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_m1565792694 (XRNodeState_t3752602430 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_m2700381506 (XRNodeState_t3752602430 * __this, Vector3_t3722313464 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_m2439801437 (XRNodeState_t3752602430 * __this, Quaternion_t2301928331 * p0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  Pose_get_identity_m1622996508 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
inline bool Enumerator_MoveNext_m307146964 (Enumerator_t2818953753 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2818953753 *, const RuntimeMethod*))Enumerator_MoveNext_m307146964_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
inline void Enumerator_Dispose_m2105317552 (Enumerator_t2818953753 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2818953753 *, const RuntimeMethod*))Enumerator_Dispose_m2105317552_gshared)(__this, method);
}
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetNodePoseData_m3333983646 (RuntimeObject * __this /* static, unused */, int32_t ___node0, Pose_t545244865 * ___resultPose1, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetTangoPose(UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetTangoPose_m675410062 (RuntimeObject * __this /* static, unused */, int32_t ___frame0, Pose_t545244865 * ___pose1, const RuntimeMethod* method);
// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.TangoDevice::get_baseCoordinateFrame()
extern "C" IL2CPP_METHOD_ATTR int32_t TangoDevice_get_baseCoordinateFrame_m1024580885 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_TryGetPoseAtTime_m3134437062 (RuntimeObject * __this /* static, unused */, PoseData_t3034736766 * p0, int32_t p1, int32_t p2, double p3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PoseData_get_position_m1980100049 (PoseData_t3034736766 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  PoseData_get_rotation_m1034883957 (PoseData_t3034736766 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
inline void List_1__ctor_m321362438 (List_1_t929709876 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t929709876 *, const RuntimeMethod*))List_1__ctor_m321362438_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
inline int32_t List_1_get_Count_m3628814819 (List_1_t2890249332 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2890249332 *, const RuntimeMethod*))List_1_get_Count_m3628814819_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
inline PoseData_t1418174590  List_1_get_Item_m640079513 (List_1_t2890249332 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  PoseData_t1418174590  (*) (List_1_t2890249332 *, int32_t, const RuntimeMethod*))List_1_get_Item_m640079513_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m1636217762 (List_1_t593865784 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t593865784 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1636217762_gshared)(__this, p0, method);
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m1064060695 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_m4134942016 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
inline int32_t List_1_get_Count_m3341200234 (List_1_t593865784 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t593865784 *, const RuntimeMethod*))List_1_get_Count_m3341200234_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m3774969807 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_m3266718412 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t4157153871 * Component_GetComponent_TisCamera_t4157153871_m4227149030 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRDevice_DisableAutoXRCameraTracking_m3625162343 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * p0, bool p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_m1654609797 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m1254900209 (RuntimeObject * __this /* static, unused */, UnityAction_t3245792599 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  Pose_GetTransformedBy_m3933236594 (Pose_t545244865 * __this, Pose_t545244865  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_stereoEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Camera_get_stereoEnabled_m1370638140 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::TryGetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_TryGetPoseData_m1413985800 (TrackedPoseDriver_t1867984025 * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t545244865 * ___resultPose2, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591 (TrackedPoseDriver_t1867984025 * __this, Pose_t545244865  ___pose0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
inline void List_1__ctor_m871525267 (List_1_t2890249332 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2890249332 *, const RuntimeMethod*))List_1__ctor_m871525267_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m706204246 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m1685793073 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
inline void List_1__ctor_m2662576365 (List_1_t593865784 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t593865784 *, const RuntimeMethod*))List_1__ctor_m2662576365_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(!0)
inline void List_1_Add_m1332165401 (List_1_t593865784 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t593865784 *, int32_t, const RuntimeMethod*))List_1_Add_m1332165401_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
inline void List_1_Add_m2861735381 (List_1_t2890249332 * __this, PoseData_t1418174590  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2890249332 *, PoseData_t1418174590 , const RuntimeMethod*))List_1_Add_m2861735381_gshared)(__this, p0, method);
}
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
// System.Void UnityEngine.Experimental.XR.Interaction.BaseArmModel::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseArmModel__ctor_m1191728899 (BaseArmModel_t419611294 * __this, const RuntimeMethod* method)
{
	{
		BasePoseProvider__ctor_m1410511218(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.Experimental.XR.Interaction.BaseArmModel::get_headPoseSource()
extern "C" IL2CPP_METHOD_ATTR int32_t BaseArmModel_get_headPoseSource_m1179520149 (BaseArmModel_t419611294 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_HeadPoseSource_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.XR.Interaction.BaseArmModel::set_headPoseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void BaseArmModel_set_headPoseSource_m2050963752 (BaseArmModel_t419611294 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_HeadPoseSource_4(L_0);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.Experimental.XR.Interaction.BaseArmModel::get_poseSource()
extern "C" IL2CPP_METHOD_ATTR int32_t BaseArmModel_get_poseSource_m132565676 (BaseArmModel_t419611294 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_PoseSource_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.XR.Interaction.BaseArmModel::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void BaseArmModel_set_poseSource_m3493442796 (BaseArmModel_t419611294 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Experimental.XR.Interaction.BaseArmModel::TryGetTrackingDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool BaseArmModel_TryGetTrackingDataFromSource_m2883939478 (BaseArmModel_t419611294 * __this, int32_t ___poseSource0, Pose_t545244865 * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseArmModel_TryGetTrackingDataFromSource_m2883939478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___poseSource0;
		Pose_t545244865 * L_1 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_2 = PoseDataSource_TryGetDataFromSource_m720982218(NULL /*static, unused*/, L_0, (Pose_t545244865 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_m1410511218 (BasePoseProvider_t1312448601 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetNodePoseData_m3333983646 (RuntimeObject * __this /* static, unused */, int32_t ___node0, Pose_t545244865 * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_TryGetNodePoseData_m3333983646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRNodeState_t3752602430  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t2818953753  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		List_1_t929709876 * L_0 = ((PoseDataSource_t1389501421_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t1389501421_il2cpp_TypeInfo_var))->get_nodeStates_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2240286067_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m713678237(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		List_1_t929709876 * L_1 = ((PoseDataSource_t1389501421_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t1389501421_il2cpp_TypeInfo_var))->get_nodeStates_0();
		NullCheck(L_1);
		Enumerator_t2818953753  L_2 = List_1_GetEnumerator_m963389022(L_1, /*hidden argument*/List_1_GetEnumerator_m963389022_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_001c:
		{
			XRNodeState_t3752602430  L_3 = Enumerator_get_Current_m216776860((Enumerator_t2818953753 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m216776860_RuntimeMethod_var);
			V_0 = L_3;
			int32_t L_4 = XRNodeState_get_nodeType_m1565792694((XRNodeState_t3752602430 *)(&V_0), /*hidden argument*/NULL);
			int32_t L_5 = ___node0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0073;
			}
		}

IL_0032:
		{
			Pose_t545244865 * L_6 = ___resultPose1;
			Vector3_t3722313464 * L_7 = L_6->get_address_of_position_0();
			bool L_8 = XRNodeState_TryGetPosition_m2700381506((XRNodeState_t3752602430 *)(&V_0), (Vector3_t3722313464 *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0061;
			}
		}

IL_0045:
		{
			Pose_t545244865 * L_9 = ___resultPose1;
			Quaternion_t2301928331 * L_10 = L_9->get_address_of_rotation_1();
			bool L_11 = XRNodeState_TryGetRotation_m2439801437((XRNodeState_t3752602430 *)(&V_0), (Quaternion_t2301928331 *)L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0060;
			}
		}

IL_0058:
		{
			V_2 = (bool)1;
			IL2CPP_LEAVE(0xA5, FINALLY_0085);
		}

IL_0060:
		{
		}

IL_0061:
		{
			Pose_t545244865 * L_12 = ___resultPose1;
			IL2CPP_RUNTIME_CLASS_INIT(Pose_t545244865_il2cpp_TypeInfo_var);
			Pose_t545244865  L_13 = Pose_get_identity_m1622996508(NULL /*static, unused*/, /*hidden argument*/NULL);
			*(Pose_t545244865 *)L_12 = L_13;
			V_2 = (bool)0;
			IL2CPP_LEAVE(0xA5, FINALLY_0085);
		}

IL_0073:
		{
		}

IL_0074:
		{
			bool L_14 = Enumerator_MoveNext_m307146964((Enumerator_t2818953753 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m307146964_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001c;
			}
		}

IL_0080:
		{
			IL2CPP_LEAVE(0x93, FINALLY_0085);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2105317552((Enumerator_t2818953753 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2105317552_RuntimeMethod_var);
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0093:
	{
		Pose_t545244865 * L_15 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t545244865_il2cpp_TypeInfo_var);
		Pose_t545244865  L_16 = Pose_get_identity_m1622996508(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Pose_t545244865 *)L_15 = L_16;
		V_2 = (bool)0;
		goto IL_00a5;
	}

IL_00a5:
	{
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetDataFromSource_m720982218 (RuntimeObject * __this /* static, unused */, int32_t ___poseSource0, Pose_t545244865 * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_TryGetDataFromSource_m720982218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___poseSource0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_0070;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_007e;
			}
			case 5:
			{
				goto IL_008c;
			}
			case 6:
			{
				goto IL_009a;
			}
			case 7:
			{
				goto IL_00bc;
			}
			case 8:
			{
				goto IL_00ca;
			}
			case 9:
			{
				goto IL_00d9;
			}
			case 10:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_00e7;
	}

IL_0038:
	{
		Pose_t545244865 * L_1 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_2 = PoseDataSource_TryGetNodePoseData_m3333983646(NULL /*static, unused*/, 5, (Pose_t545244865 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_00f9;
	}

IL_0046:
	{
		Pose_t545244865 * L_3 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_4 = PoseDataSource_TryGetNodePoseData_m3333983646(NULL /*static, unused*/, 0, (Pose_t545244865 *)L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_00f9;
	}

IL_0054:
	{
		Pose_t545244865 * L_5 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_6 = PoseDataSource_TryGetNodePoseData_m3333983646(NULL /*static, unused*/, 1, (Pose_t545244865 *)L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_00f9;
	}

IL_0062:
	{
		Pose_t545244865 * L_7 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_8 = PoseDataSource_TryGetNodePoseData_m3333983646(NULL /*static, unused*/, 3, (Pose_t545244865 *)L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_00f9;
	}

IL_0070:
	{
		Pose_t545244865 * L_9 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_10 = PoseDataSource_TryGetNodePoseData_m3333983646(NULL /*static, unused*/, 2, (Pose_t545244865 *)L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_00f9;
	}

IL_007e:
	{
		Pose_t545244865 * L_11 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_12 = PoseDataSource_TryGetNodePoseData_m3333983646(NULL /*static, unused*/, 4, (Pose_t545244865 *)L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_00f9;
	}

IL_008c:
	{
		Pose_t545244865 * L_13 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_14 = PoseDataSource_TryGetNodePoseData_m3333983646(NULL /*static, unused*/, 5, (Pose_t545244865 *)L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_00f9;
	}

IL_009a:
	{
		Pose_t545244865 * L_15 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_16 = PoseDataSource_TryGetTangoPose_m675410062(NULL /*static, unused*/, 7, (Pose_t545244865 *)L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00b5;
		}
	}
	{
		Pose_t545244865 * L_17 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_18 = PoseDataSource_TryGetNodePoseData_m3333983646(NULL /*static, unused*/, 2, (Pose_t545244865 *)L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_00f9;
	}

IL_00b5:
	{
		V_0 = (bool)1;
		goto IL_00f9;
	}

IL_00bc:
	{
		Pose_t545244865 * L_19 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_20 = PoseDataSource_TryGetTangoPose_m675410062(NULL /*static, unused*/, 8, (Pose_t545244865 *)L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_00f9;
	}

IL_00ca:
	{
		Pose_t545244865 * L_21 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_22 = PoseDataSource_TryGetTangoPose_m675410062(NULL /*static, unused*/, ((int32_t)9), (Pose_t545244865 *)L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_00f9;
	}

IL_00d9:
	{
		Pose_t545244865 * L_23 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_24 = PoseDataSource_TryGetTangoPose_m675410062(NULL /*static, unused*/, 4, (Pose_t545244865 *)L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_00f9;
	}

IL_00e7:
	{
		Pose_t545244865 * L_25 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t545244865_il2cpp_TypeInfo_var);
		Pose_t545244865  L_26 = Pose_get_identity_m1622996508(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Pose_t545244865 *)L_25 = L_26;
		V_0 = (bool)0;
		goto IL_00f9;
	}

IL_00f9:
	{
		bool L_27 = V_0;
		return L_27;
	}
}
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetTangoPose(UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetTangoPose_m675410062 (RuntimeObject * __this /* static, unused */, int32_t ___frame0, Pose_t545244865 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_TryGetTangoPose_m675410062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_t3034736766  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TangoDevice_t2970124841_il2cpp_TypeInfo_var);
		int32_t L_0 = TangoDevice_get_baseCoordinateFrame_m1024580885(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___frame0;
		IL2CPP_RUNTIME_CLASS_INIT(TangoInputTracking_t4005594645_il2cpp_TypeInfo_var);
		bool L_2 = TangoInputTracking_TryGetPoseAtTime_m3134437062(NULL /*static, unused*/, (PoseData_t3034736766 *)(&V_0), L_0, L_1, (0.0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_3 = (&V_0)->get_statusCode_9();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		Pose_t545244865 * L_4 = ___pose1;
		Vector3_t3722313464  L_5 = PoseData_get_position_m1980100049((PoseData_t3034736766 *)(&V_0), /*hidden argument*/NULL);
		L_4->set_position_0(L_5);
		Pose_t545244865 * L_6 = ___pose1;
		Quaternion_t2301928331  L_7 = PoseData_get_rotation_m1034883957((PoseData_t3034736766 *)(&V_0), /*hidden argument*/NULL);
		L_6->set_rotation_1(L_7);
		V_1 = (bool)1;
		goto IL_005d;
	}

IL_004b:
	{
		Pose_t545244865 * L_8 = ___pose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t545244865_il2cpp_TypeInfo_var);
		Pose_t545244865  L_9 = Pose_get_identity_m1622996508(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Pose_t545244865 *)L_8 = L_9;
		V_1 = (bool)0;
		goto IL_005d;
	}

IL_005d:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.SpatialTracking.PoseDataSource::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PoseDataSource__cctor_m1981184558 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource__cctor_m1981184558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t929709876 * L_0 = (List_1_t929709876 *)il2cpp_codegen_object_new(List_1_t929709876_il2cpp_TypeInfo_var);
		List_1__ctor_m321362438(L_0, /*hidden argument*/List_1__ctor_m321362438_RuntimeMethod_var);
		((PoseDataSource_t1389501421_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t1389501421_il2cpp_TypeInfo_var))->set_nodeStates_0(L_0);
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
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver__ctor_m3153467908 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_PoseProviderComponent_6((BasePoseProvider_t1312448601 *)NULL);
		__this->set_m_UpdateType_8(0);
		__this->set_m_UseRelativeTransform_9((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::get_deviceType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_deviceType_m2282512132 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Device_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m1064060695 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Device_4(L_0);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseSource()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_poseSource_m3651530029 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_PoseSource_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_m4134942016 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::SetPoseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_SetPoseSource_m2091764154 (TrackedPoseDriver_t1867984025 * __this, int32_t ___deviceType0, int32_t ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_SetPoseSource_m2091764154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_t1418174590  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___deviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var);
		List_1_t2890249332 * L_1 = ((TrackedPoseDriverDataDescription_t1675062289_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var))->get_DeviceData_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m3628814819(L_1, /*hidden argument*/List_1_get_Count_m3628814819_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0067;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var);
		List_1_t2890249332 * L_3 = ((TrackedPoseDriverDataDescription_t1675062289_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var))->get_DeviceData_0();
		int32_t L_4 = ___deviceType0;
		NullCheck(L_3);
		PoseData_t1418174590  L_5 = List_1_get_Item_m640079513(L_3, L_4, /*hidden argument*/List_1_get_Item_m640079513_RuntimeMethod_var);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0054;
	}

IL_0025:
	{
		List_1_t593865784 * L_6 = (&V_0)->get_Poses_1();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = List_1_get_Item_m1636217762(L_6, L_7, /*hidden argument*/List_1_get_Item_m1636217762_RuntimeMethod_var);
		int32_t L_9 = ___pose1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = ___deviceType0;
		TrackedPoseDriver_set_deviceType_m1064060695(__this, L_10, /*hidden argument*/NULL);
		int32_t L_11 = ___pose1;
		TrackedPoseDriver_set_poseSource_m4134942016(__this, L_11, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_006e;
	}

IL_004f:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0054:
	{
		int32_t L_13 = V_1;
		List_1_t593865784 * L_14 = (&V_0)->get_Poses_1();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m3341200234(L_14, /*hidden argument*/List_1_get_Count_m3341200234_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0025;
		}
	}
	{
	}

IL_0067:
	{
		V_2 = (bool)0;
		goto IL_006e;
	}

IL_006e:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseProviderComponent()
extern "C" IL2CPP_METHOD_ATTR BasePoseProvider_t1312448601 * TrackedPoseDriver_get_poseProviderComponent_m3445810929 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	BasePoseProvider_t1312448601 * V_0 = NULL;
	{
		BasePoseProvider_t1312448601 * L_0 = __this->get_m_PoseProviderComponent_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		BasePoseProvider_t1312448601 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseProviderComponent(UnityEngine.Experimental.XR.Interaction.BasePoseProvider)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseProviderComponent_m897038094 (TrackedPoseDriver_t1867984025 * __this, BasePoseProvider_t1312448601 * ___value0, const RuntimeMethod* method)
{
	{
		BasePoseProvider_t1312448601 * L_0 = ___value0;
		__this->set_m_PoseProviderComponent_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::TryGetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_TryGetPoseData_m1413985800 (TrackedPoseDriver_t1867984025 * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t545244865 * ___resultPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_TryGetPoseData_m1413985800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		BasePoseProvider_t1312448601 * L_0 = __this->get_m_PoseProviderComponent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		BasePoseProvider_t1312448601 * L_2 = __this->get_m_PoseProviderComponent_6();
		Pose_t545244865 * L_3 = ___resultPose2;
		NullCheck(L_2);
		bool L_4 = VirtFuncInvoker1< bool, Pose_t545244865 * >::Invoke(4 /* System.Boolean UnityEngine.Experimental.XR.Interaction.BasePoseProvider::TryGetPoseFromProvider(UnityEngine.Pose&) */, L_2, (Pose_t545244865 *)L_3);
		V_0 = L_4;
		goto IL_0032;
	}

IL_0025:
	{
		int32_t L_5 = ___poseSource1;
		Pose_t545244865 * L_6 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t1389501421_il2cpp_TypeInfo_var);
		bool L_7 = PoseDataSource_TryGetDataFromSource_m720982218(NULL /*static, unused*/, L_5, (Pose_t545244865 *)L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::get_trackingType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_trackingType_m4217524394 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_TrackingType_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_trackingType(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_trackingType_m4066447935 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_TrackingType_7(L_0);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::get_updateType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_updateType_m1411580539 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_UpdateType_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_updateType(UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_updateType_m3648888555 (TrackedPoseDriver_t1867984025 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_UpdateType_8(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::get_UseRelativeTransform()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_m1398869064 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_UseRelativeTransform_9();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_UseRelativeTransform(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_UseRelativeTransform_m2128961640 (TrackedPoseDriver_t1867984025 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_UseRelativeTransform_9(L_0);
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::get_originPose()
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  TrackedPoseDriver_get_originPose_m118568312 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	Pose_t545244865  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Pose_t545244865  L_0 = __this->get_m_OriginPose_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Pose_t545244865  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_originPose(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_originPose_m2024032077 (TrackedPoseDriver_t1867984025 * __this, Pose_t545244865  ___value0, const RuntimeMethod* method)
{
	{
		Pose_t545244865  L_0 = ___value0;
		__this->set_m_OriginPose_10(L_0);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m3774969807 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	{
		Pose_t545244865 * L_0 = __this->get_address_of_m_OriginPose_10();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localPosition_m4234289348(L_1, /*hidden argument*/NULL);
		L_0->set_position_0(L_2);
		Pose_t545244865 * L_3 = __this->get_address_of_m_OriginPose_10();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = Transform_get_localRotation_m3487911431(L_4, /*hidden argument*/NULL);
		L_3->set_rotation_1(L_5);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	{
		Pose_t545244865 * L_0 = __this->get_address_of_m_OriginPose_10();
		Vector3_t3722313464  L_1 = L_0->get_position_0();
		Pose_t545244865 * L_2 = __this->get_address_of_m_OriginPose_10();
		Quaternion_t2301928331  L_3 = L_2->get_rotation_1();
		VirtActionInvoker2< Vector3_t3722313464 , Quaternion_t2301928331  >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_1, L_3);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Awake()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_Awake_m357232108 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_Awake_m357232108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackedPoseDriver_CacheLocalPosition_m3774969807(__this, /*hidden argument*/NULL);
		bool L_0 = TrackedPoseDriver_HasStereoCamera_m3266718412(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Camera_t4157153871 * L_1 = Component_GetComponent_TisCamera_t4157153871_m4227149030(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var);
		XRDevice_DisableAutoXRCameraTracking_m3625162343(NULL /*static, unused*/, L_1, (bool)1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDestroy_m1833559287 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = TrackedPoseDriver_HasStereoCamera_m3266718412(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
	}

IL_000e:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnEnable_m564992003 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnEnable_m564992003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)GetVirtualMethodInfo(__this, 10);
		UnityAction_t3245792599 * L_1 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_add_onBeforeRender_m1654609797(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDisable_m3908821101 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnDisable_m3908821101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackedPoseDriver_ResetToCachedLocalPosition_m2485692078(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)GetVirtualMethodInfo(__this, 10);
		UnityAction_t3245792599 * L_1 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_remove_onBeforeRender_m1254900209(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_FixedUpdate_m4196881516 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Update()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_Update_m3186735601 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnBeforeRender()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnBeforeRender_m2516930955 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_SetLocalTransform_m3593367804 (TrackedPoseDriver_t1867984025 * __this, Vector3_t3722313464  ___newPosition0, Quaternion_t2301928331  ___newRotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingType_7();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_TrackingType_7();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}

IL_0018:
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_3 = ___newRotation1;
		NullCheck(L_2);
		Transform_set_localRotation_m19445462(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		int32_t L_4 = __this->get_m_TrackingType_7();
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = __this->get_m_TrackingType_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}

IL_003d:
	{
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = ___newPosition0;
		NullCheck(L_6);
		Transform_set_localPosition_m4128471975(L_6, L_7, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t545244865  TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591 (TrackedPoseDriver_t1867984025 * __this, Pose_t545244865  ___pose0, const RuntimeMethod* method)
{
	Pose_t545244865  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_m_UseRelativeTransform_9();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Pose_t545244865  L_1 = __this->get_m_OriginPose_10();
		Pose_t545244865  L_2 = Pose_GetTransformedBy_m3933236594((Pose_t545244865 *)(&___pose0), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0028;
	}

IL_0020:
	{
		Pose_t545244865  L_3 = ___pose0;
		V_0 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		Pose_t545244865  L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_m3266718412 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_HasStereoCamera_m3266718412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m4227149030(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m4227149030_RuntimeMethod_var);
		V_0 = L_0;
		Camera_t4157153871 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Camera_t4157153871 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Camera_get_stereoEnabled_m1370638140(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_PerformUpdate_m349344482 (TrackedPoseDriver_t1867984025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_PerformUpdate_m349344482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t545244865  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Pose_t545244865  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0056;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t545244865 ));
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t545244865_il2cpp_TypeInfo_var);
		Pose_t545244865  L_1 = Pose_get_identity_m1622996508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_m_Device_4();
		int32_t L_3 = __this->get_m_PoseSource_5();
		bool L_4 = TrackedPoseDriver_TryGetPoseData_m1413985800(__this, L_2, L_3, (Pose_t545244865 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		Pose_t545244865  L_5 = V_0;
		Pose_t545244865  L_6 = TrackedPoseDriver_TransformPoseByOriginIfNeeded_m1952024591(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Vector3_t3722313464  L_7 = (&V_1)->get_position_0();
		Quaternion_t2301928331  L_8 = (&V_1)->get_rotation_1();
		VirtActionInvoker2< Vector3_t3722313464 , Quaternion_t2301928331  >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_7, L_8);
	}

IL_0056:
	{
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
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriverDataDescription__cctor_m2513534467 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriverDataDescription__cctor_m2513534467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2890249332 * V_0 = NULL;
	PoseData_t1418174590  V_1;
	memset(&V_1, 0, sizeof(V_1));
	List_1_t3319525431 * V_2 = NULL;
	List_1_t593865784 * V_3 = NULL;
	PoseData_t1418174590  V_4;
	memset(&V_4, 0, sizeof(V_4));
	PoseData_t1418174590  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		List_1_t2890249332 * L_0 = (List_1_t2890249332 *)il2cpp_codegen_object_new(List_1_t2890249332_il2cpp_TypeInfo_var);
		List_1__ctor_m871525267(L_0, /*hidden argument*/List_1__ctor_m871525267_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2890249332 * L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(PoseData_t1418174590 ));
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_2 = L_2;
		List_1_t3319525431 * L_3 = V_2;
		NullCheck(L_3);
		List_1_Add_m1685793073(L_3, _stringLiteral1534079751, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_4 = V_2;
		NullCheck(L_4);
		List_1_Add_m1685793073(L_4, _stringLiteral3242476622, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_5 = V_2;
		NullCheck(L_5);
		List_1_Add_m1685793073(L_5, _stringLiteral2646604272, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_6 = V_2;
		NullCheck(L_6);
		List_1_Add_m1685793073(L_6, _stringLiteral431746829, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_7 = V_2;
		NullCheck(L_7);
		List_1_Add_m1685793073(L_7, _stringLiteral134673545, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_8 = V_2;
		(&V_1)->set_PoseNames_0(L_8);
		List_1_t593865784 * L_9 = (List_1_t593865784 *)il2cpp_codegen_object_new(List_1_t593865784_il2cpp_TypeInfo_var);
		List_1__ctor_m2662576365(L_9, /*hidden argument*/List_1__ctor_m2662576365_RuntimeMethod_var);
		V_3 = L_9;
		List_1_t593865784 * L_10 = V_3;
		NullCheck(L_10);
		List_1_Add_m1332165401(L_10, 0, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_11 = V_3;
		NullCheck(L_11);
		List_1_Add_m1332165401(L_11, 1, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_12 = V_3;
		NullCheck(L_12);
		List_1_Add_m1332165401(L_12, 2, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_13 = V_3;
		NullCheck(L_13);
		List_1_Add_m1332165401(L_13, 3, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_14 = V_3;
		NullCheck(L_14);
		List_1_Add_m1332165401(L_14, 6, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_15 = V_3;
		(&V_1)->set_Poses_1(L_15);
		PoseData_t1418174590  L_16 = V_1;
		NullCheck(L_1);
		List_1_Add_m2861735381(L_1, L_16, /*hidden argument*/List_1_Add_m2861735381_RuntimeMethod_var);
		List_1_t2890249332 * L_17 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(PoseData_t1418174590 ));
		List_1_t3319525431 * L_18 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_18, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_2 = L_18;
		List_1_t3319525431 * L_19 = V_2;
		NullCheck(L_19);
		List_1_Add_m1685793073(L_19, _stringLiteral571192390, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_20 = V_2;
		NullCheck(L_20);
		List_1_Add_m1685793073(L_20, _stringLiteral3476230729, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_21 = V_2;
		(&V_4)->set_PoseNames_0(L_21);
		List_1_t593865784 * L_22 = (List_1_t593865784 *)il2cpp_codegen_object_new(List_1_t593865784_il2cpp_TypeInfo_var);
		List_1__ctor_m2662576365(L_22, /*hidden argument*/List_1__ctor_m2662576365_RuntimeMethod_var);
		V_3 = L_22;
		List_1_t593865784 * L_23 = V_3;
		NullCheck(L_23);
		List_1_Add_m1332165401(L_23, 4, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_24 = V_3;
		NullCheck(L_24);
		List_1_Add_m1332165401(L_24, 5, /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_25 = V_3;
		(&V_4)->set_Poses_1(L_25);
		PoseData_t1418174590  L_26 = V_4;
		NullCheck(L_17);
		List_1_Add_m2861735381(L_17, L_26, /*hidden argument*/List_1_Add_m2861735381_RuntimeMethod_var);
		List_1_t2890249332 * L_27 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(PoseData_t1418174590 ));
		List_1_t3319525431 * L_28 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_28, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_2 = L_28;
		List_1_t3319525431 * L_29 = V_2;
		NullCheck(L_29);
		List_1_Add_m1685793073(L_29, _stringLiteral2478019389, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_30 = V_2;
		(&V_5)->set_PoseNames_0(L_30);
		List_1_t593865784 * L_31 = (List_1_t593865784 *)il2cpp_codegen_object_new(List_1_t593865784_il2cpp_TypeInfo_var);
		List_1__ctor_m2662576365(L_31, /*hidden argument*/List_1__ctor_m2662576365_RuntimeMethod_var);
		V_3 = L_31;
		List_1_t593865784 * L_32 = V_3;
		NullCheck(L_32);
		List_1_Add_m1332165401(L_32, ((int32_t)10), /*hidden argument*/List_1_Add_m1332165401_RuntimeMethod_var);
		List_1_t593865784 * L_33 = V_3;
		(&V_5)->set_Poses_1(L_33);
		PoseData_t1418174590  L_34 = V_5;
		NullCheck(L_27);
		List_1_Add_m2861735381(L_27, L_34, /*hidden argument*/List_1_Add_m2861735381_RuntimeMethod_var);
		List_1_t2890249332 * L_35 = V_0;
		((TrackedPoseDriverDataDescription_t1675062289_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1675062289_il2cpp_TypeInfo_var))->set_DeviceData_0(L_35);
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
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_t1418174590_marshal_pinvoke(const PoseData_t1418174590& unmarshaled, PoseData_t1418174590_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
extern "C" void PoseData_t1418174590_marshal_pinvoke_back(const PoseData_t1418174590_marshaled_pinvoke& marshaled, PoseData_t1418174590& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_t1418174590_marshal_pinvoke_cleanup(PoseData_t1418174590_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_t1418174590_marshal_com(const PoseData_t1418174590& unmarshaled, PoseData_t1418174590_marshaled_com& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
extern "C" void PoseData_t1418174590_marshal_com_back(const PoseData_t1418174590_marshaled_com& marshaled, PoseData_t1418174590& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_t1418174590_marshal_com_cleanup(PoseData_t1418174590_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
