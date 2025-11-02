#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5;
struct TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77;
struct TypeConverter_2_t547296520B171FDA874443658579914AA93417AA;
struct TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ConverterKeyComparer_t204523C3EB04B7681EC88C456FBB52B49F1B1F49;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


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
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
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
struct SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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
struct TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t547296520B171FDA874443658579914AA93417AA  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
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
struct String_t_StaticFields
{
	String_t* ___Empty;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline (TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5* __this, bool* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m939AD919BAE47059A0F1EC29FEA27D5BE94F4497_gshared_inline (TypeConverter_2_t547296520B171FDA874443658579914AA93417AA* __this, uint8_t* ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936 (Type_t* ___0_t, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline (TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77* __this, bool* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*, bool*, const RuntimeMethod*))TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline (TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7* __this, uint8_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*, uint8_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m939AD919BAE47059A0F1EC29FEA27D5BE94F4497_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m47462EFF2D5E76987B192BA0DA9F4B74072B7DA3_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	const Il2CppFullySharedGenericAny L_55 = L_44;
	const Il2CppFullySharedGenericAny L_62 = L_44;
	const Il2CppFullySharedGenericAny L_77 = L_44;
	const Il2CppFullySharedGenericAny L_84 = L_44;
	const Il2CppFullySharedGenericAny L_91 = L_44;
	const Il2CppFullySharedGenericAny L_107 = L_44;
	const Il2CppFullySharedGenericAny L_123 = L_44;
	const Il2CppFullySharedGenericAny L_126 = L_44;
	const Il2CppFullySharedGenericAny L_141 = L_44;
	const Il2CppFullySharedGenericAny L_124 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_66 = L_9;
	const Il2CppFullySharedGenericAny L_86 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_121 = L_9;
	const Il2CppFullySharedGenericAny L_128 = L_9;
	const Il2CppFullySharedGenericAny L_132 = L_9;
	const Il2CppFullySharedGenericAny L_143 = L_9;
	Delegate_t* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	memset(V_1, 0, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Il2CppFullySharedGenericAny V_20 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	memset(V_20, 0, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		Il2CppFullySharedGenericAny* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), ((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_9, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_9);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_19 = ___1_destination;
		Il2CppFullySharedGenericAny* L_20 = ___0_source;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_22, L_21, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_19, L_22, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_19, (void*)L_22);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(72, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		Il2CppFullySharedGenericAny* L_43 = ___0_source;
		il2cpp_codegen_memcpy(L_44, L_43, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_45 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_44);
		Type_t* L_46 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_47;
		L_47 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_45, L_46, NULL);
		V_10 = L_47;
		Il2CppFullySharedGenericAny* L_48 = ___1_destination;
		Type_t* L_49 = V_6;
		RuntimeObject* L_50 = V_10;
		RuntimeObject* L_51;
		L_51 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_49, L_50, NULL);
		void* L_53 = UnBox_Any(L_51, il2cpp_rgctx_data(method->rgctx_data, 6), L_52);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_48, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_53)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_48, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_53)));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		Il2CppFullySharedGenericAny* L_54 = ___0_source;
		il2cpp_codegen_memcpy(L_55, L_54, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		bool L_56 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_55);
		bool L_57 = L_56;
		V_11 = L_57;
		bool L_58 = V_11;
		if (!L_58)
		{
			goto IL_0156;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_59 = ___1_destination;
		il2cpp_codegen_initobj(L_59, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		Il2CppFullySharedGenericAny* L_60 = ___1_destination;
		Il2CppFullySharedGenericAny* L_61 = ___0_source;
		il2cpp_codegen_memcpy(L_62, L_61, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		void* L_67 = UnBox_Any(L_65, il2cpp_rgctx_data(method->rgctx_data, 6), L_66);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_60, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_67)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_60, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_67)));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_68;
		L_68 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_68)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		Type_t* L_73;
		L_73 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_73, NULL);
		G_B21_0 = ((int32_t)(L_74));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_01e9;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_76 = ___0_source;
		il2cpp_codegen_memcpy(L_77, L_76, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		bool L_78 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_77);
		bool L_79 = L_78;
		V_13 = L_79;
		bool L_80 = V_13;
		if (!L_80)
		{
			goto IL_01cc;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_81 = ___1_destination;
		il2cpp_codegen_initobj(L_81, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		Il2CppFullySharedGenericAny* L_82 = ___1_destination;
		Il2CppFullySharedGenericAny* L_83 = ___0_source;
		il2cpp_codegen_memcpy(L_84, L_83, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_85 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_84);
		void* L_87 = UnBox_Any(L_85, il2cpp_rgctx_data(method->rgctx_data, 6), L_86);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_82, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_87)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_82, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_87)));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_88;
		bool L_89 = V_14;
		if (!L_89)
		{
			goto IL_0210;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_90 = ___0_source;
		il2cpp_codegen_memcpy(L_91, L_90, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		Il2CppFullySharedGenericAny* L_92 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)), il2cpp_rgctx_method(method->rgctx_data, 14), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? L_91: *(void**)L_91), L_92);
		V_15 = L_93;
		bool L_94 = V_15;
		if (!L_94)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_95;
		L_95 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)))(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_95;
		bool L_96 = V_16;
		if (!L_96)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		bool L_101;
		L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
		V_17 = L_101;
		bool L_102 = V_17;
		if (!L_102)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		Il2CppFullySharedGenericAny* L_103 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		Il2CppFullySharedGenericAny* L_106 = ___0_source;
		il2cpp_codegen_memcpy(L_107, L_106, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_108 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_107);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_109;
		L_109 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_105, ((String_t*)CastclassSealed((RuntimeObject*)L_108, il2cpp_defaults.string_class)), NULL);
		void* L_111 = UnBox_Any(L_109, il2cpp_rgctx_data(method->rgctx_data, 6), L_110);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_103, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_111)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_103, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_111)));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_112 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Il2CppFullySharedGenericAny* L_113 = ___1_destination;
		il2cpp_codegen_initobj(L_113, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_115, NULL);
		V_18 = L_116;
		bool L_117 = V_18;
		if (!L_117)
		{
			goto IL_02b2;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_118 = ___1_destination;
		Il2CppFullySharedGenericAny* L_119 = ___0_source;
		Il2CppFullySharedGenericAny* L_120;
		L_120 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_119, il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_121, L_120, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_118, L_121, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_118, (void*)L_121);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		Il2CppFullySharedGenericAny* L_122 = ___0_source;
		il2cpp_codegen_memcpy(L_123, L_122, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		il2cpp_codegen_memcpy(V_20, L_123, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		il2cpp_codegen_memcpy(L_124, V_20, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_125 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_124);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_125, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		il2cpp_codegen_memcpy(L_126, V_20, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_127 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_126);
		void* L_129 = UnBox_Any(((RuntimeObject*)IsInst((RuntimeObject*)L_127, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6), L_128);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_129)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_130 = V_19;
		if (!L_130)
		{
			goto IL_02f1;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_131 = ___1_destination;
		il2cpp_codegen_memcpy(L_132, V_1, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_131, L_132, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_131, (void*)L_132);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		NullCheck(L_134);
		bool L_137;
		L_137 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_134, L_136);
		V_21 = L_137;
		bool L_138 = V_21;
		if (!L_138)
		{
			goto IL_032b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_139 = ___1_destination;
		Il2CppFullySharedGenericAny* L_140 = ___0_source;
		il2cpp_codegen_memcpy(L_141, L_140, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_142 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_141);
		void* L_144 = UnBox_Any(L_142, il2cpp_rgctx_data(method->rgctx_data, 6), L_143);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_139, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_144)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_139, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_144)));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		Il2CppFullySharedGenericAny* L_145 = ___1_destination;
		il2cpp_codegen_initobj(L_145, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_146 = V_3;
		return L_146;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3EC2E6CC651F5711760833162753A254B996B858_gshared (bool ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mE4F5128C2AC33FCBAAB2EA1D97F23DE21140AABA_gshared (bool ___0_source, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mFD408C8E8D6992E3122EE9D1CE81B275C842BDE3_gshared (bool ___0_source, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mFA86C49C9AA65785203D147F583FA93167162807_gshared (bool ___0_source, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m4A6BD5DECE03803DC4C61B9F103F74C1B1640C49_gshared (bool ___0_source, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mB2EAD55F77A71B5DC8A661C174C0238532DCDE3F_gshared (bool ___0_source, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m27F03E1DD1B1FE4B393E7332585935EE419FCFCD_gshared (bool ___0_source, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mCB7EA012C3FC4B6C3782D2873C8E3111C51329D8_gshared (bool ___0_source, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mED19B24DB09662B375035E4F57D396BD86463AF2_gshared (bool ___0_source, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m11704B26D8C14B1E32E4880F7222798E53A56E8C_gshared (bool ___0_source, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mEC0AE602E4DECF730CFCF4B3B6383627B99F9997_gshared (bool ___0_source, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m015B1A96668CBDBD4FF40B64E52BDAC9043B7F03_gshared (bool ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m301803FA77A17119EB7F5E7CD7CDD759F1B6CD22_gshared (bool ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m66EDB994914B8BE910559BF8CA56620F8D6D6537_gshared (bool ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBED3483322D61A71393E2C22F0879301EC15FF3F_gshared (bool ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF3F0200FAF77B30F1C9C72D1548492619993A085_gshared (bool ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m0B085F6E02953C4EE72344A7E6C17EC7B42F2CB4_gshared (bool ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB9B908E8E0BE8AD5C6094DD6EC55A61610F8EFD5_gshared (bool ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA6BD039007AC727658672CE6E3067654B6616C2E_gshared (bool ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mF415654D7DBFF0E31EDFE7B7BEFE7F1297BEC0CE_gshared (bool ___0_source, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m20415D0C45BEB2D39110CF70FD5B4C01132FC45F_gshared (bool ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisGuid_t_mE468885431B77B7FBF0B64AF4008A4774CE466F4_gshared (bool ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2A969E3B6CC5BA370F9659F2F689CD39FF142F15_gshared (bool ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA8CEE27C96F3E3BE4D5E485891B1749623D947EA_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mAC11224D028618DD6A80DCF6FF40A82743DBF7AF_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mAE1DE3F29BD837B26E3A054245441A79068C06AC_gshared (bool ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mCB69A96B5A602534A9D216914CCBF8432B417025_gshared (bool ___0_source, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mC02C724E7E2FA6DCE702CFE05910F2CF944C9533_gshared (bool ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m6789543806E7789775BD2DC4317B54B438B478DE_gshared (bool ___0_source, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m7B7C9D2E660ADA1AA3B2F6B0D889C1A33B803B83_gshared (bool ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mA6B60B5842671501DFC96720BB017795C2C01732_gshared (bool ___0_source, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m1D41687F69EA4F20F0AE750EEA79880F55E2CAF7_gshared (bool ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_25 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_37 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m825B2E827D6E6CFB0CA8BD91A308AF30AADCC4F5_gshared (bool ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
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
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
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
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_25 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_37 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m39285009311F44B47048013D86C146E4506A7036_gshared (bool ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE9A960AE947D0A4F542D3628782F69A023D5FA1_gshared (bool ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m6BF04AF79C9560962AC589BA0229BF3B98B7F28D_gshared (bool ___0_source, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mF08465C43FC23CA67552EF6320C7A659FD311539_gshared (bool ___0_source, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mE9E86135B0B2AF7815C431ECB51D48AFE9B85F94_gshared (bool ___0_source, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mF2BE7885A969CCFFF1CDB0BD73967CBDA210B144_gshared (bool ___0_source, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m1C34D878E0FC01C91428F544DCCB63DAEBD947CA_gshared (bool ___0_source, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m003DE98E47EF265E625216627D2D8E3531A831F0_gshared (bool ___0_source, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mFE84D890D4EA848AA8ED59184F4037A62D46C651_gshared (bool ___0_source, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m1DF2BF9D632CFF4B7ACF516C99F054B14AEFC257_gshared (bool ___0_source, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m539D07FBA525979DC960D380874C02B8E25E92F5_gshared (bool ___0_source, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mFEBDAF2BB376B058D196013BA8D6E48FD39ED4D3_gshared (bool ___0_source, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m9C6F161A7F18CD40F3E5F63DDA3AAD3AC768D9B5_gshared (bool ___0_source, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m29D9E98EE92CB4C147C8332E2C84FFE332CDFE43_gshared (bool ___0_source, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mE45938538E4A3CCB759174914267C99EEDEA7B02_gshared (bool ___0_source, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mDE9825998B9E3CC92DC4D315CB3803EE7D7A1188_gshared (bool ___0_source, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mE934DF91FC18F76C556AF90CACCB151B4AF39C41_gshared (bool ___0_source, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m7BB07240568DA04306CFEB91EA09CE49DECB5F39_gshared (bool ___0_source, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mF1D229E80594A52AA534309F23E191FE3176366A_gshared (bool ___0_source, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mA215E2CAEB1D6D2136C54659A23AAE12F4E5B474_gshared (bool ___0_source, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m9EBC371AC5F9EC1E202D49EEE8E9CACD542C4C5A_gshared (bool ___0_source, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mA98364C985932BEDA01B55354015F127EBD1B4F2_gshared (bool ___0_source, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m745EE2CC514AA0594833C0CF97F5F99B6C4EA07B_gshared (bool ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m7E088DF6AE8EDCB27CCF35018646F60E4054D5EA_gshared (bool ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mB740C2C0519FC00B212B5FE7FEF8E56447D60864_gshared (bool ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mDFE99E6B68C9ABC258B8713D2D6DC82F40457803_gshared (bool ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m4BF0FED524F9F5C03398DDB416954FDB70EE57BB_gshared (bool ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m21FB5D12C8B62E837EBA558D72F406285B0E66F0_gshared (bool ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m477FAEEE6D84AB878BBB83FC28E645E46606891B_gshared (bool ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mE20F1A02F01296EAA59CF56F63B9CA7018BC100B_gshared (bool ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mEC70A8C1D74E86CD8EB3614C593BE260B4240000_gshared (bool ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBB3F4D545E19CB5E6D341E9884BCC025B700308E_gshared (bool ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF3EFE12089C60F083BF395384194C8E9B11FEFAB_gshared (bool ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA5CFD6D43EE3607FC6AD1171C2C3E231E3B6E959_gshared (bool ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		bool L_12 = ___0_source;
		bool L_13 = L_12;
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
		bool L_16 = ___0_source;
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
		bool L_26 = ___0_source;
		bool L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m027F7F58EA42086627553A1A117FEEBCE3098D81_gshared (uint8_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_m57F476F43779A86069D4B80E9A9A0795C9FA9223_gshared (uint8_t ___0_source, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m8FF0519022197BA1109EF55EC0E31A2850CAB70D_gshared (uint8_t ___0_source, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m530534310C9705EAE62DD40B90613014BD1A09F3_gshared (uint8_t ___0_source, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mF5F79ACE86723B5257AE043D3D998A6B1139BBD1_gshared (uint8_t ___0_source, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m81CEB4A4B699F3169AE56DDCDF4EB49750A128E7_gshared (uint8_t ___0_source, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m2B774005091D132BF85F6F0F38F45ABF54F4D764_gshared (uint8_t ___0_source, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m8A163288B93831398F73DB7378B40FF4BA6809F5_gshared (uint8_t ___0_source, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF92A9E23FA5D35B3E91DD34DC69B538A79203E8D_gshared (uint8_t ___0_source, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m4EFCF6497249036758C99F4951865331A033C381_gshared (uint8_t ___0_source, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m889B31FE28F55DB494167E08D4B097D327D1506F_gshared (uint8_t ___0_source, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB37FEF5B4BE8A74F283FA43AE64A61E65B381FD_gshared (uint8_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCABE922335C6745465BDADAC428B8B42D6145162_gshared (uint8_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m88DF78FD682509A8352DBB5160170455DFAE135C_gshared (uint8_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m67FDF208610A6119E05A03B68CEF159DC545393B_gshared (uint8_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m83F11FAF4F766CCA92D1C9F8D8B360BB6068135A_gshared (uint8_t ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m028345E4ED8DAC34E6DB1F7C2756EBB869FDC480_gshared (uint8_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m6ED7A3A7BADF4E554B18CC90502369C9F85CD41F_gshared (uint8_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m31B3F1D1B691A3182C676CD4ABE8596B77B00DBE_gshared (uint8_t ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC57ACA99E86F0B6A9EE5F413F4562DE67AE59C04_gshared (uint8_t ___0_source, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m2C753E5C5F6BD01CEA3FC49144062EA56B8B52C7_gshared (uint8_t ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGuid_t_m07A6B998764134BBAC40BA74447442920EDC4DDB_gshared (uint8_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mAE7DB36EE23197C80F57898BDDF839965150F61B_gshared (uint8_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCB10882E5842C042CB53D28A3D2CFCC1127EBE6F_gshared (uint8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m3D6D79563F127951F0F2128E2BED94F8E709AB2E_gshared (uint8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE9AC40DC4ACC5322B10673C56D5DC38926AE0AF4_gshared (uint8_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		uint8_t L_12 = ___0_source;
		uint8_t L_13 = L_12;
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
		uint8_t L_16 = ___0_source;
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
		uint8_t L_26 = ___0_source;
		uint8_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m70E0277DB7EE6A55256FF02DBF2C54A84E633F34_inline(((TypeConverter_2_t87CBFDD71E413C7848300A01FAA523C9150701C7*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline (TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, bool*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m939AD919BAE47059A0F1EC29FEA27D5BE94F4497_gshared_inline (TypeConverter_2_t547296520B171FDA874443658579914AA93417AA* __this, uint8_t* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, uint8_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
