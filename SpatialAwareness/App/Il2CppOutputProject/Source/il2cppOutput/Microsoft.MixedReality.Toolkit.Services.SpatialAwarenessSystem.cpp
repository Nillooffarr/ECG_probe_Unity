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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct IReadOnlyList_1_t15E8098D3D51BAD90CDA62E1ED51E8C12C78BDFF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCapabilityCheck_t98FB379C0B498E07667EBA7D2E2343B39230EA42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t867A975FDE62708B894D4C6CA5F1A3FD290703C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t15E8098D3D51BAD90CDA62E1ED51E8C12C78BDFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15A40372C3DEF5881D57E3678DCB191E7EFD4D49;
IL2CPP_EXTERN_C String_t* _stringLiteral1D9E7A7A88DEB164AF3999961CA7F9DA9FDE8AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral262040181ABD91FE03796DEF54989E3E24A98E70;
IL2CPP_EXTERN_C String_t* _stringLiteral306293B4D4A8E6238C3F25BB12EF44DF6E94C8B3;
IL2CPP_EXTERN_C String_t* _stringLiteral31E9B874576F2D0D87942763454F70A86D4D5098;
IL2CPP_EXTERN_C String_t* _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028;
IL2CPP_EXTERN_C String_t* _stringLiteral4130D5FB70DC9C7103D422C7D5B450B1C9322DCF;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC673ED184754377C8E5F5B23E3207647473CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral782F128CA5187A629E3BC9BCF873AA572EBA7DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDA44A1A535E187E191EC2EDAFCB4B3B7603C62;
IL2CPP_EXTERN_C String_t* _stringLiteral8EBE04F16378C2EE1BE24877D3AE4AC0F16390E3;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAE7344A900D2304BE25E69430532975B6E7019;
IL2CPP_EXTERN_C String_t* _stringLiteralBC40740BCD5A527584785BD239968C34A8FE3664;
IL2CPP_EXTERN_C String_t* _stringLiteralCD09D3B8B6A3AA26878C801FBFCA450E2A2A1137;
IL2CPP_EXTERN_C String_t* _stringLiteralE7552690592AE63B15254C80AE47DE45D34A901E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDF0328BCA79CF06B6D55C555B676E8A0DA0B0D1;
IL2CPP_EXTERN_C const RuntimeMethod* AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA902F23A6E90B75BBBFB5C93E42B1DA4B49F84FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mF041E720A27B388AE25792199976E16D933215AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_CheckCapability_mD7BC2CEEAEBDF6F661AEB4EE5EED0260DE9130F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_ClearObservations_m833E1C3E7CFC1B43E6F2F5697DC25BF43EF89F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_mCB70EEBF15514FBA4574363DC85119B42A1869A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m8E66D13774253169DFE8A865411D2408896A6288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_Reset_m758DD90C8ACAF570E299978A0DC2BBCDAFBEC6FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_get_Name_m43DB04E8790FE310BC55187C0B3664F067883ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m7C972D4042A372D7BFD53E35F0D7626CF3F4F9BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_set_Name_m2611DD07E9DF233948B4CE9169BA010323C5BC33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IMixedRealityCapabilityCheck_t98FB379C0B498E07667EBA7D2E2343B39230EA42_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IReadOnlyList_1_t15E8098D3D51BAD90CDA62E1ED51E8C12C78BDFF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_CheckCapability_mD7BC2CEEAEBDF6F661AEB4EE5EED0260DE9130F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_ClearObservations_m833E1C3E7CFC1B43E6F2F5697DC25BF43EF89F6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_mCB70EEBF15514FBA4574363DC85119B42A1869A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m8E66D13774253169DFE8A865411D2408896A6288_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Reset_m758DD90C8ACAF570E299978A0DC2BBCDAFBEC6FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_Name_m43DB04E8790FE310BC55187C0B3664F067883ECA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m7C972D4042A372D7BFD53E35F0D7626CF3F4F9BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_set_Name_m2611DD07E9DF233948B4CE9169BA010323C5BC33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988ECMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1BMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2AMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CDMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId;

struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t44B733462DE5B14B2B58B57D985D3CFAFB864580 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
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


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
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


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___isInitialized_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___typeName_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___isEnabled_9)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct MixedRealityCapability_tF03238F01776397C3AAF6C52CD2889416143B722 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_tF03238F01776397C3AAF6C52CD2889416143B722, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct SupportedPlatforms_tC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_tC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t216D85DC8F2789C4360056C5953985C65B834163 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t216D85DC8F2789C4360056C5953985C65B834163, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
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
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
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


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
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

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5 * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076 * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45 * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___postponedActions_15)); }
	inline List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5 * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5 ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5 * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___postponedObjectActions_16)); }
	inline List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076 * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076 ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076 * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45 * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::observerProfile
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___componentType_0)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_observerProfile_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___observerProfile_4)); }
	inline BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * get_observerProfile_4() const { return ___observerProfile_4; }
	inline BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC ** get_address_of_observerProfile_4() { return &___observerProfile_4; }
	inline void set_observerProfile_4(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * value)
	{
		___observerProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90_marshaled_pinvoke
{
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90_marshaled_com
{
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
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


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41  : public BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A  : public BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA * ___dataProviders_21;

public:
	inline static int32_t get_offset_of_dataProviders_21() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A, ___dataProviders_21)); }
	inline List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA * get_dataProviders_21() const { return ___dataProviders_21; }
	inline List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA ** get_address_of_dataProviders_21() { return &___dataProviders_21; }
	inline void set_dataProviders_21(List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA * value)
	{
		___dataProviders_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_21), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___LateUpdatePerfMarker_23;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_22() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_StaticFields, ___UpdatePerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_22() const { return ___UpdatePerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_22() { return &___UpdatePerfMarker_22; }
	inline void set_UpdatePerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_StaticFields, ___LateUpdatePerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_LateUpdatePerfMarker_23() const { return ___LateUpdatePerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_LateUpdatePerfMarker_23() { return &___LateUpdatePerfMarker_23; }
	inline void set_LateUpdatePerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___LateUpdatePerfMarker_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::startupBehavior
	int32_t ___startupBehavior_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::isStationaryObserver
	bool ___isStationaryObserver_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observationExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___observationExtents_7;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observerVolumeType
	int32_t ___observerVolumeType_8;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::updateInterval
	float ___updateInterval_9;

public:
	inline static int32_t get_offset_of_startupBehavior_5() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___startupBehavior_5)); }
	inline int32_t get_startupBehavior_5() const { return ___startupBehavior_5; }
	inline int32_t* get_address_of_startupBehavior_5() { return &___startupBehavior_5; }
	inline void set_startupBehavior_5(int32_t value)
	{
		___startupBehavior_5 = value;
	}

	inline static int32_t get_offset_of_isStationaryObserver_6() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___isStationaryObserver_6)); }
	inline bool get_isStationaryObserver_6() const { return ___isStationaryObserver_6; }
	inline bool* get_address_of_isStationaryObserver_6() { return &___isStationaryObserver_6; }
	inline void set_isStationaryObserver_6(bool value)
	{
		___isStationaryObserver_6 = value;
	}

	inline static int32_t get_offset_of_observationExtents_7() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___observationExtents_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_observationExtents_7() const { return ___observationExtents_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_observationExtents_7() { return &___observationExtents_7; }
	inline void set_observationExtents_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___observationExtents_7 = value;
	}

	inline static int32_t get_offset_of_observerVolumeType_8() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___observerVolumeType_8)); }
	inline int32_t get_observerVolumeType_8() const { return ___observerVolumeType_8; }
	inline int32_t* get_address_of_observerVolumeType_8() { return &___observerVolumeType_8; }
	inline void set_observerVolumeType_8(int32_t value)
	{
		___observerVolumeType_8 = value;
	}

	inline static int32_t get_offset_of_updateInterval_9() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___updateInterval_9)); }
	inline float get_updateInterval_9() const { return ___updateInterval_9; }
	inline float* get_address_of_updateInterval_9() { return &___updateInterval_9; }
	inline void set_updateInterval_9(float value)
	{
		___updateInterval_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::observerConfigurations
	MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* ___observerConfigurations_5;

public:
	inline static int32_t get_offset_of_observerConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7, ___observerConfigurations_5)); }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* get_observerConfigurations_5() const { return ___observerConfigurations_5; }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90** get_address_of_observerConfigurations_5() { return &___observerConfigurations_5; }
	inline void set_observerConfigurations_5(MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* value)
	{
		___observerConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerConfigurations_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4  : public BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spatialAwarenessObjectParent_25;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_26;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___spatialAwarenessSystemProfile_27;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_25() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___spatialAwarenessObjectParent_25)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spatialAwarenessObjectParent_25() const { return ___spatialAwarenessObjectParent_25; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spatialAwarenessObjectParent_25() { return &___spatialAwarenessObjectParent_25; }
	inline void set_spatialAwarenessObjectParent_25(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spatialAwarenessObjectParent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessObjectParent_25), (void*)value);
	}

	inline static int32_t get_offset_of_nextSourceId_26() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___nextSourceId_26)); }
	inline uint32_t get_nextSourceId_26() const { return ___nextSourceId_26; }
	inline uint32_t* get_address_of_nextSourceId_26() { return &___nextSourceId_26; }
	inline void set_nextSourceId_26(uint32_t value)
	{
		___nextSourceId_26 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_27() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___spatialAwarenessSystemProfile_27)); }
	inline MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * get_spatialAwarenessSystemProfile_27() const { return ___spatialAwarenessSystemProfile_27; }
	inline MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 ** get_address_of_spatialAwarenessSystemProfile_27() { return &___spatialAwarenessSystemProfile_27; }
	inline void set_spatialAwarenessSystemProfile_27(MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * value)
	{
		___spatialAwarenessSystemProfile_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemProfile_27), (void*)value);
	}
};

struct MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserversPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserversTPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserverPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserverTPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProvidersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetDataProvidersPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProviderPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetDataProviderPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserversPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserversTPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserverPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserversPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserversTPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserverPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsTPerfMarker_41;

public:
	inline static int32_t get_offset_of_GetObserversPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetObserversPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserversPerfMarker_28() const { return ___GetObserversPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserversPerfMarker_28() { return &___GetObserversPerfMarker_28; }
	inline void set_GetObserversPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserversPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_GetObserversTPerfMarker_29() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetObserversTPerfMarker_29)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserversTPerfMarker_29() const { return ___GetObserversTPerfMarker_29; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserversTPerfMarker_29() { return &___GetObserversTPerfMarker_29; }
	inline void set_GetObserversTPerfMarker_29(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserversTPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_GetObserverPerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetObserverPerfMarker_30)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserverPerfMarker_30() const { return ___GetObserverPerfMarker_30; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserverPerfMarker_30() { return &___GetObserverPerfMarker_30; }
	inline void set_GetObserverPerfMarker_30(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserverPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_GetObserverTPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetObserverTPerfMarker_31)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserverTPerfMarker_31() const { return ___GetObserverTPerfMarker_31; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserverTPerfMarker_31() { return &___GetObserverTPerfMarker_31; }
	inline void set_GetObserverTPerfMarker_31(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserverTPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_GetDataProvidersPerfMarker_32() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetDataProvidersPerfMarker_32)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetDataProvidersPerfMarker_32() const { return ___GetDataProvidersPerfMarker_32; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetDataProvidersPerfMarker_32() { return &___GetDataProvidersPerfMarker_32; }
	inline void set_GetDataProvidersPerfMarker_32(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetDataProvidersPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_GetDataProviderPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetDataProviderPerfMarker_33)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetDataProviderPerfMarker_33() const { return ___GetDataProviderPerfMarker_33; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetDataProviderPerfMarker_33() { return &___GetDataProviderPerfMarker_33; }
	inline void set_GetDataProviderPerfMarker_33(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetDataProviderPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversPerfMarker_34() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ResumeObserversPerfMarker_34)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserversPerfMarker_34() const { return ___ResumeObserversPerfMarker_34; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserversPerfMarker_34() { return &___ResumeObserversPerfMarker_34; }
	inline void set_ResumeObserversPerfMarker_34(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserversPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversTPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ResumeObserversTPerfMarker_35)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserversTPerfMarker_35() const { return ___ResumeObserversTPerfMarker_35; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserversTPerfMarker_35() { return &___ResumeObserversTPerfMarker_35; }
	inline void set_ResumeObserversTPerfMarker_35(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserversTPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_ResumeObserverPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ResumeObserverPerfMarker_36)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserverPerfMarker_36() const { return ___ResumeObserverPerfMarker_36; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserverPerfMarker_36() { return &___ResumeObserverPerfMarker_36; }
	inline void set_ResumeObserverPerfMarker_36(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserverPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___SuspendObserversPerfMarker_37)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserversPerfMarker_37() const { return ___SuspendObserversPerfMarker_37; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserversPerfMarker_37() { return &___SuspendObserversPerfMarker_37; }
	inline void set_SuspendObserversPerfMarker_37(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserversPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversTPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___SuspendObserversTPerfMarker_38)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserversTPerfMarker_38() const { return ___SuspendObserversTPerfMarker_38; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserversTPerfMarker_38() { return &___SuspendObserversTPerfMarker_38; }
	inline void set_SuspendObserversTPerfMarker_38(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserversTPerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_SuspendObserverPerfMarker_39() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___SuspendObserverPerfMarker_39)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserverPerfMarker_39() const { return ___SuspendObserverPerfMarker_39; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserverPerfMarker_39() { return &___SuspendObserverPerfMarker_39; }
	inline void set_SuspendObserverPerfMarker_39(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserverPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ClearObservationsPerfMarker_40)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsPerfMarker_40() const { return ___ClearObservationsPerfMarker_40; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsPerfMarker_40() { return &___ClearObservationsPerfMarker_40; }
	inline void set_ClearObservationsPerfMarker_40(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsTPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ClearObservationsTPerfMarker_41)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsTPerfMarker_41() const { return ___ClearObservationsTPerfMarker_41; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsTPerfMarker_41() { return &___ClearObservationsTPerfMarker_41; }
	inline void set_ClearObservationsTPerfMarker_41(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsTPerfMarker_41 = value;
	}
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
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  m_Items[1];

public:
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
};


// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m4218370447EA8842922D791C0B0FBFDCA192D2AE_gshared (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4721B53B78BC0D175BC1534EFEBC6FD2578D79CA_gshared (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, RuntimeObject * ___dataProviderInstance0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4_inline (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m450143A7902F5C96C5415831149A1F7E9F29A046 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618 (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::get_ObserverConfigurations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE (MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_Priority()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ObserverProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline (SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_RuntimePlatform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA902F23A6E90B75BBBFB5C93E42B1DA4B49F84FE (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A *, Type_t *, String_t*, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m4218370447EA8842922D791C0B0FBFDCA192D2AE_gshared)(__this, ___concreteType0, ___providerName1, ___supportedPlatforms2, ___args3, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m349524E2ECE37A703BC12D77419612C9162EC92A (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mF041E720A27B388AE25792199976E16D933215AE (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4721B53B78BC0D175BC1534EFEBC6FD2578D79CA_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_mDA3A3C27AFF2AB5D9C0CC47869E35C91F2D044B5 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Reset_m5925B54F714A4B147B1E40AC8AB7D5DD6FEE2D7F (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m7B3C5682C43FE55F078723094DB38FCEBF56674E (BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityPlayspace_get_Transform_m0A93BE1DF6F3BB62E81FBC293123CAB4127428B8 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, RuntimeObject* ___registrar0, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___profile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___registrar0), (&___profile1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 1));
	{
		// MixedRealitySpatialAwarenessSystemProfile profile) : this(profile)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 2));
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_0 = ___profile1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 6));
		MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3(__this, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 3));
		// Registrar = registrar;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 4));
		RuntimeObject* L_1 = ___registrar0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 7));
		BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4_inline(__this, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 7));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 5));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___profile0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 8));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 9));
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 10));
		__this->set_U3CNameU3Ek__BackingField_24(_stringLiteral306293B4D4A8E6238C3F25BB12EF44DF6E94C8B3);
		// private GameObject spatialAwarenessObjectParent = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 11));
		__this->set_spatialAwarenessObjectParent_25((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// private uint nextSourceId = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 12));
		__this->set_nextSourceId_26(0);
		// private MixedRealitySpatialAwarenessSystemProfile spatialAwarenessSystemProfile = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 13));
		__this->set_spatialAwarenessSystemProfile_27((MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 *)NULL);
		// MixedRealitySpatialAwarenessSystemProfile profile) : base(profile)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 14));
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_0 = ___profile0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 17));
		IL2CPP_RUNTIME_CLASS_INIT(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m450143A7902F5C96C5415831149A1F7E9F29A046(__this, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 15));
		// { }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 16));
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialAwarenessSystem_get_Name_m43DB04E8790FE310BC55187C0B3664F067883ECA (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_Name_m43DB04E8790FE310BC55187C0B3664F067883ECA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_get_Name_m43DB04E8790FE310BC55187C0B3664F067883ECA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 19));
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 20));
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_set_Name_m2611DD07E9DF233948B4CE9169BA010323C5BC33 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_set_Name_m2611DD07E9DF233948B4CE9169BA010323C5BC33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_set_Name_m2611DD07E9DF233948B4CE9169BA010323C5BC33_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 21));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 22));
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 23));
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySpatialAwarenessSystem_CheckCapability_mD7BC2CEEAEBDF6F661AEB4EE5EED0260DE9130F4 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CheckCapability_mD7BC2CEEAEBDF6F661AEB4EE5EED0260DE9130F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___capability0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_CheckCapability_mD7BC2CEEAEBDF6F661AEB4EE5EED0260DE9130F4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 24));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 25));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 27));
		// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 28));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 42));
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 42));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 43));
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 43));
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 29));
			goto IL_0037;
		}

IL_0010:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 30));
			RuntimeObject* L_2 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 44));
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_2);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 44));
			V_1 = L_3;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 31));
			// if (observer is IMixedRealityCapabilityCheck capabilityChecker &&
			//     capabilityChecker.CheckCapability(capability))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 32));
			RuntimeObject* L_4 = V_1;
			RuntimeObject* L_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityCapabilityCheck_t98FB379C0B498E07667EBA7D2E2343B39230EA42_il2cpp_TypeInfo_var));
			V_2 = L_5;
			if (!L_5)
			{
				goto IL_002b;
			}
		}

IL_0022:
		{
			RuntimeObject* L_6 = V_2;
			int32_t L_7 = ___capability0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 45));
			NullCheck(L_6);
			bool L_8 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityCapabilityCheck::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability) */, IMixedRealityCapabilityCheck_t98FB379C0B498E07667EBA7D2E2343B39230EA42_il2cpp_TypeInfo_var, L_6, L_7);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 45));
			G_B5_0 = ((int32_t)(L_8));
			goto IL_002c;
		}

IL_002b:
		{
			G_B5_0 = 0;
		}

IL_002c:
		{
			V_3 = (bool)G_B5_0;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 33));
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 34));
			// return true;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 35));
			V_4 = (bool)1;
			IL2CPP_LEAVE(0x51, FINALLY_0041);
		}

IL_0036:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 36));
		}

IL_0037:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 37));
			RuntimeObject* L_10 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 46));
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_10);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 46));
			if (L_11)
			{
				goto IL_0010;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 38));
			RuntimeObject* L_12 = V_0;
			if (!L_12)
			{
				goto IL_004b;
			}
		}

IL_0044:
		{
			RuntimeObject* L_13 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 47));
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 47));
		}

IL_004b:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 39));
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 40));
		V_4 = (bool)0;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 41));
		bool L_14 = V_4;
		return L_14;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 48));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 49));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 50));
		// IsInitialized = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 51));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 55));
		VirtActionInvoker1< bool >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsInitialized(System.Boolean) */, __this, (bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 55));
		// InitializeInternal();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 52));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 56));
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 56));
		// base.Initialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 53));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 57));
		BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 57));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 54));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_4 = NULL;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 58));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 59));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 60));
		// MixedRealitySpatialAwarenessSystemProfile profile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 61));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 77));
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 77));
		V_0 = ((MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 *)IsInstClass((RuntimeObject*)L_0, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_il2cpp_TypeInfo_var));
		// if (profile != null && GetDataProviders<IMixedRealitySpatialAwarenessObserver>().Count == 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 62));
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 78));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 78));
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 79));
		RuntimeObject* L_3 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 79));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 80));
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Count() */, IReadOnlyCollection_1_t867A975FDE62708B894D4C6CA5F1A3FD290703C3_il2cpp_TypeInfo_var, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 80));
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 63));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00a7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 64));
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 65));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 66));
		goto IL_0095;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 67));
		// MixedRealitySpatialObserverConfiguration configuration = profile.ObserverConfigurations[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 68));
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 81));
		NullCheck(L_6);
		MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* L_7 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE(L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 81));
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.ObserverProfile };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 69));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, __this);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 82));
		String_t* L_14 = MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 82));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 83));
		uint32_t L_16 = MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 83));
		uint32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 84));
		BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * L_20 = MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 84));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		V_4 = L_19;
		// RegisterDataProvider<IMixedRealitySpatialAwarenessObserver>(
		//     configuration.ComponentType.Type,
		//     configuration.ComponentName,
		//     configuration.RuntimePlatform,
		//     args);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 70));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 85));
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_21 = MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 85));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 86));
		NullCheck(L_21);
		Type_t * L_22 = SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline(L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 86));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 87));
		String_t* L_23 = MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 87));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 88));
		int32_t L_24 = MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 88));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 89));
		BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA902F23A6E90B75BBBFB5C93E42B1DA4B49F84FE(__this, L_22, L_23, L_24, L_25, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA902F23A6E90B75BBBFB5C93E42B1DA4B49F84FE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 89));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 71));
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 72));
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0095:
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 73));
		int32_t L_27 = V_2;
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_28 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 90));
		NullCheck(L_28);
		MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* L_29 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE(L_28, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 90));
		NullCheck(L_29);
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 74));
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0030;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 75));
	}

IL_00a7:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 76));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 91));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 92));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 93));
		// base.Disable();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 94));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 106));
		BaseService_Disable_m349524E2ECE37A703BC12D77419612C9162EC92A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 106));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 95));
		// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 96));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 107));
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 107));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 108));
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 108));
		V_0 = L_1;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 97));
			goto IL_0028;
		}

IL_0017:
		{
			// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 98));
			RuntimeObject* L_2 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 109));
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_2);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 109));
			V_1 = L_3;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 99));
			// UnregisterDataProvider(provider);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 100));
			RuntimeObject* L_4 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 110));
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mF041E720A27B388AE25792199976E16D933215AE(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mF041E720A27B388AE25792199976E16D933215AE_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 110));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 101));
		}

IL_0028:
		{
			// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 102));
			RuntimeObject* L_5 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 111));
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 111));
			if (L_6)
			{
				goto IL_0017;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 103));
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			RuntimeObject* L_8 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 112));
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 112));
		}

IL_003c:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 104));
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 105));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 114));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 115));
		// InitializeInternal();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 116));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 119));
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 119));
		// base.Enable();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 117));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 120));
		BaseDataProviderAccessCoreSystem_Enable_mDA3A3C27AFF2AB5D9C0CC47869E35C91F2D044B5(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 120));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 118));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Reset_m758DD90C8ACAF570E299978A0DC2BBCDAFBEC6FF (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Reset_m758DD90C8ACAF570E299978A0DC2BBCDAFBEC6FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_Reset_m758DD90C8ACAF570E299978A0DC2BBCDAFBEC6FF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 121));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 122));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 123));
		// base.Reset();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 124));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 129));
		BaseDataProviderAccessCoreSystem_Reset_m5925B54F714A4B147B1E40AC8AB7D5DD6FEE2D7F(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 129));
		// Disable();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 125));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 130));
		VirtActionInvoker0::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 130));
		// Initialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 126));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 131));
		VirtActionInvoker0::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 131));
		// Enable();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 127));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 132));
		VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 132));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 128));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 133));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 134));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 135));
		// if (Application.isPlaying)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 136));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 156));
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 156));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 137));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 138));
		// if (spatialAwarenessObjectParent != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 139));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_spatialAwarenessObjectParent_25();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 157));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 157));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 140));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 141));
		// if (Application.isEditor)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 142));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 158));
		bool L_5 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 158));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 143));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 144));
		// Object.DestroyImmediate(spatialAwarenessObjectParent);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 145));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_spatialAwarenessObjectParent_25();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 159));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 159));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 146));
		goto IL_0054;
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 147));
		// spatialAwarenessObjectParent.transform.DetachChildren();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 148));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_spatialAwarenessObjectParent_25();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 160));
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 160));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 161));
		NullCheck(L_9);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 161));
		// Object.Destroy(spatialAwarenessObjectParent);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 149));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_spatialAwarenessObjectParent_25();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 162));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 162));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 150));
	}

IL_0054:
	{
		// spatialAwarenessObjectParent = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 151));
		__this->set_spatialAwarenessObjectParent_25((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 152));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 153));
	}

IL_005d:
	{
		// base.Destroy();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 154));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 163));
		BaseEventSystem_Destroy_m7B3C5682C43FE55F078723094DB38FCEBF56674E(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 163));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 155));
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 164));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 165));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B3_0 = NULL;
	{
		// public GameObject SpatialAwarenessObjectParent => spatialAwarenessObjectParent != null ? spatialAwarenessObjectParent : (spatialAwarenessObjectParent = CreateSpatialAwarenessObjectParent);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 166));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_spatialAwarenessObjectParent_25();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 167));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 167));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 168));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 168));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2;
		V_0 = L_3;
		__this->set_spatialAwarenessObjectParent_25(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		G_B3_0 = L_4;
		goto IL_0025;
	}

IL_001f:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_spatialAwarenessObjectParent_25();
		G_B3_0 = L_5;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 169));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 170));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 171));
		// GameObject newParent = new GameObject("Spatial Awareness System");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 172));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 176));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 176));
		V_0 = L_0;
		// newParent.transform.SetParent(MixedRealityPlayspace.Transform, false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 173));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 177));
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 177));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 178));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = MixedRealityPlayspace_get_Transform_m0A93BE1DF6F3BB62E81FBC293123CAB4127428B8(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 178));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 179));
		NullCheck(L_2);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_2, L_3, (bool)0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 179));
		// return newParent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 174));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		V_1 = L_4;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 175));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CreateSpatialAwarenessObservationParent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_mCB70EEBF15514FBA4574363DC85119B42A1869A5 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_mCB70EEBF15514FBA4574363DC85119B42A1869A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_mCB70EEBF15514FBA4574363DC85119B42A1869A5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 180));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 181));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 182));
		// GameObject objectParent = new GameObject(name);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 183));
		String_t* L_0 = ___name0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 187));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 187));
		V_0 = L_1;
		// objectParent.transform.SetParent(SpatialAwarenessObjectParent.transform, false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 184));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 188));
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 188));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 189));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 189));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 190));
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 190));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 191));
		NullCheck(L_3);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_3, L_5, (bool)0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 191));
		// return objectParent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 185));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		V_1 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 186));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_1;
		return L_7;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GenerateNewSourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m8E66D13774253169DFE8A865411D2408896A6288 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m8E66D13774253169DFE8A865411D2408896A6288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m8E66D13774253169DFE8A865411D2408896A6288_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 192));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 193));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 194));
		// return nextSourceId++;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 195));
		uint32_t L_0 = __this->get_nextSourceId_26();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		__this->set_nextSourceId_26(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		uint32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 196));
		uint32_t L_3 = V_1;
		return L_3;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m7C972D4042A372D7BFD53E35F0D7626CF3F4F9BD (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m7C972D4042A372D7BFD53E35F0D7626CF3F4F9BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m7C972D4042A372D7BFD53E35F0D7626CF3F4F9BD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 197));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 198));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 199));
		// if (spatialAwarenessSystemProfile == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 200));
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_0 = __this->get_spatialAwarenessSystemProfile_27();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 207));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 207));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 201));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 202));
		// spatialAwarenessSystemProfile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 203));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 208));
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_3 = VirtFuncInvoker0< BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 208));
		__this->set_spatialAwarenessSystemProfile_27(((MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 *)IsInstClass((RuntimeObject*)L_3, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_il2cpp_TypeInfo_var)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 204));
	}

IL_0024:
	{
		// return spatialAwarenessSystemProfile;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 205));
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_4 = __this->get_spatialAwarenessSystemProfile_27();
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 206));
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_5 = V_1;
		return L_5;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 209));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 210));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 211));
		// using (GetObserversPerfMarker.Auto())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 212));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_GetObserversPerfMarker_28();
		V_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 217));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 217));
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 213));
		// return GetDataProviders() as IReadOnlyList<IMixedRealitySpatialAwarenessObserver>;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 214));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 218));
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(53 /* System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProviders() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 218));
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IReadOnlyList_1_t15E8098D3D51BAD90CDA62E1ED51E8C12C78BDFF_il2cpp_TypeInfo_var));
		IL2CPP_LEAVE(0x2D, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 215));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 219));
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 219));
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 216));
		RuntimeObject* L_3 = V_2;
		return L_3;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 231));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 232));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 233));
		// using (GetObserverPerfMarker.Auto())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 234));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_GetObserverPerfMarker_30();
		V_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 239));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 239));
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 235));
		// return GetDataProvider(name) as IMixedRealitySpatialAwarenessObserver;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 236));
		String_t* L_2 = ___name0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 240));
		RuntimeObject* L_3 = VirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(55 /* Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProvider(System.String) */, __this, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 240));
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var));
		IL2CPP_LEAVE(0x2E, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 237));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 241));
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 241));
		IL2CPP_END_FINALLY(31)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 238));
		RuntimeObject* L_4 = V_2;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 289));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 290));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 291));
		// using (ResumeObserversPerfMarker.Auto())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 292));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_ResumeObserversPerfMarker_34();
		V_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 307));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 307));
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 293));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 294));
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 295));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 308));
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 308));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 309));
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_2);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 309));
			V_2 = L_3;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			STORE_TRY_ID(methodExecutionContext, 1);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 296));
				goto IL_002f;
			}

IL_001f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 297));
				RuntimeObject* L_4 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 310));
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_4);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 310));
				V_3 = L_5;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 298));
				// observer.Resume();
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 299));
				RuntimeObject* L_6 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 311));
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_6);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 311));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 300));
			}

IL_002f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 301));
				RuntimeObject* L_7 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 312));
				NullCheck(L_7);
				bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 312));
				if (L_8)
				{
					goto IL_001f;
				}
			}

IL_0037:
			{
				IL2CPP_LEAVE(0x44, FINALLY_0039);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 302));
				RuntimeObject* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0043;
				}
			}

IL_003c:
			{
				RuntimeObject* L_10 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 313));
				NullCheck(L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 313));
			}

IL_0043:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 303));
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x44, IL_0044)
		}

IL_0044:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 304));
			IL2CPP_LEAVE(0x56, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 305));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 314));
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 314));
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 306));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 377));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 378));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 379));
		// using (SuspendObserversPerfMarker.Auto())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 380));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_SuspendObserversPerfMarker_37();
		V_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 395));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 395));
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 381));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 382));
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 383));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 396));
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 396));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 397));
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_2);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 397));
			V_2 = L_3;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			STORE_TRY_ID(methodExecutionContext, 1);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 384));
				goto IL_002f;
			}

IL_001f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 385));
				RuntimeObject* L_4 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 398));
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_4);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 398));
				V_3 = L_5;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 386));
				// observer.Suspend();
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 387));
				RuntimeObject* L_6 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 399));
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_6);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 399));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 388));
			}

IL_002f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 389));
				RuntimeObject* L_7 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 400));
				NullCheck(L_7);
				bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 400));
				if (L_8)
				{
					goto IL_001f;
				}
			}

IL_0037:
			{
				IL2CPP_LEAVE(0x44, FINALLY_0039);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 390));
				RuntimeObject* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0043;
				}
			}

IL_003c:
			{
				RuntimeObject* L_10 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 401));
				NullCheck(L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 401));
			}

IL_0043:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 391));
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x44, IL_0044)
		}

IL_0044:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 392));
			IL2CPP_LEAVE(0x56, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 393));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 402));
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 402));
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 394));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ClearObservations_m833E1C3E7CFC1B43E6F2F5697DC25BF43EF89F6F (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ClearObservations_m833E1C3E7CFC1B43E6F2F5697DC25BF43EF89F6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem_ClearObservations_m833E1C3E7CFC1B43E6F2F5697DC25BF43EF89F6F_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 465));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 466));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 467));
		// using (ClearObservationsPerfMarker.Auto())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 468));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_ClearObservationsPerfMarker_40();
		V_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 483));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 483));
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 469));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 470));
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 471));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 484));
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 484));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 485));
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_2);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 485));
			V_2 = L_3;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			STORE_TRY_ID(methodExecutionContext, 1);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 472));
				goto IL_002f;
			}

IL_001f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 473));
				RuntimeObject* L_4 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 486));
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_4);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 486));
				V_3 = L_5;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 474));
				// observer.ClearObservations();
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 475));
				RuntimeObject* L_6 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 487));
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::ClearObservations() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_6);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 487));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 476));
			}

IL_002f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 477));
				RuntimeObject* L_7 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 488));
				NullCheck(L_7);
				bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 488));
				if (L_8)
				{
					goto IL_001f;
				}
			}

IL_0037:
			{
				IL2CPP_LEAVE(0x44, FINALLY_0039);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 478));
				RuntimeObject* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0043;
				}
			}

IL_003c:
			{
				RuntimeObject* L_10 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 489));
				NullCheck(L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 489));
			}

IL_0043:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 479));
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x44, IL_0044)
		}

IL_0044:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 480));
			IL2CPP_LEAVE(0x56, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 481));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 490));
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 490));
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 482));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 505));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 506));
	{
		// private static readonly ProfilerMarker GetObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObservers");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 507));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 521));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral262040181ABD91FE03796DEF54989E3E24A98E70, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 521));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetObserversPerfMarker_28(L_0);
		// private static readonly ProfilerMarker GetObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObservers<T>");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 508));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 522));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral1D9E7A7A88DEB164AF3999961CA7F9DA9FDE8AE6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 522));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetObserversTPerfMarker_29(L_1);
		// private static readonly ProfilerMarker GetObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObserver");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 509));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 523));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteral782F128CA5187A629E3BC9BCF873AA572EBA7DAA, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 523));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetObserverPerfMarker_30(L_2);
		// private static readonly ProfilerMarker GetObserverTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObserver<T>");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 510));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 524));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteral7FDA44A1A535E187E191EC2EDAFCB4B3B7603C62, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 524));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetObserverTPerfMarker_31(L_3);
		// private static readonly ProfilerMarker GetDataProvidersPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetDataProviders");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 511));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 525));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_4), _stringLiteral4130D5FB70DC9C7103D422C7D5B450B1C9322DCF, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 525));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetDataProvidersPerfMarker_32(L_4);
		// private static readonly ProfilerMarker GetDataProviderPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetDataProvider");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 512));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 526));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_5), _stringLiteralE7552690592AE63B15254C80AE47DE45D34A901E, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 526));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetDataProviderPerfMarker_33(L_5);
		// private static readonly ProfilerMarker ResumeObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObservers");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 513));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 527));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_6), _stringLiteral31E9B874576F2D0D87942763454F70A86D4D5098, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 527));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ResumeObserversPerfMarker_34(L_6);
		// private static readonly ProfilerMarker ResumeObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObservers<T>");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 514));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 528));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_7), _stringLiteralBC40740BCD5A527584785BD239968C34A8FE3664, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 528));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ResumeObserversTPerfMarker_35(L_7);
		// private static readonly ProfilerMarker ResumeObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObserver");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 529));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_8), _stringLiteralCD09D3B8B6A3AA26878C801FBFCA450E2A2A1137, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 529));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ResumeObserverPerfMarker_36(L_8);
		// private static readonly ProfilerMarker SuspendObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObservers");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 516));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 530));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_9), _stringLiteral5AC673ED184754377C8E5F5B23E3207647473CC9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 530));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_SuspendObserversPerfMarker_37(L_9);
		// private static readonly ProfilerMarker SuspendObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObservers<T>");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 517));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 531));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_10), _stringLiteral15A40372C3DEF5881D57E3678DCB191E7EFD4D49, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 531));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_SuspendObserversTPerfMarker_38(L_10);
		// private static readonly ProfilerMarker SuspendObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObserver");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 518));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 532));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_11), _stringLiteral8EBE04F16378C2EE1BE24877D3AE4AC0F16390E3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 532));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_SuspendObserverPerfMarker_39(L_11);
		// private static readonly ProfilerMarker ClearObservationsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ClearObservations");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 519));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 533));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_12), _stringLiteralAEAE7344A900D2304BE25E69430532975B6E7019, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 533));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ClearObservationsPerfMarker_40(L_12);
		// private static readonly ProfilerMarker ClearObservationsTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ClearObservations<T>");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 520));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 534));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_13), _stringLiteralFDF0328BCA79CF06B6D55C555B676E8A0DA0B0D1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem + 534));
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ClearObservationsTPerfMarker_41(L_13);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4_inline (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 3461));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 3462));
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 3463));
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988ECMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18898));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18899));
	{
		// public string ComponentName => componentName;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18900));
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18901));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18902));
	{
		// public uint Priority => priority;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18903));
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18910));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18911));
	{
		// public BaseSpatialAwarenessObserverProfile ObserverProfile => observerProfile;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18912));
		BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * L_0 = __this->get_observerProfile_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18895));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18896));
	{
		// public SystemType ComponentType => componentType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18897));
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_0 = __this->get_componentType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline (SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CDMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 10200));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 10201));
	{
		// get => type;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 10202));
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1BMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18905));
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 18906));
		int32_t L_0 = __this->get_runtimePlatform_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 43));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 44));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 45));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 46));
		intptr_t L_0 = __this->get_m_Ptr_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 48));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 48));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 47));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 56));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 57));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 58));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 59));
		intptr_t L_0 = __this->get_m_Ptr_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 61));
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 61));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 60));
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2AMicrosoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 25));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 26));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 27));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 28));
		String_t* L_0 = ___name0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 30));
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 30));
		__this->set_m_Ptr_0((intptr_t)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 29));
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320Microsoft_MixedReality_Toolkit_Services_SpatialAwarenessSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___markerPtr0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 49));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 50));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 51));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 52));
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 53));
		intptr_t L_1 = ___markerPtr0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 55));
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 55));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 54));
		return;
	}
}
