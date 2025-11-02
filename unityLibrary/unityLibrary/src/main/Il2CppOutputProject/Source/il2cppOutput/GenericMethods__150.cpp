#include "pch-cpp.hpp"





template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct TypeConverter_2_t02B93B6FEF5A20CFCE1704E91A5396B50EE8B2EF;
struct TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B;
struct TypeConverter_2_t991006B141207200481E6B2187724BBAAD1199A1;
struct TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ConverterKeyComparer_t204523C3EB04B7681EC88C456FBB52B49F1B1F49;

IL2CPP_EXTERN_C RuntimeClass* ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t* ___m_Ptr;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_Align8Union;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 
{
	Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252* ___m_Converters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_pinvoke
{
	Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252* ___m_Converters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_com
{
	Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252* ___m_Converters;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B 
{
	int32_t ___instanceId;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextAutoSizeMode_t10C0C54209C97D8A231AF021AE2F9DFFD26EE2C9 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct TypeConverter_2_t02B93B6FEF5A20CFCE1704E91A5396B50EE8B2EF  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t991006B141207200481E6B2187724BBAAD1199A1  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979  : public MulticastDelegate_t
{
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A 
{
	int32_t ___U3CmodeU3Ek__BackingField;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___U3CminSizeU3Ek__BackingField;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___U3CmaxSizeU3Ek__BackingField;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A 
{
	int32_t ___m_Keyword;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___m_Value;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields
{
	ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 ___s_GlobalConverters;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_StaticFields
{
	ConverterKeyComparer_t204523C3EB04B7681EC88C456FBB52B49F1B1F49* ___Comparer;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_mA0597BEC672B86F45C8CA5CA6B8E3E853BA90CAE_gshared_inline (TypeConverter_2_t02B93B6FEF5A20CFCE1704E91A5396B50EE8B2EF* __this, uint16_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m5D0248B446929C84B8D54562AA6BA5D1A0925770_gshared_inline (TypeConverter_2_t991006B141207200481E6B2187724BBAAD1199A1* __this, uint32_t* ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline (TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B* __this, uint16_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*, uint16_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mA0597BEC672B86F45C8CA5CA6B8E3E853BA90CAE_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline (TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979* __this, uint32_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*, uint32_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m5D0248B446929C84B8D54562AA6BA5D1A0925770_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m902496A034E5F0CBF85304507E74F358DE06EF6B_gshared (uint16_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		bool* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(bool));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		bool* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(bool));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		bool* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(bool*)L_25 = ((*(bool*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		bool* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(bool*)L_37 = ((*(bool*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		bool* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(bool));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6B5106CDF215528E10D2171C639AEFA9D2539918_gshared (uint16_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		uint8_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(uint8_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		uint8_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(uint8_t*)L_25 = ((*(uint8_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		uint8_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(uint8_t*)L_37 = ((*(uint8_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		uint8_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(uint8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7475BE21BBACF1A4F3A6EBBD50663494ECE10F8B_gshared (uint16_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Il2CppChar));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Il2CppChar* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Il2CppChar));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Il2CppChar* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Il2CppChar*)L_25 = ((*(Il2CppChar*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Il2CppChar* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Il2CppChar*)L_37 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Il2CppChar* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Il2CppChar));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m24BE9A8729D48A898B6D666B14034FE0B78F4D89_gshared (uint16_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_25 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_37 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m8AE753FA35706B6E29303726399DCA7818E0AE22_gshared (uint16_t ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_25 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_25)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_37 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_37)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m4BA42ADAD24D3375B4F5C756E7908BCD87DC904F_gshared (uint16_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_25 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_37 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m7CF76878EF3FF57C1B88959D226FA4E342BDA23C_gshared (uint16_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		double* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(double));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		double* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(double));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		double* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(double*)L_25 = ((*(double*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		double* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(double*)L_37 = ((*(double*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		double* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(double));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mBEF577C7FF14F22F2BFEF178C318F198757E46C9_gshared (uint16_t ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_25 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_37 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m4CCA030729BBBDD7DFBD97A24C971E1882443A66_gshared (uint16_t ___0_source, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_25 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_37 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m1FF171FFE77D6488525AFE8E774D841DFC1B9791_gshared (uint16_t ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25)->___m_FontAsset), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37)->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisGuid_t_m3E5958C093EF0E520A59BB0A8EA407B00B78E5D5_gshared (uint16_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Guid_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Guid_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Guid_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Guid_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Guid_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Guid_t*)L_25 = ((*(Guid_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Guid_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Guid_t*)L_37 = ((*(Guid_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Guid_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Guid_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79A48FDC8F015551BDC9A9EECE41F81C019FA9A6_gshared (uint16_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int16_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int16_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int16_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int16_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int16_t*)L_25 = ((*(int16_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int16_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int16_t*)L_37 = ((*(int16_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int16_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int16_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m465900A712D36260E65CFB8F5FC516306BE7A70D_gshared (uint16_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int32_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int32_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int32_t*)L_25 = ((*(int32_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int32_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int32_t*)L_37 = ((*(int32_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int32_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m90114121D0145D70491EA5E693E32BDBAA2BE480_gshared (uint16_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int32_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int32_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int32_t*)L_25 = ((*(int32_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int32_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int32_t*)L_37 = ((*(int32_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int32_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m763CE0568E5B25B491A659E1877DC8E2AD5C56A5_gshared (uint16_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int64_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int64_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int64_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int64_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int64_t*)L_25 = ((*(int64_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int64_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int64_t*)L_37 = ((*(int64_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int64_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int64_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m79262A46E73FF0E54C87AF61839B6E5281D6E82D_gshared (uint16_t ___0_source, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_25 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_37 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisRuntimeObject_mA727816B964B19FC76EA7155912F93F3DB86960C_gshared (uint16_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject** L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject** L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(RuntimeObject*));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject** L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(RuntimeObject**)L_25 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_25, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		RuntimeObject** L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(RuntimeObject**)L_37 = ((RuntimeObject*)Castclass((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_37, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		RuntimeObject** L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(RuntimeObject*));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m9D2B43B39E29AB7905D51E232BF5D6A7E0322B34_gshared (uint16_t ___0_source, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_25 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_37 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m95545970B7528C749E5BCE59270C4FDD53CDA8DA_gshared (uint16_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int8_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int8_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int8_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int8_t*)L_25 = ((*(int8_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int8_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int8_t*)L_37 = ((*(int8_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int8_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m59B17C94ECBF0FE24B38507FB1B5AFAEA87AE26E_gshared (uint16_t ___0_source, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_25 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_37 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mA4C7734045A04593E357AE529EB93D0A07B551FB_gshared (uint16_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_25 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_37 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFF66EDF3CB48CF03D2863517AFC4BA8275D39FE7_gshared (uint16_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		float* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(float));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		float* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(float));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		float* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(float*)L_25 = ((*(float*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		float* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(float*)L_37 = ((*(float*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		float* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(float));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mF2F4A9F3BFFA950DEFEBCC5E0EBC63438EEBF36F_gshared (uint16_t ___0_source, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m55B4768FF8989D232FC72E7C4E21321877F0CFC1_gshared (uint16_t ___0_source, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_25 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_37 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mF73728DCE614A158D94654A46CDE90D2E9B4113C_gshared (uint16_t ___0_source, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_25 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_37 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m25F994AB0E822B3D1004F68C1807D549138E2352_gshared (uint16_t ___0_source, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_25 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_37 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m9885F7D495633B421C88CFC693531C52FE4F1135_gshared (uint16_t ___0_source, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_25 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_37 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mACFEC00853973D3862AE5E1AFC40B6C4A1204A5D_gshared (uint16_t ___0_source, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_25 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_25)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_37 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_37)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m557D0631693ABA317FE0EB78E7EA6D7E3713E095_gshared (uint16_t ___0_source, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_25 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_37 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mD5D27CF1B654362D7A830562E116972B3B943D41_gshared (uint16_t ___0_source, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_25 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_37 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m3B00CC35A0A26D739FBDD00E7B14BF2446A680E5_gshared (uint16_t ___0_source, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m0D05735D7CD5316233032C2C387F30A6402C36A3_gshared (uint16_t ___0_source, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_25 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_37 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m2AAB4C0F232FCDFF4DA0159301FB1C92C7E46A6C_gshared (uint16_t ___0_source, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_25 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_37 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m6DE4EF4994EB54022BD23958AA1DCD491D52A180_gshared (uint16_t ___0_source, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_25 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_25)->___U3CnameU3Ek__BackingField), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_37 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_37)->___U3CnameU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m8E6B7E38F13584B5143849D79231DFE9FF5F7613_gshared (uint16_t ___0_source, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_25 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_37 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mA88B0D6E25C820DD387DAC0989DA7D8125606218_gshared (uint16_t ___0_source, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_25 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_37 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mF19ABF4DEAB899DCC4F1B45D6D8271A75614ABF4_gshared (uint16_t ___0_source, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_25 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_37 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mD927086198135629E57B9A1CB3BA653F977EB047_gshared (uint16_t ___0_source, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_25 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_37 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m6EDDA3E25E0808111998F9228F2830EBD7B3FD28_gshared (uint16_t ___0_source, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_25 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_37 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8749D045863F34114E619C47C76EA7CBEB6291CF_gshared (uint16_t ___0_source, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_25 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_37 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m9FA657A6F5306AFBD87750A2AF0A3B03B6EC8461_gshared (uint16_t ___0_source, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_25 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_37 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m0BDE9D09D937B6E692BCE49D564D49B315AC2EB2_gshared (uint16_t ___0_source, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_25 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_37 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mCC6FDEB0928D2C0B76E5769310081E6F1AEC7687_gshared (uint16_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_25 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_37 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mD0E690BAA18A76D41F265B2F745F9ED88E353441_gshared (uint16_t ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_25 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_37 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m92F7E1B43B309BF9F6AF4E700B564A44D25FA9BE_gshared (uint16_t ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_25 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_37 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8824F88D750FEB708D30489247692122FF88F7A4_gshared (uint16_t ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_25 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_37 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m416AD096BEA340EDB301C61EB4E36B4B00179714_gshared (uint16_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint16_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		uint16_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(uint16_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		uint16_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(uint16_t*)L_25 = ((*(uint16_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		uint16_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(uint16_t*)L_37 = ((*(uint16_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		uint16_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(uint16_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1DCCFDE7A2D1AF8DB0A9D2949A70A032F0AD14E4_gshared (uint16_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		uint32_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(uint32_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		uint32_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(uint32_t*)L_25 = ((*(uint32_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		uint32_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(uint32_t*)L_37 = ((*(uint32_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		uint32_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(uint32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20058DE6DD5AFF671460BD8238940A3B39D30DC0_gshared (uint16_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint64_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		uint64_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(uint64_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		uint64_t* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(uint64_t*)L_25 = ((*(uint64_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		uint64_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(uint64_t*)L_37 = ((*(uint64_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		uint64_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(uint64_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m96B56AC161053CE126C80398E1C19D01CEBB62C8_gshared (uint16_t ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_25 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_37 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m5EDBEFAF6E89548AC1225EDFBA4774BC28E19A66_gshared (uint16_t ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_25 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_37 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m48CA3814CE13D9E6AD156C7BE7C2F99A69FD1C94_gshared (uint16_t ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_25 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_37 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7E519319E2C000FEA76671044768A8C1BAC66C17_gshared (uint16_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_25 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_37 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m53306712A0F88330ECACA98B910D7F0B65EE6B56_gshared (uint16_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint16_t L_12 = ___0_source;
		uint16_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_25 = ___1_destination;
		uint16_t L_26 = ___0_source;
		uint16_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_25 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8D78A73D40AD636A19F28F91C4CF9305B5AB0402_inline(((TypeConverter_2_tEE07117FA9FE7124BEFE1F236C42BD66136C709B*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_37 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mB5C4C7528199E1B6E095DC09BCF85667F14179E8_gshared (uint32_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_25 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_25)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_25)->___value), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_37 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_37)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_37)->___value), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mE624147658233C2C34563F088D20C67EF7F2CE70_gshared (uint32_t ___0_source, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)L_25 = ((*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)L_37 = ((*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m844D44EC082124D76B256BE3858056BE5FA7E6F5_gshared (uint32_t ___0_source, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_25 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_37 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m4D88F48746082E059C88315B7640268EE4294DCD_gshared (uint32_t ___0_source, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_25 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_37 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m6B88869E111CB2E19814A8CAA718185DD55BD9CD_gshared (uint32_t ___0_source, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_25 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_37 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mB02BD0257347739D0E0AD09BDFC988025DE88E14_gshared (uint32_t ___0_source, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_25 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_37 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m15C013CE957AFBD015B6E81849A92D43CA33C423_gshared (uint32_t ___0_source, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25)->___m_VectorImage), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37)->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m72501B47B27E11705800CFD988D6939D0AD59431_gshared (uint32_t ___0_source, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_25 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_37 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mC69F25B08FDFC9B2CE9E7C210590F44054E858FD_gshared (uint32_t ___0_source, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_25 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_37 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m0E96685CEB8F4D7B4D1615B94D0ECABD238E44D4_gshared (uint32_t ___0_source, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_25 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_37 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mBA7909AA1C307AF46044EEE87F0F4B8D5BC4EE57_gshared (uint32_t ___0_source, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_25 = ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_37 = ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23C7D3C1961638B61D10A1C2AAB2A3E521441D42_gshared (uint32_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		bool* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(bool));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		bool* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(bool));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		bool* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(bool*)L_25 = ((*(bool*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		bool* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(bool*)L_37 = ((*(bool*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		bool* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(bool));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE97223568BA1D94301A62359727D2EE4FE5A3381_gshared (uint32_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		uint8_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(uint8_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		uint8_t* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(uint8_t*)L_25 = ((*(uint8_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		uint8_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(uint8_t*)L_37 = ((*(uint8_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		uint8_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(uint8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1A1E597F6C6D48028C8689E87C6A3FDA4D22E8C8_gshared (uint32_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Il2CppChar));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Il2CppChar* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Il2CppChar));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Il2CppChar* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Il2CppChar*)L_25 = ((*(Il2CppChar*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Il2CppChar* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Il2CppChar*)L_37 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Il2CppChar* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Il2CppChar));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m713D8F66FDD5448EB533DAA8F53CD2840D8C1051_gshared (uint32_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_25 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_37 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m1FD7CA62CEA65858B36CD6E476909887E3DB267C_gshared (uint32_t ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_25 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_25)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_37 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_37)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m85134CD639227B89CCC8E57E66308A3AFFC7BBD3_gshared (uint32_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_25 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_37 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3E1C84729B115EB733E48D2668B6E0EA0E486277_gshared (uint32_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		double* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(double));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		double* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(double));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		double* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(double*)L_25 = ((*(double*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		double* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(double*)L_37 = ((*(double*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		double* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(double));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mE605BACA57D6A96024EFE798803528463A4A9B6B_gshared (uint32_t ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_25 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_37 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m4F8313DB719D2065852EAC6604A096A528A531B7_gshared (uint32_t ___0_source, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_25 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_37 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mF705894649EC1BB965B8A39CBB5682085998E11B_gshared (uint32_t ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25)->___m_FontAsset), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37)->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisGuid_t_m089B00346AD69A26E7FEEE93088CB89AEDB048DE_gshared (uint32_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Guid_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Guid_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Guid_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Guid_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Guid_t* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Guid_t*)L_25 = ((*(Guid_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Guid_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Guid_t*)L_37 = ((*(Guid_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Guid_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Guid_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4F1407204028088541C3B0F8AE4124298706D214_gshared (uint32_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int16_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int16_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int16_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int16_t* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int16_t*)L_25 = ((*(int16_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int16_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int16_t*)L_37 = ((*(int16_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int16_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int16_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA67F0B97B1E5A96F6038AF5538106293CECDFC73_gshared (uint32_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int32_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int32_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int32_t*)L_25 = ((*(int32_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int32_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int32_t*)L_37 = ((*(int32_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int32_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m03843E0E763542DCB9BC4F73C6AE7E6DBBBA51C2_gshared (uint32_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int32_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int32_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int32_t*)L_25 = ((*(int32_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int32_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int32_t*)L_37 = ((*(int32_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int32_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m438AF14BF277671934E8017263A68465D6B3E975_gshared (uint32_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int64_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int64_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int64_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int64_t* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int64_t*)L_25 = ((*(int64_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int64_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int64_t*)L_37 = ((*(int64_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int64_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int64_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m63B67A19E951007EFFF7CAD7A4E1FFB03CC6540B_gshared (uint32_t ___0_source, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_25 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_37 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisRuntimeObject_m914361363DA47C0EF448EE9FD04C80BE3829B3EC_gshared (uint32_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject** L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject** L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(RuntimeObject*));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject** L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(RuntimeObject**)L_25 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_25, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		RuntimeObject** L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(RuntimeObject**)L_37 = ((RuntimeObject*)Castclass((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_37, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		RuntimeObject** L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(RuntimeObject*));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mAC3FC4306F90422E850A47A8279D0CA3EF571FE4_gshared (uint32_t ___0_source, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_25 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_37 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mDC68785EAA5710A36A28A0F1132070D1BB1B0F02_gshared (uint32_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int8_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int8_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int8_t* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int8_t*)L_25 = ((*(int8_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int8_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int8_t*)L_37 = ((*(int8_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int8_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mB62787E1F65F670B725143D5E4FBC67436AA4EF8_gshared (uint32_t ___0_source, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_25 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_37 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m28255A63E3E82C42F52DA44379755D854420A73A_gshared (uint32_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_25 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_37 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF163FB3F363CA18942314F9BE7A771BF3D3F758A_gshared (uint32_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		float* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(float));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		float* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(float));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		float* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(float*)L_25 = ((*(float*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		float* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(float*)L_37 = ((*(float*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		float* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(float));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m5B4AFCC97143FAA4E3B6C91E97C121D1B92BD839_gshared (uint32_t ___0_source, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mD77E3D1AB92A00F6652B53AA0B98096F4852FBCE_gshared (uint32_t ___0_source, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_25 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_37 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA42FF88D6215210CCB0C564386DB3C9F7B698E60_gshared (uint32_t ___0_source, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_25 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_37 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mDF170641BEF379E0C192095BDA19583B812315F6_gshared (uint32_t ___0_source, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_25 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_37 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m2368736A1DD8C09DFC7F34D729A7CDCAA8F9FE9D_gshared (uint32_t ___0_source, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_25 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_37 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m9D808827894C10ADD66A2675F9ED65AE441DFD06_gshared (uint32_t ___0_source, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_25 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_25)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_37 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_37)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF08AD7630C65000FE546B952D2DF8E58CF49834F_gshared (uint32_t ___0_source, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_25 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_37 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m0BEA8545FCAC90E38F7CA2C6B5FA533CC96A952F_gshared (uint32_t ___0_source, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_25 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_37 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mFAFF0D90290CB68D7116BA5E285A48008EAF6812_gshared (uint32_t ___0_source, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_12 = ___0_source;
		uint32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		uint32_t L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_25 = ___1_destination;
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_mA0597BEC672B86F45C8CA5CA6B8E3E853BA90CAE_gshared_inline (TypeConverter_2_t02B93B6FEF5A20CFCE1704E91A5396B50EE8B2EF* __this, uint16_t* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, uint16_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m5D0248B446929C84B8D54562AA6BA5D1A0925770_gshared_inline (TypeConverter_2_t991006B141207200481E6B2187724BBAAD1199A1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
