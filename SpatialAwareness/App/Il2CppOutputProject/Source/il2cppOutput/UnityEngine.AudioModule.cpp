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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913;
// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E4C82C746C3EC981DE6270E62A307A7F402A3C0;
IL2CPP_EXTERN_C String_t* _stringLiteral2F43397615CF615962F130AA6604F6D76A60AE5C;
IL2CPP_EXTERN_C String_t* _stringLiteral2F6210C7CB4E004CB3F104E1A7B40B6C6B7121FD;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF0D3E9771A3768C7B73D9BC5347F23791C861D;
IL2CPP_EXTERN_C String_t* _stringLiteral4CDCA392B9BF22E4728254EA8AABA605D8A96AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral518B3D08731FC4B4ACDD4C12E1B1B37CC0E64603;
IL2CPP_EXTERN_C String_t* _stringLiteral5FA39088E79DEB93386A8A29EBFC4BF667035C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral64727BD135950E8FFCB476F66EAA1B0747F2F8BC;
IL2CPP_EXTERN_C String_t* _stringLiteral6E08EC217803485FD1258E704F681704792FDD20;
IL2CPP_EXTERN_C String_t* _stringLiteralA1ECCC24C90A5178FA10A29190315449D65E6FA6;
IL2CPP_EXTERN_C String_t* _stringLiteralA7AB925FF80AE6B8E928777122DF6848168541DC;
IL2CPP_EXTERN_C String_t* _stringLiteralB690CB7A4FD9F948BE23247E7090E398B232E4C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE50B0C9845BE0262691292B3BC4739CAB8B57967;
IL2CPP_EXTERN_C String_t* _stringLiteralEA3408619B25F828989F9D14D19C43095B82B903;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_Create_m76744E6CF5A521F79D0282A6FBEAAC37FE9C0BF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_InvokePCMReaderCallback_Internal_mF087FCAD425EAC299C1156BA809DC535D00757F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_InvokePCMSetPositionCallback_Internal_mBB8265A5BFF660F8AF39718DDB193319AB7EFA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_SetData_m7B400A0E491EDFE98D3A732D189443846E74CD6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip__ctor_m52425138C3A036FC847A0E4C4ADA31CEF81CD10D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_add_m_PCMReaderCallback_mE70789B25C74C552769FB2DAB96FC416A8508C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_add_m_PCMSetPositionCallback_mC0EBAE94510712D3E1481ED8B3FB7956169754F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_remove_m_PCMReaderCallback_m0AEFEC9C086DEBABE06F1294AFE0B4031D805FE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_remove_m_PCMSetPositionCallback_m21FB4ECFD0CE6C754C5D3BBFDCE9AD21E6D074A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioSampleProvider_InvokeSampleFramesAvailable_m7604AAF1AC01473A29DCDAD1AEC06165504BE832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioSampleProvider_InvokeSampleFramesOverflow_mC81A014388E535569EF02E3DA6B9831B0FB8A8D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioSettings_InvokeOnAudioConfigurationChanged_m8D251791C6A402B12E93C22F43475DE3033FC8E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_Create_m76744E6CF5A521F79D0282A6FBEAAC37FE9C0BF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_InvokePCMReaderCallback_Internal_mF087FCAD425EAC299C1156BA809DC535D00757F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_InvokePCMSetPositionCallback_Internal_mBB8265A5BFF660F8AF39718DDB193319AB7EFA6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_SetData_m7B400A0E491EDFE98D3A732D189443846E74CD6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip__ctor_m52425138C3A036FC847A0E4C4ADA31CEF81CD10D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_add_m_PCMReaderCallback_mE70789B25C74C552769FB2DAB96FC416A8508C62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_add_m_PCMSetPositionCallback_mC0EBAE94510712D3E1481ED8B3FB7956169754F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_remove_m_PCMReaderCallback_m0AEFEC9C086DEBABE06F1294AFE0B4031D805FE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioClip_remove_m_PCMSetPositionCallback_m21FB4ECFD0CE6C754C5D3BBFDCE9AD21E6D074A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioConfigurationChangeHandler_BeginInvoke_mB0B0ACF6281B999FA11037CA130CA3C72BEC7827_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioSampleProvider_InvokeSampleFramesAvailable_m7604AAF1AC01473A29DCDAD1AEC06165504BE832_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioSampleProvider_InvokeSampleFramesOverflow_mC81A014388E535569EF02E3DA6B9831B0FB8A8D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioSettings_InvokeOnAudioConfigurationChanged_m8D251791C6A402B12E93C22F43475DE3033FC8E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PCMSetPositionCallback_BeginInvoke_m88CDF70D75854621CA69ED3D53CD53B8206A5093_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleFramesHandler_BeginInvoke_mE516B77CCC50738663D10DDD2D7BDB4391FDFF92_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2E16431D825A5D233BFED659B3C516DAB0AC0286 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// UnityEngine.AudioSettings
struct AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioConfigurationChanged_0), (void*)value);
	}
};


// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesAvailable
	SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * ___sampleFramesAvailable_0;
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesOverflow
	SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * ___sampleFramesOverflow_1;

public:
	inline static int32_t get_offset_of_sampleFramesAvailable_0() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___sampleFramesAvailable_0)); }
	inline SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * get_sampleFramesAvailable_0() const { return ___sampleFramesAvailable_0; }
	inline SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF ** get_address_of_sampleFramesAvailable_0() { return &___sampleFramesAvailable_0; }
	inline void set_sampleFramesAvailable_0(SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * value)
	{
		___sampleFramesAvailable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampleFramesAvailable_0), (void*)value);
	}

	inline static int32_t get_offset_of_sampleFramesOverflow_1() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___sampleFramesOverflow_1)); }
	inline SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * get_sampleFramesOverflow_1() const { return ___sampleFramesOverflow_1; }
	inline SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF ** get_address_of_sampleFramesOverflow_1() { return &___sampleFramesOverflow_1; }
	inline void set_sampleFramesOverflow_1(SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * value)
	{
		___sampleFramesOverflow_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampleFramesOverflow_1), (void*)value);
	}
};


// UnityEngine.Microphone
struct Microphone_t726BEF7F4F60B1E2C4C81333CD7C33D4987434E5  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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
struct IntPtr_t 
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


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Audio.AudioClipPlayable
struct AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Audio.AudioMixerPlayable
struct AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Audio.AudioPlayableOutput
struct AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioListener
struct AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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



// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___x0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4 (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.String UnityEngine.AudioClip::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_mD69F28B33950F21E36A2F3A659DD89725796D257 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m9422A5FB335AFB42C2CBAD4EE650C5F71ECB3559 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data1, int32_t ___numsamples2, int32_t ___samplesOffset3, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___pcmreadercallback5, PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___pcmsetpositioncallback6, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m7D46E331C349DD29CBA488C9B6A950A3E7DD5CAE (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClip_Construct_Internal_mEEA2165F0467FA67FA05361A85434DF5068E79B0 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip::add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mE70789B25C74C552769FB2DAB96FC416A8508C62 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip::add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mC0EBAE94510712D3E1481ED8B3FB7956169754F5 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m56B1F9909AB1F6CABCA8C526657F99A8BC0E73BD (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m7B101820DB35BEFC8D2724DF96900367863B93B6 (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m8EA4736B43191A8E6F95E1548AFF124519EC533C (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, int32_t ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m62D72B397E1DC117C8C92A450D2C86C535A2BF49 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mB65EF59C56A49FD68CD3361B2C34E07F89F1244B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, float ___pitch1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m361C17B583E05D2A5FA0F03BD7CD98D74FBF83AC (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, uint64_t ___delay1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_mDAEDF5E0C56C665DE62CDF26E7B98149B4A71704 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, float ___volumeScale2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mD3712B98BC6DBEA9CEEF778CE9CCB8DBA62F47A8 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___stopOneShots0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m52F0148F680B36E04A7F850E617FBEF1CA9809FD (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E (String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * Microphone_StartRecord_m88F707BD42E1494928AA8D2E915062826E9021E8 (int32_t ___deviceID0, bool ___loop1, float ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::EndRecord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m6DDB48A30B1A34A6E996A1A1FC194DA184B46733 (int32_t ___deviceID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m70F5B087E69C0077AA9238931776EDE123FCF122 (int32_t ___deviceID0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m4592CD4A6371544156A042579626B9351DCD7E93 (int32_t ___deviceID0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 197));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 198));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 199));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 200));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 201));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + _offset);
	return AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___other0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 202));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 203));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 204));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 205));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 207));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1((AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 207));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 208));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1((AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *)(&___other0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 208));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 209));
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 209));
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 206));
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0_AdjustorThunk (RuntimeObject * __this, AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + _offset);
	return AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 210));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 211));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 212));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 213));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 214));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *>(__this + _offset);
	return AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4 (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___other0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 215));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 216));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 217));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 218));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 220));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D((AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 220));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 221));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D((AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *)(&___other0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 221));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 222));
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 222));
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 219));
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4_AdjustorThunk (RuntimeObject * __this, AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *>(__this + _offset);
	return AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4(_thisAdjusted, ___other0, method);
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
// System.Void UnityEngine.AudioClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip__ctor_m52425138C3A036FC847A0E4C4ADA31CEF81CD10D (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip__ctor_m52425138C3A036FC847A0E4C4ADA31CEF81CD10D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip__ctor_m52425138C3A036FC847A0E4C4ADA31CEF81CD10D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 8));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 9));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 10));
		__this->set_m_PCMReaderCallback_4((PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 11));
		__this->set_m_PCMSetPositionCallback_5((PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 12));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 15));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 14));
		return;
	}
}
// System.Boolean UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m9422A5FB335AFB42C2CBAD4EE650C5F71ECB3559 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data1, int32_t ___numsamples2, int32_t ___samplesOffset3, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_SetData_m9422A5FB335AFB42C2CBAD4EE650C5F71ECB3559_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, int32_t, int32_t);
	static AudioClip_SetData_m9422A5FB335AFB42C2CBAD4EE650C5F71ECB3559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_SetData_m9422A5FB335AFB42C2CBAD4EE650C5F71ECB3559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)");
	bool retVal = _il2cpp_icall_func(___clip0, ___data1, ___numsamples2, ___samplesOffset3);
	return retVal;
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClip_Construct_Internal_mEEA2165F0467FA67FA05361A85434DF5068E79B0 (const RuntimeMethod* method)
{
	typedef AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*AudioClip_Construct_Internal_mEEA2165F0467FA67FA05361A85434DF5068E79B0_ftn) ();
	static AudioClip_Construct_Internal_mEEA2165F0467FA67FA05361A85434DF5068E79B0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_Construct_Internal_mEEA2165F0467FA67FA05361A85434DF5068E79B0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::Construct_Internal()");
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.AudioClip::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_mD69F28B33950F21E36A2F3A659DD89725796D257 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*AudioClip_GetName_mD69F28B33950F21E36A2F3A659DD89725796D257_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioClip_GetName_mD69F28B33950F21E36A2F3A659DD89725796D257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetName_mD69F28B33950F21E36A2F3A659DD89725796D257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetName()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m56B1F9909AB1F6CABCA8C526657F99A8BC0E73BD (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method)
{
	typedef void (*AudioClip_CreateUserSound_m56B1F9909AB1F6CABCA8C526657F99A8BC0E73BD_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *, String_t*, int32_t, int32_t, int32_t, bool);
	static AudioClip_CreateUserSound_m56B1F9909AB1F6CABCA8C526657F99A8BC0E73BD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_CreateUserSound_m56B1F9909AB1F6CABCA8C526657F99A8BC0E73BD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___lengthSamples1, ___channels2, ___frequency3, ___stream4);
}
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_channels()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B400A0E491EDFE98D3A732D189443846E74CD6C (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_SetData_m7B400A0E491EDFE98D3A732D189443846E74CD6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___data0), (&___offsetSamples1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_SetData_m7B400A0E491EDFE98D3A732D189443846E74CD6C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 16));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 17));
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 32));
		int32_t L_0 = AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 32));
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 20));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 21));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 22));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 33));
		String_t* L_2 = AudioClip_GetName_mD69F28B33950F21E36A2F3A659DD89725796D257(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 33));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 34));
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral518B3D08731FC4B4ACDD4C12E1B1B37CC0E64603, L_2, _stringLiteral5FA39088E79DEB93386A8A29EBFC4BF667035C7F, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 34));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 35));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 35));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 23));
		V_1 = (bool)0;
		goto IL_0082;
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 24));
		int32_t L_4 = ___offsetSamples1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = ___offsetSamples1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 36));
		int32_t L_6 = AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 36));
		G_B5_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_2 = (bool)G_B5_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 25));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 26));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 37));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, _stringLiteralA1ECCC24C90A5178FA10A29190315449D65E6FA6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 37));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, AudioClip_SetData_m7B400A0E491EDFE98D3A732D189443846E74CD6C_RuntimeMethod_var);
	}

IL_0053:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 27));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = ___data0;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_10 = ___data0;
		NullCheck(L_10);
		G_B10_0 = ((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B10_0 = 1;
	}

IL_005e:
	{
		V_3 = (bool)G_B10_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 28));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 29));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 38));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_12 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_12, _stringLiteral64727BD135950E8FFCB476F66EAA1B0747F2F8BC, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 38));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, AudioClip_SetData_m7B400A0E491EDFE98D3A732D189443846E74CD6C_RuntimeMethod_var);
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 30));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_13 = ___data0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_14 = ___data0;
		NullCheck(L_14);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 39));
		int32_t L_15 = AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 39));
		int32_t L_16 = ___offsetSamples1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 40));
		bool L_17 = AudioClip_SetData_m9422A5FB335AFB42C2CBAD4EE650C5F71ECB3559(__this, L_13, ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))/(int32_t)L_15)), L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 40));
		V_1 = L_17;
		goto IL_0082;
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 31));
		bool L_18 = V_1;
		return L_18;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClip_Create_m76744E6CF5A521F79D0282A6FBEAAC37FE9C0BF5 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_Create_m76744E6CF5A521F79D0282A6FBEAAC37FE9C0BF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_0 = NULL;
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0), (&___lengthSamples1), (&___channels2), (&___frequency3), (&___stream4));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_Create_m76744E6CF5A521F79D0282A6FBEAAC37FE9C0BF5_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 41));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 42));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 43));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 44));
		String_t* L_0 = ___name0;
		int32_t L_1 = ___lengthSamples1;
		int32_t L_2 = ___channels2;
		int32_t L_3 = ___frequency3;
		bool L_4 = ___stream4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 47));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995(L_0, L_1, L_2, L_3, L_4, (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)NULL, (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 47));
		V_0 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 45));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_6 = V_0;
		V_1 = L_6;
		goto IL_0013;
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 46));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___pcmreadercallback5, PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___pcmsetpositioncallback6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_7 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0), (&___lengthSamples1), (&___channels2), (&___frequency3), (&___stream4), (&___pcmreadercallback5), (&___pcmsetpositioncallback6));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 48));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 49));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 50));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 51));
		String_t* L_0 = ___name0;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 52));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 53));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 73));
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m7D46E331C349DD29CBA488C9B6A950A3E7DD5CAE(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 73));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995_RuntimeMethod_var);
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 54));
		int32_t L_3 = ___lengthSamples1;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 55));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 56));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 74));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, _stringLiteral3AF0D3E9771A3768C7B73D9BC5347F23791C861D, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 74));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995_RuntimeMethod_var);
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 57));
		int32_t L_6 = ___channels2;
		V_3 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 58));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 59));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 75));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, _stringLiteralA7AB925FF80AE6B8E928777122DF6848168541DC, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 75));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995_RuntimeMethod_var);
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 60));
		int32_t L_9 = ___frequency3;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 61));
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 62));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 76));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, _stringLiteralEA3408619B25F828989F9D14D19C43095B82B903, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 76));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, AudioClip_Create_m7D20A6B52ACA39506B505EF162AF7EF81B173995_RuntimeMethod_var);
	}

IL_0053:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 63));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 77));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_12 = AudioClip_Construct_Internal_mEEA2165F0467FA67FA05361A85434DF5068E79B0(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 77));
		V_0 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 64));
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_13 = ___pcmreadercallback5;
		V_5 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 65));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 66));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_15 = V_0;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_16 = ___pcmreadercallback5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 78));
		NullCheck(L_15);
		AudioClip_add_m_PCMReaderCallback_mE70789B25C74C552769FB2DAB96FC416A8508C62(L_15, L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 78));
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 67));
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_17 = ___pcmsetpositioncallback6;
		V_6 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 68));
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 69));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_19 = V_0;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_20 = ___pcmsetpositioncallback6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 79));
		NullCheck(L_19);
		AudioClip_add_m_PCMSetPositionCallback_mC0EBAE94510712D3E1481ED8B3FB7956169754F5(L_19, L_20, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 79));
	}

IL_0081:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 70));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_21 = V_0;
		String_t* L_22 = ___name0;
		int32_t L_23 = ___lengthSamples1;
		int32_t L_24 = ___channels2;
		int32_t L_25 = ___frequency3;
		bool L_26 = ___stream4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 80));
		NullCheck(L_21);
		AudioClip_CreateUserSound_m56B1F9909AB1F6CABCA8C526657F99A8BC0E73BD(L_21, L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 71));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_27 = V_0;
		V_7 = L_27;
		goto IL_0093;
	}

IL_0093:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 72));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_28 = V_7;
		return L_28;
	}
}
// System.Void UnityEngine.AudioClip::add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mE70789B25C74C552769FB2DAB96FC416A8508C62 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_add_m_PCMReaderCallback_mE70789B25C74C552769FB2DAB96FC416A8508C62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * V_0 = NULL;
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * V_1 = NULL;
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_add_m_PCMReaderCallback_mE70789B25C74C552769FB2DAB96FC416A8508C62_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_0 = __this->get_m_PCMReaderCallback_4();
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_2 = V_1;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_il2cpp_TypeInfo_var));
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** L_5 = __this->get_address_of_m_PCMReaderCallback_4();
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_6 = V_2;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_7 = V_1;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *>((PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB **)L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_9 = V_0;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)L_9) == ((RuntimeObject*)(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::remove_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMReaderCallback_m0AEFEC9C086DEBABE06F1294AFE0B4031D805FE7 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_remove_m_PCMReaderCallback_m0AEFEC9C086DEBABE06F1294AFE0B4031D805FE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * V_0 = NULL;
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * V_1 = NULL;
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_remove_m_PCMReaderCallback_m0AEFEC9C086DEBABE06F1294AFE0B4031D805FE7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_0 = __this->get_m_PCMReaderCallback_4();
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_2 = V_1;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_il2cpp_TypeInfo_var));
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** L_5 = __this->get_address_of_m_PCMReaderCallback_4();
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_6 = V_2;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_7 = V_1;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *>((PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB **)L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_9 = V_0;
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)L_9) == ((RuntimeObject*)(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mC0EBAE94510712D3E1481ED8B3FB7956169754F5 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_add_m_PCMSetPositionCallback_mC0EBAE94510712D3E1481ED8B3FB7956169754F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * V_0 = NULL;
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * V_1 = NULL;
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_add_m_PCMSetPositionCallback_mC0EBAE94510712D3E1481ED8B3FB7956169754F5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_0 = __this->get_m_PCMSetPositionCallback_5();
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_2 = V_1;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** L_5 = __this->get_address_of_m_PCMSetPositionCallback_5();
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_6 = V_2;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_7 = V_1;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *>((PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 **)L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_9 = V_0;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMSetPositionCallback_m21FB4ECFD0CE6C754C5D3BBFDCE9AD21E6D074A2 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_remove_m_PCMSetPositionCallback_m21FB4ECFD0CE6C754C5D3BBFDCE9AD21E6D074A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * V_0 = NULL;
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * V_1 = NULL;
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_remove_m_PCMSetPositionCallback_m21FB4ECFD0CE6C754C5D3BBFDCE9AD21E6D074A2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_0 = __this->get_m_PCMSetPositionCallback_5();
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_2 = V_1;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** L_5 = __this->get_address_of_m_PCMSetPositionCallback_5();
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_6 = V_2;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_7 = V_1;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *>((PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 **)L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_9 = V_0;
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_mF087FCAD425EAC299C1156BA809DC535D00757F9 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_InvokePCMReaderCallback_Internal_mF087FCAD425EAC299C1156BA809DC535D00757F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___data0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_InvokePCMReaderCallback_Internal_mF087FCAD425EAC299C1156BA809DC535D00757F9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 81));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 82));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 83));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 84));
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_0 = __this->get_m_PCMReaderCallback_4();
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 85));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 86));
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_2 = __this->get_m_PCMReaderCallback_4();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = ___data0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 88));
		NullCheck(L_2);
		PCMReaderCallback_Invoke_m7B101820DB35BEFC8D2724DF96900367863B93B6(L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 88));
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 87));
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_mBB8265A5BFF660F8AF39718DDB193319AB7EFA6F (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip_InvokePCMSetPositionCallback_Internal_mBB8265A5BFF660F8AF39718DDB193319AB7EFA6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioClip_InvokePCMSetPositionCallback_Internal_mBB8265A5BFF660F8AF39718DDB193319AB7EFA6F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 89));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 90));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 91));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 92));
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_0 = __this->get_m_PCMSetPositionCallback_5();
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 93));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 94));
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_2 = __this->get_m_PCMSetPositionCallback_5();
		int32_t L_3 = ___position0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 96));
		NullCheck(L_2);
		PCMSetPositionCallback_Invoke_m8EA4736B43191A8E6F95E1548AFF124519EC533C(L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 96));
	}

IL_001b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 95));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___data0' to native representation
	float* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<float*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF9EB2467704F5E13196BBA93F41FA275AC5432F6 (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m7B101820DB35BEFC8D2724DF96900367863B93B6 (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___data0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PCMReaderCallback_BeginInvoke_m94035E11B2B9BD6114EF3D7F4B7E367572E7AE1F (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_EndInvoke_m6730FD7DFD7246F137C437BC470F995D6C75E15B (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_m31EA578C3CCFDFC9335B8C67353878AEE4B3905F (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m8EA4736B43191A8E6F95E1548AFF124519EC533C (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, int32_t ___position0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___position0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PCMSetPositionCallback_BeginInvoke_m88CDF70D75854621CA69ED3D53CD53B8206A5093 (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, int32_t ___position0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PCMSetPositionCallback_BeginInvoke_m88CDF70D75854621CA69ED3D53CD53B8206A5093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_EndInvoke_mB711E23CFD370348A1680B281A3DFE04F970792C (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Single UnityEngine.AudioHighPassFilter::get_cutoffFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_m0733A348725BAAD6E72E4EB47C9900E4496FB917 (AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioHighPassFilter_get_cutoffFrequency_m0733A348725BAAD6E72E4EB47C9900E4496FB917_ftn) (AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 *);
	static AudioHighPassFilter_get_cutoffFrequency_m0733A348725BAAD6E72E4EB47C9900E4496FB917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_get_cutoffFrequency_m0733A348725BAAD6E72E4EB47C9900E4496FB917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::get_cutoffFrequency()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioHighPassFilter::set_cutoffFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_m6D4DFA0033853F8C1E7B9B49153E12BFD1E4D35A (AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioHighPassFilter_set_cutoffFrequency_m6D4DFA0033853F8C1E7B9B49153E12BFD1E4D35A_ftn) (AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 *, float);
	static AudioHighPassFilter_set_cutoffFrequency_m6D4DFA0033853F8C1E7B9B49153E12BFD1E4D35A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_set_cutoffFrequency_m6D4DFA0033853F8C1E7B9B49153E12BFD1E4D35A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::set_cutoffFrequency(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0 (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0_ftn) (bool);
	static AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::set_pause(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.AudioLowPassFilter::get_cutoffFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_mC6A24AC159FC3BF1B52F19B24E04AF0712682433 (AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE * __this, const RuntimeMethod* method)
{
	typedef float (*AudioLowPassFilter_get_cutoffFrequency_mC6A24AC159FC3BF1B52F19B24E04AF0712682433_ftn) (AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE *);
	static AudioLowPassFilter_get_cutoffFrequency_mC6A24AC159FC3BF1B52F19B24E04AF0712682433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_get_cutoffFrequency_mC6A24AC159FC3BF1B52F19B24E04AF0712682433_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::get_cutoffFrequency()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioLowPassFilter::set_cutoffFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_m8F9D885ADC292AF38492FE53A44CDB31D6BD0AF6 (AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioLowPassFilter_set_cutoffFrequency_m8F9D885ADC292AF38492FE53A44CDB31D6BD0AF6_ftn) (AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE *, float);
	static AudioLowPassFilter_set_cutoffFrequency_m8F9D885ADC292AF38492FE53A44CDB31D6BD0AF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_set_cutoffFrequency_m8F9D885ADC292AF38492FE53A44CDB31D6BD0AF6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::set_cutoffFrequency(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m8D251791C6A402B12E93C22F43475DE3033FC8E7 (bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioConfigurationChanged_m8D251791C6A402B12E93C22F43475DE3033FC8E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___deviceWasChanged0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioSettings_InvokeOnAudioConfigurationChanged_m8D251791C6A402B12E93C22F43475DE3033FC8E7_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 3));
		AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * L_0 = ((AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 4));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 5));
		AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * L_2 = ((AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		bool L_3 = ___deviceWasChanged0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 7));
		NullCheck(L_2);
		AudioConfigurationChangeHandler_Invoke_m62D72B397E1DC117C8C92A450D2C86C535A2BF49(L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 7));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 6));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___deviceWasChanged0));

}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mF9399769D5BB18D740774B9E3129958868BD6D9A (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m62D72B397E1DC117C8C92A450D2C86C535A2BF49 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___deviceWasChanged0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceWasChanged0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceWasChanged0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___deviceWasChanged0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioConfigurationChangeHandler_BeginInvoke_mB0B0ACF6281B999FA11037CA130CA3C72BEC7827 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, bool ___deviceWasChanged0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioConfigurationChangeHandler_BeginInvoke_mB0B0ACF6281B999FA11037CA130CA3C72BEC7827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___deviceWasChanged0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_EndInvoke_mBB53599C34E3944D3A1DD71EFD2D73AF105CF830 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mB65EF59C56A49FD68CD3361B2C34E07F89F1244B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, float ___pitch1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_SetPitch_mB65EF59C56A49FD68CD3361B2C34E07F89F1244B_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, float);
	static AudioSource_SetPitch_mB65EF59C56A49FD68CD3361B2C34E07F89F1244B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetPitch_mB65EF59C56A49FD68CD3361B2C34E07F89F1244B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)");
	_il2cpp_icall_func(___source0, ___pitch1);
}
// System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m361C17B583E05D2A5FA0F03BD7CD98D74FBF83AC (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, uint64_t ___delay1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayHelper_m361C17B583E05D2A5FA0F03BD7CD98D74FBF83AC_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, uint64_t);
	static AudioSource_PlayHelper_m361C17B583E05D2A5FA0F03BD7CD98D74FBF83AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_m361C17B583E05D2A5FA0F03BD7CD98D74FBF83AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)");
	_il2cpp_icall_func(___source0, ___delay1);
}
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_mDAEDF5E0C56C665DE62CDF26E7B98149B4A71704 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, float ___volumeScale2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayOneShotHelper_mDAEDF5E0C56C665DE62CDF26E7B98149B4A71704_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *, float);
	static AudioSource_PlayOneShotHelper_mDAEDF5E0C56C665DE62CDF26E7B98149B4A71704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShotHelper_mDAEDF5E0C56C665DE62CDF26E7B98149B4A71704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(___source0, ___clip1, ___volumeScale2);
}
// System.Void UnityEngine.AudioSource::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mD3712B98BC6DBEA9CEEF778CE9CCB8DBA62F47A8 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___stopOneShots0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Stop_mD3712B98BC6DBEA9CEEF778CE9CCB8DBA62F47A8_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, bool);
	static AudioSource_Stop_mD3712B98BC6DBEA9CEEF778CE9CCB8DBA62F47A8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_mD3712B98BC6DBEA9CEEF778CE9CCB8DBA62F47A8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop(System.Boolean)");
	_il2cpp_icall_func(__this, ___stopOneShots0);
}
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, float);
	static AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 97));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 98));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 99));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 100));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 102));
		AudioSource_SetPitch_mB65EF59C56A49FD68CD3361B2C34E07F89F1244B(__this, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 102));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 101));
		return;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 103));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 104));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 105));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 106));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 108));
		AudioSource_PlayHelper_m361C17B583E05D2A5FA0F03BD7CD98D74FBF83AC(__this, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 108));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 107));
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___clip0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 109));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 110));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 111));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 112));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = ___clip0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 114));
		AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41(__this, L_0, (1.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 113));
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, float ___volumeScale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___clip0), (&___volumeScale1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 115));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 116));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 117));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 118));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = ___clip0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 125));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 125));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 119));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 120));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 121));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 126));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral2F43397615CF615962F130AA6604F6D76A60AE5C, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 126));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 122));
		goto IL_0023;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 123));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_3 = ___clip0;
		float L_4 = ___volumeScale1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 127));
		AudioSource_PlayOneShotHelper_mDAEDF5E0C56C665DE62CDF26E7B98149B4A71704(__this, L_3, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 127));
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 124));
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 128));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 129));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 130));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 131));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 133));
		AudioSource_Stop_mD3712B98BC6DBEA9CEEF778CE9CCB8DBA62F47A8(__this, (bool)1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 133));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 132));
		return;
	}
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, bool);
	static AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m5E4C76260D66898EEFEB20E4F42B6249AACB4128 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_playOnAwake_m5E4C76260D66898EEFEB20E4F42B6249AACB4128_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, bool);
	static AudioSource_set_playOnAwake_m5E4C76260D66898EEFEB20E4F42B6249AACB4128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m5E4C76260D66898EEFEB20E4F42B6249AACB4128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_m67B01FA31D125E7A6E3E20A56A781D1E9200D8FD (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_spatialize_m67B01FA31D125E7A6E3E20A56A781D1E9200D8FD_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, bool);
	static AudioSource_set_spatialize_m67B01FA31D125E7A6E3E20A56A781D1E9200D8FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialize_m67B01FA31D125E7A6E3E20A56A781D1E9200D8FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialize(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_m7604AAF1AC01473A29DCDAD1AEC06165504BE832 (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, int32_t ___sampleFrameCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSampleProvider_InvokeSampleFramesAvailable_m7604AAF1AC01473A29DCDAD1AEC06165504BE832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___sampleFrameCount0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioSampleProvider_InvokeSampleFramesAvailable_m7604AAF1AC01473A29DCDAD1AEC06165504BE832_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 223));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 224));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 225));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 226));
		SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * L_0 = __this->get_sampleFramesAvailable_0();
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 227));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 228));
		SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * L_2 = __this->get_sampleFramesAvailable_0();
		int32_t L_3 = ___sampleFrameCount0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 230));
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m52F0148F680B36E04A7F850E617FBEF1CA9809FD(L_2, __this, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 230));
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 229));
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_mC81A014388E535569EF02E3DA6B9831B0FB8A8D4 (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, int32_t ___droppedSampleFrameCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSampleProvider_InvokeSampleFramesOverflow_mC81A014388E535569EF02E3DA6B9831B0FB8A8D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___droppedSampleFrameCount0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AudioSampleProvider_InvokeSampleFramesOverflow_mC81A014388E535569EF02E3DA6B9831B0FB8A8D4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 231));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 232));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 233));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 234));
		SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * L_0 = __this->get_sampleFramesOverflow_1();
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 235));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 236));
		SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * L_2 = __this->get_sampleFramesOverflow_1();
		int32_t L_3 = ___droppedSampleFrameCount0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 238));
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m52F0148F680B36E04A7F850E617FBEF1CA9809FD(L_2, __this, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 238));
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 237));
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
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_mFDA0769E55F136D1B8EC8AA4B40EF43069934EB5 (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m52F0148F680B36E04A7F850E617FBEF1CA9809FD (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
					else
						GenericVirtActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___provider0, ___sampleFrameCount1);
					else
						VirtActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___provider0, ___sampleFrameCount1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___sampleFrameCount1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
					else
						GenericVirtActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
					else
						VirtActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___provider0) - 1), ___sampleFrameCount1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SampleFramesHandler_BeginInvoke_mE516B77CCC50738663D10DDD2D7BDB4391FDFF92 (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * ___provider0, uint32_t ___sampleFrameCount1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleFramesHandler_BeginInvoke_mE516B77CCC50738663D10DDD2D7BDB4391FDFF92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___provider0;
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___sampleFrameCount1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_EndInvoke_mF5305B3BA179CE3C49836790DE3FEB02EB088D28 (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E (String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E_ftn) (String_t*);
	static Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)");
	int32_t retVal = _il2cpp_icall_func(___name0);
	return retVal;
}
// UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * Microphone_StartRecord_m88F707BD42E1494928AA8D2E915062826E9021E8 (int32_t ___deviceID0, bool ___loop1, float ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method)
{
	typedef AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*Microphone_StartRecord_m88F707BD42E1494928AA8D2E915062826E9021E8_ftn) (int32_t, bool, float, int32_t);
	static Microphone_StartRecord_m88F707BD42E1494928AA8D2E915062826E9021E8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_StartRecord_m88F707BD42E1494928AA8D2E915062826E9021E8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)");
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * retVal = _il2cpp_icall_func(___deviceID0, ___loop1, ___lengthSec2, ___frequency3);
	return retVal;
}
// System.Void UnityEngine.Microphone::EndRecord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m6DDB48A30B1A34A6E996A1A1FC194DA184B46733 (int32_t ___deviceID0, const RuntimeMethod* method)
{
	typedef void (*Microphone_EndRecord_m6DDB48A30B1A34A6E996A1A1FC194DA184B46733_ftn) (int32_t);
	static Microphone_EndRecord_m6DDB48A30B1A34A6E996A1A1FC194DA184B46733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_EndRecord_m6DDB48A30B1A34A6E996A1A1FC194DA184B46733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::EndRecord(System.Int32)");
	_il2cpp_icall_func(___deviceID0);
}
// System.Boolean UnityEngine.Microphone::IsRecording(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m70F5B087E69C0077AA9238931776EDE123FCF122 (int32_t ___deviceID0, const RuntimeMethod* method)
{
	typedef bool (*Microphone_IsRecording_m70F5B087E69C0077AA9238931776EDE123FCF122_ftn) (int32_t);
	static Microphone_IsRecording_m70F5B087E69C0077AA9238931776EDE123FCF122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_IsRecording_m70F5B087E69C0077AA9238931776EDE123FCF122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::IsRecording(System.Int32)");
	bool retVal = _il2cpp_icall_func(___deviceID0);
	return retVal;
}
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m4592CD4A6371544156A042579626B9351DCD7E93 (int32_t ___deviceID0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method)
{
	typedef void (*Microphone_GetDeviceCaps_m4592CD4A6371544156A042579626B9351DCD7E93_ftn) (int32_t, int32_t*, int32_t*);
	static Microphone_GetDeviceCaps_m4592CD4A6371544156A042579626B9351DCD7E93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetDeviceCaps_m4592CD4A6371544156A042579626B9351DCD7E93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___deviceID0, ___minFreq1, ___maxFreq2);
}
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047 (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_5 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___deviceName0), (&___loop1), (&___lengthSec2), (&___frequency3));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 134));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 135));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 136));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 137));
		String_t* L_0 = ___deviceName0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 152));
		int32_t L_1 = Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 152));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 138));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 139));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 140));
		String_t* L_4 = ___deviceName0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 153));
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB690CB7A4FD9F948BE23247E7090E398B232E4C1, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 153));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 154));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_6, L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 154));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047_RuntimeMethod_var);
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 141));
		int32_t L_7 = ___lengthSec2;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 142));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 143));
		int32_t L_9 = ___lengthSec2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 155));
		String_t* L_12 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral2E4C82C746C3EC981DE6270E62A307A7F402A3C0, L_11, _stringLiteralE50B0C9845BE0262691292B3BC4739CAB8B57967, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 155));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 156));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_13 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_13, L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 156));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047_RuntimeMethod_var);
	}

IL_0047:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 144));
		int32_t L_14 = ___lengthSec2;
		V_3 = (bool)((((int32_t)L_14) > ((int32_t)((int32_t)3600)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 145));
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 146));
		int32_t L_16 = ___lengthSec2;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 157));
		String_t* L_19 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral6E08EC217803485FD1258E704F681704792FDD20, L_18, _stringLiteralE50B0C9845BE0262691292B3BC4739CAB8B57967, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 157));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 158));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_20 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_20, L_19, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 158));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047_RuntimeMethod_var);
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 147));
		int32_t L_21 = ___frequency3;
		V_4 = (bool)((((int32_t)((((int32_t)L_21) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 148));
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 149));
		int32_t L_23 = ___frequency3;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 159));
		String_t* L_26 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral4CDCA392B9BF22E4728254EA8AABA605D8A96AC3, L_25, _stringLiteral2F6210C7CB4E004CB3F104E1A7B40B6C6B7121FD, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 159));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 160));
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_27 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_27, L_26, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 160));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047_RuntimeMethod_var);
	}

IL_0096:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 150));
		int32_t L_28 = V_0;
		bool L_29 = ___loop1;
		int32_t L_30 = ___lengthSec2;
		int32_t L_31 = ___frequency3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 161));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_32 = Microphone_StartRecord_m88F707BD42E1494928AA8D2E915062826E9021E8(L_28, L_29, (((float)((float)L_30))), L_31, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 161));
		V_5 = L_32;
		goto IL_00a4;
	}

IL_00a4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 151));
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_33 = V_5;
		return L_33;
	}
}
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F (String_t* ___deviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___deviceName0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 162));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 163));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 164));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 165));
		String_t* L_0 = ___deviceName0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 171));
		int32_t L_1 = Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 171));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 166));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 167));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 168));
		goto IL_0019;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 169));
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 172));
		Microphone_EndRecord_m6DDB48A30B1A34A6E996A1A1FC194DA184B46733(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 172));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 170));
		return;
	}
}
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004 (String_t* ___deviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___deviceName0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 173));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 174));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 175));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 176));
		String_t* L_0 = ___deviceName0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 182));
		int32_t L_1 = Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 182));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 177));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 178));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 179));
		V_2 = (bool)0;
		goto IL_001d;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 180));
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 183));
		bool L_5 = Microphone_IsRecording_m70F5B087E69C0077AA9238931776EDE123FCF122(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 183));
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 181));
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___deviceName0), (&___minFreq1), (&___maxFreq2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 184));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 185));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 186));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 187));
		int32_t* L_0 = ___minFreq1;
		*((int32_t*)L_0) = (int32_t)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 188));
		int32_t* L_1 = ___maxFreq2;
		*((int32_t*)L_1) = (int32_t)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 189));
		String_t* L_2 = ___deviceName0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 195));
		int32_t L_3 = Microphone_GetMicrophoneDeviceIDFromName_m08C8735264E4D5FEAED224C8E7957CF5916D9A5E(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 195));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 190));
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 191));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 192));
		goto IL_0021;
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 193));
		int32_t L_6 = V_0;
		int32_t* L_7 = ___minFreq1;
		int32_t* L_8 = ___maxFreq2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 196));
		Microphone_GetDeviceCaps_m4592CD4A6371544156A042579626B9351DCD7E93(L_6, (int32_t*)L_7, (int32_t*)L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 196));
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AudioModule + 194));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
