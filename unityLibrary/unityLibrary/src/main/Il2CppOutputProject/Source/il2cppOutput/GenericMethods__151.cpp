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
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t9E4E112587B260E7AA28747357980199765AC14A;
struct Dictionary_2_t2194A24A91615F1753E100F1DEFB88A3900FA98D;
struct Dictionary_2_t06375A33B9F7A2A7102B9803C4A0C1147446FAAA;
struct Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252;
struct Dictionary_2_tE6EFE93C6D507ABDB2EFE690536DC09607031F04;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
struct List_1_tEDA21DD6593CBD4193F27415DDD9E347516C7C56;
struct List_1_t5624B12539F9DA36FC73AD2D8438FE307EEB7D57;
struct List_1_t2F8371DA219D5B3DD6EDEDE648C418CB65994C81;
struct TypeConverter_2_t991006B141207200481E6B2187724BBAAD1199A1;
struct TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979;
struct TypeConverter_2_t2280653F66FAC5B844EA034731D38F8C60826983;
struct TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819;
struct UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65;
struct UnsafeList_1_t28233F4F3908CF7B29AD24177AD748A1C5D8A7AB;
struct UnsafeList_1_t54E696E72EF3C201ED83B57737A9884CBD50EFF4;
struct UnityObjectRef_1U5BU5D_tC0FDAB1676716DDC3B88735AAB82A98CD35AF0A4;
struct UnityObjectRef_1U5BU5D_tA415DDDA89424401B628C3A8E30B3926646CB14E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MaterialMeshIndexU5BU5D_t811D5F97ACDDB429D846AA0436A479D668A9F864;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ManagedSharedComponentFnPtrsU5BU5D_tD039C786BA8C49A2E3326A90064A17D24191A368;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ConverterKeyComparer_t204523C3EB04B7681EC88C456FBB52B49F1B1F49;
struct SharedComponentFnPtrs_t2EC60ACBF3F3129564A3493C7599E5C1AB52FB30;
struct SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED;
struct SystemTypeInfo_t07267D7B80EA0E887B51212B3294D4B628F457C6;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5A6F54ADBF6D522FB0EA4589332AC41FAA68F1F6;
IL2CPP_EXTERN_C String_t* _stringLiteral7E1DBF06FDEFB610F2E97D0A114BB19F843B9088;
IL2CPP_EXTERN_C String_t* _stringLiteralAD419BF3882D61CA905FE9382C72D87A95503105;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8A22A728B512514BF0150783017A09FD6FA67B;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74;
struct UnityObjectRef_1_t77601E67D4355EFD7EA1E3E4EB7710DE1A9D5A32;
struct UnityObjectRef_1_t98A997E7AA0E9723ACD292BF2F782D4E1E058656;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625  : public RuntimeObject
{
	SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* ___m_StatePtr;
};
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
struct TypeHash_tC0E192E824604892B0668A13F90975CD5477ED79  : public RuntimeObject
{
};
struct TypeHelpers_tF2D4804F9906DD09986DC5852EE53402EA9B3FA3  : public RuntimeObject
{
};
struct TypeManager_t1CD355B61F0A783824533CABA3B27CAD1CE5C725  : public RuntimeObject
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
struct NativeList_1_t4F21181C394F3DC7CDFEACA899EC6FF4AF328FAE 
{
	UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65* ___m_ListData;
};
struct NativeList_1_tE452D9F5438E6DAE8B69A43E16A97AE2B21463E9 
{
	UnsafeList_1_t28233F4F3908CF7B29AD24177AD748A1C5D8A7AB* ___m_ListData;
};
struct NativeList_1_t6EC79A495710CF831CA669A451BBF67CD3819EA0 
{
	UnsafeList_1_t54E696E72EF3C201ED83B57737A9884CBD50EFF4* ___m_ListData;
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
#pragma pack(push, tp, 1)
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C 
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
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C__padding[4];
	};
};
#pragma pack(pop, tp)
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
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB 
{
	uint64_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tE30241A42A1871A9482D86ACA3E94A4FBF872AFD 
{
	UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tE6695A2BC833DDD6C02176CF9BCF618A0FD0F83E 
{
	SharedComponentFnPtrs_t2EC60ACBF3F3129564A3493C7599E5C1AB52FB30* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5 
{
	SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t48015308AE3031BC0E9D4EF0649AFDCBEFFCDC84 
{
	SystemTypeInfo_t07267D7B80EA0E887B51212B3294D4B628F457C6* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeParallelHashMap_2_t155FBBDBDFCBFD134A7F634389EF166E981C345E 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_t889F0DE776C4887F6C6019AB7C88E998CAB2010D 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752 
{
	UnityObjectRef_1U5BU5D_tC0FDAB1676716DDC3B88735AAB82A98CD35AF0A4* ___m_Materials;
	UnityObjectRef_1U5BU5D_tA415DDDA89424401B628C3A8E30B3926646CB14E* ___m_Meshes;
	MaterialMeshIndexU5BU5D_t811D5F97ACDDB429D846AA0436A479D668A9F864* ___m_MaterialMeshIndices;
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___m_Hash128;
};
struct RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_marshaled_pinvoke
{
	UnityObjectRef_1_t77601E67D4355EFD7EA1E3E4EB7710DE1A9D5A32* ___m_Materials;
	UnityObjectRef_1_t98A997E7AA0E9723ACD292BF2F782D4E1E058656* ___m_Meshes;
	MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74* ___m_MaterialMeshIndices;
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___m_Hash128;
};
struct RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_marshaled_com
{
	UnityObjectRef_1_t77601E67D4355EFD7EA1E3E4EB7710DE1A9D5A32* ___m_Materials;
	UnityObjectRef_1_t98A997E7AA0E9723ACD292BF2F782D4E1E058656* ___m_Meshes;
	MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74* ___m_MaterialMeshIndices;
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___m_Hash128;
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
struct SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SceneEntity;
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
struct NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID;
	int32_t ___SectionIndex;
	int32_t ___HasStreamedLOD;
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
struct SceneSection_t7E9283B521FC08050547458EF3248964019A36B8 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID;
	int32_t ___Section;
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
struct TypeConverter_2_t991006B141207200481E6B2187724BBAAD1199A1  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t2280653F66FAC5B844EA034731D38F8C60826983  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F  : public MulticastDelegate_t
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
struct TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD 
{
	NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B ___LayoutInfo;
	uint16_t ___EqualsDelegateIndex;
	uint16_t ___GetHashCodeDelegateIndex;
};
struct SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ____sceneBundleHandles;
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
struct TypeManager_t1CD355B61F0A783824533CABA3B27CAD1CE5C725_StaticFields
{
	int32_t ___s_TypeCount;
	bool ___s_Initialized;
	NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090 ___s_TypeInfos;
	UnsafeParallelHashMap_2_t889F0DE776C4887F6C6019AB7C88E998CAB2010D ___s_StableTypeHashToTypeIndex;
	NativeList_1_t6EC79A495710CF831CA669A451BBF67CD3819EA0 ___s_EntityOffsetList;
	NativeList_1_t6EC79A495710CF831CA669A451BBF67CD3819EA0 ___s_BlobAssetRefOffsetList;
	NativeList_1_t6EC79A495710CF831CA669A451BBF67CD3819EA0 ___s_WeakAssetRefOffsetList;
	NativeList_1_t6EC79A495710CF831CA669A451BBF67CD3819EA0 ___s_UnityObjectRefOffsetList;
	NativeList_1_t4F21181C394F3DC7CDFEACA899EC6FF4AF328FAE ___s_WriteGroupList;
	NativeList_1_tE452D9F5438E6DAE8B69A43E16A97AE2B21463E9 ___s_FastEqualityTypeInfoList;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___s_Types;
	UnsafeList_1_tE30241A42A1871A9482D86ACA3E94A4FBF872AFD ___s_TypeNames;
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB ___s_TypeFullNameHashes;
	UnsafeParallelHashMap_2_t155FBBDBDFCBFD134A7F634389EF166E981C345E ___s_DescendantMap;
	ManagedSharedComponentFnPtrsU5BU5D_tD039C786BA8C49A2E3326A90064A17D24191A368* ___s_SharedComponentFns_gcDefeat;
	UnsafeList_1_tE6695A2BC833DDD6C02176CF9BCF618A0FD0F83E ___s_SharedComponent_FunctionPointers;
	bool ___s_AppDomainUnloadRegistered;
	Dictionary_2_t06375A33B9F7A2A7102B9803C4A0C1147446FAAA* ___s_ManagedTypeToIndex;
	Dictionary_2_t9E4E112587B260E7AA28747357980199765AC14A* ___s_FailedTypeBuildException;
	int32_t ___ObjectOffset;
	Type_t* ___UnityEngineObjectType;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_TypeDelegateIndexRanges;
	List_1_t5624B12539F9DA36FC73AD2D8438FE307EEB7D57* ___s_AssemblyBoxedEqualsFn;
	List_1_t2F8371DA219D5B3DD6EDEDE648C418CB65994C81* ___s_AssemblyBoxedEqualsPtrFn;
	List_1_tEDA21DD6593CBD4193F27415DDD9E347516C7C56* ___s_AssemblyBoxedGetHashCodeFn;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_AspectTypes;
	int32_t ___s_SystemCount;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___s_SystemTypes;
	Dictionary_2_t2194A24A91615F1753E100F1DEFB88A3900FA98D* ___s_ManagedSystemTypeToIndex;
	Dictionary_2_tE6EFE93C6D507ABDB2EFE690536DC09607031F04* ___s_SystemFilterTypeMap;
	UnsafeList_1_tE30241A42A1871A9482D86ACA3E94A4FBF872AFD ___s_SystemTypeNames;
	UnsafeList_1_t48015308AE3031BC0E9D4EF0649AFDCBEFFCDC84 ___s_SystemTypeInfos;
	UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5 ___s_SystemAttributes;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___s_SystemAttributeIndices;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m5D0248B446929C84B8D54562AA6BA5D1A0925770_gshared_inline (TypeConverter_2_t991006B141207200481E6B2187724BBAAD1199A1* __this, uint32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m200D06B6C9F59C214C4E5DB192957C9CD2EE2679_gshared_inline (TypeConverter_2_t2280653F66FAC5B844EA034731D38F8C60826983* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m42BEC72C457515F1789A95DEDFC67A3E975ADBB6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedEquals_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m147C7EDE6CF3D59E6EF77FD54FDA9FD8527F13EC_gshared (FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___0_left, FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_mF5D1B028335124DB5DD370BA19821175E28F364E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedEquals_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m9B627EEC23D7F0B275CF35807B21F06AB5BD5B8F_gshared (RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___0_left, RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m7C789162C825ADC557A30503F60AF978B6946C6C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedEquals_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m0C7B757DB5B1BBCD9430349B16AA8C168362D3D1_gshared (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___0_left, SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m41093201FD7A9933C6A0340809266F6F1825FB6F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedEquals_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_mF4EB15326667067D6A633AF3262083E36DD85FA6_gshared (SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___0_left, SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedEquals_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC188220029B59C2B6D3D8FE042EAED37120DAEB2_gshared (SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* ___0_left, SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedGetHashCode_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m6F9892258C142FEF8CE8C2A7736ACFD38EF770A8_gshared (FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, int32_t* ___2_hash, int32_t* ___3_did_work, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedGetHashCode_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m364D49F15243B319CC9CFE1A687BAB2DEA559759_gshared (RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, int32_t* ___2_hash, int32_t* ___3_did_work, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedGetHashCode_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_mDF82A17F5E2A6A12769F4DF025C7F4E846EC38F1_gshared (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, int32_t* ___2_hash, int32_t* ___3_did_work, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_ManagedGetHashCode_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m8CBA0D74459142C992254470BF125EDC1EA90623_gshared (SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, int32_t* ___2_hash, int32_t* ___3_did_work, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline (TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979* __this, uint32_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*, uint32_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m5D0248B446929C84B8D54562AA6BA5D1A0925770_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline (TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m200D06B6C9F59C214C4E5DB192957C9CD2EE2679_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* TypeManager_ConstructSystem_mA526ED26BED1ABC7FEF9B22D94DD38D3E6A43C11 (Type_t* ___0_systemType, const RuntimeMethod* method) ;
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m42BEC72C457515F1789A95DEDFC67A3E975ADBB6 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m42BEC72C457515F1789A95DEDFC67A3E975ADBB6_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeIndex_get_IsSharedComponentType_m0BEAC575B85D85901BCAA6B5EC0DB830539FDDBC_inline (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* __this, const RuntimeMethod* method) ;
inline void TypeManager_ManagedEquals_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m147C7EDE6CF3D59E6EF77FD54FDA9FD8527F13EC (FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___0_left, FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method)
{
	((  void (*) (FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1*, FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, const RuntimeMethod*))TypeManager_ManagedEquals_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m147C7EDE6CF3D59E6EF77FD54FDA9FD8527F13EC_gshared)(___0_left, ___1_right, ___2_typeIndex, ___3_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2 (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_IsIEquatable_mF757336328F2BED2B3A87FF39E8CC19EAAD5E6A4 (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___0_typeIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_SharedComponentEquals_m35FEF2EED918D315AB1E76DE0101CB3201F7E989 (void* ___0_left, void* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD* TypeManager_GetFastEqualityTypeInfoPointer_m6158E1A6B3A3073E5A4EC716C1922CFF1727F237 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TypeIndex_get_Index_mDAA84AC7421ABB7DA4778440D837632A6551815F_inline (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEquality_Equals_m97178DB533297059649412CADC4F3C4288A44F8B (void* ___0_lhsPtr, void* ___1_rhsPtr, TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD* ___2_typeInfo, const RuntimeMethod* method) ;
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_mF5D1B028335124DB5DD370BA19821175E28F364E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_mF5D1B028335124DB5DD370BA19821175E28F364E_gshared)(method);
}
inline void TypeManager_ManagedEquals_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m9B627EEC23D7F0B275CF35807B21F06AB5BD5B8F (RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___0_left, RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method)
{
	((  void (*) (RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752*, RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, const RuntimeMethod*))TypeManager_ManagedEquals_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m9B627EEC23D7F0B275CF35807B21F06AB5BD5B8F_gshared)(___0_left, ___1_right, ___2_typeIndex, ___3_result, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m7C789162C825ADC557A30503F60AF978B6946C6C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m7C789162C825ADC557A30503F60AF978B6946C6C_gshared)(method);
}
inline void TypeManager_ManagedEquals_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m0C7B757DB5B1BBCD9430349B16AA8C168362D3D1 (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___0_left, SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method)
{
	((  void (*) (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8*, SceneSection_t7E9283B521FC08050547458EF3248964019A36B8*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, const RuntimeMethod*))TypeManager_ManagedEquals_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m0C7B757DB5B1BBCD9430349B16AA8C168362D3D1_gshared)(___0_left, ___1_right, ___2_typeIndex, ___3_result, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m41093201FD7A9933C6A0340809266F6F1825FB6F (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m41093201FD7A9933C6A0340809266F6F1825FB6F_gshared)(method);
}
inline void TypeManager_ManagedEquals_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_mF4EB15326667067D6A633AF3262083E36DD85FA6 (SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___0_left, SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method)
{
	((  void (*) (SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821*, SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, const RuntimeMethod*))TypeManager_ManagedEquals_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_mF4EB15326667067D6A633AF3262083E36DD85FA6_gshared)(___0_left, ___1_right, ___2_typeIndex, ___3_result, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA_gshared)(method);
}
inline void TypeManager_ManagedEquals_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC188220029B59C2B6D3D8FE042EAED37120DAEB2 (SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* ___0_left, SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* ___1_right, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_typeIndex, int32_t* ___3_result, const RuntimeMethod* method)
{
	((  void (*) (SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265*, SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, const RuntimeMethod*))TypeManager_ManagedEquals_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC188220029B59C2B6D3D8FE042EAED37120DAEB2_gshared)(___0_left, ___1_right, ___2_typeIndex, ___3_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetAspectTypeIndex_m87D527DA13151BF80C345BFB1885CB1D8BF18512 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline void TypeManager_ManagedGetHashCode_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m6F9892258C142FEF8CE8C2A7736ACFD38EF770A8 (FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, int32_t* ___2_hash, int32_t* ___3_did_work, const RuntimeMethod* method)
{
	((  void (*) (FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, int32_t*, const RuntimeMethod*))TypeManager_ManagedGetHashCode_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m6F9892258C142FEF8CE8C2A7736ACFD38EF770A8_gshared)(___0_val, ___1_typeIndex, ___2_hash, ___3_did_work, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetHashCode_m9D7B308891A67C2849AB6571E09565D183668E13 (void* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, const RuntimeMethod* method) ;
inline void TypeManager_ManagedGetHashCode_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m364D49F15243B319CC9CFE1A687BAB2DEA559759 (RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, int32_t* ___2_hash, int32_t* ___3_did_work, const RuntimeMethod* method)
{
	((  void (*) (RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, int32_t*, const RuntimeMethod*))TypeManager_ManagedGetHashCode_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m364D49F15243B319CC9CFE1A687BAB2DEA559759_gshared)(___0_val, ___1_typeIndex, ___2_hash, ___3_did_work, method);
}
inline void TypeManager_ManagedGetHashCode_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_mDF82A17F5E2A6A12769F4DF025C7F4E846EC38F1 (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, int32_t* ___2_hash, int32_t* ___3_did_work, const RuntimeMethod* method)
{
	((  void (*) (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, int32_t*, const RuntimeMethod*))TypeManager_ManagedGetHashCode_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_mDF82A17F5E2A6A12769F4DF025C7F4E846EC38F1_gshared)(___0_val, ___1_typeIndex, ___2_hash, ___3_did_work, method);
}
inline void TypeManager_ManagedGetHashCode_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m8CBA0D74459142C992254470BF125EDC1EA90623 (SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___0_val, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___1_typeIndex, int32_t* ___2_hash, int32_t* ___3_did_work, const RuntimeMethod* method)
{
	((  void (*) (SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, int32_t*, const RuntimeMethod*))TypeManager_ManagedGetHashCode_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m8CBA0D74459142C992254470BF125EDC1EA90623_gshared)(___0_val, ___1_typeIndex, ___2_hash, ___3_did_work, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m350247F2696031DBB7432D41DC4D1EC5F248BAF5_gshared (uint32_t ___0_source, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m66D582E694A705917F74B534E7EA6A2A409A2C13_gshared (uint32_t ___0_source, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m166055FE96E3543CAA6E0E3B1820FA289DC73731_gshared (uint32_t ___0_source, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m5D23F03CFC99AD460E5255D5D8A84701EE011CCC_gshared (uint32_t ___0_source, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m75A324C2D508061A50319B24093073A775A6460E_gshared (uint32_t ___0_source, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m1FC7FAD6C6EABA9541D235B1DA6D0D5919925850_gshared (uint32_t ___0_source, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m4966157DD828EB6ABBBAD348E224C75581541AD0_gshared (uint32_t ___0_source, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3F2737FC4BC671C7781933B825901E2A15F74495_gshared (uint32_t ___0_source, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m9ACF02181DB070AB1A0780E98D0505451BDF5E71_gshared (uint32_t ___0_source, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m00079D6C13A71F90007A78611F598C401359D281_gshared (uint32_t ___0_source, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m5BE0938FB42430AE5917AB09E221A62B7E687A95_gshared (uint32_t ___0_source, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m9BC0552D3BEF4221B4FE1F64A91C13AB03C3FC03_gshared (uint32_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m9A909837A32E4D8BEE1217E6A44D834F272A6636_gshared (uint32_t ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m76C832488221E70D06D6D6A70BA60D684405914C_gshared (uint32_t ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m67BFC645F538C1C213F98316635A235C9359255D_gshared (uint32_t ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mF20685724106FE632D5533E1E56A4449D0C9E7BC_gshared (uint32_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m974855F0B539C2AF957FF6A73D6024A09000DB5F_gshared (uint32_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m212C05D54F48215496E06E5F1084882DE7578C84_gshared (uint32_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m01C18C49F90C8124BD7B66D3A801F19A14A9497D_gshared (uint32_t ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m4D321008092A213999808948450309112996E035_gshared (uint32_t ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF1733F548676EA3C0484F9A0BB491424593B1B84_gshared (uint32_t ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0663318627D80CFD20E3A28E996C6CEDC1E8494C_gshared (uint32_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mDBDADAA4D9BBD4836FFF1B5D82C4FF6093401F4E_gshared (uint32_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		uint32_t L_26 = ___0_source;
		uint32_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m8C0CD91DF963DB234648AA626EA484260AE1A72B_inline(((TypeConverter_2_t5453F575619F746A3E0782EAAF9ED656250B9979*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m7B6C85A19B9898B455370199AC7D042480D4A9FF_gshared (uint64_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mFBE89D4DB64090ADBCD840DA38370E71BD45C24E_gshared (uint64_t ___0_source, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m317A3C5E1E662F73A79ECF9A7C027FCDCFDD2AD4_gshared (uint64_t ___0_source, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mD558A039AB25458A49C3066CD8D26EA704AA8CCF_gshared (uint64_t ___0_source, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m40F55C60B1F68AC5BAEC699D11EFD02EFD553E28_gshared (uint64_t ___0_source, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAFACEC069780598CC731A66F12A460166845BB45_gshared (uint64_t ___0_source, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mC09C301870CD8B9A18E1F0ED8B5BA0504934EB83_gshared (uint64_t ___0_source, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m6C3149BA49537B833C01B1CEF022B084E214F9A6_gshared (uint64_t ___0_source, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mC389BFFB9BE96AF77A6881DC39583310FB54C420_gshared (uint64_t ___0_source, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m5D0D204795C23381BF8DF70D65C2CC73F17B95E0_gshared (uint64_t ___0_source, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m0CC7B1D755E1C3FE56FE46DBF7E3F6A2649CD234_gshared (uint64_t ___0_source, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1CF08C74D55F9D40234DC5F4FDA1748F132FE2F1_gshared (uint64_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9494D883C26B8948DA1A0BB10BDEF35BE087C7EA_gshared (uint64_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB841E1286293808A1AA6A20783B74FB6782A31A8_gshared (uint64_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m2F31A63EF3AFB58ED8B592A4EC61D3489F693C81_gshared (uint64_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m736EAD7D00DCAD18B2FF05FCA11059889D50DFA7_gshared (uint64_t ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m8BAAFB4C85D6FB31F23C4DBFBFADFDA3A68829C0_gshared (uint64_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0F243562561AC3B5F02B03921EB32B36BCD22C68_gshared (uint64_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mC39E1853A56FB9B2254F6D7AF5550CF4397D2267_gshared (uint64_t ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1F521CDC62704133E09A87F8A45255A95A8837D4_gshared (uint64_t ___0_source, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m48E3DBA8A273A77F5884E67DE6144CE2D7524E70_gshared (uint64_t ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisGuid_t_mF5791C929A98719FE6F0C00CA0116791A816DE71_gshared (uint64_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB7159D833381D11BA49884D6C76BF8BBDCE5D33E_gshared (uint64_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC096C5F4EE88A903FFD9D23BD879632E2C3EB6EB_gshared (uint64_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA42A0A4EAE0612DE2AD34B91545B518E0FF1E971_gshared (uint64_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB2177EF16C80AA9168BA6E8EB0614AA265756E7F_gshared (uint64_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m5A67B4239BAAE99B471776605C12951800EF3C29_gshared (uint64_t ___0_source, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_m3634D410AF7E4EC02F8B9155365A9B3A69A97603_gshared (uint64_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m0CE0DF278D7512170BFBCB31C72F6CA9570E9AC3_gshared (uint64_t ___0_source, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m50ECF2909735CA6DF44D702AD3B65B3EC8A73E00_gshared (uint64_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mD3B3116E11D26C4C2C7A2EE71167D3A902B1E00A_gshared (uint64_t ___0_source, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mDFC204FC2023C5C7C30131F98CFC269A74894107_gshared (uint64_t ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m4479A4385F9577FAA2E5B9469604CD1E41AA2FB1_gshared (uint64_t ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m0A1668BA70CC2578927EB2FECFA63541AB508060_gshared (uint64_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m65E1A76751B69DD9F7DE67A81F372D0DB6BCD03D_gshared (uint64_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m722ED4E43EE854A692740A4E9B2899209468C677_gshared (uint64_t ___0_source, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m6D2E3901FAB757A068BEA2791A1B130C1CF2E849_gshared (uint64_t ___0_source, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m32D1CFABBD64483B3FEF8F569D3F239933A95ED3_gshared (uint64_t ___0_source, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mC566723619CF3DE3A2FEAECCC81586382EE6F7B0_gshared (uint64_t ___0_source, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mC9045808D7EAA6D74097884F6899162C510781C6_gshared (uint64_t ___0_source, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mFDAA3B79309E1045C2E8E344DBDAAECB7393656C_gshared (uint64_t ___0_source, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC646A75A0B4E9FA03EE536E0013C1BD2661EBCA5_gshared (uint64_t ___0_source, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m787235AA0EEEA1A8EE152C077CD4531573288A56_gshared (uint64_t ___0_source, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m6182D4528E239D3C648AB4D6CDD5B9DC4D691D52_gshared (uint64_t ___0_source, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mD1DFA37D75C3E7190483F9039BB934A9B2AF2C44_gshared (uint64_t ___0_source, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m534376297D75E9C1B62C89030CC264FF7FA0E93D_gshared (uint64_t ___0_source, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m51264A3B22D22C76849C5474361AA96B634A9CCD_gshared (uint64_t ___0_source, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mC04D249AC0903A5EBEDA0271396BD08B43FBAB76_gshared (uint64_t ___0_source, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m145A4D808B7287F939A0F5C4E8F58E5D4ADBD824_gshared (uint64_t ___0_source, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mF72604624F1341703AFADA60D1B9E857E6A20CB3_gshared (uint64_t ___0_source, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m832C0C07F2A1E07B3AE6B7E7B6329A11886C4CC5_gshared (uint64_t ___0_source, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m8DEC4D978C2B0E1C36D07B96FFAD0B3DAEFB0152_gshared (uint64_t ___0_source, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mE47251282867290D42FC9A2FE5ED188AD01AD60F_gshared (uint64_t ___0_source, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m7DBD07D1E315A06AAA6079A8BC2A1AF81FC5A92F_gshared (uint64_t ___0_source, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m3808C24CFA329F23393972E9F022B977C39D64D7_gshared (uint64_t ___0_source, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m4DFA02E9579F8F0475CB495E77FC5AA104C46F65_gshared (uint64_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m144F0C88B36904317BCB7E3A8D91483B650C53E4_gshared (uint64_t ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE895AF17CD54CCAD89248C3358DA82ACECCB5818_gshared (uint64_t ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3342E307CACD93B3B833751DFABEA4271F1C10EC_gshared (uint64_t ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5BD068E7FE6CFE6B279951284ABD3545BFDED1AB_gshared (uint64_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB8785517D8369F3C17823F9CE221FCE37B986936_gshared (uint64_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D9AA67EAB92468AEEC2D9276CE3397DB3CAA95D_gshared (uint64_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA_gshared (uint64_t ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8_gshared (uint64_t ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2_gshared (uint64_t ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB_gshared (uint64_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977_gshared (uint64_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
		uint64_t L_12 = ___0_source;
		uint64_t L_13 = L_12;
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
		uint64_t L_16 = ___0_source;
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
		uint64_t L_26 = ___0_source;
		uint64_t L_27 = L_26;
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
		NullCheck(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_m5507A4709BA7979E85F9935BD675B3092C5E4F3A_inline(((TypeConverter_2_t3547D1FEF7A1FCE65F5471EC3CB218E12E1EE819*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA_gshared (Il2CppFullySharedGenericAny ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
	const Il2CppFullySharedGenericAny L_15 = L_12;
	const Il2CppFullySharedGenericAny L_27 = L_12;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
	const Il2CppFullySharedGenericAny L_41 = L_29;
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
		Il2CppFullySharedGenericAny* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
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
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_12);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00b5;
		}
	}
	{
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		bool L_16 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_15);
		bool L_17 = L_16;
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_007f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_19 = ___1_destination;
		il2cpp_codegen_initobj(L_19, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_26 = ___1_destination;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_27);
		void* L_30 = UnBox_Any(L_28, il2cpp_rgctx_data(method->rgctx_data, 2), L_29);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_26, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30)), SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_26, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30)));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_32, L_34, (&V_0), NULL);
		V_6 = L_35;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_37 = V_0;
		NullCheck(((TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F*)Castclass((RuntimeObject*)L_37, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38;
		L_38 = InvokerFuncInvoker1< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), ((TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F*)Castclass((RuntimeObject*)L_37, il2cpp_rgctx_data(method->rgctx_data, 5))), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___0_source : &___0_source));
		V_7 = L_38;
		Il2CppFullySharedGenericAny* L_39 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_40 = V_7;
		void* L_42 = UnBox_Any((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 2), L_41);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_39, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_42)), SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_39, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_42)));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_43 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_43, NULL);
		V_2 = L_44;
		goto IL_010d;
	}

IL_0102:
	{
		Il2CppFullySharedGenericAny* L_45 = ___1_destination;
		il2cpp_codegen_initobj(L_45, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_46 = V_2;
		return L_46;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeHash_FNV1A64_TisIl2CppFullySharedGenericStruct_m32D0B90C96B6BBDD1CEDEA6466EC79742F4BC282_gshared (Il2CppFullySharedGenericStruct ___0_text, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		V_0 = (uint64_t)((int64_t)-3750763034362895579LL);
		V_1 = 0;
		goto IL_0049;
	}

IL_000e:
	{
		int32_t L_0 = V_1;
		uint8_t L_2;
		L_2 = ConstrainedFuncInvoker1< uint8_t, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), L_1, (void*)(Il2CppFullySharedGenericStruct*)___0_text, L_0);
		V_2 = L_2;
		uint64_t L_3 = V_0;
		uint8_t L_4 = V_2;
		V_0 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)1099511628211LL), ((int64_t)((int64_t)L_3^((int64_t)(uint64_t)((uint32_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_4&((int32_t)255))))))))));
		uint64_t L_5 = V_0;
		uint8_t L_6 = V_2;
		V_0 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)1099511628211LL), ((int64_t)((int64_t)L_5^((int64_t)(uint64_t)((uint32_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_6>>8)))))))));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0049:
	{
		int32_t L_8 = V_1;
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), L_9, (void*)(Il2CppFullySharedGenericStruct*)___0_text);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeHelpers_As_TisIl2CppFullySharedGenericAny_m77D430CC8981CE610392DE44CBC6D1D2A23D9641_gshared (RuntimeObject* ___0_obj, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	memset(V_0, 0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		return;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeManager_BurstException_TisIl2CppFullySharedGenericAny_m985BA931E0200DE69066520856E5B236ECF4489E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E1DBF06FDEFB610F2E97D0A114BB19F843B9088)), (RuntimeObject*)L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD8A22A728B512514BF0150783017A09FD6FA67B)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeManager_ConstructSystem_TisRuntimeObject_mD5D77365F66B6E53CF84FAB1AD2E744C32E26918_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* L_2;
		L_2 = TypeManager_ConstructSystem_mA526ED26BED1ABC7FEF9B22D94DD38D3E6A43C11(L_1, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeManager_ConstructSystem_TisRuntimeObject_m8EF6F3F2F95DC3513D5CEB1B4280E58CF3027081_gshared (Type_t* ___0_systemType, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Type_t* L_0 = ___0_systemType;
		ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625* L_1;
		L_1 = TypeManager_ConstructSystem_mA526ED26BED1ABC7FEF9B22D94DD38D3E6A43C11(L_0, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_Equals_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_mBD959E3FA8551233376F71F5A846EC0BB8C63534_gshared (FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___0_left, FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___1_right, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m42BEC72C457515F1789A95DEDFC67A3E975ADBB6(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsSharedComponentType_m0BEAC575B85D85901BCAA6B5EC0DB830539FDDBC_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		bool L_2;
		L_2 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (-1);
		FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* L_3 = ___0_left;
		FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* L_4 = ___1_right;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5 = V_0;
		TypeManager_ManagedEquals_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m147C7EDE6CF3D59E6EF77FD54FDA9FD8527F13EC(L_3, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A6F54ADBF6D522FB0EA4589332AC41FAA68F1F6)), (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
	}

IL_004e:
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		bool L_14;
		L_14 = TypeManager_IsIEquatable_mF757336328F2BED2B3A87FF39E8CC19EAAD5E6A4(L_13, NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* L_15 = ___0_left;
		void* L_16;
		L_16 = il2cpp_codegen_unsafe_cast(L_15);
		FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* L_17 = ___1_right;
		void* L_18;
		L_18 = il2cpp_codegen_unsafe_cast(L_17);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_19 = V_0;
		bool L_20;
		L_20 = TypeManager_SharedComponentEquals_m35FEF2EED918D315AB1E76DE0101CB3201F7E989(L_16, L_18, L_19, NULL);
		return L_20;
	}

IL_0069:
	{
		FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* L_21 = ___0_left;
		void* L_22;
		L_22 = il2cpp_codegen_unsafe_cast(L_21);
		FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* L_23 = ___1_right;
		void* L_24;
		L_24 = il2cpp_codegen_unsafe_cast(L_23);
		TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD* L_25;
		L_25 = TypeManager_GetFastEqualityTypeInfoPointer_m6158E1A6B3A3073E5A4EC716C1922CFF1727F237(NULL);
		int32_t L_26;
		L_26 = TypeIndex_get_Index_mDAA84AC7421ABB7DA4778440D837632A6551815F_inline((&V_0), NULL);
		uint32_t L_27 = sizeof(TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD);
		il2cpp_codegen_runtime_class_init_inline(FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = FastEquality_Equals_m97178DB533297059649412CADC4F3C4288A44F8B(L_22, L_24, (TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)((TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27)))), NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_Equals_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m57C4775504F287EF405289C173632D06E59D8DD0_gshared (RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___0_left, RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___1_right, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_mF5D1B028335124DB5DD370BA19821175E28F364E(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsSharedComponentType_m0BEAC575B85D85901BCAA6B5EC0DB830539FDDBC_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		bool L_2;
		L_2 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (-1);
		RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* L_3 = ___0_left;
		RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* L_4 = ___1_right;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5 = V_0;
		TypeManager_ManagedEquals_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m9B627EEC23D7F0B275CF35807B21F06AB5BD5B8F(L_3, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A6F54ADBF6D522FB0EA4589332AC41FAA68F1F6)), (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
	}

IL_004e:
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		bool L_14;
		L_14 = TypeManager_IsIEquatable_mF757336328F2BED2B3A87FF39E8CC19EAAD5E6A4(L_13, NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* L_15 = ___0_left;
		void* L_16;
		L_16 = il2cpp_codegen_unsafe_cast(L_15);
		RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* L_17 = ___1_right;
		void* L_18;
		L_18 = il2cpp_codegen_unsafe_cast(L_17);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_19 = V_0;
		bool L_20;
		L_20 = TypeManager_SharedComponentEquals_m35FEF2EED918D315AB1E76DE0101CB3201F7E989(L_16, L_18, L_19, NULL);
		return L_20;
	}

IL_0069:
	{
		RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* L_21 = ___0_left;
		void* L_22;
		L_22 = il2cpp_codegen_unsafe_cast(L_21);
		RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* L_23 = ___1_right;
		void* L_24;
		L_24 = il2cpp_codegen_unsafe_cast(L_23);
		TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD* L_25;
		L_25 = TypeManager_GetFastEqualityTypeInfoPointer_m6158E1A6B3A3073E5A4EC716C1922CFF1727F237(NULL);
		int32_t L_26;
		L_26 = TypeIndex_get_Index_mDAA84AC7421ABB7DA4778440D837632A6551815F_inline((&V_0), NULL);
		uint32_t L_27 = sizeof(TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD);
		il2cpp_codegen_runtime_class_init_inline(FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = FastEquality_Equals_m97178DB533297059649412CADC4F3C4288A44F8B(L_22, L_24, (TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)((TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27)))), NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_Equals_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_mF03A33056679A8B6EF2A56977769AF5C7DAAC0C3_gshared (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___0_left, SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___1_right, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m7C789162C825ADC557A30503F60AF978B6946C6C(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsSharedComponentType_m0BEAC575B85D85901BCAA6B5EC0DB830539FDDBC_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		bool L_2;
		L_2 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (-1);
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_3 = ___0_left;
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_4 = ___1_right;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5 = V_0;
		TypeManager_ManagedEquals_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m0C7B757DB5B1BBCD9430349B16AA8C168362D3D1(L_3, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A6F54ADBF6D522FB0EA4589332AC41FAA68F1F6)), (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
	}

IL_004e:
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		bool L_14;
		L_14 = TypeManager_IsIEquatable_mF757336328F2BED2B3A87FF39E8CC19EAAD5E6A4(L_13, NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_15 = ___0_left;
		void* L_16;
		L_16 = il2cpp_codegen_unsafe_cast(L_15);
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_17 = ___1_right;
		void* L_18;
		L_18 = il2cpp_codegen_unsafe_cast(L_17);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_19 = V_0;
		bool L_20;
		L_20 = TypeManager_SharedComponentEquals_m35FEF2EED918D315AB1E76DE0101CB3201F7E989(L_16, L_18, L_19, NULL);
		return L_20;
	}

IL_0069:
	{
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_21 = ___0_left;
		void* L_22;
		L_22 = il2cpp_codegen_unsafe_cast(L_21);
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_23 = ___1_right;
		void* L_24;
		L_24 = il2cpp_codegen_unsafe_cast(L_23);
		TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD* L_25;
		L_25 = TypeManager_GetFastEqualityTypeInfoPointer_m6158E1A6B3A3073E5A4EC716C1922CFF1727F237(NULL);
		int32_t L_26;
		L_26 = TypeIndex_get_Index_mDAA84AC7421ABB7DA4778440D837632A6551815F_inline((&V_0), NULL);
		uint32_t L_27 = sizeof(TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD);
		il2cpp_codegen_runtime_class_init_inline(FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = FastEquality_Equals_m97178DB533297059649412CADC4F3C4288A44F8B(L_22, L_24, (TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)((TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27)))), NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_Equals_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m8B45FA21C740692A60FBD7734F094025DA1930CF_gshared (SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___0_left, SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___1_right, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m41093201FD7A9933C6A0340809266F6F1825FB6F(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsSharedComponentType_m0BEAC575B85D85901BCAA6B5EC0DB830539FDDBC_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		bool L_2;
		L_2 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (-1);
		SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* L_3 = ___0_left;
		SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* L_4 = ___1_right;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5 = V_0;
		TypeManager_ManagedEquals_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_mF4EB15326667067D6A633AF3262083E36DD85FA6(L_3, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A6F54ADBF6D522FB0EA4589332AC41FAA68F1F6)), (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
	}

IL_004e:
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		bool L_14;
		L_14 = TypeManager_IsIEquatable_mF757336328F2BED2B3A87FF39E8CC19EAAD5E6A4(L_13, NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* L_15 = ___0_left;
		void* L_16;
		L_16 = il2cpp_codegen_unsafe_cast(L_15);
		SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* L_17 = ___1_right;
		void* L_18;
		L_18 = il2cpp_codegen_unsafe_cast(L_17);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_19 = V_0;
		bool L_20;
		L_20 = TypeManager_SharedComponentEquals_m35FEF2EED918D315AB1E76DE0101CB3201F7E989(L_16, L_18, L_19, NULL);
		return L_20;
	}

IL_0069:
	{
		SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* L_21 = ___0_left;
		void* L_22;
		L_22 = il2cpp_codegen_unsafe_cast(L_21);
		SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* L_23 = ___1_right;
		void* L_24;
		L_24 = il2cpp_codegen_unsafe_cast(L_23);
		TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD* L_25;
		L_25 = TypeManager_GetFastEqualityTypeInfoPointer_m6158E1A6B3A3073E5A4EC716C1922CFF1727F237(NULL);
		int32_t L_26;
		L_26 = TypeIndex_get_Index_mDAA84AC7421ABB7DA4778440D837632A6551815F_inline((&V_0), NULL);
		uint32_t L_27 = sizeof(TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD);
		il2cpp_codegen_runtime_class_init_inline(FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = FastEquality_Equals_m97178DB533297059649412CADC4F3C4288A44F8B(L_22, L_24, (TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)((TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27)))), NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_Equals_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mCCF20C49BF571E2BAD14775BCDCDC7C53B06DA6E_gshared (SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* ___0_left, SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* ___1_right, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsSharedComponentType_m0BEAC575B85D85901BCAA6B5EC0DB830539FDDBC_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		bool L_2;
		L_2 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (-1);
		SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* L_3 = ___0_left;
		SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* L_4 = ___1_right;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5 = V_0;
		TypeManager_ManagedEquals_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC188220029B59C2B6D3D8FE042EAED37120DAEB2(L_3, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A6F54ADBF6D522FB0EA4589332AC41FAA68F1F6)), (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
	}

IL_004e:
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		bool L_14;
		L_14 = TypeManager_IsIEquatable_mF757336328F2BED2B3A87FF39E8CC19EAAD5E6A4(L_13, NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* L_15 = ___0_left;
		void* L_16;
		L_16 = il2cpp_codegen_unsafe_cast(L_15);
		SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* L_17 = ___1_right;
		void* L_18;
		L_18 = il2cpp_codegen_unsafe_cast(L_17);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_19 = V_0;
		bool L_20;
		L_20 = TypeManager_SharedComponentEquals_m35FEF2EED918D315AB1E76DE0101CB3201F7E989(L_16, L_18, L_19, NULL);
		return L_20;
	}

IL_0069:
	{
		SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* L_21 = ___0_left;
		void* L_22;
		L_22 = il2cpp_codegen_unsafe_cast(L_21);
		SceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265* L_23 = ___1_right;
		void* L_24;
		L_24 = il2cpp_codegen_unsafe_cast(L_23);
		TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD* L_25;
		L_25 = TypeManager_GetFastEqualityTypeInfoPointer_m6158E1A6B3A3073E5A4EC716C1922CFF1727F237(NULL);
		int32_t L_26;
		L_26 = TypeIndex_get_Index_mDAA84AC7421ABB7DA4778440D837632A6551815F_inline((&V_0), NULL);
		uint32_t L_27 = sizeof(TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD);
		il2cpp_codegen_runtime_class_init_inline(FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = FastEquality_Equals_m97178DB533297059649412CADC4F3C4288A44F8B(L_22, L_24, (TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)((TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27)))), NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_Equals_TisIl2CppFullySharedGenericStruct_m45B32E1F547DD05B94E67EBEBFF41B9C7DCF6C27_gshared (Il2CppFullySharedGenericStruct* ___0_left, Il2CppFullySharedGenericStruct* ___1_right, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsSharedComponentType_m0BEAC575B85D85901BCAA6B5EC0DB830539FDDBC_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		bool L_2;
		L_2 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (-1);
		Il2CppFullySharedGenericStruct* L_3 = ___0_left;
		Il2CppFullySharedGenericStruct* L_4 = ___1_right;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5 = V_0;
		((  void (*) (Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A6F54ADBF6D522FB0EA4589332AC41FAA68F1F6)), (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
	}

IL_004e:
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		bool L_14;
		L_14 = TypeManager_IsIEquatable_mF757336328F2BED2B3A87FF39E8CC19EAAD5E6A4(L_13, NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_15 = ___0_left;
		void* L_16;
		L_16 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		Il2CppFullySharedGenericStruct* L_17 = ___1_right;
		void* L_18;
		L_18 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_19 = V_0;
		bool L_20;
		L_20 = TypeManager_SharedComponentEquals_m35FEF2EED918D315AB1E76DE0101CB3201F7E989(L_16, L_18, L_19, NULL);
		return L_20;
	}

IL_0069:
	{
		Il2CppFullySharedGenericStruct* L_21 = ___0_left;
		void* L_22;
		L_22 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		Il2CppFullySharedGenericStruct* L_23 = ___1_right;
		void* L_24;
		L_24 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD* L_25;
		L_25 = TypeManager_GetFastEqualityTypeInfoPointer_m6158E1A6B3A3073E5A4EC716C1922CFF1727F237(NULL);
		int32_t L_26;
		L_26 = TypeIndex_get_Index_mDAA84AC7421ABB7DA4778440D837632A6551815F_inline((&V_0), NULL);
		uint32_t L_27 = sizeof(TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD);
		il2cpp_codegen_runtime_class_init_inline(FastEquality_t7DBB8630700B4F949CF78DF9DC771DE9019E83E2_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = FastEquality_Equals_m97178DB533297059649412CADC4F3C4288A44F8B(L_22, L_24, (TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)((TypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27)))), NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetAspectTypeIndex_TisIl2CppFullySharedGenericStruct_mFCCEBD392A31F5787C40C2DB146319F54ECD0688_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2;
		L_2 = TypeManager_GetAspectTypeIndex_m87D527DA13151BF80C345BFB1885CB1D8BF18512(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetHashCode_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_mFB6007AF9C57703F10E60FBEF65FB4F855F142D9_gshared (FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m42BEC72C457515F1789A95DEDFC67A3E975ADBB6(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* L_2 = ___0_val;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = V_0;
		TypeManager_ManagedGetHashCode_TisFrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1_m6F9892258C142FEF8CE8C2A7736ACFD38EF770A8(L_2, L_3, (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = V_2;
		bool L_5;
		L_5 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD419BF3882D61CA905FE9382C72D87A95503105)), (RuntimeObject*)L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003f:
	{
		int32_t L_10 = V_1;
		return L_10;
	}

IL_0041:
	{
		FrozenRenderSceneTag_t4D39652C4E772F2B95497A27437F3C2C59DCC7B1* L_11 = ___0_val;
		void* L_12;
		L_12 = il2cpp_codegen_unsafe_cast(L_11);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		int32_t L_14;
		L_14 = TypeManager_GetHashCode_m9D7B308891A67C2849AB6571E09565D183668E13(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetHashCode_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m06669019040164934CF14AC831427FCF6D57EE20_gshared (RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_mF5D1B028335124DB5DD370BA19821175E28F364E(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* L_2 = ___0_val;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = V_0;
		TypeManager_ManagedGetHashCode_TisRenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752_m364D49F15243B319CC9CFE1A687BAB2DEA559759(L_2, L_3, (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = V_2;
		bool L_5;
		L_5 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD419BF3882D61CA905FE9382C72D87A95503105)), (RuntimeObject*)L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003f:
	{
		int32_t L_10 = V_1;
		return L_10;
	}

IL_0041:
	{
		RenderMeshArray_t69AEF6A5A0C7CD98827664989012C6EAB2BEA752* L_11 = ___0_val;
		void* L_12;
		L_12 = il2cpp_codegen_unsafe_cast(L_11);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		int32_t L_14;
		L_14 = TypeManager_GetHashCode_m9D7B308891A67C2849AB6571E09565D183668E13(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetHashCode_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m6AA7A0905EB5CF7A81F0540C018FED4A72AFA4B0_gshared (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m7C789162C825ADC557A30503F60AF978B6946C6C(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_2 = ___0_val;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = V_0;
		TypeManager_ManagedGetHashCode_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_mDF82A17F5E2A6A12769F4DF025C7F4E846EC38F1(L_2, L_3, (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = V_2;
		bool L_5;
		L_5 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD419BF3882D61CA905FE9382C72D87A95503105)), (RuntimeObject*)L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003f:
	{
		int32_t L_10 = V_1;
		return L_10;
	}

IL_0041:
	{
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_11 = ___0_val;
		void* L_12;
		L_12 = il2cpp_codegen_unsafe_cast(L_11);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		int32_t L_14;
		L_14 = TypeManager_GetHashCode_m9D7B308891A67C2849AB6571E09565D183668E13(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeManager_GetHashCode_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_mD2F16679A41789ECAEEE4F0897D6107BF2B3AAC2_gshared (SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_0;
		L_0 = TypeManager_GetTypeIndex_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m41093201FD7A9933C6A0340809266F6F1825FB6F(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		bool L_1;
		L_1 = TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* L_2 = ___0_val;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = V_0;
		TypeManager_ManagedGetHashCode_TisSceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821_m8CBA0D74459142C992254470BF125EDC1EA90623(L_2, L_3, (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = V_2;
		bool L_5;
		L_5 = Hint_Unlikely_m1EF9F222AAE0D7381F834FEB8150C13EBF7F49F2((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD419BF3882D61CA905FE9382C72D87A95503105)), (RuntimeObject*)L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003f:
	{
		int32_t L_10 = V_1;
		return L_10;
	}

IL_0041:
	{
		SceneSectionReferencedUnityObjects_tE195B9B46B9C4BF18A5AA8AA008F57918961C821* L_11 = ___0_val;
		void* L_12;
		L_12 = il2cpp_codegen_unsafe_cast(L_11);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = V_0;
		int32_t L_14;
		L_14 = TypeManager_GetHashCode_m9D7B308891A67C2849AB6571E09565D183668E13(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeIndex_get_IsSharedComponentType_m0BEAC575B85D85901BCAA6B5EC0DB830539FDDBC_inline (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Value;
		return (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)134217728)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeIndex_get_IsManagedType_m8AD2247398DCECAF7B1F123C143C617519021B24_inline (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Value;
		return (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)268435456)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TypeIndex_get_Index_mDAA84AC7421ABB7DA4778440D837632A6551815F_inline (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Value;
		return ((int32_t)(L_0&((int32_t)8191)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m5D0248B446929C84B8D54562AA6BA5D1A0925770_gshared_inline (TypeConverter_2_t991006B141207200481E6B2187724BBAAD1199A1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m200D06B6C9F59C214C4E5DB192957C9CD2EE2679_gshared_inline (TypeConverter_2_t2280653F66FAC5B844EA034731D38F8C60826983* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
