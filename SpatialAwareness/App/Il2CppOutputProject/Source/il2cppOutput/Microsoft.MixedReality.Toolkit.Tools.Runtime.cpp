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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult
struct DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages
struct ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool
struct MixedRealityInteractionTool_t5576F7BEB0AADFFFD4A9C3B117AE3BA3308FFE41;
// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4;
// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection>
struct Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t31E85CDA2550B5F9A119FA262255E83265909C80;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_tAAAF3681567B6F264703A0E15FC97E88BBF520D3;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.TextMesh>
struct List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82;
// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>
struct List_1_t1D9B9431DC8E643C86300156798632FB6B945A03;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
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
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6;
// UnityEngine.XR.InputFeatureUsage[]
struct InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSource_tCDAABC4976E965E99580F716B1B2CDD9CDBE1865_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1D9B9431DC8E643C86300156798632FB6B945A03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral28FED197ABA6B0075AA7B18880CBE300693BB570;
IL2CPP_EXTERN_C String_t* _stringLiteral33431061FB309988E60F609A990F2B456CA63E30;
IL2CPP_EXTERN_C String_t* _stringLiteral36E9E9FFC9D20BBF09FD7D86DB639097F5EE8B4A;
IL2CPP_EXTERN_C String_t* _stringLiteral42CBDB3C55980503B68E044C73B768E2C1557D44;
IL2CPP_EXTERN_C String_t* _stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteral50B513476C44C4C0D8F32FE3219FC397F34664A0;
IL2CPP_EXTERN_C String_t* _stringLiteral5ADBC2B8C5C1C93843CDFB9A3FAE9F48D40CAF17;
IL2CPP_EXTERN_C String_t* _stringLiteral6126CDA8ABEA9B72D62B5EBC6AB525CB287F4D14;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6A465F04662494BCF2CDD14B39035E925D63B3;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB374FAAB4FAB74CFBBCC828F8657A89110BAF1;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D;
IL2CPP_EXTERN_C String_t* _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359;
IL2CPP_EXTERN_C String_t* _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D184DB250EBD180FDF004D8BE609BC10A18291;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB45954F905A38D65AD0E29796BCC199C6146A930;
IL2CPP_EXTERN_C String_t* _stringLiteralB4AB17AF25666479BF1B9F04718B963E43946C3D;
IL2CPP_EXTERN_C String_t* _stringLiteralD95F39C503EAA958DC1BCE86E2C4A4612B82C155;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
IL2CPP_EXTERN_C const RuntimeMethod* DisplayInputResult_OnValidate_mFDFD941E0CD5C904BD7BF16C379DB1D49D4EEE00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DisplayInputResult_Update_mB257826948F66D8AF1FCACCC4D4737F27F519CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DisplayInputResult__ctor_m7A703079A91EC480C770098D51CBCAEF62EE7AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3897751F5615B83A9E0565DD015002AE963DB69B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9B9126E05AE57185E1C1B2007019CB72B2D7E992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5C3D3DFB017C501D03F223E3463AB91458CC44B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m9E4D7FFDEA6E42F7B15ABD2843855CF150415620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mA889029FA07B9D545D789ABAEF094BDF9A228416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m8D860E79FA12E2930BC04DFE3124CB5A253794B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisInputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_m19BB2E6465283D7DC07628C141E48267C383B2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListInputFeatureUsages_Update_m3D5D88C997B2766F69B73495DE75975ADCAA09DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListInputFeatureUsages__ctor_m296692847E7882F0D5722B01CD538FE31D6B7CCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB71A8C3E82969712B249C0274B4F5753ABDEEA66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7FD17D612A7A3D2A57B6B4815FC83ADCEE9A7A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC652A7DD2A361A927F5A8B0D43C20602FFFEDA8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityInputAction_get_Description_m1FA8D2243A6EB64E00E804CCA8B98CEC3E1A2658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityInteractionMapping_get_Description_mE13C0C1AA4390BBD2DC1CB5A21DDD4B05888EC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityInteractionTool_Update_m80CCF4F3040BAFD9CCA94B65A3F96D4B9129EA27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityInteractionTool__ctor_mC80719A86888E065E8E1B765D8727EA52F9B68AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DeviceInputType_t358986D22B64DCDBE1EC628624BB92B25DED5E31_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MixedRealityInteractionTool_t5576F7BEB0AADFFFD4A9C3B117AE3BA3308FFE41_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t DisplayInputResult_OnValidate_mFDFD941E0CD5C904BD7BF16C379DB1D49D4EEE00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DisplayInputResult_Update_mB257826948F66D8AF1FCACCC4D4737F27F519CB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DisplayInputResult__ctor_m7A703079A91EC480C770098D51CBCAEF62EE7AFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5FMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCAMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListInputFeatureUsages_Update_m3D5D88C997B2766F69B73495DE75975ADCAA09DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListInputFeatureUsages__ctor_m296692847E7882F0D5722B01CD538FE31D6B7CCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CFMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInputAction_get_Description_m1FA8D2243A6EB64E00E804CCA8B98CEC3E1A2658Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInteractionMapping_get_Description_mE13C0C1AA4390BBD2DC1CB5A21DDD4B05888EC6CMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CDMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInteractionTool_Update_m80CCF4F3040BAFD9CCA94B65A3F96D4B9129EA27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInteractionTool__ctor_mC80719A86888E065E8E1B765D8727EA52F9B68AE_MetadataUsageId;

struct MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3D2F2C72BACAA2550247DC99F117C16BC19AB375 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____slots_8)); }
	inline SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA5D96D5A9783D79ABFFFC777115F940BDC4D3580* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____slots_8)); }
	inline SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.TextMesh>
struct List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD, ____items_1)); }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* get__items_1() const { return ____items_1; }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD_StaticFields, ____emptyArray_5)); }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____items_1)); }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>
struct List_1_t1D9B9431DC8E643C86300156798632FB6B945A03  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03, ____items_1)); }
	inline InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* get__items_1() const { return ____items_1; }
	inline InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1D9B9431DC8E643C86300156798632FB6B945A03_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03_StaticFields, ____emptyArray_5)); }
	inline InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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


// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD, ____set_0)); }
	inline HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____set_0)); }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
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


// System.Nullable`1<System.Int32>
struct Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
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


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
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


// UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32>
struct InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>
struct InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_t358986D22B64DCDBE1EC628624BB92B25DED5E31 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t358986D22B64DCDBE1EC628624BB92B25DED5E31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType
struct DisplayType_t34B857F9A9567C75AC7DE101BBE8539932F22DBF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t34B857F9A9567C75AC7DE101BBE8539932F22DBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder
struct CollationOrder_t515E0BB074BE25ED67629C76ACFE667E2DD373B6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.CollationOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollationOrder_t515E0BB074BE25ED67629C76ACFE667E2DD373B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor
struct LayoutAnchor_t2EBE10B32649E6BB5397827A8BFAD1C8AD9B2914 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutAnchor_t2EBE10B32649E6BB5397827A8BFAD1C8AD9B2914, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment
struct LayoutHorizontalAlignment_t7D6E56488785A501AFED9095CD688E0744EE3E48 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutHorizontalAlignment_t7D6E56488785A501AFED9095CD688E0744EE3E48, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder
struct LayoutOrder_tEEB3CE75A90E480BA984ADC4632861C017D51C0A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutOrder_tEEB3CE75A90E480BA984ADC4632861C017D51C0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment
struct LayoutVerticalAlignment_tE626FCEA65D2DC8A9FE06DBD89C572A06DD6B025 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutVerticalAlignment_tE626FCEA65D2DC8A9FE06DBD89C572A06DD6B025, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType
struct ObjectOrientationSurfaceType_tEA4BE4186E677D04B5105B7CF9F5026895AF9F5D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectOrientationSurfaceType_tEA4BE4186E677D04B5105B7CF9F5026895AF9F5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.OrientationType
struct OrientationType_tB6FB0E1746B10E1C14DCCEF33535D2EF537D1BEC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationType_tB6FB0E1746B10E1C14DCCEF33535D2EF537D1BEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
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


// UnityEngine.KeyCode
struct KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
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

// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputFeatureType
struct InputFeatureType_t683990CF03F80321E203CDC5EDCA5846BB56BAF4 
{
public:
	// System.UInt32 UnityEngine.XR.InputFeatureType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputFeatureType_t683990CF03F80321E203CDC5EDCA5846BB56BAF4, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputTrackingState
struct InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933 
{
public:
	// System.UInt32 UnityEngine.XR.InputTrackingState::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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


// UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::m_InternalType
	uint32_t ___m_InternalType_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalType_1() { return static_cast<int32_t>(offsetof(InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C, ___m_InternalType_1)); }
	inline uint32_t get_m_InternalType_1() const { return ___m_InternalType_1; }
	inline uint32_t* get_address_of_m_InternalType_1() { return &___m_InternalType_1; }
	inline void set_m_InternalType_1(uint32_t value)
	{
		___m_InternalType_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C_marshaled_pinvoke
{
	char* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___inputAction_4)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___poseData_17)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___poseData_17 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>
struct Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648, ___list_0)); }
	inline List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * get_list_0() const { return ___list_0; }
	inline List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648, ___current_3)); }
	inline InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  get_current_3() const { return ___current_3; }
	inline InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_Name_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult
struct DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::displayTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___displayTextMesh_4;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::inputType
	int32_t ___inputType_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::axisNumber
	int32_t ___axisNumber_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::buttonNumber
	int32_t ___buttonNumber_7;
	// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::displayType
	int32_t ___displayType_8;

public:
	inline static int32_t get_offset_of_displayTextMesh_4() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7, ___displayTextMesh_4)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_displayTextMesh_4() const { return ___displayTextMesh_4; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_displayTextMesh_4() { return &___displayTextMesh_4; }
	inline void set_displayTextMesh_4(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___displayTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_inputType_5() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7, ___inputType_5)); }
	inline int32_t get_inputType_5() const { return ___inputType_5; }
	inline int32_t* get_address_of_inputType_5() { return &___inputType_5; }
	inline void set_inputType_5(int32_t value)
	{
		___inputType_5 = value;
	}

	inline static int32_t get_offset_of_axisNumber_6() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7, ___axisNumber_6)); }
	inline int32_t get_axisNumber_6() const { return ___axisNumber_6; }
	inline int32_t* get_address_of_axisNumber_6() { return &___axisNumber_6; }
	inline void set_axisNumber_6(int32_t value)
	{
		___axisNumber_6 = value;
	}

	inline static int32_t get_offset_of_buttonNumber_7() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7, ___buttonNumber_7)); }
	inline int32_t get_buttonNumber_7() const { return ___buttonNumber_7; }
	inline int32_t* get_address_of_buttonNumber_7() { return &___buttonNumber_7; }
	inline void set_buttonNumber_7(int32_t value)
	{
		___buttonNumber_7 = value;
	}

	inline static int32_t get_offset_of_displayType_8() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7, ___displayType_8)); }
	inline int32_t get_displayType_8() const { return ___displayType_8; }
	inline int32_t* get_address_of_displayType_8() { return &___displayType_8; }
	inline void set_displayType_8(int32_t value)
	{
		___displayType_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages
struct ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::listInputDevicesTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___listInputDevicesTextMesh_4;
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::gridObjectCollection
	GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * ___gridObjectCollection_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::displayFeatureUsagesPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___displayFeatureUsagesPrefab_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::leftInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___leftInputDevices_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::rightInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___rightInputDevices_8;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::featureUsages
	List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * ___featureUsages_9;
	// System.Collections.Generic.List`1<UnityEngine.TextMesh> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::displayFeatureUsagesTextMeshes
	List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * ___displayFeatureUsagesTextMeshes_10;

public:
	inline static int32_t get_offset_of_listInputDevicesTextMesh_4() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1, ___listInputDevicesTextMesh_4)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_listInputDevicesTextMesh_4() const { return ___listInputDevicesTextMesh_4; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_listInputDevicesTextMesh_4() { return &___listInputDevicesTextMesh_4; }
	inline void set_listInputDevicesTextMesh_4(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___listInputDevicesTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listInputDevicesTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_gridObjectCollection_5() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1, ___gridObjectCollection_5)); }
	inline GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * get_gridObjectCollection_5() const { return ___gridObjectCollection_5; }
	inline GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 ** get_address_of_gridObjectCollection_5() { return &___gridObjectCollection_5; }
	inline void set_gridObjectCollection_5(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * value)
	{
		___gridObjectCollection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridObjectCollection_5), (void*)value);
	}

	inline static int32_t get_offset_of_displayFeatureUsagesPrefab_6() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1, ___displayFeatureUsagesPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_displayFeatureUsagesPrefab_6() const { return ___displayFeatureUsagesPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_displayFeatureUsagesPrefab_6() { return &___displayFeatureUsagesPrefab_6; }
	inline void set_displayFeatureUsagesPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___displayFeatureUsagesPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFeatureUsagesPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_leftInputDevices_7() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1, ___leftInputDevices_7)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_leftInputDevices_7() const { return ___leftInputDevices_7; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_leftInputDevices_7() { return &___leftInputDevices_7; }
	inline void set_leftInputDevices_7(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___leftInputDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftInputDevices_7), (void*)value);
	}

	inline static int32_t get_offset_of_rightInputDevices_8() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1, ___rightInputDevices_8)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_rightInputDevices_8() const { return ___rightInputDevices_8; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_rightInputDevices_8() { return &___rightInputDevices_8; }
	inline void set_rightInputDevices_8(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___rightInputDevices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightInputDevices_8), (void*)value);
	}

	inline static int32_t get_offset_of_featureUsages_9() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1, ___featureUsages_9)); }
	inline List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * get_featureUsages_9() const { return ___featureUsages_9; }
	inline List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 ** get_address_of_featureUsages_9() { return &___featureUsages_9; }
	inline void set_featureUsages_9(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * value)
	{
		___featureUsages_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___featureUsages_9), (void*)value);
	}

	inline static int32_t get_offset_of_displayFeatureUsagesTextMeshes_10() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1, ___displayFeatureUsagesTextMeshes_10)); }
	inline List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * get_displayFeatureUsagesTextMeshes_10() const { return ___displayFeatureUsagesTextMeshes_10; }
	inline List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD ** get_address_of_displayFeatureUsagesTextMeshes_10() { return &___displayFeatureUsagesTextMeshes_10; }
	inline void set_displayFeatureUsagesTextMeshes_10(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * value)
	{
		___displayFeatureUsagesTextMeshes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFeatureUsagesTextMeshes_10), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool
struct MixedRealityInteractionTool_t5576F7BEB0AADFFFD4A9C3B117AE3BA3308FFE41  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::listControllersTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___listControllersTextMesh_4;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::leftHandedControllerTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___leftHandedControllerTextMesh_5;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::rightHandedControllerTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___rightHandedControllerTextMesh_6;

public:
	inline static int32_t get_offset_of_listControllersTextMesh_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t5576F7BEB0AADFFFD4A9C3B117AE3BA3308FFE41, ___listControllersTextMesh_4)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_listControllersTextMesh_4() const { return ___listControllersTextMesh_4; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_listControllersTextMesh_4() { return &___listControllersTextMesh_4; }
	inline void set_listControllersTextMesh_4(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___listControllersTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listControllersTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_leftHandedControllerTextMesh_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t5576F7BEB0AADFFFD4A9C3B117AE3BA3308FFE41, ___leftHandedControllerTextMesh_5)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_leftHandedControllerTextMesh_5() const { return ___leftHandedControllerTextMesh_5; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_leftHandedControllerTextMesh_5() { return &___leftHandedControllerTextMesh_5; }
	inline void set_leftHandedControllerTextMesh_5(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___leftHandedControllerTextMesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftHandedControllerTextMesh_5), (void*)value);
	}

	inline static int32_t get_offset_of_rightHandedControllerTextMesh_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t5576F7BEB0AADFFFD4A9C3B117AE3BA3308FFE41, ___rightHandedControllerTextMesh_6)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_rightHandedControllerTextMesh_6() const { return ___rightHandedControllerTextMesh_6; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_rightHandedControllerTextMesh_6() { return &___rightHandedControllerTextMesh_6; }
	inline void set_rightHandedControllerTextMesh_6(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___rightHandedControllerTextMesh_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightHandedControllerTextMesh_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection
struct BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::<OnCollectionUpdated>k__BackingField
	Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4 * ___U3COnCollectionUpdatedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::nodeList
	List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * ___nodeList_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::ignoreInactiveTransforms
	bool ___ignoreInactiveTransforms_6;
	// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::sortType
	int32_t ___sortType_7;

public:
	inline static int32_t get_offset_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873, ___U3COnCollectionUpdatedU3Ek__BackingField_4)); }
	inline Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4 * get_U3COnCollectionUpdatedU3Ek__BackingField_4() const { return ___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4 ** get_address_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return &___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline void set_U3COnCollectionUpdatedU3Ek__BackingField_4(Action_1_tA52C815DBCC271D58DD715D9119E8FADD0789DB4 * value)
	{
		___U3COnCollectionUpdatedU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnCollectionUpdatedU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_nodeList_5() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873, ___nodeList_5)); }
	inline List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * get_nodeList_5() const { return ___nodeList_5; }
	inline List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE ** get_address_of_nodeList_5() { return &___nodeList_5; }
	inline void set_nodeList_5(List_1_t7D6E0A1B3973E8AC2D2A398241BE620D8F10E9FE * value)
	{
		___nodeList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeList_5), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreInactiveTransforms_6() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873, ___ignoreInactiveTransforms_6)); }
	inline bool get_ignoreInactiveTransforms_6() const { return ___ignoreInactiveTransforms_6; }
	inline bool* get_address_of_ignoreInactiveTransforms_6() { return &___ignoreInactiveTransforms_6; }
	inline void set_ignoreInactiveTransforms_6(bool value)
	{
		___ignoreInactiveTransforms_6 = value;
	}

	inline static int32_t get_offset_of_sortType_7() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873, ___sortType_7)); }
	inline int32_t get_sortType_7() const { return ___sortType_7; }
	inline int32_t* get_address_of_sortType_7() { return &___sortType_7; }
	inline void set_sortType_7(int32_t value)
	{
		___sortType_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4  : public BaseObjectCollection_t28800ED99C48E52676F95791DA3FE02771D11873
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::surfaceType
	int32_t ___surfaceType_8;
	// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::orientType
	int32_t ___orientType_9;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::layout
	int32_t ___layout_10;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchor
	int32_t ___anchor_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchorAlongAxis
	bool ___anchorAlongAxis_12;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columnAlignment
	int32_t ___columnAlignment_13;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rowAlignment
	int32_t ___rowAlignment_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radius
	float ___radius_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radialRange
	float ___radialRange_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::distance
	float ___distance_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rows
	int32_t ___rows_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columns
	int32_t ___columns_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellWidth
	float ___cellWidth_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellHeight
	float ___cellHeight_22;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<SphereMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CSphereMeshU3Ek__BackingField_23;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<CylinderMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CCylinderMeshU3Ek__BackingField_24;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::HalfCell
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___HalfCell_25;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::assetVersion
	int32_t ___assetVersion_27;

public:
	inline static int32_t get_offset_of_surfaceType_8() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___surfaceType_8)); }
	inline int32_t get_surfaceType_8() const { return ___surfaceType_8; }
	inline int32_t* get_address_of_surfaceType_8() { return &___surfaceType_8; }
	inline void set_surfaceType_8(int32_t value)
	{
		___surfaceType_8 = value;
	}

	inline static int32_t get_offset_of_orientType_9() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___orientType_9)); }
	inline int32_t get_orientType_9() const { return ___orientType_9; }
	inline int32_t* get_address_of_orientType_9() { return &___orientType_9; }
	inline void set_orientType_9(int32_t value)
	{
		___orientType_9 = value;
	}

	inline static int32_t get_offset_of_layout_10() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___layout_10)); }
	inline int32_t get_layout_10() const { return ___layout_10; }
	inline int32_t* get_address_of_layout_10() { return &___layout_10; }
	inline void set_layout_10(int32_t value)
	{
		___layout_10 = value;
	}

	inline static int32_t get_offset_of_anchor_11() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___anchor_11)); }
	inline int32_t get_anchor_11() const { return ___anchor_11; }
	inline int32_t* get_address_of_anchor_11() { return &___anchor_11; }
	inline void set_anchor_11(int32_t value)
	{
		___anchor_11 = value;
	}

	inline static int32_t get_offset_of_anchorAlongAxis_12() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___anchorAlongAxis_12)); }
	inline bool get_anchorAlongAxis_12() const { return ___anchorAlongAxis_12; }
	inline bool* get_address_of_anchorAlongAxis_12() { return &___anchorAlongAxis_12; }
	inline void set_anchorAlongAxis_12(bool value)
	{
		___anchorAlongAxis_12 = value;
	}

	inline static int32_t get_offset_of_columnAlignment_13() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___columnAlignment_13)); }
	inline int32_t get_columnAlignment_13() const { return ___columnAlignment_13; }
	inline int32_t* get_address_of_columnAlignment_13() { return &___columnAlignment_13; }
	inline void set_columnAlignment_13(int32_t value)
	{
		___columnAlignment_13 = value;
	}

	inline static int32_t get_offset_of_rowAlignment_14() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___rowAlignment_14)); }
	inline int32_t get_rowAlignment_14() const { return ___rowAlignment_14; }
	inline int32_t* get_address_of_rowAlignment_14() { return &___rowAlignment_14; }
	inline void set_rowAlignment_14(int32_t value)
	{
		___rowAlignment_14 = value;
	}

	inline static int32_t get_offset_of_radius_15() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___radius_15)); }
	inline float get_radius_15() const { return ___radius_15; }
	inline float* get_address_of_radius_15() { return &___radius_15; }
	inline void set_radius_15(float value)
	{
		___radius_15 = value;
	}

	inline static int32_t get_offset_of_radialRange_16() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___radialRange_16)); }
	inline float get_radialRange_16() const { return ___radialRange_16; }
	inline float* get_address_of_radialRange_16() { return &___radialRange_16; }
	inline void set_radialRange_16(float value)
	{
		___radialRange_16 = value;
	}

	inline static int32_t get_offset_of_distance_17() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___distance_17)); }
	inline float get_distance_17() const { return ___distance_17; }
	inline float* get_address_of_distance_17() { return &___distance_17; }
	inline void set_distance_17(float value)
	{
		___distance_17 = value;
	}

	inline static int32_t get_offset_of_rows_19() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___rows_19)); }
	inline int32_t get_rows_19() const { return ___rows_19; }
	inline int32_t* get_address_of_rows_19() { return &___rows_19; }
	inline void set_rows_19(int32_t value)
	{
		___rows_19 = value;
	}

	inline static int32_t get_offset_of_columns_20() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___columns_20)); }
	inline int32_t get_columns_20() const { return ___columns_20; }
	inline int32_t* get_address_of_columns_20() { return &___columns_20; }
	inline void set_columns_20(int32_t value)
	{
		___columns_20 = value;
	}

	inline static int32_t get_offset_of_cellWidth_21() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___cellWidth_21)); }
	inline float get_cellWidth_21() const { return ___cellWidth_21; }
	inline float* get_address_of_cellWidth_21() { return &___cellWidth_21; }
	inline void set_cellWidth_21(float value)
	{
		___cellWidth_21 = value;
	}

	inline static int32_t get_offset_of_cellHeight_22() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___cellHeight_22)); }
	inline float get_cellHeight_22() const { return ___cellHeight_22; }
	inline float* get_address_of_cellHeight_22() { return &___cellHeight_22; }
	inline void set_cellHeight_22(float value)
	{
		___cellHeight_22 = value;
	}

	inline static int32_t get_offset_of_U3CSphereMeshU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___U3CSphereMeshU3Ek__BackingField_23)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CSphereMeshU3Ek__BackingField_23() const { return ___U3CSphereMeshU3Ek__BackingField_23; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CSphereMeshU3Ek__BackingField_23() { return &___U3CSphereMeshU3Ek__BackingField_23; }
	inline void set_U3CSphereMeshU3Ek__BackingField_23(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CSphereMeshU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSphereMeshU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCylinderMeshU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___U3CCylinderMeshU3Ek__BackingField_24)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CCylinderMeshU3Ek__BackingField_24() const { return ___U3CCylinderMeshU3Ek__BackingField_24; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CCylinderMeshU3Ek__BackingField_24() { return &___U3CCylinderMeshU3Ek__BackingField_24; }
	inline void set_U3CCylinderMeshU3Ek__BackingField_24(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CCylinderMeshU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCylinderMeshU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_HalfCell_25() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___HalfCell_25)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_HalfCell_25() const { return ___HalfCell_25; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_HalfCell_25() { return &___HalfCell_25; }
	inline void set_HalfCell_25(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___HalfCell_25 = value;
	}

	inline static int32_t get_offset_of_assetVersion_27() { return static_cast<int32_t>(offsetof(GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4, ___assetVersion_27)); }
	inline int32_t get_assetVersion_27() const { return ___assetVersion_27; }
	inline int32_t* get_address_of_assetVersion_27() { return &___assetVersion_27; }
	inline void set_assetVersion_27(int32_t value)
	{
		___assetVersion_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  m_Items[1];

public:
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Enum::TryParse<System.Int32Enum>(System.String,!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_TryParse_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m423C00452933DDD5D455C4709C7A937A89CCFBA1_gshared (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_gshared_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_gshared_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F_gshared (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_gshared_inline (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_gshared_inline (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D  InputFeatureUsage_As_TisUInt32Enum_tE44175EB3151A633676D60A642EDA3BD5C6760DA_m958F45343A396AB919D58C62A509E8066543D493_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1_gshared (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE_gshared (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3_gshared (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133  HashSet_1_GetEnumerator_m874F2BBF69C804D425AFCF30B376C9718AA298B5_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5F_gshared_inline (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3C52626EAD0998616A661D927B94DD52E67118D4_gshared (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE2BD5476A999119F49555D958386A0688E9C0C01_gshared (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);

// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Enum::TryParse<UnityEngine.KeyCode>(System.String,!!0&)
inline bool Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0 (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m423C00452933DDD5D455C4709C7A937A89CCFBA1_gshared)(___value0, ___result1, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.String UnityEngine.TextMesh::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Input_GetJoystickNames_m99559CDAA21A390D9D10E9B82F65397C32424C32 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577 (uint32_t ___desiredCharacteristics0, List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TextMesh>::get_Count()
inline int32_t List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_inline (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.TextMesh>()
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GameObject_GetComponentInChildren_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m9E4D7FFDEA6E42F7B15ABD2843855CF150415620 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextMesh>::Add(!0)
inline void List_1_Add_mB71A8C3E82969712B249C0274B4F5753ABDEEA66 (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * __this, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.TextMesh>::get_Item(System.Int32)
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * List_1_get_Item_mC652A7DD2A361A927F5A8B0D43C20602FFFEDA8E_inline (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputDevice::get_manufacturer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_manufacturer_m3164AFB4514E2E90738C4075790733EFAA7D665F (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureUsages(System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureUsages_m0F7705813980045EA1EC46EF202B3F6F928F76FD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * ___featureUsages0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::GetEnumerator()
inline Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  (*) (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 *, const RuntimeMethod*))List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::get_Current()
inline InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_inline (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  (*) (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *, const RuntimeMethod*))Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::get_Count()
inline int32_t List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_inline (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 *, const RuntimeMethod*))List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_get_name_m3415EE4B71906002970C499B404DDAB37687C273 (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.InputFeatureUsage::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Boolean>()
inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04 (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___usage0, bool* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32>()
inline InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.UInt32>,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mFF614E505A74A95290B3B467A7516B514393EED6 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  ___usage0, uint32_t* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Single>()
inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___usage0, float* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector2>()
inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9 (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___usage0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector3>()
inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8 (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___usage0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Quaternion>()
inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___usage0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.XR.InputTrackingState>()
inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  InputFeatureUsage_As_TisInputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_m19BB2E6465283D7DC07628C141E48267C383B2EF (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisUInt32Enum_tE44175EB3151A633676D60A642EDA3BD5C6760DA_m958F45343A396AB919D58C62A509E8066543D493_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>,UnityEngine.XR.InputTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mACC12A77C3C3712F6EEFE651647463E389105AF2 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  ___usage0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::MoveNext()
inline bool Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1 (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *, const RuntimeMethod*))Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::Dispose()
inline void Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *, const RuntimeMethod*))Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::.ctor()
inline void List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3 (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 *, const RuntimeMethod*))List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextMesh>::.ctor()
inline void List_1__ctor_m7FD17D612A7A3D2A57B6B4815FC83ADCEE9A7A6E (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Count()
inline int32_t HashSet_1_get_Count_m8D860E79FA12E2930BC04DFE3124CB5A253794B6_inline (HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 *, const RuntimeMethod*))HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD  HashSet_1_GetEnumerator_mA889029FA07B9D545D789ABAEF094BDF9A228416 (HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD  (*) (HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m874F2BBF69C804D425AFCF30B376C9718AA298B5_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m5C3D3DFB017C501D03F223E3463AB91458CC44B7_inline (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *, const RuntimeMethod*))Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5F_gshared_inline)(__this, method);
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Description()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_mE13C0C1AA4390BBD2DC1CB5A21DDD4B05888EC6C_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_Description()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m1FA8D2243A6EB64E00E804CCA8B98CEC3E1A2658_inline (MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  MixedRealityInteractionMapping_get_PoseData_mFA28DE0DB1CB2EE393BFA1BDD8EC48411C143F7F (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PositionData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityInteractionMapping_get_PositionData_m8DFE20E69C92A2D2014D18E40CAF9EA4D82CF4C3 (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_RotationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityInteractionMapping_get_RotationData_m8987BE60B1D0A7D80570985C9416B8751D0213F2 (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_mEDC3169549D0E6C0769B1AD5DB7AED106FF8E44C (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_m5C4FDA726DEC05433E3A243AFF5DFD5422FAA650 (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_m9B9126E05AE57185E1C1B2007019CB72B2D7E992 (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *, const RuntimeMethod*))Enumerator_MoveNext_m3C52626EAD0998616A661D927B94DD52E67118D4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_m3897751F5615B83A9E0565DD015002AE963DB69B (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *, const RuntimeMethod*))Enumerator_Dispose_mE2BD5476A999119F49555D958386A0688E9C0C01_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult_OnValidate_mFDFD941E0CD5C904BD7BF16C379DB1D49D4EEE00 (DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayInputResult_OnValidate_mFDFD941E0CD5C904BD7BF16C379DB1D49D4EEE00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DisplayInputResult_OnValidate_mFDFD941E0CD5C904BD7BF16C379DB1D49D4EEE00_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 2));
		// if (displayType == DisplayType.InputAxes)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 3));
		int32_t L_0 = __this->get_displayType_8();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 4));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0094;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 5));
		// switch (inputType)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 6));
		int32_t L_2 = __this->get_inputType_5();
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 7));
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_0091;
			}
			case 2:
			{
				goto IL_005a;
			}
			case 3:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_0091;
	}

IL_0031:
	{
		// name = $"{inputType}{axisNumber}";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 8));
		int32_t L_4 = __this->get_inputType_5();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = __this->get_axisNumber_6();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 21));
		String_t* L_10 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D, L_6, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 21));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 22));
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(__this, L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 22));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 9));
		goto IL_0091;
	}

IL_005a:
	{
		// name = $"{inputType}{buttonNumber}";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 10));
		int32_t L_11 = __this->get_inputType_5();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164_il2cpp_TypeInfo_var, &L_12);
		int32_t L_14 = __this->get_buttonNumber_7();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 23));
		String_t* L_17 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D, L_13, L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 23));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 24));
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(__this, L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 24));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 11));
		goto IL_0091;
	}

IL_0083:
	{
		// name = "AllActiveAxes";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 12));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 25));
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(__this, _stringLiteralA3D184DB250EBD180FDF004D8BE609BC10A18291, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 25));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 13));
		goto IL_0091;
	}

IL_0091:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 14));
		goto IL_00af;
	}

IL_0094:
	{
		// else if (displayType == DisplayType.JoystickNames)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 15));
		int32_t L_18 = __this->get_displayType_8();
		V_2 = (bool)((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 16));
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00af;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 17));
		// name = "JoystickNames";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 18));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 26));
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(__this, _stringLiteralB45954F905A38D65AD0E29796BCC199C6146A930, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 26));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 19));
	}

IL_00af:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 20));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult_Update_mB257826948F66D8AF1FCACCC4D4737F27F519CB8 (DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayInputResult_Update_mB257826948F66D8AF1FCACCC4D4737F27F519CB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_15 = NULL;
	int32_t V_16 = 0;
	bool V_17 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3), (&V_5), (&V_6), (&V_9), (&V_10), (&V_12), (&V_15), (&V_16));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DisplayInputResult_Update_mB257826948F66D8AF1FCACCC4D4737F27F519CB8_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 28));
	RuntimeObject * G_B25_0 = NULL;
	String_t* G_B25_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B25_2 = NULL;
	RuntimeObject * G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B24_2 = NULL;
	String_t* G_B26_0 = NULL;
	RuntimeObject * G_B26_1 = NULL;
	String_t* G_B26_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B26_3 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 29));
		// if (displayTextMesh == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 30));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_0 = __this->get_displayTextMesh_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 93));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 93));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 31));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 32));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 33));
		goto IL_0268;
	}

IL_0017:
	{
		// if (displayType == DisplayType.InputAxes)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 34));
		int32_t L_3 = __this->get_displayType_8();
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 35));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_01f1;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 36));
		// switch (inputType)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 37));
		int32_t L_5 = __this->get_inputType_5();
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 38));
		int32_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_00e4;
			}
			case 1:
			{
				goto IL_01ee;
			}
			case 2:
			{
				goto IL_008f;
			}
			case 3:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_01ee;
	}

IL_004a:
	{
		// displayTextMesh.text = $"Axis {axisNumber}: {UnityEngine.Input.GetAxis($"AXIS_{axisNumber}")}";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 39));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_7 = __this->get_displayTextMesh_4();
		int32_t L_8 = __this->get_axisNumber_6();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11 = __this->get_axisNumber_6();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 94));
		String_t* L_14 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6FB374FAAB4FAB74CFBBCC828F8657A89110BAF1, L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 94));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 95));
		float L_15 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 95));
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_16);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 96));
		String_t* L_18 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral33431061FB309988E60F609A990F2B456CA63E30, L_10, L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 96));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 97));
		NullCheck(L_7);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_7, L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 97));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 40));
		goto IL_01ee;
	}

IL_008f:
	{
		// if (Enum.TryParse($"JoystickButton{buttonNumber}", out KeyCode keyCode))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 41));
		int32_t L_19 = __this->get_buttonNumber_7();
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 98));
		String_t* L_22 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralB4AB17AF25666479BF1B9F04718B963E43946C3D, L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 98));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 99));
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		bool L_23 = Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0(L_22, (int32_t*)(&V_3), /*hidden argument*/Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 99));
		V_4 = L_23;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 42));
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00df;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 43));
		// displayTextMesh.text = $"Button {buttonNumber}: {UnityEngine.Input.GetKey(keyCode)}";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 44));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_25 = __this->get_displayTextMesh_4();
		int32_t L_26 = __this->get_buttonNumber_7();
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_27);
		int32_t L_29 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 100));
		bool L_30 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_29, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 100));
		bool L_31 = L_30;
		RuntimeObject * L_32 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_31);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 101));
		String_t* L_33 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral50B513476C44C4C0D8F32FE3219FC397F34664A0, L_28, L_32, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 101));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 102));
		NullCheck(L_25);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_25, L_33, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 102));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 45));
	}

IL_00df:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 46));
		goto IL_01ee;
	}

IL_00e4:
	{
		// displayTextMesh.text = "All active:\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 47));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_34 = __this->get_displayTextMesh_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 103));
		NullCheck(L_34);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_34, _stringLiteral28FED197ABA6B0075AA7B18880CBE300693BB570, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 103));
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 48));
		V_5 = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 49));
		goto IL_0162;
	}

IL_00fa:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 50));
		// float reading = UnityEngine.Input.GetAxis($"AXIS_{i}");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 51));
		int32_t L_35 = V_5;
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_36);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 104));
		String_t* L_38 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6FB374FAAB4FAB74CFBBCC828F8657A89110BAF1, L_37, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 104));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 105));
		float L_39 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_38, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 105));
		V_6 = L_39;
		// if (reading != 0.0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 52));
		float L_40 = V_6;
		V_7 = (bool)((((int32_t)((((double)(((double)((double)L_40)))) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 53));
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_015b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 54));
		// displayTextMesh.text += $"Axis {i}: {reading}\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 55));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_42 = __this->get_displayTextMesh_4();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_43 = L_42;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 106));
		NullCheck(L_43);
		String_t* L_44 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_43, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 106));
		int32_t L_45 = V_5;
		int32_t L_46 = L_45;
		RuntimeObject * L_47 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_46);
		float L_48 = V_6;
		float L_49 = L_48;
		RuntimeObject * L_50 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_49);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 107));
		String_t* L_51 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralD95F39C503EAA958DC1BCE86E2C4A4612B82C155, L_47, L_50, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 107));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 108));
		String_t* L_52 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_44, L_51, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 108));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 109));
		NullCheck(L_43);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_43, L_52, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 109));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 56));
	}

IL_015b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 57));
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 58));
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0162:
	{
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 59));
		int32_t L_54 = V_5;
		V_8 = (bool)((((int32_t)((((int32_t)L_54) > ((int32_t)((int32_t)28)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 60));
		bool L_55 = V_8;
		if (L_55)
		{
			goto IL_00fa;
		}
	}
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 61));
		V_9 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 62));
		goto IL_01e0;
	}

IL_0176:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 63));
		// if (Enum.TryParse($"JoystickButton{i}", out KeyCode buttonCode))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 64));
		int32_t L_56 = V_9;
		int32_t L_57 = L_56;
		RuntimeObject * L_58 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_57);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 110));
		String_t* L_59 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralB4AB17AF25666479BF1B9F04718B963E43946C3D, L_58, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 110));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 111));
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		bool L_60 = Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0(L_59, (int32_t*)(&V_10), /*hidden argument*/Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 111));
		V_11 = L_60;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 65));
		bool L_61 = V_11;
		if (!L_61)
		{
			goto IL_01d9;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 66));
		// bool isPressed = UnityEngine.Input.GetKey(buttonCode);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 67));
		int32_t L_62 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 112));
		bool L_63 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_62, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 112));
		V_12 = L_63;
		// if (isPressed)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 68));
		bool L_64 = V_12;
		V_13 = L_64;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 69));
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_01d8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 70));
		// displayTextMesh.text += $"Button {i}: {isPressed}\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 71));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_66 = __this->get_displayTextMesh_4();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_67 = L_66;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 113));
		NullCheck(L_67);
		String_t* L_68 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_67, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 113));
		int32_t L_69 = V_9;
		int32_t L_70 = L_69;
		RuntimeObject * L_71 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_70);
		bool L_72 = V_12;
		bool L_73 = L_72;
		RuntimeObject * L_74 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_73);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 114));
		String_t* L_75 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6F6A465F04662494BCF2CDD14B39035E925D63B3, L_71, L_74, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 114));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 115));
		String_t* L_76 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_68, L_75, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 115));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 116));
		NullCheck(L_67);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_67, L_76, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 116));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 72));
	}

IL_01d8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 73));
	}

IL_01d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 74));
		// for (int i = 0; i < UnityInputButtonCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 75));
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_01e0:
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 76));
		int32_t L_78 = V_9;
		V_14 = (bool)((((int32_t)L_78) < ((int32_t)((int32_t)20)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 77));
		bool L_79 = V_14;
		if (L_79)
		{
			goto IL_0176;
		}
	}
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 78));
		goto IL_01ee;
	}

IL_01ee:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 79));
		goto IL_0268;
	}

IL_01f1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 80));
		// string[] joystickNames = UnityEngine.Input.GetJoystickNames();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 81));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 117));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_80 = Input_GetJoystickNames_m99559CDAA21A390D9D10E9B82F65397C32424C32(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 117));
		V_15 = L_80;
		// displayTextMesh.text = $"Detected {joystickNames.Length} controller{(joystickNames.Length != 1 ? "s" : "")}:\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 82));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_81 = __this->get_displayTextMesh_4();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_82 = V_15;
		NullCheck(L_82);
		int32_t L_83 = (((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length))));
		RuntimeObject * L_84 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_83);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_85 = V_15;
		NullCheck(L_85);
		G_B24_0 = L_84;
		G_B24_1 = _stringLiteral36E9E9FFC9D20BBF09FD7D86DB639097F5EE8B4A;
		G_B24_2 = L_81;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length))))) == ((uint32_t)1))))
		{
			G_B25_0 = L_84;
			G_B25_1 = _stringLiteral36E9E9FFC9D20BBF09FD7D86DB639097F5EE8B4A;
			G_B25_2 = L_81;
			goto IL_021b;
		}
	}
	{
		G_B26_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		goto IL_0220;
	}

IL_021b:
	{
		G_B26_0 = _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
	}

IL_0220:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 118));
		String_t* L_86 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(G_B26_2, G_B26_1, G_B26_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 118));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 119));
		NullCheck(G_B26_3);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(G_B26_3, L_86, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 119));
		// for (int i = 0; i < joystickNames.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 83));
		V_16 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 84));
		goto IL_0259;
	}

IL_0230:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 85));
		// displayTextMesh.text += $"{joystickNames[i]}\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 86));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_87 = __this->get_displayTextMesh_4();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_88 = L_87;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 120));
		NullCheck(L_88);
		String_t* L_89 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_88, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 120));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_90 = V_15;
		int32_t L_91 = V_16;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		String_t* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 121));
		String_t* L_94 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_89, L_93, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 121));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 122));
		NullCheck(L_88);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_88, L_94, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 122));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 87));
		// for (int i = 0; i < joystickNames.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 88));
		int32_t L_95 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_0259:
	{
		// for (int i = 0; i < joystickNames.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 89));
		int32_t L_96 = V_16;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_97 = V_15;
		NullCheck(L_97);
		V_17 = (bool)((((int32_t)L_96) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length))))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 90));
		bool L_98 = V_17;
		if (L_98)
		{
			goto IL_0230;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 91));
	}

IL_0268:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 92));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult__ctor_m7A703079A91EC480C770098D51CBCAEF62EE7AFE (DisplayInputResult_t5410AA3A488ABA56C071CA844BAAE42D73622FF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayInputResult__ctor_m7A703079A91EC480C770098D51CBCAEF62EE7AFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DisplayInputResult__ctor_m7A703079A91EC480C770098D51CBCAEF62EE7AFE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 123));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 124));
	{
		// private TextMesh displayTextMesh = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 125));
		__this->set_displayTextMesh_4((TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A *)NULL);
		// private AxisType inputType = AxisType.None;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 126));
		__this->set_inputType_5(0);
		// private int axisNumber = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 127));
		__this->set_axisNumber_6(1);
		// private int buttonNumber = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 128));
		__this->set_buttonNumber_7(0);
		// private DisplayType displayType = DisplayType.InputAxes;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 129));
		__this->set_displayType_8(0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 130));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 130));
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
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListInputFeatureUsages_Update_m3D5D88C997B2766F69B73495DE75975ADCAA09DA (ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListInputFeatureUsages_Update_m3D5D88C997B2766F69B73495DE75975ADCAA09DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * V_7 = NULL;
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * V_14 = NULL;
	bool V_15 = false;
	Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  V_16;
	memset((&V_16), 0, sizeof(V_16));
	InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_19 = NULL;
	float V_20 = 0.0f;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	uint32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	float V_28 = 0.0f;
	bool V_29 = false;
	bool V_30 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_31;
	memset((&V_31), 0, sizeof(V_31));
	bool V_32 = false;
	bool V_33 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_34;
	memset((&V_34), 0, sizeof(V_34));
	bool V_35 = false;
	bool V_36 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_37;
	memset((&V_37), 0, sizeof(V_37));
	bool V_38 = false;
	bool V_39 = false;
	uint32_t V_40 = 0;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_4), (&V_6), (&V_7), (&V_8), (&V_9), (&V_17), (&V_19), (&V_20), (&V_22), (&V_25), (&V_28), (&V_31), (&V_34), (&V_37), (&V_40));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListInputFeatureUsages_Update_m3D5D88C997B2766F69B73495DE75975ADCAA09DA_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 131));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 132));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	RuntimeObject * G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B11_2 = NULL;
	RuntimeObject * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B7_2 = NULL;
	RuntimeObject * G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B9_2 = NULL;
	RuntimeObject * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B8_2 = NULL;
	String_t* G_B10_0 = NULL;
	RuntimeObject * G_B10_1 = NULL;
	String_t* G_B10_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	RuntimeObject * G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B12_3 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 133));
		// if (listInputDevicesTextMesh == null || gridObjectCollection == null || displayFeatureUsagesPrefab == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 134));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_0 = __this->get_listInputDevicesTextMesh_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 277));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 277));
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * L_2 = __this->get_gridObjectCollection_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 278));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 278));
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_displayFeatureUsagesPrefab_6();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 279));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 279));
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		V_3 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 135));
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 136));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 137));
		goto IL_05ea;
	}

IL_0036:
	{
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Left, leftInputDevices);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 138));
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_7 = __this->get_leftInputDevices_7();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 280));
		InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577(((int32_t)256), L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 280));
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right, rightInputDevices);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 139));
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_8 = __this->get_rightInputDevices_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 281));
		InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577(((int32_t)512), L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 281));
		// List<InputDevice> inputDevices = leftInputDevices.Union(rightInputDevices).ToList();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 140));
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_9 = __this->get_leftInputDevices_7();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_10 = __this->get_rightInputDevices_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 282));
		RuntimeObject* L_11 = Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589(L_9, L_10, /*hidden argument*/Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 282));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 283));
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_12 = Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6(L_11, /*hidden argument*/Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 283));
		V_0 = L_12;
		// int sourceCount = inputDevices.Count;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 141));
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 284));
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_inline(L_13, /*hidden argument*/List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 284));
		V_1 = L_14;
		// listInputDevicesTextMesh.text = $"Detected {sourceCount} input source{(sourceCount > 1 ? "s:" : sourceCount != 0 ? ":" : "s")}\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 142));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_15 = __this->get_listInputDevicesTextMesh_4();
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = V_1;
		G_B7_0 = L_18;
		G_B7_1 = _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
		G_B7_2 = L_15;
		if ((((int32_t)L_19) > ((int32_t)1)))
		{
			G_B11_0 = L_18;
			G_B11_1 = _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
			G_B11_2 = L_15;
			goto IL_009c;
		}
	}
	{
		int32_t L_20 = V_1;
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		if (L_20)
		{
			G_B9_0 = G_B7_0;
			G_B9_1 = G_B7_1;
			G_B9_2 = G_B7_2;
			goto IL_0095;
		}
	}
	{
		G_B10_0 = _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_009a;
	}

IL_0095:
	{
		G_B10_0 = _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_009a:
	{
		G_B12_0 = G_B10_0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00a1;
	}

IL_009c:
	{
		G_B12_0 = _stringLiteral6126CDA8ABEA9B72D62B5EBC6AB525CB287F4D14;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_00a1:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 285));
		String_t* L_21 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(G_B12_2, G_B12_1, G_B12_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 285));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 286));
		NullCheck(G_B12_3);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(G_B12_3, L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 286));
		// bool collectionNeedsUpdating = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 143));
		V_2 = (bool)0;
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 144));
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_22 = __this->get_displayFeatureUsagesTextMeshes_10();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 287));
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_inline(L_22, /*hidden argument*/List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 287));
		V_4 = L_23;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 145));
		goto IL_00ee;
	}

IL_00bd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 146));
		// displayFeatureUsagesTextMeshes.Add(Instantiate(displayFeatureUsagesPrefab, gameObject.transform).GetComponentInChildren<TextMesh>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 147));
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_24 = __this->get_displayFeatureUsagesTextMeshes_10();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = __this->get_displayFeatureUsagesPrefab_6();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 288));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 288));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 289));
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_26, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 289));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 290));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_25, L_27, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 290));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 291));
		NullCheck(L_28);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_29 = GameObject_GetComponentInChildren_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m9E4D7FFDEA6E42F7B15ABD2843855CF150415620(L_28, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m9E4D7FFDEA6E42F7B15ABD2843855CF150415620_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 291));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 292));
		NullCheck(L_24);
		List_1_Add_mB71A8C3E82969712B249C0274B4F5753ABDEEA66(L_24, L_29, /*hidden argument*/List_1_Add_mB71A8C3E82969712B249C0274B4F5753ABDEEA66_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 292));
		// collectionNeedsUpdating = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 148));
		V_2 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 149));
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 150));
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00ee:
	{
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 151));
		int32_t L_31 = V_4;
		int32_t L_32 = V_1;
		V_5 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 152));
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_00bd;
		}
	}
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 153));
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 154));
		goto IL_05bd;
	}

IL_0101:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 155));
		// TextMesh textMesh = displayFeatureUsagesTextMeshes[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 156));
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_34 = __this->get_displayFeatureUsagesTextMeshes_10();
		int32_t L_35 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 293));
		NullCheck(L_34);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_36 = List_1_get_Item_mC652A7DD2A361A927F5A8B0D43C20602FFFEDA8E_inline(L_34, L_35, /*hidden argument*/List_1_get_Item_mC652A7DD2A361A927F5A8B0D43C20602FFFEDA8E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 293));
		V_7 = L_36;
		// if (textMesh == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 157));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_37 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 294));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_37, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 294));
		V_10 = L_38;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 158));
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_0125;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 159));
		// continue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 160));
		goto IL_05b7;
	}

IL_0125:
	{
		// if (i >= sourceCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 161));
		int32_t L_40 = V_6;
		int32_t L_41 = V_1;
		V_11 = (bool)((((int32_t)((((int32_t)L_40) < ((int32_t)L_41))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 162));
		bool L_42 = V_11;
		if (!L_42)
		{
			goto IL_0171;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 163));
		// if (textMesh.transform.parent.gameObject.activeSelf)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 164));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_43 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 295));
		NullCheck(L_43);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_43, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 295));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 296));
		NullCheck(L_44);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_44, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 296));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 297));
		NullCheck(L_45);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_46 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_45, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 297));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 298));
		NullCheck(L_46);
		bool L_47 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_46, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 298));
		V_12 = L_47;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 165));
		bool L_48 = V_12;
		if (!L_48)
		{
			goto IL_016c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 166));
		// textMesh.transform.parent.gameObject.SetActive(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 167));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_49 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 299));
		NullCheck(L_49);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_49, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 299));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 300));
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_50, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 300));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 301));
		NullCheck(L_51);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_52 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_51, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 301));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 302));
		NullCheck(L_52);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_52, (bool)0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 302));
		// collectionNeedsUpdating = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 168));
		V_2 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 169));
	}

IL_016c:
	{
		// continue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 170));
		goto IL_05b7;
	}

IL_0171:
	{
		// if (!textMesh.transform.parent.gameObject.activeSelf)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 171));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_53 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 303));
		NullCheck(L_53);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_54 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_53, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 303));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 304));
		NullCheck(L_54);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_55 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_54, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 304));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 305));
		NullCheck(L_55);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_55, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 305));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 306));
		NullCheck(L_56);
		bool L_57 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_56, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 306));
		V_13 = (bool)((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 172));
		bool L_58 = V_13;
		if (!L_58)
		{
			goto IL_01ac;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 173));
		// textMesh.transform.parent.gameObject.SetActive(true);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 174));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_59 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 307));
		NullCheck(L_59);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_60 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_59, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 307));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 308));
		NullCheck(L_60);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_60, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 308));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 309));
		NullCheck(L_61);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_62 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_61, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 309));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 310));
		NullCheck(L_62);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_62, (bool)1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 310));
		// collectionNeedsUpdating = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 175));
		V_2 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 176));
	}

IL_01ac:
	{
		// InputDevice inputDevice = inputDevices[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 177));
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_63 = V_0;
		int32_t L_64 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 311));
		NullCheck(L_63);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_65 = List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_inline(L_63, L_64, /*hidden argument*/List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 311));
		V_8 = L_65;
		// bool displayNeedsResizing = !textMesh.text.StartsWith(inputDevice.name);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 178));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_66 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 312));
		NullCheck(L_66);
		String_t* L_67 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_66, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 312));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 313));
		String_t* L_68 = InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 313));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 314));
		NullCheck(L_67);
		bool L_69 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_67, L_68, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 314));
		V_9 = (bool)((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
		// listInputDevicesTextMesh.text += $"{inputDevice.name} | {inputDevice.manufacturer}\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 179));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_70 = __this->get_listInputDevicesTextMesh_4();
		V_14 = L_70;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_71 = V_14;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_72 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_73 = L_72;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_74 = V_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 315));
		NullCheck(L_74);
		String_t* L_75 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_74, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 315));
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_75);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_75);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_76 = L_73;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 316));
		String_t* L_77 = InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 316));
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_77);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_77);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_78 = L_76;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteral5ADBC2B8C5C1C93843CDFB9A3FAE9F48D40CAF17);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5ADBC2B8C5C1C93843CDFB9A3FAE9F48D40CAF17);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_79 = L_78;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 317));
		String_t* L_80 = InputDevice_get_manufacturer_m3164AFB4514E2E90738C4075790733EFAA7D665F((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 317));
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_80);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_81 = L_79;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 318));
		String_t* L_82 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_81, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 318));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 319));
		NullCheck(L_71);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_71, L_82, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 319));
		// textMesh.text = $"{inputDevice.name}\n\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 180));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_83 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 320));
		String_t* L_84 = InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 320));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 321));
		String_t* L_85 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_84, _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 321));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 322));
		NullCheck(L_83);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_83, L_85, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 322));
		// if (inputDevice.TryGetFeatureUsages(featureUsages))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 181));
		List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * L_86 = __this->get_featureUsages_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 323));
		bool L_87 = InputDevice_TryGetFeatureUsages_m0F7705813980045EA1EC46EF202B3F6F928F76FD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), L_86, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 323));
		V_15 = L_87;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 182));
		bool L_88 = V_15;
		if (!L_88)
		{
			goto IL_05b6;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 183));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 184));
		// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 185));
		List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * L_89 = __this->get_featureUsages_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 324));
		NullCheck(L_89);
		Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  L_90 = List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F(L_89, /*hidden argument*/List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 324));
		V_16 = L_90;
	}

IL_0255:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 186));
			goto IL_0598;
		}

IL_025a:
		{
			// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 187));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 325));
			InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  L_91 = Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_inline((Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *)(&V_16), /*hidden argument*/Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 325));
			V_17 = L_91;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 188));
			// if (displayNeedsResizing)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 189));
			bool L_92 = V_9;
			V_18 = L_92;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 190));
			bool L_93 = V_18;
			if (!L_93)
			{
				goto IL_02d0;
			}
		}

IL_026c:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 191));
			// Transform backingPanel = textMesh.gameObject.transform.parent.GetChild(0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 192));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_94 = V_7;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 326));
			NullCheck(L_94);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_95 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_94, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 326));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 327));
			NullCheck(L_95);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_96 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_95, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 327));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 328));
			NullCheck(L_96);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_97 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_96, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 328));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 329));
			NullCheck(L_97);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_98 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_97, 0, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 329));
			V_19 = L_98;
			// float backingPanelHeight = BackingPanelMargin + (BackingPanelEntryHeight * (featureUsages.Count + 2)) + BackingPanelMargin;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 193));
			List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * L_99 = __this->get_featureUsages_9();
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 330));
			NullCheck(L_99);
			int32_t L_100 = List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_inline(L_99, /*hidden argument*/List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 330));
			V_20 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.05f), (float)((float)il2cpp_codegen_multiply((float)(0.03f), (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)2))))))))), (float)(0.05f)));
			// backingPanel.localScale = new Vector3(backingPanel.localScale.x, backingPanelHeight, backingPanel.localScale.z);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 194));
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_101 = V_19;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_102 = V_19;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 331));
			NullCheck(L_102);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_102, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 331));
			float L_104 = L_103.get_x_2();
			float L_105 = V_20;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_106 = V_19;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 332));
			NullCheck(L_106);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_107 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_106, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 332));
			float L_108 = L_107.get_z_4();
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 333));
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109;
			memset((&L_109), 0, sizeof(L_109));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_109), L_104, L_105, L_108, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 333));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 334));
			NullCheck(L_101);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_101, L_109, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 334));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 195));
		}

IL_02d0:
		{
			// textMesh.text += $"{inputFeatureUsage.name}";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 196));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_110 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_111 = L_110;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 335));
			NullCheck(L_111);
			String_t* L_112 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_111, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 335));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 336));
			String_t* L_113 = InputFeatureUsage_get_name_m3415EE4B71906002970C499B404DDAB37687C273((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 336));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 337));
			String_t* L_114 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_112, L_113, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 337));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 338));
			NullCheck(L_111);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_111, L_114, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 338));
			// if (inputFeatureUsage.type.Equals(typeof(bool)))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 197));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 339));
			Type_t * L_115 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 339));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_116 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 340));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_117 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_116, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 340));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 341));
			NullCheck(L_115);
			bool L_118 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_115, L_117);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 341));
			V_21 = L_118;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 198));
			bool L_119 = V_21;
			if (!L_119)
			{
				goto IL_0349;
			}
		}

IL_0306:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 199));
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<bool>(), out bool data))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 200));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 342));
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_120 = InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 342));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 343));
			bool L_121 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), L_120, (bool*)(&V_22), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 343));
			V_23 = L_121;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 201));
			bool L_122 = V_23;
			if (!L_122)
			{
				goto IL_0343;
			}
		}

IL_031d:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 202));
			// textMesh.text += $": {data}\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 203));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_123 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_124 = L_123;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 344));
			NullCheck(L_124);
			String_t* L_125 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_124, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 344));
			bool L_126 = V_22;
			bool L_127 = L_126;
			RuntimeObject * L_128 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_127);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 345));
			String_t* L_129 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_128, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 345));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 346));
			String_t* L_130 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_125, L_129, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 346));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 347));
			NullCheck(L_124);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_124, L_130, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 347));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 204));
		}

IL_0343:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 205));
			goto IL_0597;
		}

IL_0349:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(uint)))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 206));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 348));
			Type_t * L_131 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 348));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_132 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 349));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_133 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_132, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 349));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 350));
			NullCheck(L_131);
			bool L_134 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_131, L_133);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 350));
			V_24 = L_134;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 207));
			bool L_135 = V_24;
			if (!L_135)
			{
				goto IL_03a8;
			}
		}

IL_0365:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 208));
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<uint>(), out uint data))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 209));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 351));
			InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  L_136 = InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 351));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 352));
			bool L_137 = InputDevice_TryGetFeatureValue_mFF614E505A74A95290B3B467A7516B514393EED6((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), L_136, (uint32_t*)(&V_25), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 352));
			V_26 = L_137;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 210));
			bool L_138 = V_26;
			if (!L_138)
			{
				goto IL_03a2;
			}
		}

IL_037c:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 211));
			// textMesh.text += $": {data}\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 212));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_139 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_140 = L_139;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 353));
			NullCheck(L_140);
			String_t* L_141 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_140, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 353));
			uint32_t L_142 = V_25;
			uint32_t L_143 = L_142;
			RuntimeObject * L_144 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_143);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 354));
			String_t* L_145 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_144, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 354));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 355));
			String_t* L_146 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_141, L_145, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 355));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 356));
			NullCheck(L_140);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_140, L_146, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 356));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 213));
		}

IL_03a2:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 214));
			goto IL_0597;
		}

IL_03a8:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(float)))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 215));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 357));
			Type_t * L_147 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 357));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_148 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 358));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_149 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_148, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 358));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 359));
			NullCheck(L_147);
			bool L_150 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_147, L_149);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 359));
			V_27 = L_150;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 216));
			bool L_151 = V_27;
			if (!L_151)
			{
				goto IL_0407;
			}
		}

IL_03c4:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 217));
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<float>(), out float data))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 218));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 360));
			InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_152 = InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 360));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 361));
			bool L_153 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), L_152, (float*)(&V_28), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 361));
			V_29 = L_153;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 219));
			bool L_154 = V_29;
			if (!L_154)
			{
				goto IL_0401;
			}
		}

IL_03db:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 220));
			// textMesh.text += $": {data}\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 221));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_155 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_156 = L_155;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 362));
			NullCheck(L_156);
			String_t* L_157 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_156, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 362));
			float L_158 = V_28;
			float L_159 = L_158;
			RuntimeObject * L_160 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_159);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 363));
			String_t* L_161 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_160, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 363));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 364));
			String_t* L_162 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_157, L_161, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 364));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 365));
			NullCheck(L_156);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_156, L_162, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 365));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 222));
		}

IL_0401:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 223));
			goto IL_0597;
		}

IL_0407:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Vector2)))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 224));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 366));
			Type_t * L_163 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 366));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_164 = { reinterpret_cast<intptr_t> (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_0_0_0_var) };
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 367));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_165 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_164, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 367));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 368));
			NullCheck(L_163);
			bool L_166 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_163, L_165);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 368));
			V_30 = L_166;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 225));
			bool L_167 = V_30;
			if (!L_167)
			{
				goto IL_0466;
			}
		}

IL_0423:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 226));
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Vector2>(), out Vector2 data))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 227));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 369));
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_168 = InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 369));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 370));
			bool L_169 = InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), L_168, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_31), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 370));
			V_32 = L_169;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 228));
			bool L_170 = V_32;
			if (!L_170)
			{
				goto IL_0460;
			}
		}

IL_043a:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 229));
			// textMesh.text += $": {data}\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 230));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_171 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_172 = L_171;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 371));
			NullCheck(L_172);
			String_t* L_173 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_172, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 371));
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_174 = V_31;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_175 = L_174;
			RuntimeObject * L_176 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_175);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 372));
			String_t* L_177 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_176, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 372));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 373));
			String_t* L_178 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_173, L_177, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 373));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 374));
			NullCheck(L_172);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_172, L_178, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 374));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 231));
		}

IL_0460:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 232));
			goto IL_0597;
		}

IL_0466:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Vector3)))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 233));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 375));
			Type_t * L_179 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 375));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_180 = { reinterpret_cast<intptr_t> (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_0_0_0_var) };
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 376));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_181 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_180, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 376));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 377));
			NullCheck(L_179);
			bool L_182 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_179, L_181);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 377));
			V_33 = L_182;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 234));
			bool L_183 = V_33;
			if (!L_183)
			{
				goto IL_04c5;
			}
		}

IL_0482:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 235));
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Vector3>(), out Vector3 data))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 236));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 378));
			InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_184 = InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 378));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 379));
			bool L_185 = InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), L_184, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_34), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 379));
			V_35 = L_185;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 237));
			bool L_186 = V_35;
			if (!L_186)
			{
				goto IL_04bf;
			}
		}

IL_0499:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 238));
			// textMesh.text += $": {data}\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 239));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_187 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_188 = L_187;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 380));
			NullCheck(L_188);
			String_t* L_189 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_188, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 380));
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_190 = V_34;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_191 = L_190;
			RuntimeObject * L_192 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_191);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 381));
			String_t* L_193 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_192, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 381));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 382));
			String_t* L_194 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_189, L_193, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 382));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 383));
			NullCheck(L_188);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_188, L_194, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 383));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 240));
		}

IL_04bf:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 241));
			goto IL_0597;
		}

IL_04c5:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Quaternion)))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 242));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 384));
			Type_t * L_195 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 384));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_196 = { reinterpret_cast<intptr_t> (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_0_0_0_var) };
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 385));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_197 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_196, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 385));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 386));
			NullCheck(L_195);
			bool L_198 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_195, L_197);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 386));
			V_36 = L_198;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 243));
			bool L_199 = V_36;
			if (!L_199)
			{
				goto IL_0521;
			}
		}

IL_04e1:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 244));
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Quaternion>(), out Quaternion data))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 245));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 387));
			InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  L_200 = InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 387));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 388));
			bool L_201 = InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), L_200, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_37), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 388));
			V_38 = L_201;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 246));
			bool L_202 = V_38;
			if (!L_202)
			{
				goto IL_051e;
			}
		}

IL_04f8:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 247));
			// textMesh.text += $": {data}\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 248));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_203 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_204 = L_203;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 389));
			NullCheck(L_204);
			String_t* L_205 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_204, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 389));
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_206 = V_37;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_207 = L_206;
			RuntimeObject * L_208 = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &L_207);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 390));
			String_t* L_209 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_208, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 390));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 391));
			String_t* L_210 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_205, L_209, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 391));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 392));
			NullCheck(L_204);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_204, L_210, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 392));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 249));
		}

IL_051e:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 250));
			goto IL_0597;
		}

IL_0521:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(InputTrackingState)))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 251));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 393));
			Type_t * L_211 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 393));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_212 = { reinterpret_cast<intptr_t> (InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_0_0_0_var) };
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 394));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_213 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_212, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 394));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 395));
			NullCheck(L_211);
			bool L_214 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_211, L_213);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 395));
			V_39 = L_214;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 252));
			bool L_215 = V_39;
			if (!L_215)
			{
				goto IL_057d;
			}
		}

IL_053d:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 253));
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<InputTrackingState>(), out InputTrackingState data))
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 254));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 396));
			InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  L_216 = InputFeatureUsage_As_TisInputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_m19BB2E6465283D7DC07628C141E48267C383B2EF((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_17), /*hidden argument*/InputFeatureUsage_As_TisInputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_m19BB2E6465283D7DC07628C141E48267C383B2EF_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 396));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 397));
			bool L_217 = InputDevice_TryGetFeatureValue_mACC12A77C3C3712F6EEFE651647463E389105AF2((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_8), L_216, (uint32_t*)(&V_40), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 397));
			V_41 = L_217;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 255));
			bool L_218 = V_41;
			if (!L_218)
			{
				goto IL_057a;
			}
		}

IL_0554:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 256));
			// textMesh.text += $": {data}\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 257));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_219 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_220 = L_219;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 398));
			NullCheck(L_220);
			String_t* L_221 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_220, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 398));
			uint32_t L_222 = V_40;
			uint32_t L_223 = L_222;
			RuntimeObject * L_224 = Box(InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_il2cpp_TypeInfo_var, &L_223);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 399));
			String_t* L_225 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_224, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 399));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 400));
			String_t* L_226 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_221, L_225, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 400));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 401));
			NullCheck(L_220);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_220, L_226, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 401));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 258));
		}

IL_057a:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 259));
			goto IL_0597;
		}

IL_057d:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 260));
			// textMesh.text += $"\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 261));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_227 = V_7;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_228 = L_227;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 402));
			NullCheck(L_228);
			String_t* L_229 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_228, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 402));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 403));
			String_t* L_230 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_229, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 403));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 404));
			NullCheck(L_228);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_228, L_230, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 404));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 262));
		}

IL_0597:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 263));
		}

IL_0598:
		{
			// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 264));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 405));
			bool L_231 = Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1((Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *)(&V_16), /*hidden argument*/Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 405));
			if (L_231)
			{
				goto IL_025a;
			}
		}

IL_05a4:
		{
			IL2CPP_LEAVE(0x5B5, FINALLY_05a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_05a6;
	}

FINALLY_05a6:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 265));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 406));
		Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE((Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *)(&V_16), /*hidden argument*/Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 406));
		IL2CPP_END_FINALLY(1446)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1446)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B5, IL_05b5)
	}

IL_05b5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 266));
	}

IL_05b6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 267));
	}

IL_05b7:
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 268));
		int32_t L_232 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_232, (int32_t)1));
	}

IL_05bd:
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 269));
		int32_t L_233 = V_6;
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_234 = __this->get_displayFeatureUsagesTextMeshes_10();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 407));
		NullCheck(L_234);
		int32_t L_235 = List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_inline(L_234, /*hidden argument*/List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 407));
		V_42 = (bool)((((int32_t)L_233) < ((int32_t)L_235))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 270));
		bool L_236 = V_42;
		if (L_236)
		{
			goto IL_0101;
		}
	}
	{
		// if (collectionNeedsUpdating)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 271));
		bool L_237 = V_2;
		V_43 = L_237;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 272));
		bool L_238 = V_43;
		if (!L_238)
		{
			goto IL_05ea;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 273));
		// gridObjectCollection.UpdateCollection();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 274));
		GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 * L_239 = __this->get_gridObjectCollection_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 408));
		NullCheck(L_239);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_239);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 408));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 275));
	}

IL_05ea:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 276));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListInputFeatureUsages__ctor_m296692847E7882F0D5722B01CD538FE31D6B7CCC (ListInputFeatureUsages_tA7BAE0206899BEA0BC0A633168F843489669B9E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListInputFeatureUsages__ctor_m296692847E7882F0D5722B01CD538FE31D6B7CCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ListInputFeatureUsages__ctor_m296692847E7882F0D5722B01CD538FE31D6B7CCC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 409));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 410));
	{
		// private TextMesh listInputDevicesTextMesh = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 411));
		__this->set_listInputDevicesTextMesh_4((TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A *)NULL);
		// private GridObjectCollection gridObjectCollection = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 412));
		__this->set_gridObjectCollection_5((GridObjectCollection_tAA32F8B1DA3ECCBFF6807495E876FCD36FE6DFC4 *)NULL);
		// private GameObject displayFeatureUsagesPrefab = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 413));
		__this->set_displayFeatureUsagesPrefab_6((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// private readonly List<InputDevice> leftInputDevices = new List<InputDevice>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 418));
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_0 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_0, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 418));
		__this->set_leftInputDevices_7(L_0);
		// private readonly List<InputDevice> rightInputDevices = new List<InputDevice>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 415));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 419));
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_1 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_1, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 419));
		__this->set_rightInputDevices_8(L_1);
		// private readonly List<InputFeatureUsage> featureUsages = new List<InputFeatureUsage>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 416));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 420));
		List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * L_2 = (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 *)il2cpp_codegen_object_new(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03_il2cpp_TypeInfo_var);
		List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3(L_2, /*hidden argument*/List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 420));
		__this->set_featureUsages_9(L_2);
		// private readonly List<TextMesh> displayFeatureUsagesTextMeshes = new List<TextMesh>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 417));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 421));
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_3 = (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *)il2cpp_codegen_object_new(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD_il2cpp_TypeInfo_var);
		List_1__ctor_m7FD17D612A7A3D2A57B6B4815FC83ADCEE9A7A6E(L_3, /*hidden argument*/List_1__ctor_m7FD17D612A7A3D2A57B6B4815FC83ADCEE9A7A6E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 421));
		__this->set_displayFeatureUsagesTextMeshes_10(L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 422));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 422));
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
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionTool_Update_m80CCF4F3040BAFD9CCA94B65A3F96D4B9129EA27 (MixedRealityInteractionTool_t5576F7BEB0AADFFFD4A9C3B117AE3BA3308FFE41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInteractionTool_Update_m80CCF4F3040BAFD9CCA94B65A3F96D4B9129EA27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD  V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* V_9 = NULL;
	int32_t V_10 = 0;
	MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * V_11 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * V_12 = NULL;
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_5), (&V_6), (&V_11));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityInteractionTool_Update_m80CCF4F3040BAFD9CCA94B65A3F96D4B9129EA27_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 423));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 424));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B11_1 = NULL;
	String_t* G_B10_0 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B10_1 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	String_t* G_B12_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B12_2 = NULL;
	RuntimeObject * G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B14_2 = NULL;
	RuntimeObject * G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B13_2 = NULL;
	RuntimeObject * G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B21_2 = NULL;
	RuntimeObject * G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B16_2 = NULL;
	RuntimeObject * G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B15_2 = NULL;
	int32_t G_B17_0 = 0;
	RuntimeObject * G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B17_3 = NULL;
	RuntimeObject * G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B19_2 = NULL;
	RuntimeObject * G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B18_2 = NULL;
	String_t* G_B20_0 = NULL;
	RuntimeObject * G_B20_1 = NULL;
	String_t* G_B20_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B20_3 = NULL;
	String_t* G_B22_0 = NULL;
	RuntimeObject * G_B22_1 = NULL;
	String_t* G_B22_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B22_3 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 425));
		// if (listControllersTextMesh == null || leftHandedControllerTextMesh == null || rightHandedControllerTextMesh == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 426));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_0 = __this->get_listControllersTextMesh_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 486));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 486));
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_2 = __this->get_leftHandedControllerTextMesh_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 487));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 487));
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_4 = __this->get_rightHandedControllerTextMesh_6();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 488));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 488));
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		V_1 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 427));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 428));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 429));
		goto IL_0443;
	}

IL_0036:
	{
		// listControllersTextMesh.text = string.Empty;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 430));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_7 = __this->get_listControllersTextMesh_4();
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 489));
		NullCheck(L_7);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_7, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 489));
		// leftHandedControllerTextMesh.text = string.Empty;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 431));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_9 = __this->get_leftHandedControllerTextMesh_5();
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 490));
		NullCheck(L_9);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_9, L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 490));
		// rightHandedControllerTextMesh.text = string.Empty;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 432));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_11 = __this->get_rightHandedControllerTextMesh_6();
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 491));
		NullCheck(L_11);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_11, L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 491));
		// HashSet<IMixedRealityController> controllers = CoreServices.InputSystem?.DetectedControllers;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 433));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 492));
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 492));
		RuntimeObject* L_14 = L_13;
		G_B7_0 = L_14;
		if (L_14)
		{
			G_B8_0 = L_14;
			goto IL_0075;
		}
	}
	{
		G_B9_0 = ((HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 *)(NULL));
		goto IL_007a;
	}

IL_0075:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 493));
		NullCheck(G_B8_0);
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_15 = InterfaceFuncInvoker0< HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B8_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 493));
		G_B9_0 = L_15;
	}

IL_007a:
	{
		V_0 = G_B9_0;
		// listControllersTextMesh.text = $"Detected {controllers?.Count} input source{(controllers?.Count > 1 ? "s:" : controllers?.Count != 0 ? ":" : "s")}\n";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 434));
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_16 = __this->get_listControllersTextMesh_4();
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_17 = V_0;
		G_B10_0 = _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
		G_B10_1 = L_16;
		if (L_17)
		{
			G_B11_0 = _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
			G_B11_1 = L_16;
			goto IL_0094;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_18 = V_2;
		G_B12_0 = L_18;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_009f;
	}

IL_0094:
	{
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_19 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 494));
		NullCheck(L_19);
		int32_t L_20 = HashSet_1_get_Count_m8D860E79FA12E2930BC04DFE3124CB5A253794B6_inline(L_19, /*hidden argument*/HashSet_1_get_Count_m8D860E79FA12E2930BC04DFE3124CB5A253794B6_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 494));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 495));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_21), L_20, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 495));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_009f:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_22 = G_B12_0;
		RuntimeObject * L_23 = Box(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_il2cpp_TypeInfo_var, &L_22);
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_24 = V_0;
		G_B13_0 = L_23;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		if (!L_24)
		{
			G_B14_0 = L_23;
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			goto IL_00b0;
		}
	}
	{
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_25 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 496));
		NullCheck(L_25);
		int32_t L_26 = HashSet_1_get_Count_m8D860E79FA12E2930BC04DFE3124CB5A253794B6_inline(L_25, /*hidden argument*/HashSet_1_get_Count_m8D860E79FA12E2930BC04DFE3124CB5A253794B6_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 496));
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		if ((((int32_t)L_26) > ((int32_t)1)))
		{
			G_B21_0 = G_B13_0;
			G_B21_1 = G_B13_1;
			G_B21_2 = G_B13_2;
			goto IL_00cf;
		}
	}

IL_00b0:
	{
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_27 = V_0;
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		if (L_27)
		{
			G_B16_0 = G_B14_0;
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			goto IL_00b6;
		}
	}
	{
		G_B17_0 = 1;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_00bf;
	}

IL_00b6:
	{
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_28 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 497));
		NullCheck(L_28);
		int32_t L_29 = HashSet_1_get_Count_m8D860E79FA12E2930BC04DFE3124CB5A253794B6_inline(L_28, /*hidden argument*/HashSet_1_get_Count_m8D860E79FA12E2930BC04DFE3124CB5A253794B6_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 497));
		G_B17_0 = ((!(((uint32_t)L_29) <= ((uint32_t)0)))? 1 : 0);
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_00bf:
	{
		G_B18_0 = G_B17_1;
		G_B18_1 = G_B17_2;
		G_B18_2 = G_B17_3;
		if (G_B17_0)
		{
			G_B19_0 = G_B17_1;
			G_B19_1 = G_B17_2;
			G_B19_2 = G_B17_3;
			goto IL_00c8;
		}
	}
	{
		G_B20_0 = _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_00cd;
	}

IL_00c8:
	{
		G_B20_0 = _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_00cd:
	{
		G_B22_0 = G_B20_0;
		G_B22_1 = G_B20_1;
		G_B22_2 = G_B20_2;
		G_B22_3 = G_B20_3;
		goto IL_00d4;
	}

IL_00cf:
	{
		G_B22_0 = _stringLiteral6126CDA8ABEA9B72D62B5EBC6AB525CB287F4D14;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
	}

IL_00d4:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 498));
		String_t* L_30 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(G_B22_2, G_B22_1, G_B22_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 498));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 499));
		NullCheck(G_B22_3);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(G_B22_3, L_30, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 499));
		// if (controllers == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 435));
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_31 = V_0;
		V_3 = (bool)((((RuntimeObject*)(HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 *)L_31) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 436));
		bool L_32 = V_3;
		if (!L_32)
		{
			goto IL_00ed;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 437));
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 438));
		goto IL_0443;
	}

IL_00ed:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 439));
		// foreach (IMixedRealityController controller in controllers)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 440));
		HashSet_1_t02265BFDCA60AA11C8DAAD2906D880F8171B5229 * L_33 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 500));
		NullCheck(L_33);
		Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD  L_34 = HashSet_1_GetEnumerator_mA889029FA07B9D545D789ABAEF094BDF9A228416(L_33, /*hidden argument*/HashSet_1_GetEnumerator_mA889029FA07B9D545D789ABAEF094BDF9A228416_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 500));
		V_4 = L_34;
	}

IL_00f6:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 441));
			goto IL_0426;
		}

IL_00fb:
		{
			// foreach (IMixedRealityController controller in controllers)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 442));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 501));
			RuntimeObject* L_35 = Enumerator_get_Current_m5C3D3DFB017C501D03F223E3463AB91458CC44B7_inline((Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *)(&V_4), /*hidden argument*/Enumerator_get_Current_m5C3D3DFB017C501D03F223E3463AB91458CC44B7_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 501));
			V_5 = L_35;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 443));
			// listControllersTextMesh.text += $"{controller.InputSource.SourceName}\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 444));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_36 = __this->get_listControllersTextMesh_4();
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_37 = L_36;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 502));
			NullCheck(L_37);
			String_t* L_38 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_37, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 502));
			RuntimeObject* L_39 = V_5;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 503));
			NullCheck(L_39);
			RuntimeObject* L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_39);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 503));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 504));
			NullCheck(L_40);
			String_t* L_41 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_tCDAABC4976E965E99580F716B1B2CDD9CDBE1865_il2cpp_TypeInfo_var, L_40);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 504));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 505));
			String_t* L_42 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_38, L_41, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 505));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 506));
			NullCheck(L_37);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_37, L_42, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 506));
			// if (controller.ControllerHandedness == Handedness.Left)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 445));
			RuntimeObject* L_43 = V_5;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 507));
			NullCheck(L_43);
			uint8_t L_44 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_43);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 507));
			V_7 = (bool)((((int32_t)L_44) == ((int32_t)1))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 446));
			bool L_45 = V_7;
			if (!L_45)
			{
				goto IL_0149;
			}
		}

IL_013d:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 447));
			// textMesh = leftHandedControllerTextMesh;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 448));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_46 = __this->get_leftHandedControllerTextMesh_5();
			V_6 = L_46;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 449));
			goto IL_016b;
		}

IL_0149:
		{
			// else if (controller.ControllerHandedness == Handedness.Right)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 450));
			RuntimeObject* L_47 = V_5;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 508));
			NullCheck(L_47);
			uint8_t L_48 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_47);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 508));
			V_8 = (bool)((((int32_t)L_48) == ((int32_t)2))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 451));
			bool L_49 = V_8;
			if (!L_49)
			{
				goto IL_0165;
			}
		}

IL_0159:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 452));
			// textMesh = rightHandedControllerTextMesh;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 453));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_50 = __this->get_rightHandedControllerTextMesh_6();
			V_6 = L_50;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 454));
			goto IL_016b;
		}

IL_0165:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 455));
			// continue;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 456));
			goto IL_0426;
		}

IL_016b:
		{
			// textMesh.text = $"{controller.InputSource.SourceName}\n\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 457));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_51 = V_6;
			RuntimeObject* L_52 = V_5;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 509));
			NullCheck(L_52);
			RuntimeObject* L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_52);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 509));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 510));
			NullCheck(L_53);
			String_t* L_54 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_tCDAABC4976E965E99580F716B1B2CDD9CDBE1865_il2cpp_TypeInfo_var, L_53);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 510));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 511));
			String_t* L_55 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_54, _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 511));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 512));
			NullCheck(L_51);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_51, L_55, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 512));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 458));
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 459));
			RuntimeObject* L_56 = V_5;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 513));
			NullCheck(L_56);
			MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_57 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671_il2cpp_TypeInfo_var, L_56);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 513));
			V_9 = L_57;
			V_10 = 0;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 460));
			goto IL_041a;
		}

IL_019b:
		{
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 461));
			MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_58 = V_9;
			int32_t L_59 = V_10;
			NullCheck(L_58);
			int32_t L_60 = L_59;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
			V_11 = L_61;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 462));
			// textMesh.text += $"{interaction.Description} [{interaction.MixedRealityInputAction.Description}]";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 463));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_62 = V_6;
			V_12 = L_62;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_63 = V_12;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_64 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_65 = L_64;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_66 = V_12;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 514));
			NullCheck(L_66);
			String_t* L_67 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_66, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 514));
			NullCheck(L_65);
			ArrayElementTypeCheck (L_65, L_67);
			(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_67);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_68 = L_65;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_69 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 515));
			NullCheck(L_69);
			String_t* L_70 = MixedRealityInteractionMapping_get_Description_mE13C0C1AA4390BBD2DC1CB5A21DDD4B05888EC6C_inline(L_69, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 515));
			NullCheck(L_68);
			ArrayElementTypeCheck (L_68, L_70);
			(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_70);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_71 = L_68;
			NullCheck(L_71);
			ArrayElementTypeCheck (L_71, _stringLiteral42CBDB3C55980503B68E044C73B768E2C1557D44);
			(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42CBDB3C55980503B68E044C73B768E2C1557D44);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_72 = L_71;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_73 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 516));
			NullCheck(L_73);
			MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_74 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E(L_73, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 516));
			V_13 = L_74;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 517));
			String_t* L_75 = MixedRealityInputAction_get_Description_m1FA8D2243A6EB64E00E804CCA8B98CEC3E1A2658_inline((MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 *)(&V_13), /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 517));
			NullCheck(L_72);
			ArrayElementTypeCheck (L_72, L_75);
			(L_72)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_75);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_76 = L_72;
			NullCheck(L_76);
			ArrayElementTypeCheck (L_76, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1);
			(L_76)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 518));
			String_t* L_77 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_76, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 518));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 519));
			NullCheck(L_63);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_63, L_77, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 519));
			// switch (interaction.InputType)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 464));
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_78 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 520));
			NullCheck(L_78);
			int32_t L_79 = MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline(L_78, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 520));
			V_14 = L_79;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 465));
			int32_t L_80 = V_14;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)3)))
			{
				case 0:
				{
					goto IL_02f0;
				}
				case 1:
				{
					goto IL_031e;
				}
				case 2:
				{
					goto IL_034c;
				}
				case 3:
				{
					goto IL_037a;
				}
				case 4:
				{
					goto IL_037a;
				}
				case 5:
				{
					goto IL_037a;
				}
				case 6:
				{
					goto IL_037a;
				}
				case 7:
				{
					goto IL_03a5;
				}
				case 8:
				{
					goto IL_037a;
				}
				case 9:
				{
					goto IL_037a;
				}
				case 10:
				{
					goto IL_037a;
				}
				case 11:
				{
					goto IL_02f0;
				}
				case 12:
				{
					goto IL_031e;
				}
				case 13:
				{
					goto IL_034c;
				}
				case 14:
				{
					goto IL_03d0;
				}
				case 15:
				{
					goto IL_037a;
				}
				case 16:
				{
					goto IL_037a;
				}
				case 17:
				{
					goto IL_037a;
				}
				case 18:
				{
					goto IL_03d0;
				}
				case 19:
				{
					goto IL_037a;
				}
				case 20:
				{
					goto IL_037a;
				}
				case 21:
				{
					goto IL_037a;
				}
				case 22:
				{
					goto IL_037a;
				}
				case 23:
				{
					goto IL_037a;
				}
				case 24:
				{
					goto IL_037a;
				}
				case 25:
				{
					goto IL_03fb;
				}
				case 26:
				{
					goto IL_02f0;
				}
				case 27:
				{
					goto IL_03fb;
				}
				case 28:
				{
					goto IL_03fb;
				}
				case 29:
				{
					goto IL_03fb;
				}
				case 30:
				{
					goto IL_02f0;
				}
				case 31:
				{
					goto IL_03fb;
				}
				case 32:
				{
					goto IL_03fb;
				}
				case 33:
				{
					goto IL_03fb;
				}
				case 34:
				{
					goto IL_02f0;
				}
				case 35:
				{
					goto IL_03fb;
				}
				case 36:
				{
					goto IL_03fb;
				}
				case 37:
				{
					goto IL_03fb;
				}
				case 38:
				{
					goto IL_02f0;
				}
				case 39:
				{
					goto IL_03fb;
				}
				case 40:
				{
					goto IL_03fb;
				}
				case 41:
				{
					goto IL_03fb;
				}
				case 42:
				{
					goto IL_02f0;
				}
				case 43:
				{
					goto IL_03fb;
				}
				case 44:
				{
					goto IL_03fb;
				}
				case 45:
				{
					goto IL_03fb;
				}
				case 46:
				{
					goto IL_03d0;
				}
				case 47:
				{
					goto IL_03d0;
				}
				case 48:
				{
					goto IL_037a;
				}
				case 49:
				{
					goto IL_037a;
				}
				case 50:
				{
					goto IL_037a;
				}
				case 51:
				{
					goto IL_037a;
				}
				case 52:
				{
					goto IL_037a;
				}
				case 53:
				{
					goto IL_037a;
				}
				case 54:
				{
					goto IL_03a5;
				}
				case 55:
				{
					goto IL_037a;
				}
				case 56:
				{
					goto IL_037a;
				}
				case 57:
				{
					goto IL_037a;
				}
			}
		}

IL_02eb:
		{
			goto IL_03fb;
		}

IL_02f0:
		{
			// textMesh.text += $": {interaction.PoseData}";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 466));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_81 = V_6;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_82 = L_81;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 521));
			NullCheck(L_82);
			String_t* L_83 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_82, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 521));
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_84 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 522));
			NullCheck(L_84);
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_85 = MixedRealityInteractionMapping_get_PoseData_mFA28DE0DB1CB2EE393BFA1BDD8EC48411C143F7F(L_84, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 522));
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_86 = L_85;
			RuntimeObject * L_87 = Box(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var, &L_86);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 523));
			String_t* L_88 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_87, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 523));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 524));
			String_t* L_89 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_83, L_88, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 524));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 525));
			NullCheck(L_82);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_82, L_89, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 525));
			// break;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 467));
			goto IL_03fb;
		}

IL_031e:
		{
			// textMesh.text += $": {interaction.PositionData}";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 468));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_90 = V_6;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_91 = L_90;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 526));
			NullCheck(L_91);
			String_t* L_92 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_91, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 526));
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_93 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 527));
			NullCheck(L_93);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = MixedRealityInteractionMapping_get_PositionData_m8DFE20E69C92A2D2014D18E40CAF9EA4D82CF4C3(L_93, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 527));
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = L_94;
			RuntimeObject * L_96 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_95);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 528));
			String_t* L_97 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_96, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 528));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 529));
			String_t* L_98 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_92, L_97, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 529));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 530));
			NullCheck(L_91);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_91, L_98, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 530));
			// break;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 469));
			goto IL_03fb;
		}

IL_034c:
		{
			// textMesh.text += $": {interaction.RotationData}";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 470));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_99 = V_6;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_100 = L_99;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 531));
			NullCheck(L_100);
			String_t* L_101 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_100, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 531));
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_102 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 532));
			NullCheck(L_102);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_103 = MixedRealityInteractionMapping_get_RotationData_m8987BE60B1D0A7D80570985C9416B8751D0213F2(L_102, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 532));
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_104 = L_103;
			RuntimeObject * L_105 = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &L_104);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 533));
			String_t* L_106 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_105, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 533));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 534));
			String_t* L_107 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_101, L_106, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 534));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 535));
			NullCheck(L_100);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_100, L_107, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 535));
			// break;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 471));
			goto IL_03fb;
		}

IL_037a:
		{
			// textMesh.text += $": {interaction.BoolData}";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 472));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_108 = V_6;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_109 = L_108;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 536));
			NullCheck(L_109);
			String_t* L_110 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_109, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 536));
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_111 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 537));
			NullCheck(L_111);
			bool L_112 = MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B(L_111, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 537));
			bool L_113 = L_112;
			RuntimeObject * L_114 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_113);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 538));
			String_t* L_115 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_114, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 538));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 539));
			String_t* L_116 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_110, L_115, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 539));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 540));
			NullCheck(L_109);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_109, L_116, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 540));
			// break;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 473));
			goto IL_03fb;
		}

IL_03a5:
		{
			// textMesh.text += $": {interaction.FloatData}";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 474));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_117 = V_6;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_118 = L_117;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 541));
			NullCheck(L_118);
			String_t* L_119 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_118, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 541));
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_120 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 542));
			NullCheck(L_120);
			float L_121 = MixedRealityInteractionMapping_get_FloatData_mEDC3169549D0E6C0769B1AD5DB7AED106FF8E44C(L_120, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 542));
			float L_122 = L_121;
			RuntimeObject * L_123 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_122);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 543));
			String_t* L_124 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_123, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 543));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 544));
			String_t* L_125 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_119, L_124, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 544));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 545));
			NullCheck(L_118);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_118, L_125, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 545));
			// break;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 475));
			goto IL_03fb;
		}

IL_03d0:
		{
			// textMesh.text += $": {interaction.Vector2Data}";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 476));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_126 = V_6;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_127 = L_126;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 546));
			NullCheck(L_127);
			String_t* L_128 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_127, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 546));
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_129 = V_11;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 547));
			NullCheck(L_129);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_130 = MixedRealityInteractionMapping_get_Vector2Data_m5C4FDA726DEC05433E3A243AFF5DFD5422FAA650(L_129, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 547));
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_131 = L_130;
			RuntimeObject * L_132 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_131);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 548));
			String_t* L_133 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_132, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 548));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 549));
			String_t* L_134 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_128, L_133, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 549));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 550));
			NullCheck(L_127);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_127, L_134, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 550));
			// break;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 477));
			goto IL_03fb;
		}

IL_03fb:
		{
			// textMesh.text += "\n";
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 478));
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_135 = V_6;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_136 = L_135;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 551));
			NullCheck(L_136);
			String_t* L_137 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_136, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 551));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 552));
			String_t* L_138 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_137, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 552));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 553));
			NullCheck(L_136);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_136, L_138, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 553));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 479));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 480));
			int32_t L_139 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		}

IL_041a:
		{
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 481));
			int32_t L_140 = V_10;
			MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_141 = V_9;
			NullCheck(L_141);
			if ((((int32_t)L_140) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_141)->max_length)))))))
			{
				goto IL_019b;
			}
		}

IL_0425:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 482));
		}

IL_0426:
		{
			// foreach (IMixedRealityController controller in controllers)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 483));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 554));
			bool L_142 = Enumerator_MoveNext_m9B9126E05AE57185E1C1B2007019CB72B2D7E992((Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m9B9126E05AE57185E1C1B2007019CB72B2D7E992_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 554));
			if (L_142)
			{
				goto IL_00fb;
			}
		}

IL_0432:
		{
			IL2CPP_LEAVE(0x443, FINALLY_0434);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0434;
	}

FINALLY_0434:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 484));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 555));
		Enumerator_Dispose_m3897751F5615B83A9E0565DD015002AE963DB69B((Enumerator_t42984CA33BF22C1464CD34BCEA40497BAFFD7DCD *)(&V_4), /*hidden argument*/Enumerator_Dispose_m3897751F5615B83A9E0565DD015002AE963DB69B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 555));
		IL2CPP_END_FINALLY(1076)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1076)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x443, IL_0443)
	}

IL_0443:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 485));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionTool__ctor_mC80719A86888E065E8E1B765D8727EA52F9B68AE (MixedRealityInteractionTool_t5576F7BEB0AADFFFD4A9C3B117AE3BA3308FFE41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInteractionTool__ctor_mC80719A86888E065E8E1B765D8727EA52F9B68AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityInteractionTool__ctor_mC80719A86888E065E8E1B765D8727EA52F9B68AE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 556));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 557));
	{
		// private TextMesh listControllersTextMesh = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 558));
		__this->set_listControllersTextMesh_4((TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A *)NULL);
		// private TextMesh leftHandedControllerTextMesh = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 559));
		__this->set_leftHandedControllerTextMesh_5((TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A *)NULL);
		// private TextMesh rightHandedControllerTextMesh = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 560));
		__this->set_rightHandedControllerTextMesh_6((TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A *)NULL);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 561));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Tools_Runtime + 561));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_mE13C0C1AA4390BBD2DC1CB5A21DDD4B05888EC6C_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInteractionMapping_get_Description_mE13C0C1AA4390BBD2DC1CB5A21DDD4B05888EC6CMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityInteractionMapping_get_Description_mE13C0C1AA4390BBD2DC1CB5A21DDD4B05888EC6C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 25322));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 25323));
	{
		// public string Description => description;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 25324));
		String_t* L_0 = __this->get_description_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m1FA8D2243A6EB64E00E804CCA8B98CEC3E1A2658_inline (MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInputAction_get_Description_m1FA8D2243A6EB64E00E804CCA8B98CEC3E1A2658Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityInputAction_get_Description_m1FA8D2243A6EB64E00E804CCA8B98CEC3E1A2658_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 26004));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 26005));
	{
		// public string Description => description;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 26006));
		String_t* L_0 = __this->get_description_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CDMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 25328));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 25329));
	{
		// public DeviceInputType InputType => inputType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit + 25330));
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_gshared_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CFMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_gshared_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* L_2 = (InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6*)L_2, (int32_t)L_3);
		return (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_gshared_inline (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  L_0 = (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C )__this->get_current_3();
		return (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_gshared_inline (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4Microsoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCAMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5F_gshared_inline (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5FMicrosoft_MixedReality_Toolkit_Tools_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
