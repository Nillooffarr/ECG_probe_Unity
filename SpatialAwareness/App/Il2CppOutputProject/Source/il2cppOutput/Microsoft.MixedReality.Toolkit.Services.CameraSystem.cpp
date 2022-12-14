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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider
struct IMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45;
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
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t727966C630EC7682E325E19F53085E19368F1228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF93BED2B5E8E0E78919EFA6B63CA687A22B02D34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityService_t786A23BE7C43913C011325FB43AED3E720F6E9FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t6A5BCAA14664510F2CDB134F17E06AF89744B832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tC44CA129E29E07BEBBF6FEA4F470DD53795CE100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4;
IL2CPP_EXTERN_C String_t* _stringLiteral9FAB7F7797F50BE92F95BF3ABEA86CE6B7AD33B5;
IL2CPP_EXTERN_C String_t* _stringLiteralAE253846825DF5F393050BB52D03647D0CFC35E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC3408C882E16204A62507D6D9A0DCA6D757FB4EE;
IL2CPP_EXTERN_C String_t* _stringLiteralCD496BC0032F2FFF9C94404087C768C474C3BF2B;
IL2CPP_EXTERN_C String_t* _stringLiteralD47B37C1B233818E5C869621EE522D30507C5050;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D160052E5D4840C43A5454F2745C041FF0C3BD;
IL2CPP_EXTERN_C const RuntimeMethod* AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_m8E77FB88564466CA10C4DCB067A45A25D7BCC802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_m8DEB3A0C8E3F44D12224E5BD4BB5F225B1393679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_mFFC0735195F81D18B807C49A747E0F8DA3A50955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_mA196748F73D52E7E5E55B482A4D741D15D177375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m5BC046DB871960BF763F6FC898C7E247A6BE4AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9B964BEDCCE76A615B204F093CD4FC608305CEF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m7E4FFDB04F3844CA5FECBBD5E3F4BE58FF54F586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m922AA67DB2718C351E46724FEB76A8327A89A554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB01B9E3121210440F1E32FEBD2F0C3B5F451AB52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m15234DD022204C5287771EDAB3581CD80F659432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE5FFDA5B2A6E63F043C3BC5749460E7C9ADE059D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m0A32ACF0E48E4B4332F51063128ECB9B3BF455BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_OpaqueQualityLevel_mA6C0F2B6E4FD975D34D728A080D428CC2C94DF74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraProfile_get_TransparentQualityLevel_m669A0995474964ECE3ED682A0939723745152E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSettingsConfiguration_get_ComponentType_m7C301B06BDC5C7445081C2B96BD0B54D6EFDF824_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSettingsConfiguration_get_Priority_mA35C96F06B253940081626251444C2915EED84BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m5A9584C79AEBBA077C3BBD19CB28FC770502042B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m26B6699FB073FA27409E09D488AEC1E42577CF6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m689135C3EC03F91C7F4319CF370139BBF23DA123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E41A0B0D74665F6D1699BE50D0272885C35F508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_Destroy_m76C097516BD76B1A4E3BB16C5B45E0FC61EB628C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_Disable_mF96557750424E9B56AD930D619EB831C095358EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_Enable_m100CD38A1DC0D104A8833CE455E95D8886A608E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_Initialize_m93751AC0194FBFD89808D3BE99F8003571D390F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_m92D56194230B46A62FCAA57535132D77A600666F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mC052C0B2D08D337ADDD58FF18CE611939106C92B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_Update_m29A3E09735A4A9ABF2D3CFE2FC849A1A8D9313B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem__cctor_m7FEACE645D27FEB30F9C89261FCB4D04F81B6DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem__ctor_m3082E707FF2D5F6F5D8F4DF76469C43C4D8192FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem__ctor_mC6518EF6EBC01420EACAFC125150DEFFC6C19FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_get_Name_m752166DC716C89B9B062D2ED60D6FD1812DAD266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_get_SourceId_mB2ECB55BE76F9471BC5510CD00B05151E46D179C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityCameraSystem_set_Name_m8213EF8E3288194D936AAADE6C98748CF3503502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_1_tF93BED2B5E8E0E78919EFA6B63CA687A22B02D34_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IReadOnlyList_1_tC44CA129E29E07BEBBF6FEA4F470DD53795CE100_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m5BC046DB871960BF763F6FC898C7E247A6BE4AC7Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9B964BEDCCE76A615B204F093CD4FC608305CEF0Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m7E4FFDB04F3844CA5FECBBD5E3F4BE58FF54F586Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m922AA67DB2718C351E46724FEB76A8327A89A554Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB01B9E3121210440F1E32FEBD2F0C3B5F451AB52Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m15234DD022204C5287771EDAB3581CD80F659432Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE5FFDA5B2A6E63F043C3BC5749460E7C9ADE059DMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m0A32ACF0E48E4B4332F51063128ECB9B3BF455BCMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_mA6C0F2B6E4FD975D34D728A080D428CC2C94DF74Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m669A0995474964ECE3ED682A0939723745152E55Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEEMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSettingsConfiguration_get_ComponentType_m7C301B06BDC5C7445081C2B96BD0B54D6EFDF824Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_mA35C96F06B253940081626251444C2915EED84BCMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m5A9584C79AEBBA077C3BBD19CB28FC770502042BMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m26B6699FB073FA27409E09D488AEC1E42577CF6DMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m689135C3EC03F91C7F4319CF370139BBF23DA123_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E41A0B0D74665F6D1699BE50D0272885C35F508_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Destroy_m76C097516BD76B1A4E3BB16C5B45E0FC61EB628C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Disable_mF96557750424E9B56AD930D619EB831C095358EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Enable_m100CD38A1DC0D104A8833CE455E95D8886A608E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Initialize_m93751AC0194FBFD89808D3BE99F8003571D390F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_m92D56194230B46A62FCAA57535132D77A600666F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mC052C0B2D08D337ADDD58FF18CE611939106C92B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Update_m29A3E09735A4A9ABF2D3CFE2FC849A1A8D9313B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__cctor_m7FEACE645D27FEB30F9C89261FCB4D04F81B6DEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__ctor_m3082E707FF2D5F6F5D8F4DF76469C43C4D8192FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__ctor_mC6518EF6EBC01420EACAFC125150DEFFC6C19FBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_Name_m752166DC716C89B9B062D2ED60D6FD1812DAD266_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_SourceId_mB2ECB55BE76F9471BC5510CD00B05151E46D179C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_set_Name_m8213EF8E3288194D936AAADE6C98748CF3503502_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2AMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CDMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId;

struct MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD3CF92E0868DD0329ACA352B369876E918FCD1F1 
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


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct DisplayType_tEA2F17D929126275BA8460F2F52EACD5CE471159 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_tEA2F17D929126275BA8460F2F52EACD5CE471159, ___value___2)); }
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


// UnityEngine.CameraClearFlags
struct CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::settingsProfile
	BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * ___settingsProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746, ___componentType_0)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_settingsProfile_4() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746, ___settingsProfile_4)); }
	inline BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * get_settingsProfile_4() const { return ___settingsProfile_4; }
	inline BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F ** get_address_of_settingsProfile_4() { return &___settingsProfile_4; }
	inline void set_settingsProfile_4(BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * value)
	{
		___settingsProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746_marshaled_pinvoke
{
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * ___settingsProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746_marshaled_com
{
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * ___settingsProfile_4;
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


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::settingsConfigurations
	MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48* ___settingsConfigurations_5;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneOpaqueDisplay
	float ___nearClipPlaneOpaqueDisplay_6;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneOpaqueDisplay
	float ___farClipPlaneOpaqueDisplay_7;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsOpaqueDisplay
	int32_t ___cameraClearFlagsOpaqueDisplay_8;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorOpaqueDisplay
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColorOpaqueDisplay_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::opaqueQualityLevel
	int32_t ___opaqueQualityLevel_10;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneTransparentDisplay
	float ___nearClipPlaneTransparentDisplay_11;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneTransparentDisplay
	float ___farClipPlaneTransparentDisplay_12;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsTransparentDisplay
	int32_t ___cameraClearFlagsTransparentDisplay_13;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorTransparentDisplay
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColorTransparentDisplay_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::transparentQualityLevel
	int32_t ___transparentQualityLevel_15;

public:
	inline static int32_t get_offset_of_settingsConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___settingsConfigurations_5)); }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48* get_settingsConfigurations_5() const { return ___settingsConfigurations_5; }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48** get_address_of_settingsConfigurations_5() { return &___settingsConfigurations_5; }
	inline void set_settingsConfigurations_5(MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48* value)
	{
		___settingsConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_nearClipPlaneOpaqueDisplay_6() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___nearClipPlaneOpaqueDisplay_6)); }
	inline float get_nearClipPlaneOpaqueDisplay_6() const { return ___nearClipPlaneOpaqueDisplay_6; }
	inline float* get_address_of_nearClipPlaneOpaqueDisplay_6() { return &___nearClipPlaneOpaqueDisplay_6; }
	inline void set_nearClipPlaneOpaqueDisplay_6(float value)
	{
		___nearClipPlaneOpaqueDisplay_6 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneOpaqueDisplay_7() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___farClipPlaneOpaqueDisplay_7)); }
	inline float get_farClipPlaneOpaqueDisplay_7() const { return ___farClipPlaneOpaqueDisplay_7; }
	inline float* get_address_of_farClipPlaneOpaqueDisplay_7() { return &___farClipPlaneOpaqueDisplay_7; }
	inline void set_farClipPlaneOpaqueDisplay_7(float value)
	{
		___farClipPlaneOpaqueDisplay_7 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsOpaqueDisplay_8() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___cameraClearFlagsOpaqueDisplay_8)); }
	inline int32_t get_cameraClearFlagsOpaqueDisplay_8() const { return ___cameraClearFlagsOpaqueDisplay_8; }
	inline int32_t* get_address_of_cameraClearFlagsOpaqueDisplay_8() { return &___cameraClearFlagsOpaqueDisplay_8; }
	inline void set_cameraClearFlagsOpaqueDisplay_8(int32_t value)
	{
		___cameraClearFlagsOpaqueDisplay_8 = value;
	}

	inline static int32_t get_offset_of_backgroundColorOpaqueDisplay_9() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___backgroundColorOpaqueDisplay_9)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColorOpaqueDisplay_9() const { return ___backgroundColorOpaqueDisplay_9; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColorOpaqueDisplay_9() { return &___backgroundColorOpaqueDisplay_9; }
	inline void set_backgroundColorOpaqueDisplay_9(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColorOpaqueDisplay_9 = value;
	}

	inline static int32_t get_offset_of_opaqueQualityLevel_10() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___opaqueQualityLevel_10)); }
	inline int32_t get_opaqueQualityLevel_10() const { return ___opaqueQualityLevel_10; }
	inline int32_t* get_address_of_opaqueQualityLevel_10() { return &___opaqueQualityLevel_10; }
	inline void set_opaqueQualityLevel_10(int32_t value)
	{
		___opaqueQualityLevel_10 = value;
	}

	inline static int32_t get_offset_of_nearClipPlaneTransparentDisplay_11() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___nearClipPlaneTransparentDisplay_11)); }
	inline float get_nearClipPlaneTransparentDisplay_11() const { return ___nearClipPlaneTransparentDisplay_11; }
	inline float* get_address_of_nearClipPlaneTransparentDisplay_11() { return &___nearClipPlaneTransparentDisplay_11; }
	inline void set_nearClipPlaneTransparentDisplay_11(float value)
	{
		___nearClipPlaneTransparentDisplay_11 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneTransparentDisplay_12() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___farClipPlaneTransparentDisplay_12)); }
	inline float get_farClipPlaneTransparentDisplay_12() const { return ___farClipPlaneTransparentDisplay_12; }
	inline float* get_address_of_farClipPlaneTransparentDisplay_12() { return &___farClipPlaneTransparentDisplay_12; }
	inline void set_farClipPlaneTransparentDisplay_12(float value)
	{
		___farClipPlaneTransparentDisplay_12 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsTransparentDisplay_13() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___cameraClearFlagsTransparentDisplay_13)); }
	inline int32_t get_cameraClearFlagsTransparentDisplay_13() const { return ___cameraClearFlagsTransparentDisplay_13; }
	inline int32_t* get_address_of_cameraClearFlagsTransparentDisplay_13() { return &___cameraClearFlagsTransparentDisplay_13; }
	inline void set_cameraClearFlagsTransparentDisplay_13(int32_t value)
	{
		___cameraClearFlagsTransparentDisplay_13 = value;
	}

	inline static int32_t get_offset_of_backgroundColorTransparentDisplay_14() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___backgroundColorTransparentDisplay_14)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColorTransparentDisplay_14() const { return ___backgroundColorTransparentDisplay_14; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColorTransparentDisplay_14() { return &___backgroundColorTransparentDisplay_14; }
	inline void set_backgroundColorTransparentDisplay_14(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColorTransparentDisplay_14 = value;
	}

	inline static int32_t get_offset_of_transparentQualityLevel_15() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258, ___transparentQualityLevel_15)); }
	inline int32_t get_transparentQualityLevel_15() const { return ___transparentQualityLevel_15; }
	inline int32_t* get_address_of_transparentQualityLevel_15() { return &___transparentQualityLevel_15; }
	inline void set_transparentQualityLevel_15(int32_t value)
	{
		___transparentQualityLevel_15 = value;
	}
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B  : public BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_25;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_29;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B, ___U3CSourceIdU3Ek__BackingField_25)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_25() const { return ___U3CSourceIdU3Ek__BackingField_25; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_25() { return &___U3CSourceIdU3Ek__BackingField_25; }
	inline void set_U3CSourceIdU3Ek__BackingField_25(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B, ___U3CSourceNameU3Ek__BackingField_26)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_26() const { return ___U3CSourceNameU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_26() { return &___U3CSourceNameU3Ek__BackingField_26; }
	inline void set_U3CSourceNameU3Ek__BackingField_26(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_27() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B, ___currentDisplayType_27)); }
	inline int32_t get_currentDisplayType_27() const { return ___currentDisplayType_27; }
	inline int32_t* get_address_of_currentDisplayType_27() { return &___currentDisplayType_27; }
	inline void set_currentDisplayType_27(int32_t value)
	{
		___currentDisplayType_27 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_28() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B, ___cameraOpaqueLastFrame_28)); }
	inline bool get_cameraOpaqueLastFrame_28() const { return ___cameraOpaqueLastFrame_28; }
	inline bool* get_address_of_cameraOpaqueLastFrame_28() { return &___cameraOpaqueLastFrame_28; }
	inline void set_cameraOpaqueLastFrame_28(bool value)
	{
		___cameraOpaqueLastFrame_28 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_29() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B, ___useFallbackBehavior_29)); }
	inline bool get_useFallbackBehavior_29() const { return ___useFallbackBehavior_29; }
	inline bool* get_address_of_useFallbackBehavior_29() { return &___useFallbackBehavior_29; }
	inline void set_useFallbackBehavior_29(bool value)
	{
		___useFallbackBehavior_29 = value;
	}
};

struct MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplySettingsForOpaquePerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplySettingsForTransparentPerfMarker_32;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields, ___UpdatePerfMarker_30)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_30() const { return ___UpdatePerfMarker_30; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_30() { return &___UpdatePerfMarker_30; }
	inline void set_UpdatePerfMarker_30(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields, ___ApplySettingsForOpaquePerfMarker_31)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplySettingsForOpaquePerfMarker_31() const { return ___ApplySettingsForOpaquePerfMarker_31; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplySettingsForOpaquePerfMarker_31() { return &___ApplySettingsForOpaquePerfMarker_31; }
	inline void set_ApplySettingsForOpaquePerfMarker_31(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplySettingsForOpaquePerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_32() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields, ___ApplySettingsForTransparentPerfMarker_32)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplySettingsForTransparentPerfMarker_32() const { return ___ApplySettingsForTransparentPerfMarker_32; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplySettingsForTransparentPerfMarker_32() { return &___ApplySettingsForTransparentPerfMarker_32; }
	inline void set_ApplySettingsForTransparentPerfMarker_32(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplySettingsForTransparentPerfMarker_32 = value;
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
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746  m_Items[1];

public:
	inline MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
};


// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m4218370447EA8842922D791C0B0FBFDCA192D2AE_gshared (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4721B53B78BC0D175BC1534EFEBC6FD2578D79CA_gshared (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, RuntimeObject * ___dataProviderInstance0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_mC6518EF6EBC01420EACAFC125150DEFFC6C19FBE (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4_inline (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m450143A7902F5C96C5415831149A1F7E9F29A046 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.HolographicSettings::get_IsDisplayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618 (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_SettingsConfigurations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48* MixedRealityCameraProfile_get_SettingsConfigurations_mC085818E1EE809BA4C3CE7C0AD7DDB9243A7BE15 (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * MixedRealityCameraSettingsConfiguration_get_ComponentType_m7C301B06BDC5C7445081C2B96BD0B54D6EFDF824_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline (SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEE_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_Priority()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_mA35C96F06B253940081626251444C2915EED84BC_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_SettingsProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m26B6699FB073FA27409E09D488AEC1E42577CF6D_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_RuntimePlatform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m5A9584C79AEBBA077C3BBD19CB28FC770502042B_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_mFFC0735195F81D18B807C49A747E0F8DA3A50955 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args3, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A *, Type_t *, String_t*, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m4218370447EA8842922D791C0B0FBFDCA192D2AE_gshared)(__this, ___concreteType0, ___providerName1, ___supportedPlatforms2, ___args3, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m689135C3EC03F91C7F4319CF370139BBF23DA123 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E41A0B0D74665F6D1699BE50D0272885C35F508 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_m76BC03B7B81EFF09E7A4A1AF1BCF8E3E43D12C9C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Rotation_m958DC4D6EF5442D262FF91207C7055DBBAAE1E4C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_mDA3A3C27AFF2AB5D9C0CC47869E35C91F2D044B5 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m349524E2ECE37A703BC12D77419612C9162EC92A (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_mA196748F73D52E7E5E55B482A4D741D15D177375 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4721B53B78BC0D175BC1534EFEBC6FD2578D79CA_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m7B3C5682C43FE55F078723094DB38FCEBF56674E (BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2 * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Update_m75C49080A1B3FF5D92BF8423D6060BCF7A5B92AF (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m7E4FFDB04F3844CA5FECBBD5E3F4BE58FF54F586_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE5FFDA5B2A6E63F043C3BC5749460E7C9ADE059D_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB01B9E3121210440F1E32FEBD2F0C3B5F451AB52_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorOpaqueDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m5BC046DB871960BF763F6FC898C7E247A6BE4AC7_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_OpaqueQualityLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_mA6C0F2B6E4FD975D34D728A080D428CC2C94DF74_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551 (int32_t ___index0, bool ___applyExpensiveChanges1, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m922AA67DB2718C351E46724FEB76A8327A89A554_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9B964BEDCCE76A615B204F093CD4FC608305CEF0_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m0A32ACF0E48E4B4332F51063128ECB9B3BF455BC_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneTransparentDisplay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m15234DD022204C5287771EDAB3581CD80F659432_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_TransparentQualityLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m669A0995474964ECE3ED682A0939723745152E55_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86_inline (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC (int32_t ___value0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m3082E707FF2D5F6F5D8F4DF76469C43C4D8192FC (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__ctor_m3082E707FF2D5F6F5D8F4DF76469C43C4D8192FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___registrar0), (&___profile1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem__ctor_m3082E707FF2D5F6F5D8F4DF76469C43C4D8192FC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 1));
	{
		// BaseMixedRealityProfile profile = null) : this(profile)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 2));
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_0 = ___profile1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 6));
		MixedRealityCameraSystem__ctor_mC6518EF6EBC01420EACAFC125150DEFFC6C19FBE(__this, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 3));
		// Registrar = registrar;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 4));
		RuntimeObject* L_1 = ___registrar0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 7));
		BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4_inline(__this, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 7));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 5));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_mC6518EF6EBC01420EACAFC125150DEFFC6C19FBE (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__ctor_mC6518EF6EBC01420EACAFC125150DEFFC6C19FBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___profile0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem__ctor_mC6518EF6EBC01420EACAFC125150DEFFC6C19FBE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 8));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 9));
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 10));
		__this->set_U3CNameU3Ek__BackingField_24(_stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4);
		// public uint SourceId { get; } = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 11));
		__this->set_U3CSourceIdU3Ek__BackingField_25(0);
		// public string SourceName { get; } = "Mixed Reality Camera System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 12));
		__this->set_U3CSourceNameU3Ek__BackingField_26(_stringLiteral44E408FBB792F45EB849669B80782DAB5C91FDE4);
		// private bool cameraOpaqueLastFrame = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 13));
		__this->set_cameraOpaqueLastFrame_28((bool)0);
		// private bool useFallbackBehavior = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 14));
		__this->set_useFallbackBehavior_29((bool)1);
		// BaseMixedRealityProfile profile = null) : base(profile)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 15));
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_0 = ___profile0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 18));
		IL2CPP_RUNTIME_CLASS_INIT(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m450143A7902F5C96C5415831149A1F7E9F29A046(__this, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 16));
		// { }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 17));
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_Name_m752166DC716C89B9B062D2ED60D6FD1812DAD266 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_Name_m752166DC716C89B9B062D2ED60D6FD1812DAD266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_get_Name_m752166DC716C89B9B062D2ED60D6FD1812DAD266_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 19));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 20));
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 21));
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_set_Name_m8213EF8E3288194D936AAADE6C98748CF3503502 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_set_Name_m8213EF8E3288194D936AAADE6C98748CF3503502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_set_Name_m8213EF8E3288194D936AAADE6C98748CF3503502_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 22));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 23));
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 24));
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 25));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 26));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 27));
		// currentDisplayType = DisplayType.Opaque;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 28));
		__this->set_currentDisplayType_27(0);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> dataProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 29));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 49));
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_m8DEB3A0C8E3F44D12224E5BD4BB5F225B1393679_RuntimeMethod_var, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 49));
		V_0 = L_0;
		// if (dataProviders.Count > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 30));
		RuntimeObject* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 50));
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t6A5BCAA14664510F2CDB134F17E06AF89744B832_il2cpp_TypeInfo_var, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 50));
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 31));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 32));
		// if (!dataProviders[0].IsOpaque)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 33));
		RuntimeObject* L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 51));
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tC44CA129E29E07BEBBF6FEA4F470DD53795CE100_il2cpp_TypeInfo_var, L_4, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 51));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 52));
		NullCheck(L_5);
		bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::get_IsOpaque() */, IMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_il2cpp_TypeInfo_var, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 52));
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 34));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 35));
		// currentDisplayType = DisplayType.Transparent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 36));
		__this->set_currentDisplayType_27(1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 37));
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 38));
		goto IL_005e;
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 39));
		// Debug.LogWarning("Windows Mixed Reality specific camera code has been moved into Windows Mixed Reality Camera Settings. Please ensure you have this added under your Camera System's Settings Providers, as this deprecated code path may be removed in a future update.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 40));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 53));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralC3408C882E16204A62507D6D9A0DCA6D757FB4EE, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 53));
		// if (!UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 41));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 54));
		bool L_8 = HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 54));
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 42));
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 43));
		// currentDisplayType = DisplayType.Transparent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 44));
		__this->set_currentDisplayType_27(1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 45));
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 46));
	}

IL_005e:
	{
		// return currentDisplayType == DisplayType.Opaque;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 47));
		int32_t L_10 = __this->get_currentDisplayType_27();
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_006b;
	}

IL_006b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 48));
		bool L_11 = V_4;
		return L_11;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSystem_get_SourceId_mB2ECB55BE76F9471BC5510CD00B05151E46D179C (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_SourceId_mB2ECB55BE76F9471BC5510CD00B05151E46D179C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_get_SourceId_mB2ECB55BE76F9471BC5510CD00B05151E46D179C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 55));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 56));
	{
		// public uint SourceId { get; } = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 57));
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_25();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 58));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 59));
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 60));
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_26();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 61));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 62));
	{
		// public MixedRealityCameraProfile CameraProfile => ConfigurationProfile as MixedRealityCameraProfile;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 63));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 64));
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 64));
		return ((MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Initialize_m93751AC0194FBFD89808D3BE99F8003571D390F1 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Initialize_m93751AC0194FBFD89808D3BE99F8003571D390F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3), (&V_4), (&V_5), (&V_8));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_Initialize_m93751AC0194FBFD89808D3BE99F8003571D390F1_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 65));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 66));
	int32_t G_B3_0 = 0;
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * G_B7_0 = NULL;
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * G_B6_0 = NULL;
	Type_t * G_B8_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 67));
		// base.Initialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 68));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 121));
		BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 121));
		// MixedRealityCameraProfile profile = ConfigurationProfile as MixedRealityCameraProfile;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 69));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 122));
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 122));
		V_0 = ((MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258_il2cpp_TypeInfo_var));
		// var cameraSettingProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 70));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 123));
		RuntimeObject* L_1 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_m8DEB3A0C8E3F44D12224E5BD4BB5F225B1393679_RuntimeMethod_var, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 123));
		V_1 = L_1;
		// if ((cameraSettingProviders.Count == 0) && (profile != null))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 71));
		RuntimeObject* L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 124));
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t6A5BCAA14664510F2CDB134F17E06AF89744B832_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 124));
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 125));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 125));
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 72));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0104;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 73));
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 74));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 75));
		goto IL_00ef;
	}

IL_003c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 76));
		// MixedRealityCameraSettingsConfiguration configuration = profile.SettingsConfigurations[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 77));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 126));
		NullCheck(L_7);
		MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48* L_8 = MixedRealityCameraProfile_get_SettingsConfigurations_mC085818E1EE809BA4C3CE7C0AD7DDB9243A7BE15(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 126));
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746  L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// if (configuration.ComponentType?.Type == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 78));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 127));
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_12 = MixedRealityCameraSettingsConfiguration_get_ComponentType_m7C301B06BDC5C7445081C2B96BD0B54D6EFDF824_inline((MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 127));
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_13 = L_12;
		G_B6_0 = L_13;
		if (L_13)
		{
			G_B7_0 = L_13;
			goto IL_0059;
		}
	}
	{
		G_B8_0 = ((Type_t *)(NULL));
		goto IL_005e;
	}

IL_0059:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 128));
		NullCheck(G_B7_0);
		Type_t * L_14 = SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline(G_B7_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 128));
		G_B8_0 = L_14;
	}

IL_005e:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 129));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_15 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(G_B8_0, (Type_t *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 129));
		V_6 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 79));
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 80));
		// continue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 81));
		goto IL_00eb;
	}

IL_006d:
	{
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.SettingsProfile };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 82));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, __this);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 130));
		String_t* L_20 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEE_inline((MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 130));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_19;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 131));
		uint32_t L_22 = MixedRealityCameraSettingsConfiguration_get_Priority_mA35C96F06B253940081626251444C2915EED84BC_inline((MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 131));
		uint32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_24);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_21;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 132));
		BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * L_26 = MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m26B6699FB073FA27409E09D488AEC1E42577CF6D_inline((MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 132));
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		V_5 = L_25;
		// if (RegisterDataProvider<IMixedRealityCameraSettingsProvider>(
		//     configuration.ComponentType.Type,
		//     configuration.ComponentName,
		//     configuration.RuntimePlatform,
		//     args))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 83));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 133));
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_27 = MixedRealityCameraSettingsConfiguration_get_ComponentType_m7C301B06BDC5C7445081C2B96BD0B54D6EFDF824_inline((MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 133));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 134));
		NullCheck(L_27);
		Type_t * L_28 = SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline(L_27, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 134));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 135));
		String_t* L_29 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEE_inline((MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 135));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 136));
		int32_t L_30 = MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m5A9584C79AEBBA077C3BBD19CB28FC770502042B_inline((MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 136));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 137));
		bool L_32 = BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_mFFC0735195F81D18B807C49A747E0F8DA3A50955(__this, L_28, L_29, L_30, L_31, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_mFFC0735195F81D18B807C49A747E0F8DA3A50955_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 137));
		V_7 = L_32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 84));
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00ea;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 85));
		// IMixedRealityCameraSettingsProvider provider = GetDataProvider<IMixedRealityCameraSettingsProvider>(configuration.ComponentName);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 86));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 138));
		String_t* L_34 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEE_inline((MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 138));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 139));
		RuntimeObject* L_35 = GenericVirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_m8E77FB88564466CA10C4DCB067A45A25D7BCC802_RuntimeMethod_var, __this, L_34);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 139));
		V_8 = L_35;
		// provider?.ApplyConfiguration();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 87));
		RuntimeObject* L_36 = V_8;
		if (L_36)
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00e2;
	}

IL_00da:
	{
		RuntimeObject* L_37 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 140));
		NullCheck(L_37);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::ApplyConfiguration() */, IMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_il2cpp_TypeInfo_var, L_37);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 140));
	}

IL_00e2:
	{
		// useFallbackBehavior = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 88));
		__this->set_useFallbackBehavior_29((bool)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 89));
	}

IL_00ea:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 90));
	}

IL_00eb:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 91));
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00ef:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 92));
		int32_t L_39 = V_3;
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_40 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 141));
		NullCheck(L_40);
		MixedRealityCameraSettingsConfigurationU5BU5D_t2E6C22E14C79C3E15DA7285DA5E6D990E0D5DC48* L_41 = MixedRealityCameraProfile_get_SettingsConfigurations_mC085818E1EE809BA4C3CE7C0AD7DDB9243A7BE15(L_40, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 141));
		NullCheck(L_41);
		V_9 = (bool)((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 93));
		bool L_42 = V_9;
		if (L_42)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 94));
	}

IL_0104:
	{
		// if (useFallbackBehavior)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 95));
		bool L_43 = __this->get_useFallbackBehavior_29();
		V_10 = L_43;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 96));
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_01be;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 97));
		// cameraOpaqueLastFrame = IsOpaque;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 98));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 142));
		bool L_45 = MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 142));
		__this->set_cameraOpaqueLastFrame_28(L_45);
		// if (IsOpaque)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 99));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 143));
		bool L_46 = MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 143));
		V_11 = L_46;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 100));
		bool L_47 = V_11;
		if (!L_47)
		{
			goto IL_0137;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 101));
		// ApplySettingsForOpaqueDisplay();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 102));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 144));
		MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m689135C3EC03F91C7F4319CF370139BBF23DA123(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 144));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 103));
		goto IL_0140;
	}

IL_0137:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 104));
		// ApplySettingsForTransparentDisplay();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 105));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 145));
		MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E41A0B0D74665F6D1699BE50D0272885C35F508(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 145));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 106));
	}

IL_0140:
	{
		// MixedRealityPlayspace.Position = Vector3.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 107));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 146));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 146));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 147));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_set_Position_m76BC03B7B81EFF09E7A4A1AF1BCF8E3E43D12C9C(L_48, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 147));
		// MixedRealityPlayspace.Rotation = Quaternion.identity;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 108));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 148));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 148));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 149));
		MixedRealityPlayspace_set_Rotation_m958DC4D6EF5442D262FF91207C7055DBBAAE1E4C(L_49, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 149));
		// if (CameraCache.Main.transform.position != Vector3.zero)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 109));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 150));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_50 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 150));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 151));
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_50, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 151));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 152));
		NullCheck(L_51);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_51, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 152));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 153));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 153));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 154));
		bool L_54 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_52, L_53, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 154));
		V_12 = L_54;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 110));
		bool L_55 = V_12;
		if (!L_55)
		{
			goto IL_0191;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 111));
		// Debug.LogWarning($"The main camera is not positioned at the origin ({Vector3.zero}), experiences may not behave as expected.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 112));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 155));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 155));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = L_56;
		RuntimeObject * L_58 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_57);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 156));
		String_t* L_59 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE253846825DF5F393050BB52D03647D0CFC35E0, L_58, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 156));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 157));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_59, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 157));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 113));
	}

IL_0191:
	{
		// if (CameraCache.Main.transform.rotation != Quaternion.identity)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 114));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 158));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_60 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 158));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 159));
		NullCheck(L_60);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_60, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 159));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 160));
		NullCheck(L_61);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_62 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_61, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 160));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 161));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_63 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 161));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 162));
		bool L_64 = Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70(L_62, L_63, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 162));
		V_13 = L_64;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 115));
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_01bd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 116));
		// Debug.LogWarning($"The main camera is configured with a non-zero rotation, experiences may not behave as expected.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 117));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 163));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD47B37C1B233818E5C869621EE522D30507C5050, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 163));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 118));
	}

IL_01bd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 119));
	}

IL_01be:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 120));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Enable_m100CD38A1DC0D104A8833CE455E95D8886A608E2 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Enable_m100CD38A1DC0D104A8833CE455E95D8886A608E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_Enable_m100CD38A1DC0D104A8833CE455E95D8886A608E2_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 164));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 165));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 166));
		// base.Enable();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 167));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 178));
		BaseDataProviderAccessCoreSystem_Enable_mDA3A3C27AFF2AB5D9C0CC47869E35C91F2D044B5(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 178));
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 168));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 179));
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_m8DEB3A0C8E3F44D12224E5BD4BB5F225B1393679_RuntimeMethod_var, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 179));
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 169));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 170));
		goto IL_0026;
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 171));
		// providers[i].Enable();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 172));
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 180));
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tC44CA129E29E07BEBBF6FEA4F470DD53795CE100_il2cpp_TypeInfo_var, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 180));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 181));
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Enable() */, IMixedRealityService_t786A23BE7C43913C011325FB43AED3E720F6E9FB_il2cpp_TypeInfo_var, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 181));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 173));
		// for (int i = 0; i < providers.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 174));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0026:
	{
		// for (int i = 0; i < providers.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 175));
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 182));
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t6A5BCAA14664510F2CDB134F17E06AF89744B832_il2cpp_TypeInfo_var, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 182));
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 176));
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0013;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 177));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Disable_mF96557750424E9B56AD930D619EB831C095358EB (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Disable_mF96557750424E9B56AD930D619EB831C095358EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_Disable_mF96557750424E9B56AD930D619EB831C095358EB_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 183));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 184));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 185));
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 186));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 197));
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_m8DEB3A0C8E3F44D12224E5BD4BB5F225B1393679_RuntimeMethod_var, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 197));
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 187));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 188));
		goto IL_001f;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 189));
		// providers[i].Disable();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 190));
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 198));
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_tC44CA129E29E07BEBBF6FEA4F470DD53795CE100_il2cpp_TypeInfo_var, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 198));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 199));
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Disable() */, IMixedRealityService_t786A23BE7C43913C011325FB43AED3E720F6E9FB_il2cpp_TypeInfo_var, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 199));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 191));
		// for (int i = 0; i < providers.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 192));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001f:
	{
		// for (int i = 0; i < providers.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 193));
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 200));
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t6A5BCAA14664510F2CDB134F17E06AF89744B832_il2cpp_TypeInfo_var, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 200));
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 194));
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000c;
		}
	}
	{
		// base.Disable();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 195));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 201));
		BaseService_Disable_m349524E2ECE37A703BC12D77419612C9162EC92A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 201));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 196));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Destroy_m76C097516BD76B1A4E3BB16C5B45E0FC61EB628C (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Destroy_m76C097516BD76B1A4E3BB16C5B45E0FC61EB628C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_Destroy_m76C097516BD76B1A4E3BB16C5B45E0FC61EB628C_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 202));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 203));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 204));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 205));
		// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 206));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 218));
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_m8DEB3A0C8E3F44D12224E5BD4BB5F225B1393679_RuntimeMethod_var, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 218));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 219));
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::GetEnumerator() */, IEnumerable_1_t727966C630EC7682E325E19F53085E19368F1228_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 219));
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 207));
			goto IL_0021;
		}

IL_0010:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 208));
			RuntimeObject* L_2 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 220));
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Current() */, IEnumerator_1_tF93BED2B5E8E0E78919EFA6B63CA687A22B02D34_il2cpp_TypeInfo_var, L_2);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 220));
			V_1 = L_3;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 209));
			// UnregisterDataProvider(provider);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 210));
			RuntimeObject* L_4 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 221));
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_mA196748F73D52E7E5E55B482A4D741D15D177375(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t2D5A35C65811486A8AE3BC9215E3CBBCCD9EAE7A_mA196748F73D52E7E5E55B482A4D741D15D177375_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 221));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 211));
		}

IL_0021:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 212));
			RuntimeObject* L_5 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 222));
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 222));
			if (L_6)
			{
				goto IL_0010;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x36, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 213));
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0035;
			}
		}

IL_002e:
		{
			RuntimeObject* L_8 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 223));
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 223));
		}

IL_0035:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 214));
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x36, IL_0036)
	}

IL_0036:
	{
		// useFallbackBehavior = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 215));
		__this->set_useFallbackBehavior_29((bool)1);
		// base.Destroy();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 216));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 224));
		BaseEventSystem_Destroy_m7B3C5682C43FE55F078723094DB38FCEBF56674E(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 224));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 217));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Update_m29A3E09735A4A9ABF2D3CFE2FC849A1A8D9313B8 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Update_m29A3E09735A4A9ABF2D3CFE2FC849A1A8D9313B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_Update_m29A3E09735A4A9ABF2D3CFE2FC849A1A8D9313B8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 225));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 226));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 227));
		// if (!useFallbackBehavior) { return; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 228));
		bool L_0 = __this->get_useFallbackBehavior_29();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 229));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 230));
		// if (!useFallbackBehavior) { return; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 231));
		goto IL_007c;
	}

IL_0011:
	{
		// using (UpdatePerfMarker.Auto())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 232));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_30();
		V_2 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 251));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 251));
		V_1 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 233));
			// base.Update();
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 234));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 252));
			BaseDataProviderAccessCoreSystem_Update_m75C49080A1B3FF5D92BF8423D6060BCF7A5B92AF(__this, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 252));
			// if (IsOpaque != cameraOpaqueLastFrame)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 235));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 253));
			bool L_4 = MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7(__this, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 253));
			bool L_5 = __this->get_cameraOpaqueLastFrame_28();
			V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 236));
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_006a;
			}
		}

IL_003c:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 237));
			// cameraOpaqueLastFrame = IsOpaque;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 238));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 254));
			bool L_7 = MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7(__this, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 254));
			__this->set_cameraOpaqueLastFrame_28(L_7);
			// if (IsOpaque)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 239));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 255));
			bool L_8 = MixedRealityCameraSystem_get_IsOpaque_mAD1173A03488BAF223296400A1BCBA023983F4B7(__this, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 255));
			V_4 = L_8;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 240));
			bool L_9 = V_4;
			if (!L_9)
			{
				goto IL_0060;
			}
		}

IL_0055:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 241));
			// ApplySettingsForOpaqueDisplay();
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 242));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 256));
			MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m689135C3EC03F91C7F4319CF370139BBF23DA123(__this, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 256));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 243));
			goto IL_0069;
		}

IL_0060:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 244));
			// ApplySettingsForTransparentDisplay();
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 245));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 257));
			MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E41A0B0D74665F6D1699BE50D0272885C35F508(__this, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 257));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 246));
		}

IL_0069:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 247));
		}

IL_006a:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 248));
			IL2CPP_LEAVE(0x7C, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 249));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 258));
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 258));
		IL2CPP_END_FINALLY(109)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 250));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m689135C3EC03F91C7F4319CF370139BBF23DA123 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m689135C3EC03F91C7F4319CF370139BBF23DA123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m689135C3EC03F91C7F4319CF370139BBF23DA123_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 259));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 260));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 261));
		// using (ApplySettingsForOpaquePerfMarker.Auto())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 262));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var))->get_ApplySettingsForOpaquePerfMarker_31();
		V_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 272));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 272));
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 263));
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsOpaqueDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 264));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 273));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 273));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 274));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_3 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 274));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 275));
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m7E4FFDB04F3844CA5FECBBD5E3F4BE58FF54F586_inline(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 275));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 276));
		NullCheck(L_2);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_2, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 276));
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneOpaqueDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 265));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 277));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 277));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 278));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_6 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 278));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 279));
		NullCheck(L_6);
		float L_7 = MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE5FFDA5B2A6E63F043C3BC5749460E7C9ADE059D_inline(L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 279));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 280));
		NullCheck(L_5);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_5, L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 280));
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneOpaqueDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 266));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 281));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 281));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 282));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_9 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 282));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 283));
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB01B9E3121210440F1E32FEBD2F0C3B5F451AB52_inline(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 283));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 284));
		NullCheck(L_8);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_8, L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 284));
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorOpaqueDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 267));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 285));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 285));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 286));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_12 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 286));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 287));
		NullCheck(L_12);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m5BC046DB871960BF763F6FC898C7E247A6BE4AC7_inline(L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 287));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 288));
		NullCheck(L_11);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_11, L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 288));
		// QualitySettings.SetQualityLevel(CameraProfile.OpaqueQualityLevel, false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 268));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 289));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_14 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 289));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 290));
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_OpaqueQualityLevel_mA6C0F2B6E4FD975D34D728A080D428CC2C94DF74_inline(L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 290));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 291));
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_15, (bool)0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 291));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 269));
		IL2CPP_LEAVE(0x8C, FINALLY_007d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 270));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 292));
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 292));
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 271));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E41A0B0D74665F6D1699BE50D0272885C35F508 (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E41A0B0D74665F6D1699BE50D0272885C35F508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m2E41A0B0D74665F6D1699BE50D0272885C35F508_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 293));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 294));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 295));
		// using (ApplySettingsForTransparentPerfMarker.Auto())
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 296));
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var))->get_ApplySettingsForTransparentPerfMarker_32();
		V_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 306));
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 306));
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 297));
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsTransparentDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 298));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 307));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 307));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 308));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_3 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 308));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 309));
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m922AA67DB2718C351E46724FEB76A8327A89A554_inline(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 309));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 310));
		NullCheck(L_2);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_2, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 310));
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorTransparentDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 299));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 311));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 311));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 312));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_6 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 312));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 313));
		NullCheck(L_6);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9B964BEDCCE76A615B204F093CD4FC608305CEF0_inline(L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 313));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 314));
		NullCheck(L_5);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_5, L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 314));
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneTransparentDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 300));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 315));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 315));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 316));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_9 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 316));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 317));
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m0A32ACF0E48E4B4332F51063128ECB9B3BF455BC_inline(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 317));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 318));
		NullCheck(L_8);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_8, L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 318));
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneTransparentDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 301));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 319));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 319));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 320));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_12 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 320));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 321));
		NullCheck(L_12);
		float L_13 = MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m15234DD022204C5287771EDAB3581CD80F659432_inline(L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 321));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 322));
		NullCheck(L_11);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_11, L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 322));
		// QualitySettings.SetQualityLevel(CameraProfile.TransparentQualityLevel, false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 302));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 323));
		MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * L_14 = MixedRealityCameraSystem_get_CameraProfile_m9FC0D60316DB380ED95A615431876260EB324495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 323));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 324));
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_TransparentQualityLevel_m669A0995474964ECE3ED682A0939723745152E55_inline(L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 324));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 325));
		QualitySettings_SetQualityLevel_mEE52F0941999C858D6424E363E42C26935166551(L_15, (bool)0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 325));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 303));
		IL2CPP_LEAVE(0x8C, FINALLY_007d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 304));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 326));
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 326));
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 305));
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_m92D56194230B46A62FCAA57535132D77A600666F (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_m92D56194230B46A62FCAA57535132D77A600666F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_m92D56194230B46A62FCAA57535132D77A600666F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 327));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 328));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 329));
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 330));
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 331));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mC052C0B2D08D337ADDD58FF18CE611939106C92B (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mC052C0B2D08D337ADDD58FF18CE611939106C92B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mC052C0B2D08D337ADDD58FF18CE611939106C92B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 332));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 333));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 334));
		// return Mathf.Abs(SourceName.GetHashCode());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 335));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 337));
		String_t* L_0 = MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86_inline(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 337));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 338));
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 338));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 339));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 339));
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 336));
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__cctor_m7FEACE645D27FEB30F9C89261FCB4D04F81B6DEE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__cctor_m7FEACE645D27FEB30F9C89261FCB4D04F81B6DEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem__cctor_m7FEACE645D27FEB30F9C89261FCB4D04F81B6DEE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 340));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 341));
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.Update");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 342));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 345));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral9FAB7F7797F50BE92F95BF3ABEA86CE6B7AD33B5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 345));
		((MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_30(L_0);
		// private static readonly ProfilerMarker ApplySettingsForOpaquePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForOpaqueDisplay");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 343));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 346));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteralE7D160052E5D4840C43A5454F2745C041FF0C3BD, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 346));
		((MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var))->set_ApplySettingsForOpaquePerfMarker_31(L_1);
		// private static readonly ProfilerMarker ApplySettingsForTransparentPerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForTransparentDisplay");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 344));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 347));
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteralCD496BC0032F2FFF9C94404087C768C474C3BF2B, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 347));
		((MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B_il2cpp_TypeInfo_var))->set_ApplySettingsForTransparentPerfMarker_32(L_2);
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
		il2cpp_codegen_initialize_method (BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * MixedRealityCameraSettingsConfiguration_get_ComponentType_m7C301B06BDC5C7445081C2B96BD0B54D6EFDF824_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSettingsConfiguration_get_ComponentType_m7C301B06BDC5C7445081C2B96BD0B54D6EFDF824Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSettingsConfiguration_get_ComponentType_m7C301B06BDC5C7445081C2B96BD0B54D6EFDF824_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20104));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20105));
	{
		// public SystemType ComponentType => componentType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20106));
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_0 = __this->get_componentType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline (SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CDMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEE_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEEMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSettingsConfiguration_get_ComponentName_m46350C0CBD84A6BCF25A4C9F29BDEF8542F4DAEE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20107));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20108));
	{
		// public string ComponentName => componentName;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20109));
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_mA35C96F06B253940081626251444C2915EED84BC_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSettingsConfiguration_get_Priority_mA35C96F06B253940081626251444C2915EED84BCMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSettingsConfiguration_get_Priority_mA35C96F06B253940081626251444C2915EED84BC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20110));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20111));
	{
		// public uint Priority => priority;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20112));
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m26B6699FB073FA27409E09D488AEC1E42577CF6D_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m26B6699FB073FA27409E09D488AEC1E42577CF6DMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m26B6699FB073FA27409E09D488AEC1E42577CF6D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20119));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20120));
	{
		// public BaseCameraSettingsProfile SettingsProfile => settingsProfile;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20121));
		BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * L_0 = __this->get_settingsProfile_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m5A9584C79AEBBA077C3BBD19CB28FC770502042B_inline (MixedRealityCameraSettingsConfiguration_t05CCD49CDBDB05C696B388FD5CA01DDCB4026746 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m5A9584C79AEBBA077C3BBD19CB28FC770502042BMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m5A9584C79AEBBA077C3BBD19CB28FC770502042B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20114));
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 20115));
		int32_t L_0 = __this->get_runtimePlatform_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
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
		il2cpp_codegen_initialize_method (AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m7E4FFDB04F3844CA5FECBBD5E3F4BE58FF54F586_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m7E4FFDB04F3844CA5FECBBD5E3F4BE58FF54F586Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m7E4FFDB04F3844CA5FECBBD5E3F4BE58FF54F586_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 274));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 275));
	{
		// public CameraClearFlags CameraClearFlagsOpaqueDisplay => cameraClearFlagsOpaqueDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 276));
		int32_t L_0 = __this->get_cameraClearFlagsOpaqueDisplay_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE5FFDA5B2A6E63F043C3BC5749460E7C9ADE059D_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE5FFDA5B2A6E63F043C3BC5749460E7C9ADE059DMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE5FFDA5B2A6E63F043C3BC5749460E7C9ADE059D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 268));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 269));
	{
		// public float NearClipPlaneOpaqueDisplay => nearClipPlaneOpaqueDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 270));
		float L_0 = __this->get_nearClipPlaneOpaqueDisplay_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB01B9E3121210440F1E32FEBD2F0C3B5F451AB52_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB01B9E3121210440F1E32FEBD2F0C3B5F451AB52Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB01B9E3121210440F1E32FEBD2F0C3B5F451AB52_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 271));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 272));
	{
		// public float FarClipPlaneOpaqueDisplay => farClipPlaneOpaqueDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 273));
		float L_0 = __this->get_farClipPlaneOpaqueDisplay_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m5BC046DB871960BF763F6FC898C7E247A6BE4AC7_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m5BC046DB871960BF763F6FC898C7E247A6BE4AC7Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m5BC046DB871960BF763F6FC898C7E247A6BE4AC7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 277));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 278));
	{
		// public Color BackgroundColorOpaqueDisplay => backgroundColorOpaqueDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 279));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColorOpaqueDisplay_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_mA6C0F2B6E4FD975D34D728A080D428CC2C94DF74_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_OpaqueQualityLevel_mA6C0F2B6E4FD975D34D728A080D428CC2C94DF74Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_OpaqueQualityLevel_mA6C0F2B6E4FD975D34D728A080D428CC2C94DF74_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 280));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 281));
	{
		// public int OpaqueQualityLevel => opaqueQualityLevel;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 282));
		int32_t L_0 = __this->get_opaqueQualityLevel_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m922AA67DB2718C351E46724FEB76A8327A89A554_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m922AA67DB2718C351E46724FEB76A8327A89A554Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m922AA67DB2718C351E46724FEB76A8327A89A554_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 289));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 290));
	{
		// public CameraClearFlags CameraClearFlagsTransparentDisplay => cameraClearFlagsTransparentDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 291));
		int32_t L_0 = __this->get_cameraClearFlagsTransparentDisplay_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9B964BEDCCE76A615B204F093CD4FC608305CEF0_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9B964BEDCCE76A615B204F093CD4FC608305CEF0Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m9B964BEDCCE76A615B204F093CD4FC608305CEF0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 292));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 293));
	{
		// public Color BackgroundColorTransparentDisplay => backgroundColorTransparentDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 294));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColorTransparentDisplay_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m0A32ACF0E48E4B4332F51063128ECB9B3BF455BC_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m0A32ACF0E48E4B4332F51063128ECB9B3BF455BCMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m0A32ACF0E48E4B4332F51063128ECB9B3BF455BC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 283));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 284));
	{
		// public float NearClipPlaneTransparentDisplay => nearClipPlaneTransparentDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 285));
		float L_0 = __this->get_nearClipPlaneTransparentDisplay_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m15234DD022204C5287771EDAB3581CD80F659432_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m15234DD022204C5287771EDAB3581CD80F659432Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m15234DD022204C5287771EDAB3581CD80F659432_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 286));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 287));
	{
		// public float FarClipPlaneTransparentDisplay => farClipPlaneTransparentDisplay;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 288));
		float L_0 = __this->get_farClipPlaneTransparentDisplay_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m669A0995474964ECE3ED682A0939723745152E55_inline (MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraProfile_get_TransparentQualityLevel_m669A0995474964ECE3ED682A0939723745152E55Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraProfile_get_TransparentQualityLevel_m669A0995474964ECE3ED682A0939723745152E55_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 295));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 296));
	{
		// public int TransparentQualityLevel => transparentQualityLevel;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 297));
		int32_t L_0 = __this->get_transparentQualityLevel_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86_inline (MixedRealityCameraSystem_t715E069D6B294B62C84EFB9E68E2658B1C06E55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityCameraSystem_get_SourceName_m7E2C31647C49EE55F36A67FE2B80408D0FE62D86_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 58));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 59));
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Services_CameraSystem + 60));
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2AMicrosoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
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
		il2cpp_codegen_initialize_method (AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320Microsoft_MixedReality_Toolkit_Services_CameraSystem_MetadataUsageId);
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
