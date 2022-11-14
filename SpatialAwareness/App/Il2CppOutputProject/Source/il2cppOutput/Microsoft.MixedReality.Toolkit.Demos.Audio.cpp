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

// Microsoft.MixedReality.Toolkit.Audio.AudioInfluencerController
struct AudioInfluencerController_t79D8C8BE4C383F2C46BA96300BB7574DEE80CE9D;
// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect
struct AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF;
// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech
struct TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945;
// Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection
struct LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F;
// Microsoft.MixedReality.Toolkit.Examples.Demos.TextToSpeechSample
struct TextToSpeechSample_tDE425E1868510E7B2865BEA03E18313949ADC160;
// Microsoft.MixedReality.Toolkit.Examples.MicrophoneAmplitudeDemo
struct MicrophoneAmplitudeDemo_tD972E9D32F5E0935B4234D9A6428983F5485CD15;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tE0E928A8AFA1825E798A69EB5D4BE993B8227ED2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tD7C4CF8940EB016597EF8CED76503F0D39A61C53;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t1E362B2E1670054A35DC0E48534FCD7CD8603940;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct Dictionary_2_t58C3CC51379D905E62F9D8B6DCF3B9FB53914D4A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct SpeechSynthesizer_t3FDCAAF5EABFC84F7D3C3F85E728E05BCBA97CA2;
// Windows.Media.SpeechSynthesis.VoiceInformation
struct VoiceInformation_tEBFA2EC439557BCCE3A803829AAE2CA57C2AEDD7;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio[];
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextToSpeechVoice_t54885459EE18EEAD1F47D68B76BDFCDC845D93BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral91BB8BDBFDD72D31210611EE68F46669DF67911A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945_mB504BDFA39D356C80E3545BAD17A24E617F8DD8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF_mB9E8AEBA3CF0F048D2338149CB8C70A70E6ECEBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoFiFilterSelection_OnPointerClicked_m62DBE0BF9766ADDCDC2E8CA0B85519895F01E58E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoFiFilterSelection_OnPointerDown_mA7505DF2D33EB6EFBA2AC44626B4A9F550D1698A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoFiFilterSelection_OnPointerDragged_mBDD8E78E1C1F39D7296A8D3C1B877930BC6FCBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoFiFilterSelection_OnPointerUp_m0675414B6CBB72486D6545B4EE753BD0D0E486AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoFiFilterSelection_SetEmitterMaterial_mCA06F645D699F46723948B8AB62B816F18103642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoFiFilterSelection_Start_mCC6BA99C52F02A25DE0119A3C3ED1A0A304E4518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoFiFilterSelection__ctor_m054E9967B884BC9AACEB10A5F0217596AF42779A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicrophoneAmplitudeDemo__ctor_m29A023102357BE66FD0AC153A4E7CAC9ECA165AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechSample_Awake_m4884D068FBDFF1C8638F8679D0201FEB2923ED78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechSample_Speak_m70236461EA3B5325C9B9748ADE936ED1CC0E78D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechSample__ctor_m3D562DC4700AF8C3F2DA7C7CCF5BDA132E59A535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AudioLoFiSourceQuality_t5507E9EDE68691456EBFD92EBA65511050972695_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextToSpeechSample_tDE425E1868510E7B2865BEA03E18313949ADC160_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextToSpeechVoice_t54885459EE18EEAD1F47D68B76BDFCDC845D93BE_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t LoFiFilterSelection_OnPointerClicked_m62DBE0BF9766ADDCDC2E8CA0B85519895F01E58E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoFiFilterSelection_OnPointerDown_mA7505DF2D33EB6EFBA2AC44626B4A9F550D1698A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoFiFilterSelection_OnPointerDragged_mBDD8E78E1C1F39D7296A8D3C1B877930BC6FCBDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoFiFilterSelection_OnPointerUp_m0675414B6CBB72486D6545B4EE753BD0D0E486AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoFiFilterSelection_SetEmitterMaterial_mCA06F645D699F46723948B8AB62B816F18103642_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoFiFilterSelection_Start_mCC6BA99C52F02A25DE0119A3C3ED1A0A304E4518_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoFiFilterSelection__ctor_m054E9967B884BC9AACEB10A5F0217596AF42779A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MicrophoneAmplitudeDemo__ctor_m29A023102357BE66FD0AC153A4E7CAC9ECA165AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextToSpeechSample_Awake_m4884D068FBDFF1C8638F8679D0201FEB2923ED78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextToSpeechSample_Speak_m70236461EA3B5325C9B9748ADE936ED1CC0E78D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextToSpeechSample__ctor_m3D562DC4700AF8C3F2DA7C7CCF5BDA132E59A535_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t51CECB5354DB8DF0DBD3994274412E025A0BB50B 
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings
struct AudioLoFiFilterSettings_t2DBDEA6041A08604EC936D49487AB423AB87F139 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings::<LowPassCutoff>k__BackingField
	float ___U3CLowPassCutoffU3Ek__BackingField_0;
	// System.Single Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings::<HighPassCutoff>k__BackingField
	float ___U3CHighPassCutoffU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLowPassCutoffU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AudioLoFiFilterSettings_t2DBDEA6041A08604EC936D49487AB423AB87F139, ___U3CLowPassCutoffU3Ek__BackingField_0)); }
	inline float get_U3CLowPassCutoffU3Ek__BackingField_0() const { return ___U3CLowPassCutoffU3Ek__BackingField_0; }
	inline float* get_address_of_U3CLowPassCutoffU3Ek__BackingField_0() { return &___U3CLowPassCutoffU3Ek__BackingField_0; }
	inline void set_U3CLowPassCutoffU3Ek__BackingField_0(float value)
	{
		___U3CLowPassCutoffU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHighPassCutoffU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AudioLoFiFilterSettings_t2DBDEA6041A08604EC936D49487AB423AB87F139, ___U3CHighPassCutoffU3Ek__BackingField_1)); }
	inline float get_U3CHighPassCutoffU3Ek__BackingField_1() const { return ___U3CHighPassCutoffU3Ek__BackingField_1; }
	inline float* get_address_of_U3CHighPassCutoffU3Ek__BackingField_1() { return &___U3CHighPassCutoffU3Ek__BackingField_1; }
	inline void set_U3CHighPassCutoffU3Ek__BackingField_1(float value)
	{
		___U3CHighPassCutoffU3Ek__BackingField_1 = value;
	}
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


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality
struct AudioLoFiSourceQuality_t5507E9EDE68691456EBFD92EBA65511050972695 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioLoFiSourceQuality_t5507E9EDE68691456EBFD92EBA65511050972695, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeechVoice
struct TextToSpeechVoice_t54885459EE18EEAD1F47D68B76BDFCDC845D93BE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Audio.TextToSpeechVoice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextToSpeechVoice_t54885459EE18EEAD1F47D68B76BDFCDC845D93BE, ___value___2)); }
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


// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tC41B435A0E08D174DC93EAD02A8470C83BF7005A  : public BaseInputEventData_tAF6552FE95917E1D365301264A6A2135813628FE
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_tC41B435A0E08D174DC93EAD02A8470C83BF7005A, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect
struct AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect::sourceQuality
	int32_t ___sourceQuality_4;
	// Microsoft.MixedReality.Toolkit.Audio.AudioInfluencerController Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect::influencerController
	AudioInfluencerController_t79D8C8BE4C383F2C46BA96300BB7574DEE80CE9D * ___influencerController_5;
	// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect::filterSettings
	AudioLoFiFilterSettings_t2DBDEA6041A08604EC936D49487AB423AB87F139  ___filterSettings_6;
	// UnityEngine.AudioLowPassFilter Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect::lowPassFilter
	AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE * ___lowPassFilter_7;
	// UnityEngine.AudioHighPassFilter Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect::highPassFilter
	AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 * ___highPassFilter_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings> Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect::sourceQualityFilterSettings
	Dictionary_2_t58C3CC51379D905E62F9D8B6DCF3B9FB53914D4A * ___sourceQualityFilterSettings_9;

public:
	inline static int32_t get_offset_of_sourceQuality_4() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF, ___sourceQuality_4)); }
	inline int32_t get_sourceQuality_4() const { return ___sourceQuality_4; }
	inline int32_t* get_address_of_sourceQuality_4() { return &___sourceQuality_4; }
	inline void set_sourceQuality_4(int32_t value)
	{
		___sourceQuality_4 = value;
	}

	inline static int32_t get_offset_of_influencerController_5() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF, ___influencerController_5)); }
	inline AudioInfluencerController_t79D8C8BE4C383F2C46BA96300BB7574DEE80CE9D * get_influencerController_5() const { return ___influencerController_5; }
	inline AudioInfluencerController_t79D8C8BE4C383F2C46BA96300BB7574DEE80CE9D ** get_address_of_influencerController_5() { return &___influencerController_5; }
	inline void set_influencerController_5(AudioInfluencerController_t79D8C8BE4C383F2C46BA96300BB7574DEE80CE9D * value)
	{
		___influencerController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___influencerController_5), (void*)value);
	}

	inline static int32_t get_offset_of_filterSettings_6() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF, ___filterSettings_6)); }
	inline AudioLoFiFilterSettings_t2DBDEA6041A08604EC936D49487AB423AB87F139  get_filterSettings_6() const { return ___filterSettings_6; }
	inline AudioLoFiFilterSettings_t2DBDEA6041A08604EC936D49487AB423AB87F139 * get_address_of_filterSettings_6() { return &___filterSettings_6; }
	inline void set_filterSettings_6(AudioLoFiFilterSettings_t2DBDEA6041A08604EC936D49487AB423AB87F139  value)
	{
		___filterSettings_6 = value;
	}

	inline static int32_t get_offset_of_lowPassFilter_7() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF, ___lowPassFilter_7)); }
	inline AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE * get_lowPassFilter_7() const { return ___lowPassFilter_7; }
	inline AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE ** get_address_of_lowPassFilter_7() { return &___lowPassFilter_7; }
	inline void set_lowPassFilter_7(AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE * value)
	{
		___lowPassFilter_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowPassFilter_7), (void*)value);
	}

	inline static int32_t get_offset_of_highPassFilter_8() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF, ___highPassFilter_8)); }
	inline AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 * get_highPassFilter_8() const { return ___highPassFilter_8; }
	inline AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 ** get_address_of_highPassFilter_8() { return &___highPassFilter_8; }
	inline void set_highPassFilter_8(AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 * value)
	{
		___highPassFilter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highPassFilter_8), (void*)value);
	}

	inline static int32_t get_offset_of_sourceQualityFilterSettings_9() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF, ___sourceQualityFilterSettings_9)); }
	inline Dictionary_2_t58C3CC51379D905E62F9D8B6DCF3B9FB53914D4A * get_sourceQualityFilterSettings_9() const { return ___sourceQualityFilterSettings_9; }
	inline Dictionary_2_t58C3CC51379D905E62F9D8B6DCF3B9FB53914D4A ** get_address_of_sourceQualityFilterSettings_9() { return &___sourceQualityFilterSettings_9; }
	inline void set_sourceQualityFilterSettings_9(Dictionary_2_t58C3CC51379D905E62F9D8B6DCF3B9FB53914D4A * value)
	{
		___sourceQualityFilterSettings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceQualityFilterSettings_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech
struct TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource_4;
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeechVoice Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::voice
	int32_t ___voice_5;
	// Windows.Media.SpeechSynthesis.SpeechSynthesizer Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::synthesizer
	SpeechSynthesizer_t3FDCAAF5EABFC84F7D3C3F85E728E05BCBA97CA2 * ___synthesizer_6;
	// Windows.Media.SpeechSynthesis.VoiceInformation Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::voiceInfo
	VoiceInformation_tEBFA2EC439557BCCE3A803829AAE2CA57C2AEDD7 * ___voiceInfo_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::speechTextInQueue
	bool ___speechTextInQueue_8;

public:
	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945, ___audioSource_4)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_voice_5() { return static_cast<int32_t>(offsetof(TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945, ___voice_5)); }
	inline int32_t get_voice_5() const { return ___voice_5; }
	inline int32_t* get_address_of_voice_5() { return &___voice_5; }
	inline void set_voice_5(int32_t value)
	{
		___voice_5 = value;
	}

	inline static int32_t get_offset_of_synthesizer_6() { return static_cast<int32_t>(offsetof(TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945, ___synthesizer_6)); }
	inline SpeechSynthesizer_t3FDCAAF5EABFC84F7D3C3F85E728E05BCBA97CA2 * get_synthesizer_6() const { return ___synthesizer_6; }
	inline SpeechSynthesizer_t3FDCAAF5EABFC84F7D3C3F85E728E05BCBA97CA2 ** get_address_of_synthesizer_6() { return &___synthesizer_6; }
	inline void set_synthesizer_6(SpeechSynthesizer_t3FDCAAF5EABFC84F7D3C3F85E728E05BCBA97CA2 * value)
	{
		___synthesizer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synthesizer_6), (void*)value);
	}

	inline static int32_t get_offset_of_voiceInfo_7() { return static_cast<int32_t>(offsetof(TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945, ___voiceInfo_7)); }
	inline VoiceInformation_tEBFA2EC439557BCCE3A803829AAE2CA57C2AEDD7 * get_voiceInfo_7() const { return ___voiceInfo_7; }
	inline VoiceInformation_tEBFA2EC439557BCCE3A803829AAE2CA57C2AEDD7 ** get_address_of_voiceInfo_7() { return &___voiceInfo_7; }
	inline void set_voiceInfo_7(VoiceInformation_tEBFA2EC439557BCCE3A803829AAE2CA57C2AEDD7 * value)
	{
		___voiceInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_speechTextInQueue_8() { return static_cast<int32_t>(offsetof(TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945, ___speechTextInQueue_8)); }
	inline bool get_speechTextInQueue_8() const { return ___speechTextInQueue_8; }
	inline bool* get_address_of_speechTextInQueue_8() { return &___speechTextInQueue_8; }
	inline void set_speechTextInQueue_8(bool value)
	{
		___speechTextInQueue_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection
struct LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::NarrowBandTelephony
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___NarrowBandTelephony_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::AmRadio
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___AmRadio_5;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::FullRange
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___FullRange_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::UnknownQuality
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___UnknownQuality_7;
	// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::loFiEffect
	AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * ___loFiEffect_8;
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::objectRenderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___objectRenderer_9;

public:
	inline static int32_t get_offset_of_NarrowBandTelephony_4() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F, ___NarrowBandTelephony_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_NarrowBandTelephony_4() const { return ___NarrowBandTelephony_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_NarrowBandTelephony_4() { return &___NarrowBandTelephony_4; }
	inline void set_NarrowBandTelephony_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___NarrowBandTelephony_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NarrowBandTelephony_4), (void*)value);
	}

	inline static int32_t get_offset_of_AmRadio_5() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F, ___AmRadio_5)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_AmRadio_5() const { return ___AmRadio_5; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_AmRadio_5() { return &___AmRadio_5; }
	inline void set_AmRadio_5(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___AmRadio_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmRadio_5), (void*)value);
	}

	inline static int32_t get_offset_of_FullRange_6() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F, ___FullRange_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_FullRange_6() const { return ___FullRange_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_FullRange_6() { return &___FullRange_6; }
	inline void set_FullRange_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___FullRange_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullRange_6), (void*)value);
	}

	inline static int32_t get_offset_of_UnknownQuality_7() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F, ___UnknownQuality_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_UnknownQuality_7() const { return ___UnknownQuality_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_UnknownQuality_7() { return &___UnknownQuality_7; }
	inline void set_UnknownQuality_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___UnknownQuality_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnknownQuality_7), (void*)value);
	}

	inline static int32_t get_offset_of_loFiEffect_8() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F, ___loFiEffect_8)); }
	inline AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * get_loFiEffect_8() const { return ___loFiEffect_8; }
	inline AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF ** get_address_of_loFiEffect_8() { return &___loFiEffect_8; }
	inline void set_loFiEffect_8(AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * value)
	{
		___loFiEffect_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loFiEffect_8), (void*)value);
	}

	inline static int32_t get_offset_of_objectRenderer_9() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F, ___objectRenderer_9)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_objectRenderer_9() const { return ___objectRenderer_9; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_objectRenderer_9() { return &___objectRenderer_9; }
	inline void set_objectRenderer_9(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___objectRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectRenderer_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.TextToSpeechSample
struct TextToSpeechSample_tDE425E1868510E7B2865BEA03E18313949ADC160  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech Microsoft.MixedReality.Toolkit.Examples.Demos.TextToSpeechSample::textToSpeech
	TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * ___textToSpeech_4;

public:
	inline static int32_t get_offset_of_textToSpeech_4() { return static_cast<int32_t>(offsetof(TextToSpeechSample_tDE425E1868510E7B2865BEA03E18313949ADC160, ___textToSpeech_4)); }
	inline TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * get_textToSpeech_4() const { return ___textToSpeech_4; }
	inline TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 ** get_address_of_textToSpeech_4() { return &___textToSpeech_4; }
	inline void set_textToSpeech_4(TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * value)
	{
		___textToSpeech_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textToSpeech_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.MicrophoneAmplitudeDemo
struct MicrophoneAmplitudeDemo_tD972E9D32F5E0935B4234D9A6428983F5485CD15  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t1E362B2E1670054A35DC0E48534FCD7CD8603940  : public InputEventData_tC41B435A0E08D174DC93EAD02A8470C83BF7005A
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t1E362B2E1670054A35DC0E48534FCD7CD8603940, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t1E362B2E1670054A35DC0E48534FCD7CD8603940, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect>()
inline AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * GameObject_GetComponent_TisAudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF_mB9E8AEBA3CF0F048D2338149CB8C70A70E6ECEBF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect::get_SourceQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioLoFiEffect_get_SourceQuality_mEFFED1D4ACFECB4E93909685BE38DAE621B8C91F (AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::SetEmitterMaterial(Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoFiFilterSelection_SetEmitterMaterial_mCA06F645D699F46723948B8AB62B816F18103642 (LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F * __this, int32_t ___sourceQuality0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect::set_SourceQuality(Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLoFiEffect_set_SourceQuality_m50F17A2F63E0577CC8A32DE9EA1A26ECA875559D (AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Audio.TextToSpeech>()
inline TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * Component_GetComponent_TisTextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945_mB504BDFA39D356C80E3545BAD17A24E617F8DD8D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Audio.TextToSpeechVoice Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::get_Voice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextToSpeech_get_Voice_mA4CF7CB808164A6543C67FD62F6F6C09F26CB9C4 (TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::StartSpeaking(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_StartSpeaking_m7A7868AAE9D632177E6EC97045A8691866DFEE64 (TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * __this, String_t* ___text0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoFiFilterSelection_Start_mCC6BA99C52F02A25DE0119A3C3ED1A0A304E4518 (LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_Start_mCC6BA99C52F02A25DE0119A3C3ED1A0A304E4518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LoFiFilterSelection_Start_mCC6BA99C52F02A25DE0119A3C3ED1A0A304E4518_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 2));
		// loFiEffect = gameObject.GetComponent<AudioLoFiEffect>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 3));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 7));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 7));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 8));
		NullCheck(L_0);
		AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * L_1 = GameObject_GetComponent_TisAudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF_mB9E8AEBA3CF0F048D2338149CB8C70A70E6ECEBF(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF_mB9E8AEBA3CF0F048D2338149CB8C70A70E6ECEBF_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 8));
		__this->set_loFiEffect_8(L_1);
		// objectRenderer = gameObject.GetComponent<Renderer>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 4));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 9));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 9));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 10));
		NullCheck(L_2);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_2, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 10));
		__this->set_objectRenderer_9(L_3);
		// SetEmitterMaterial(loFiEffect.SourceQuality);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 5));
		AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * L_4 = __this->get_loFiEffect_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 11));
		NullCheck(L_4);
		int32_t L_5 = AudioLoFiEffect_get_SourceQuality_mEFFED1D4ACFECB4E93909685BE38DAE621B8C91F(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 11));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 12));
		LoFiFilterSelection_SetEmitterMaterial_mCA06F645D699F46723948B8AB62B816F18103642(__this, L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 12));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 6));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerClicked_m62DBE0BF9766ADDCDC2E8CA0B85519895F01E58E (LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F * __this, MixedRealityPointerEventData_t1E362B2E1670054A35DC0E48534FCD7CD8603940 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_OnPointerClicked_m62DBE0BF9766ADDCDC2E8CA0B85519895F01E58E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LoFiFilterSelection_OnPointerClicked_m62DBE0BF9766ADDCDC2E8CA0B85519895F01E58E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 13));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 14));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 15));
		// if (loFiEffect == null) { return; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 16));
		AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * L_0 = __this->get_loFiEffect_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 32));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 32));
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 17));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 18));
		// if (loFiEffect == null) { return; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 19));
		goto IL_005f;
	}

IL_0014:
	{
		// AudioLoFiSourceQuality sourceQuality = loFiEffect.SourceQuality;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 20));
		AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * L_3 = __this->get_loFiEffect_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 33));
		NullCheck(L_3);
		int32_t L_4 = AudioLoFiEffect_get_SourceQuality_mEFFED1D4ACFECB4E93909685BE38DAE621B8C91F(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 33));
		V_0 = L_4;
		// switch (sourceQuality)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 21));
		int32_t L_5 = V_0;
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 22));
		int32_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_004a;
			}
			case 4:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_003e:
	{
		// sourceQuality = AudioLoFiSourceQuality.AmRadio;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 23));
		V_0 = 2;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 24));
		goto IL_004a;
	}

IL_0042:
	{
		// sourceQuality = AudioLoFiSourceQuality.FullRange;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 25));
		V_0 = 4;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 26));
		goto IL_004a;
	}

IL_0046:
	{
		// sourceQuality = AudioLoFiSourceQuality.NarrowBandTelephony;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 27));
		V_0 = 0;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 28));
		goto IL_004a;
	}

IL_004a:
	{
		// SetEmitterMaterial(sourceQuality);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 29));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 34));
		LoFiFilterSelection_SetEmitterMaterial_mCA06F645D699F46723948B8AB62B816F18103642(__this, L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 34));
		// loFiEffect.SourceQuality = sourceQuality;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 30));
		AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF * L_8 = __this->get_loFiEffect_8();
		int32_t L_9 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 35));
		NullCheck(L_8);
		AudioLoFiEffect_set_SourceQuality_m50F17A2F63E0577CC8A32DE9EA1A26ECA875559D(L_8, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 35));
	}

IL_005f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 31));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerDown_mA7505DF2D33EB6EFBA2AC44626B4A9F550D1698A (LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F * __this, MixedRealityPointerEventData_t1E362B2E1670054A35DC0E48534FCD7CD8603940 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_OnPointerDown_mA7505DF2D33EB6EFBA2AC44626B4A9F550D1698A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LoFiFilterSelection_OnPointerDown_mA7505DF2D33EB6EFBA2AC44626B4A9F550D1698A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 36));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 37));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 38));
		// { }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 39));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerDragged_mBDD8E78E1C1F39D7296A8D3C1B877930BC6FCBDB (LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F * __this, MixedRealityPointerEventData_t1E362B2E1670054A35DC0E48534FCD7CD8603940 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_OnPointerDragged_mBDD8E78E1C1F39D7296A8D3C1B877930BC6FCBDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LoFiFilterSelection_OnPointerDragged_mBDD8E78E1C1F39D7296A8D3C1B877930BC6FCBDB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 40));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 41));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 42));
		// public void OnPointerDragged(MixedRealityPointerEventData eventData) { }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 43));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerUp_m0675414B6CBB72486D6545B4EE753BD0D0E486AF (LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F * __this, MixedRealityPointerEventData_t1E362B2E1670054A35DC0E48534FCD7CD8603940 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_OnPointerUp_m0675414B6CBB72486D6545B4EE753BD0D0E486AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LoFiFilterSelection_OnPointerUp_m0675414B6CBB72486D6545B4EE753BD0D0E486AF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 44));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 45));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 46));
		// { }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 47));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::SetEmitterMaterial(Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoFiFilterSelection_SetEmitterMaterial_mCA06F645D699F46723948B8AB62B816F18103642 (LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F * __this, int32_t ___sourceQuality0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_SetEmitterMaterial_mCA06F645D699F46723948B8AB62B816F18103642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___sourceQuality0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LoFiFilterSelection_SetEmitterMaterial_mCA06F645D699F46723948B8AB62B816F18103642_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 48));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 49));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 50));
		// Material emitterMaterial = UnknownQuality;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 51));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_UnknownQuality_7();
		V_0 = L_0;
		// switch (sourceQuality)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 52));
		int32_t L_1 = ___sourceQuality0;
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 53));
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_0026:
	{
		// emitterMaterial = NarrowBandTelephony;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 54));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = __this->get_NarrowBandTelephony_4();
		V_0 = L_3;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 55));
		goto IL_0041;
	}

IL_002f:
	{
		// emitterMaterial = AmRadio;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 56));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_AmRadio_5();
		V_0 = L_4;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 57));
		goto IL_0041;
	}

IL_0038:
	{
		// emitterMaterial = FullRange;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 58));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = __this->get_FullRange_6();
		V_0 = L_5;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 59));
		goto IL_0041;
	}

IL_0041:
	{
		// objectRenderer.sharedMaterial = emitterMaterial;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 60));
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = __this->get_objectRenderer_9();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 62));
		NullCheck(L_6);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_6, L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 62));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 61));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoFiFilterSelection__ctor_m054E9967B884BC9AACEB10A5F0217596AF42779A (LoFiFilterSelection_t5B3ACFBC2420885E62A2F434DD9C655774D06F9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection__ctor_m054E9967B884BC9AACEB10A5F0217596AF42779A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LoFiFilterSelection__ctor_m054E9967B884BC9AACEB10A5F0217596AF42779A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 63));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 64));
	{
		// private Material NarrowBandTelephony = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 65));
		__this->set_NarrowBandTelephony_4((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL);
		// private Material AmRadio = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 66));
		__this->set_AmRadio_5((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL);
		// private Material FullRange = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 67));
		__this->set_FullRange_6((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL);
		// private Material UnknownQuality = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 68));
		__this->set_UnknownQuality_7((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL);
		// private AudioLoFiEffect loFiEffect = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 69));
		__this->set_loFiEffect_8((AudioLoFiEffect_t5A5E9356CCFBB8BE25C942A2AD95D046260F7EAF *)NULL);
		// private Renderer objectRenderer = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 70));
		__this->set_objectRenderer_9((Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 *)NULL);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 71));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 71));
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.TextToSpeechSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSample_Awake_m4884D068FBDFF1C8638F8679D0201FEB2923ED78 (TextToSpeechSample_tDE425E1868510E7B2865BEA03E18313949ADC160 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextToSpeechSample_Awake_m4884D068FBDFF1C8638F8679D0201FEB2923ED78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextToSpeechSample_Awake_m4884D068FBDFF1C8638F8679D0201FEB2923ED78_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 72));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 73));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 74));
		// textToSpeech = GetComponent<TextToSpeech>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 75));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 77));
		TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * L_0 = Component_GetComponent_TisTextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945_mB504BDFA39D356C80E3545BAD17A24E617F8DD8D(__this, /*hidden argument*/Component_GetComponent_TisTextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945_mB504BDFA39D356C80E3545BAD17A24E617F8DD8D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 77));
		__this->set_textToSpeech_4(L_0);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 76));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.TextToSpeechSample::Speak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSample_Speak_m70236461EA3B5325C9B9748ADE936ED1CC0E78D9 (TextToSpeechSample_tDE425E1868510E7B2865BEA03E18313949ADC160 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextToSpeechSample_Speak_m70236461EA3B5325C9B9748ADE936ED1CC0E78D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextToSpeechSample_Speak_m70236461EA3B5325C9B9748ADE936ED1CC0E78D9_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 78));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 79));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 80));
		// if (textToSpeech != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 81));
		TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * L_0 = __this->get_textToSpeech_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 88));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 88));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 82));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 83));
		// var msg = string.Format(
		// "This is the {0} voice. It should sound like it's coming from the object you clicked. Feel free to walk around and listen from different angles.",
		// textToSpeech.Voice.ToString());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 84));
		TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * L_3 = __this->get_textToSpeech_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 89));
		NullCheck(L_3);
		int32_t L_4 = TextToSpeech_get_Voice_mA4CF7CB808164A6543C67FD62F6F6C09F26CB9C4(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 89));
		V_2 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 90));
		RuntimeObject * L_5 = Box(TextToSpeechVoice_t54885459EE18EEAD1F47D68B76BDFCDC845D93BE_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_2 = *(int32_t*)UnBox(L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 90));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 91));
		String_t* L_7 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral91BB8BDBFDD72D31210611EE68F46669DF67911A, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 91));
		V_1 = L_7;
		// textToSpeech.StartSpeaking(msg);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 85));
		TextToSpeech_t0C8B1A1E121D902A2043CB2370BF205A8BF55945 * L_8 = __this->get_textToSpeech_4();
		String_t* L_9 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 92));
		NullCheck(L_8);
		TextToSpeech_StartSpeaking_m7A7868AAE9D632177E6EC97045A8691866DFEE64(L_8, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 92));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 86));
	}

IL_0044:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsMicrosoft_MixedReality_Toolkit_Demos_Audio + 87));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.TextToSpeechSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSample__ctor_m3D562DC4700AF8C3F2DA7C7CCF5BDA132E59A535 (TextToSpeechSample_tDE425E1868510E7B2865BEA03E18313949ADC160 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextToSpeechSample__ctor_m3D562DC4700AF8C3F2DA7C7CCF5BDA132E59A535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextToSpeechSample__ctor_m3D562DC4700AF8C3F2DA7C7CCF5BDA132E59A535_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.MicrophoneAmplitudeDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneAmplitudeDemo__ctor_m29A023102357BE66FD0AC153A4E7CAC9ECA165AA (MicrophoneAmplitudeDemo_tD972E9D32F5E0935B4234D9A6428983F5485CD15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MicrophoneAmplitudeDemo__ctor_m29A023102357BE66FD0AC153A4E7CAC9ECA165AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MicrophoneAmplitudeDemo__ctor_m29A023102357BE66FD0AC153A4E7CAC9ECA165AA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
