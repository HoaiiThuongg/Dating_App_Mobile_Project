#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582;
struct ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB;
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C;
struct BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2;
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0;
struct BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD;
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct String_t;
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA;
struct GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE;
struct GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E;
struct GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B;
struct GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452;
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34;
struct ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C;
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA;
struct ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81;
struct ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07;

IL2CPP_EXTERN_C RuntimeClass* BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 
{
	int32_t ___TypeIndex;
};
struct BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 
{
	uint32_t ___renderingLayerMask;
	int32_t ___rendererPriority;
	uint64_t ___m_sceneCullingMask;
	uint8_t ___layer;
	uint8_t ___m_batchLayer;
	uint8_t ___m_motionMode;
	uint8_t ___m_shadowMode;
	uint8_t ___m_receiveShadows;
	uint8_t ___m_staticShadowCaster;
	uint8_t ___m_allDepthSorted;
	uint8_t ___m_isSceneCullingMaskSet;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* ___Header;
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
struct ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A 
{
	int32_t ___Value;
};
struct ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB 
{
	int32_t ___Id;
	int32_t ___Version;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___Archetype;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 
{
	uint64_t ___a;
	uint64_t ___b;
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
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
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
					uint8_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_OffsetPadding[1];
					uint8_t ___byte0001;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_OffsetPadding[2];
					uint8_t ___byte0002;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_OffsetPadding[3];
					uint8_t ___byte0003;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_OffsetPadding[4];
					uint8_t ___byte0004;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_OffsetPadding[5];
					uint8_t ___byte0005;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_OffsetPadding[6];
					uint8_t ___byte0006;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_OffsetPadding[7];
					uint8_t ___byte0007;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint8_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_OffsetPadding[9];
					uint8_t ___byte0009;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_OffsetPadding[10];
					uint8_t ___byte0010;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_OffsetPadding[11];
					uint8_t ___byte0011;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_OffsetPadding[12];
					uint8_t ___byte0012;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_OffsetPadding[13];
					uint8_t ___byte0013;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_OffsetPadding[14];
					uint8_t ___byte0014;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_OffsetPadding[15];
					uint8_t ___byte0015;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)
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
struct MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 
{
	int32_t ___TypeIndex;
	int32_t ___NameID;
	int16_t ___SizeBytesCPU;
	int16_t ___SizeBytesGPU;
};
struct MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 
{
	int32_t ___BatchIndex;
	int32_t ___MeshVertexIndex;
	int32_t ___BlendShapeIndex;
	int32_t ___SkinMatrixIndex;
	int32_t ___InstanceCount;
};
struct NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 
{
	int32_t ___Id;
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
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
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
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA 
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	bool ___IsActive;
};
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_marshaled_pinvoke
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	int32_t ___IsActive;
};
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_marshaled_com
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	int32_t ___IsActive;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA 
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	bool ___Value;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_marshaled_pinvoke
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___Value;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_marshaled_com
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___Value;
};
struct ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D 
{
	int32_t ___ElementIndex;
	int32_t ___NodeIndex;
	uint8_t ___LeafSlotIndex;
};
struct Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E 
{
	union
	{
		struct
		{
			int16_t ___FaceIndex;
			uint8_t ___EdgeIndex;
		};
		uint8_t Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E__padding[4];
	};
};
struct ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 
{
	int32_t ___Id;
	uint64_t ___Target;
};
struct ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 
{
	int32_t ___Offset;
	int32_t ___Size;
};
struct U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA__padding[20];
	};
};
struct BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 
{
	uint8_t* ___Ptr;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeList_1_t86D29969117DEA467914C7222932508E1E794B95 
{
	ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t83B32FAD12CCEAE30B2472D4B1DBE3799C81AF87 
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t8B0C9957E10A013D50E34DBEA8ED1A411DA194A8 
{
	BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t47D64DE9FDF8B0F6EE5FA9CD2B38D0F8EC7DB97C 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 
{
	alignas(IL2CPP_SIZEOF_VOID_P) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 
{
	ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D 
{
	GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B 
{
	GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 
{
	GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 
{
	GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 
{
	ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D 
{
	ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A 
{
	ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 
{
	ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 
{
	ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 
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
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk;
				};
				#pragma pack(pop, tp)
				struct
				{
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding_forAlignmentOnly[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_forAlignmentOnly;
				};
			};
		};
		uint8_t ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5__padding[16];
	};
};
#pragma pack(pop, tp)
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct ComponentBakeReason_t928549C4700B90F22B8FF7F91BDFFC5466CB2A13 
{
	int32_t ___value__;
};
struct ComponentTypeFlags_t7F729DFD48E0293C2B98C5E4F41C3E730F6158B0 
{
	uint8_t ___value__;
};
#pragma pack(push, tp, 1)
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
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
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_OffsetPadding[112];
					uint8_t ___byte0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_OffsetPadding[113];
					uint8_t ___byte0113;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_OffsetPadding[114];
					uint8_t ___byte0114;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_OffsetPadding[115];
					uint8_t ___byte0115;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_OffsetPadding[116];
					uint8_t ___byte0116;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_OffsetPadding[117];
					uint8_t ___byte0117;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_OffsetPadding[118];
					uint8_t ___byte0118;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_OffsetPadding[119];
					uint8_t ___byte0119;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_OffsetPadding[120];
					uint8_t ___byte0120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_OffsetPadding[121];
					uint8_t ___byte0121;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_OffsetPadding[122];
					uint8_t ___byte0122;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_OffsetPadding[123];
					uint8_t ___byte0123;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_OffsetPadding[124];
					uint8_t ___byte0124;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_OffsetPadding[125];
					uint8_t ___byte0125;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
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
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_OffsetPadding[16];
					uint8_t ___byte0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_OffsetPadding[17];
					uint8_t ___byte0017;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_OffsetPadding[18];
					uint8_t ___byte0018;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_OffsetPadding[19];
					uint8_t ___byte0019;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_OffsetPadding[20];
					uint8_t ___byte0020;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_OffsetPadding[21];
					uint8_t ___byte0021;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_OffsetPadding[22];
					uint8_t ___byte0022;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_OffsetPadding[23];
					uint8_t ___byte0023;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_OffsetPadding[24];
					uint8_t ___byte0024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_OffsetPadding[25];
					uint8_t ___byte0025;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_OffsetPadding[26];
					uint8_t ___byte0026;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_OffsetPadding[27];
					uint8_t ___byte0027;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_OffsetPadding[28];
					uint8_t ___byte0028;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_OffsetPadding[29];
					uint8_t ___byte0029;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 
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
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_OffsetPadding[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_OffsetPadding[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_OffsetPadding[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_OffsetPadding[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_OffsetPadding[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_OffsetPadding[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_OffsetPadding[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_OffsetPadding[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_OffsetPadding[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_OffsetPadding[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_OffsetPadding[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_OffsetPadding[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_OffsetPadding[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_OffsetPadding[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_OffsetPadding[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_OffsetPadding[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_OffsetPadding[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_OffsetPadding[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_OffsetPadding[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_OffsetPadding[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_OffsetPadding[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_OffsetPadding[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_OffsetPadding[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_OffsetPadding[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0496_OffsetPadding[496];
					uint8_t ___byte0496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0496_OffsetPadding_forAlignmentOnly[496];
					uint8_t ___byte0496_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0497_OffsetPadding[497];
					uint8_t ___byte0497;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0497_OffsetPadding_forAlignmentOnly[497];
					uint8_t ___byte0497_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0498_OffsetPadding[498];
					uint8_t ___byte0498;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0498_OffsetPadding_forAlignmentOnly[498];
					uint8_t ___byte0498_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0499_OffsetPadding[499];
					uint8_t ___byte0499;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0499_OffsetPadding_forAlignmentOnly[499];
					uint8_t ___byte0499_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0500_OffsetPadding[500];
					uint8_t ___byte0500;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0500_OffsetPadding_forAlignmentOnly[500];
					uint8_t ___byte0500_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0501_OffsetPadding[501];
					uint8_t ___byte0501;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0501_OffsetPadding_forAlignmentOnly[501];
					uint8_t ___byte0501_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0502_OffsetPadding[502];
					uint8_t ___byte0502;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0502_OffsetPadding_forAlignmentOnly[502];
					uint8_t ___byte0502_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0503_OffsetPadding[503];
					uint8_t ___byte0503;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0503_OffsetPadding_forAlignmentOnly[503];
					uint8_t ___byte0503_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0504_OffsetPadding[504];
					uint8_t ___byte0504;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0504_OffsetPadding_forAlignmentOnly[504];
					uint8_t ___byte0504_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0505_OffsetPadding[505];
					uint8_t ___byte0505;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0505_OffsetPadding_forAlignmentOnly[505];
					uint8_t ___byte0505_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0506_OffsetPadding[506];
					uint8_t ___byte0506;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0506_OffsetPadding_forAlignmentOnly[506];
					uint8_t ___byte0506_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0507_OffsetPadding[507];
					uint8_t ___byte0507;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0507_OffsetPadding_forAlignmentOnly[507];
					uint8_t ___byte0507_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0508_OffsetPadding[508];
					uint8_t ___byte0508;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0508_OffsetPadding_forAlignmentOnly[508];
					uint8_t ___byte0508_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0509_OffsetPadding[509];
					uint8_t ___byte0509;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0509_OffsetPadding_forAlignmentOnly[509];
					uint8_t ___byte0509_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973__padding[510];
	};
};
#pragma pack(pop, tp)
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___m_ConnectionId;
};
struct TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D 
{
	U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA ___Counts;
	int32_t ___IsUsed;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct GameObjectPropertyType_tDBF161282A88A1494259FE0903DB65237D3AE16F 
{
	int32_t ___value__;
};
struct GetComponentDependencyType_t1000D0A361161E38EEB75B12F8DAC9AAA32706D8 
{
	int32_t ___value__;
};
struct GetHierarchyDependencyType_tAA3BBD9CFC825D456573BA94032F0A1945E76670 
{
	int32_t ___value__;
};
struct GetHierarchySingleDependencyType_t36D29B9E26AAF766FE0C19703CF77172B9A2FDD4 
{
	int32_t ___value__;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 
{
	int32_t ___InstanceID;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	bool ___exists;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_marshaled_pinvoke
{
	int32_t ___InstanceID;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___exists;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_marshaled_com
{
	int32_t ___InstanceID;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___exists;
};
struct DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___IndexInBakerArray;
};
struct EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___componentTypeIndex;
};
struct AccessMode_t08155A76104B91A50C66C3D69AB1F04FF5D91B5D 
{
	int32_t ___value__;
};
struct EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___TargetEntity;
};
struct ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C 
{
	int32_t ___Id;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___TargetEntity;
};
struct LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 
{
	int32_t ___RefCount;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SceneEntity;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrefabRoot;
};
struct NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 
{
	HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 ___m_Data;
};
struct BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 
{
	int32_t ___Version;
	UnsafeList_1_t83B32FAD12CCEAE30B2472D4B1DBE3799C81AF87 ___UniqueMaterials;
	UnsafeList_1_t47D64DE9FDF8B0F6EE5FA9CD2B38D0F8EC7DB97C ___UniqueMeshes;
	UnsafeList_1_t8B0C9957E10A013D50E34DBEA8ED1A411DA194A8 ___MaterialMeshSubMeshes;
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Hash128;
};
struct BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D ___PrimaryEntityFlags;
	UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 ___ReferencedEntityUsages;
};
struct ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D 
{
	int32_t ___AuthoringComponentId;
	int32_t ___BakeReason;
	int32_t ___ReasonId;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ReasonGuid;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___BakingUnityTypeIndex;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___AccessModeType;
};
struct ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB 
{
	uint64_t ___StableTypeHash;
	uint8_t ___Flags;
};
struct DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B 
{
	int32_t ___FilterIndex;
	int32_t ___Flags;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___MaterialID;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___MeshID;
	uint16_t ___SplitMask;
	uint16_t ___SubMeshIndex;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___BatchID;
	int32_t ___m_CachedHash;
};
struct FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___bytes;
		};
		uint8_t FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952__padding[128];
	};
};
struct FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 ___bytes;
		};
		uint8_t FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824__padding[32];
	};
};
struct FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 ___bytes;
		};
		uint8_t FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E__padding[512];
	};
};
struct GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B 
{
	UnsafeList_1_t86D29969117DEA467914C7222932508E1E794B95 ___PropertyComponents;
};
struct PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___GUID;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	int32_t ___RefCount;
};
struct RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD 
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___rot;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___pos;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE 
{
	int32_t ___GameObject;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___DependencyType;
	int32_t ___ResultComponent;
};
struct GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E 
{
	int32_t ___GameObject;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___DependencyType;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ComponentHash;
};
struct GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B 
{
	int32_t ___GameObject;
	int32_t ___DependencyType;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
};
struct GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 
{
	int32_t ___GameObject;
	int32_t ___QueryIndex;
	int32_t ___DependencyType;
	int32_t ___Result;
};
struct ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C 
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___PropertyType;
	int32_t ___Value;
};
struct RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___ObjectReference;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___PersistentAsset;
	UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D ___GetComponent;
	UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 ___GetHierarchySingle;
	UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 ___GetHierarchy;
	UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B ___GetComponents;
	UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 ___ObjectExist;
	UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D ___ObjectProperty;
	UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A ___ObjectStatic;
	UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 ___Active;
	int32_t ___LightBaking;
};
struct UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___pipeline;
	int32_t ___stage;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___connection;
};
struct NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652 
{
	NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Keys;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Values;
};
struct NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB 
{
	NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 ___Keys;
	NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE ___Values;
};
struct NativeKeyValueArrays_2_t2E39AD37EC959545BFA20EEEE6F130838BA1C7FB 
{
	NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E ___Keys;
	NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E ___Values;
};
struct NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D 
{
	NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 ___Keys;
	NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 ___Values;
};
struct NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E 
{
	NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 ___Keys;
	NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 ___Values;
};
struct NativeKeyValueArrays_2_tA9D90BDB6A6A5B59E496BEBBDA8082D2A0598A49 
{
	NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 
{
	UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 ___AddedComponents;
	UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 ___Entities;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 ___Dependencies;
	BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A ___Usage;
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct ColliderBlobInstance_t3C4B63E63BE0F24BACF2534F4650E24E4B34F6A4 
{
	RigidTransform_tDC22CD9569EC04E16791C2AB53DA5ABD34E88FDD ___CompoundFromChild;
	BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 ___Collider;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
};
struct EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___Component;
};
struct EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___Id;
};
struct ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	bool ___IsLeaf;
	ColliderBlobInstance_t3C4B63E63BE0F24BACF2534F4650E24E4B34F6A4 ___Child;
};
struct ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_marshaled_pinvoke
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	int32_t ___IsLeaf;
	ColliderBlobInstance_t3C4B63E63BE0F24BACF2534F4650E24E4B34F6A4 ___Child;
};
struct ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_marshaled_com
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	int32_t ___IsLeaf;
	ColliderBlobInstance_t3C4B63E63BE0F24BACF2534F4650E24E4B34F6A4 ___Child;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_StaticFields
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Null;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_HexToLiteral;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___k_LiteralToHex;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_StaticFields
{
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_None;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Buffer;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Exclude;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Readonly;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mF7AC66FA6C9CD9047110D7EEE4276671B7F36AD2_gshared (NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mA05355BE86679503FF7C80E097C6E5CB89FB314A_gshared (NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mAF7A306A0F3E307F36D79A8327C25CDB8A3FE08A_gshared (NativeKeyValueArrays_2_t2E39AD37EC959545BFA20EEEE6F130838BA1C7FB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mA21CC4634690B9925CCCB531D34CE6D67A476869_gshared (NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_mD18881E52D3F3167A6CEFA6F6B624D943B8170B2_gshared (NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m4A745207D9267220A0F145A1E29332EF7D212017_gshared (NativeKeyValueArrays_2_tA9D90BDB6A6A5B59E496BEBBDA8082D2A0598A49* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 UnsafeUtility_ReadArrayElement_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mCA396E94E43F4490DD793AEF7EF272A499B52101_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_mF9C14E2D10BE0D50C01023F8CF535E317AFF7FDD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 UnsafeUtility_ReadArrayElement_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m445703406DA0556AAF9857F6CFFD220931E0D6DF_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 UnsafeUtility_ReadArrayElement_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mD1E4F602BE953DED44C106DA0B6050BD473D84F3_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB UnsafeUtility_ReadArrayElement_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mB2E99510004443BADCB587A77413B3E0DCE17217_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E UnsafeUtility_ReadArrayElement_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m2ADCB1A0DE89B2E013B4BB7D300F81AECACFE8EA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 UnsafeUtility_ReadArrayElement_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_mB7ECEBCB843A7B806336859D7F76DD87639AA863_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 UnsafeUtility_ReadArrayElement_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m91439C6FD025D3C9E929BD43E276597EE7FF824D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D UnsafeUtility_ReadArrayElement_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_m9C968973FC991F9A05B90160D2FA10D03FFD36A5_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2 UnsafeUtility_ReadArrayElement_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m032965AB813EB99CD85953DAE0AF12D25148F7F3_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 UnsafeUtility_ReadArrayElement_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m14BBB3C75525EE04E460C0A3D179C85C5BC7C612_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m3E8894663C243EADCE59BA4016F754D9236EE7CF_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD10EF58B5654387E86EB7F127977066C890B491D_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mF48DAF0DF6D2E6AD598562E8D0EA857AA8300BA0_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m264C78F5B7D5AC8EEB00D9E8D3E3B12A25706D16_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F0A37407A90567E2713127658BBC89EB8C0F6F3_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B53B3D8677F361C29E5739D6448675B83B5300A_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mCBA4B05BA324F08F46C24FAEAF26B6FA71706FDC_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA6DC96DECCCC7D7451C32DA04FA737DF490477F3_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4570F37CAB9613CDD30D99B65D76E0CE35E57F41_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5F660BAD133BF1F84693E5B910539D5D58B003F7_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m961C8B0FFB19BD3E3BB8E3A9C375B4152EEDC346_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m64EB80CD761AC18B7A29DD8B487C9DEAEF018A90_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m27CB63C50BE4E168FFBA8EF981D3543EC08B0681_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m1D73F4780B67C95303715AB9DCD5E61D5E3F55B9_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m2E7A8A544E474B9CF7F6A6583A3BF6C52A15A792_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m66FA9A4F4267615CBD35701D05DA27A6714EC512_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7216D2B86F8A1A9FC404EED7C19EED762C0654D_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m726411A62BC663FBEE118825B88B3D6EC105638B_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m673580A0599E2E75A64EF364D358D4D35F40B8BF_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m59074F74ECD8518179E97A60A2FFCCD1E7C4FE4C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mA6587978CB654E5F829A8E1413F71B7210CE52FB_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 UnsafeUtility_ReadArrayElement_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC7D1A0F4CA7AB74B987C2A810E03D044EFDF497B_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E4E84C6C6FDEC6DE05C41B7221F88CD8DB86B5C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mC5246891AD244CBC99F9C6FD54068EC708B343B3_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m911BBA275FF1BA6D70905678494DBD9130C9C11C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2AF3A7B50DDE078978F1119F9C3F7BDF0FC68481_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m4AE7437A40EFF5354E2C8C1D37ABC8B427854ADE_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m10E071C6662AEF39B36EC2E91DD4503F4CE73D27_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m261D7D01930E2902643EBE7BA7EBFD7CAFB764B1_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m400C0F32C4D33582E27B87004E527531B833F44E_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mBDC87456FE502E5BAC938EA53D890FE39B362DBD_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDEEAA27F96677B738EA23A5DC1C9B67B85A7935_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5A51B6B737BF36BDBDD2EBABF8B84B3819FEAE08_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD789B40EE2934E1CD910AB375F12EFC58E9117A0_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB151D38E73EEDFB7B82F1F6498C9906EB81D402A_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mDFECD4B0B9A27B7D99F6F5DC1B82D38B1E3AB64D_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m9CECFA1873B43565E3089BE531E75865AEAAF20C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mA20D98F5BD8484672F199DDCA5CC79C6D8C31B8F_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m705537632698BC86CA104281913A6D9E5E25E31E_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m67F6E0A534D9848EF2DEC8F2E5859C43D3BDC1B1_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m4026E14DE7C304AB1431CF42B1AC966DD45E7ABE_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m9C8D04883045D565DFD34201AF04867FEA3482DF_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m12C91235B6E75EFB8E3292ED0FEC78C99E106117_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mD5D566D90F389009DD7E4355967607EDB7BB52B1_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m0474C3D242A7100A72EA09C4FA4FBAAFDDD7D075_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m7151E7177D62D8D99E190ED5D6A2F4DAA3FA646D_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_mF7859B227F4883A1C1DA79235CE2963515BD07FF_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m64004F3D97BCFE1AE8B9D277A9BDF1078A1F85A9_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;

inline int32_t NativeKeyValueArrays_2_get_Length_mF7AC66FA6C9CD9047110D7EEE4276671B7F36AD2 (NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mF7AC66FA6C9CD9047110D7EEE4276671B7F36AD2_gshared)(__this, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mA05355BE86679503FF7C80E097C6E5CB89FB314A (NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mA05355BE86679503FF7C80E097C6E5CB89FB314A_gshared)(__this, method);
}
inline EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline)(___0_source, ___1_index, method);
}
inline DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mAF7A306A0F3E307F36D79A8327C25CDB8A3FE08A (NativeKeyValueArrays_2_t2E39AD37EC959545BFA20EEEE6F130838BA1C7FB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t2E39AD37EC959545BFA20EEEE6F130838BA1C7FB*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mAF7A306A0F3E307F36D79A8327C25CDB8A3FE08A_gshared)(__this, method);
}
inline Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mA21CC4634690B9925CCCB531D34CE6D67A476869 (NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mA21CC4634690B9925CCCB531D34CE6D67A476869_gshared)(__this, method);
}
inline EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline)(___0_source, ___1_index, method);
}
inline ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_mD18881E52D3F3167A6CEFA6F6B624D943B8170B2 (NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_mD18881E52D3F3167A6CEFA6F6B624D943B8170B2_gshared)(__this, method);
}
inline ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m4A745207D9267220A0F145A1E29332EF7D212017 (NativeKeyValueArrays_2_tA9D90BDB6A6A5B59E496BEBBDA8082D2A0598A49* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_tA9D90BDB6A6A5B59E496BEBBDA8082D2A0598A49*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m4A745207D9267220A0F145A1E29332EF7D212017_gshared)(__this, method);
}
inline UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_gshared_inline)(___0_source, ___1_index, method);
}
inline BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 UnsafeUtility_ReadArrayElement_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mCA396E94E43F4490DD793AEF7EF272A499B52101_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mCA396E94E43F4490DD793AEF7EF272A499B52101_gshared_inline)(___0_source, ___1_index, method);
}
inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_gshared_inline)(___0_source, ___1_index, method);
}
inline UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_mF9C14E2D10BE0D50C01023F8CF535E317AFF7FDD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_mF9C14E2D10BE0D50C01023F8CF535E317AFF7FDD_gshared_inline)(___0_source, ___1_index, method);
}
inline ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_gshared_inline)(___0_source, ___1_index, method);
}
inline AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_gshared_inline)(___0_source, ___1_index, method);
}
inline BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 UnsafeUtility_ReadArrayElement_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m445703406DA0556AAF9857F6CFFD220931E0D6DF_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m445703406DA0556AAF9857F6CFFD220931E0D6DF_gshared_inline)(___0_source, ___1_index, method);
}
inline BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_gshared_inline)(___0_source, ___1_index, method);
}
inline BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 UnsafeUtility_ReadArrayElement_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mD1E4F602BE953DED44C106DA0B6050BD473D84F3_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mD1E4F602BE953DED44C106DA0B6050BD473D84F3_gshared_inline)(___0_source, ___1_index, method);
}
inline BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_gshared_inline)(___0_source, ___1_index, method);
}
inline BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_gshared_inline)(___0_source, ___1_index, method);
}
inline uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline)(___0_source, ___1_index, method);
}
inline ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_gshared_inline)(___0_source, ___1_index, method);
}
inline ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_gshared_inline)(___0_source, ___1_index, method);
}
inline ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB UnsafeUtility_ReadArrayElement_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mB2E99510004443BADCB587A77413B3E0DCE17217_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mB2E99510004443BADCB587A77413B3E0DCE17217_gshared_inline)(___0_source, ___1_index, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline)(___0_source, ___1_index, method);
}
inline EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline)(___0_source, ___1_index, method);
}
inline FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E UnsafeUtility_ReadArrayElement_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m2ADCB1A0DE89B2E013B4BB7D300F81AECACFE8EA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m2ADCB1A0DE89B2E013B4BB7D300F81AECACFE8EA_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
inline intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_gshared_inline)(___0_source, ___1_index, method);
}
inline MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 UnsafeUtility_ReadArrayElement_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_mB7ECEBCB843A7B806336859D7F76DD87639AA863_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_mB7ECEBCB843A7B806336859D7F76DD87639AA863_gshared_inline)(___0_source, ___1_index, method);
}
inline MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 UnsafeUtility_ReadArrayElement_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m91439C6FD025D3C9E929BD43E276597EE7FF824D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m91439C6FD025D3C9E929BD43E276597EE7FF824D_gshared_inline)(___0_source, ___1_index, method);
}
inline PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_gshared_inline)(___0_source, ___1_index, method);
}
inline TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_gshared_inline)(___0_source, ___1_index, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline)(___0_source, ___1_index, method);
}
inline uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline)(___0_source, ___1_index, method);
}
inline uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline)(___0_source, ___1_index, method);
}
inline ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_gshared_inline)(___0_source, ___1_index, method);
}
inline GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_gshared_inline)(___0_source, ___1_index, method);
}
inline GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_gshared_inline)(___0_source, ___1_index, method);
}
inline GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_gshared_inline)(___0_source, ___1_index, method);
}
inline GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_gshared_inline)(___0_source, ___1_index, method);
}
inline ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_gshared_inline)(___0_source, ___1_index, method);
}
inline ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_gshared_inline)(___0_source, ___1_index, method);
}
inline ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_gshared_inline)(___0_source, ___1_index, method);
}
inline ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D UnsafeUtility_ReadArrayElement_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_m9C968973FC991F9A05B90160D2FA10D03FFD36A5_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_m9C968973FC991F9A05B90160D2FA10D03FFD36A5_gshared_inline)(___0_source, ___1_index, method);
}
inline ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2 UnsafeUtility_ReadArrayElement_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m032965AB813EB99CD85953DAE0AF12D25148F7F3_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m032965AB813EB99CD85953DAE0AF12D25148F7F3_gshared_inline)(___0_source, ___1_index, method);
}
inline EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_gshared_inline)(___0_source, ___1_index, method);
}
inline ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 UnsafeUtility_ReadArrayElement_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m14BBB3C75525EE04E460C0A3D179C85C5BC7C612_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m14BBB3C75525EE04E460C0A3D179C85C5BC7C612_gshared_inline)(___0_source, ___1_index, method);
}
inline LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline (int64_t ___0_x, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m3E8894663C243EADCE59BA4016F754D9236EE7CF (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m3E8894663C243EADCE59BA4016F754D9236EE7CF_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AspectType_GetHashCode_m86EDAB33742A358767EB1E6D5791A16B6DDF7355 (AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* __this, const RuntimeMethod* method) ;
inline void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared)(___0_pointer, ___1_allocator, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD10EF58B5654387E86EB7F127977066C890B491D (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD10EF58B5654387E86EB7F127977066C890B491D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mF48DAF0DF6D2E6AD598562E8D0EA857AA8300BA0 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mF48DAF0DF6D2E6AD598562E8D0EA857AA8300BA0_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobAssetPtr_GetHashCode_mBF1AE2A108DE02B14AE8A026BD389380DED08973 (BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m264C78F5B7D5AC8EEB00D9E8D3E3B12A25706D16 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m264C78F5B7D5AC8EEB00D9E8D3E3B12A25706D16_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F0A37407A90567E2713127658BBC89EB8C0F6F3 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F0A37407A90567E2713127658BBC89EB8C0F6F3_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComponentBakeTrigger_GetHashCode_m5FA5B5B239BA98105D49F6BC9A66977340575534 (ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B53B3D8677F361C29E5739D6448675B83B5300A (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B53B3D8677F361C29E5739D6448675B83B5300A_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComponentTypeHash_GetHashCode_m2BDE47B17E712574DFAEDE8F7A037F5E3C355BE0 (ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mCBA4B05BA324F08F46C24FAEAF26B6FA71706FDC (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mCBA4B05BA324F08F46C24FAEAF26B6FA71706FDC_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionId_GetHashCode_m7CD005F8169BE20415267EA691CCBEAC252DE0F2 (ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA6DC96DECCCC7D7451C32DA04FA737DF490477F3 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA6DC96DECCCC7D7451C32DA04FA737DF490477F3_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DrawCommandSettings_GetHashCode_m8AA387A9B67A74C11ABAD694934DBE1AE6DB3FCF_inline (DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4570F37CAB9613CDD30D99B65D76E0CE35E57F41 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4570F37CAB9613CDD30D99B65D76E0CE35E57F41_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5F660BAD133BF1F84693E5B910539D5D58B003F7 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5F660BAD133BF1F84693E5B910539D5D58B003F7_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m961C8B0FFB19BD3E3BB8E3A9C375B4152EEDC346 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m961C8B0FFB19BD3E3BB8E3A9C375B4152EEDC346_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m64EB80CD761AC18B7A29DD8B487C9DEAEF018A90 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m64EB80CD761AC18B7A29DD8B487C9DEAEF018A90_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m27CB63C50BE4E168FFBA8EF981D3543EC08B0681 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m27CB63C50BE4E168FFBA8EF981D3543EC08B0681_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m1D73F4780B67C95303715AB9DCD5E61D5E3F55B9 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m1D73F4780B67C95303715AB9DCD5E61D5E3F55B9_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m2E7A8A544E474B9CF7F6A6583A3BF6C52A15A792 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m2E7A8A544E474B9CF7F6A6583A3BF6C52A15A792_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m66FA9A4F4267615CBD35701D05DA27A6714EC512 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m66FA9A4F4267615CBD35701D05DA27A6714EC512_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityArchetype_GetHashCode_mBD985D6245CF40F92B1B6E69E7A0D3248DB6F496 (EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7216D2B86F8A1A9FC404EED7C19EED762C0654D (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7216D2B86F8A1A9FC404EED7C19EED762C0654D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4 (EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m726411A62BC663FBEE118825B88B3D6EC105638B (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m726411A62BC663FBEE118825B88B3D6EC105638B_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m673580A0599E2E75A64EF364D358D4D35F40B8BF (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m673580A0599E2E75A64EF364D358D4D35F40B8BF_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A (EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m59074F74ECD8518179E97A60A2FFCCD1E7C4FE4C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m59074F74ECD8518179E97A60A2FFCCD1E7C4FE4C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mA6587978CB654E5F829A8E1413F71B7210CE52FB (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mA6587978CB654E5F829A8E1413F71B7210CE52FB_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 UnsafeUtility_ReadArrayElement_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC7D1A0F4CA7AB74B987C2A810E03D044EFDF497B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC7D1A0F4CA7AB74B987C2A810E03D044EFDF497B_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedString128Bytes_GetHashCode_mB211F7E224953364EE91770921BA59760A0E4428 (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E4E84C6C6FDEC6DE05C41B7221F88CD8DB86B5C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E4E84C6C6FDEC6DE05C41B7221F88CD8DB86B5C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsArchetype_GetHashCode_m458A6FA675099CE505F8DE63C99D2EC18DBD89BB (GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mC5246891AD244CBC99F9C6FD54068EC708B343B3 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mC5246891AD244CBC99F9C6FD54068EC708B343B3_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash128_GetHashCode_m45A3BE3EF733FE381AE45C96F6C53FAEBFE2795B (Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m911BBA275FF1BA6D70905678494DBD9130C9C11C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m911BBA275FF1BA6D70905678494DBD9130C9C11C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2AF3A7B50DDE078978F1119F9C3F7BDF0FC68481 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2AF3A7B50DDE078978F1119F9C3F7BDF0FC68481_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m4AE7437A40EFF5354E2C8C1D37ABC8B427854ADE (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m4AE7437A40EFF5354E2C8C1D37ABC8B427854ADE_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m10E071C6662AEF39B36EC2E91DD4503F4CE73D27 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m10E071C6662AEF39B36EC2E91DD4503F4CE73D27_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m261D7D01930E2902643EBE7BA7EBFD7CAFB764B1 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m261D7D01930E2902643EBE7BA7EBFD7CAFB764B1_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m400C0F32C4D33582E27B87004E527531B833F44E (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m400C0F32C4D33582E27B87004E527531B833F44E_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mBDC87456FE502E5BAC938EA53D890FE39B362DBD (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mBDC87456FE502E5BAC938EA53D890FE39B362DBD_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDEEAA27F96677B738EA23A5DC1C9B67B85A7935 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDEEAA27F96677B738EA23A5DC1C9B67B85A7935_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5A51B6B737BF36BDBDD2EBABF8B84B3819FEAE08 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5A51B6B737BF36BDBDD2EBABF8B84B3819FEAE08_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD789B40EE2934E1CD910AB375F12EFC58E9117A0 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD789B40EE2934E1CD910AB375F12EFC58E9117A0_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB151D38E73EEDFB7B82F1F6498C9906EB81D402A (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB151D38E73EEDFB7B82F1F6498C9906EB81D402A_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mDFECD4B0B9A27B7D99F6F5DC1B82D38B1E3AB64D (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mDFECD4B0B9A27B7D99F6F5DC1B82D38B1E3AB64D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m9CECFA1873B43565E3089BE531E75865AEAAF20C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m9CECFA1873B43565E3089BE531E75865AEAAF20C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mA20D98F5BD8484672F199DDCA5CC79C6D8C31B8F (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mA20D98F5BD8484672F199DDCA5CC79C6D8C31B8F_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m705537632698BC86CA104281913A6D9E5E25E31E (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m705537632698BC86CA104281913A6D9E5E25E31E_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m67F6E0A534D9848EF2DEC8F2E5859C43D3BDC1B1 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m67F6E0A534D9848EF2DEC8F2E5859C43D3BDC1B1_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m4026E14DE7C304AB1431CF42B1AC966DD45E7ABE (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m4026E14DE7C304AB1431CF42B1AC966DD45E7ABE_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m9C8D04883045D565DFD34201AF04867FEA3482DF (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m9C8D04883045D565DFD34201AF04867FEA3482DF_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m12C91235B6E75EFB8E3292ED0FEC78C99E106117 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m12C91235B6E75EFB8E3292ED0FEC78C99E106117_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mD5D566D90F389009DD7E4355967607EDB7BB52B1 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mD5D566D90F389009DD7E4355967607EDB7BB52B1_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m0474C3D242A7100A72EA09C4FA4FBAAFDDD7D075 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m0474C3D242A7100A72EA09C4FA4FBAAFDDD7D075_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m7151E7177D62D8D99E190ED5D6A2F4DAA3FA646D (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m7151E7177D62D8D99E190ED5D6A2F4DAA3FA646D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_mF7859B227F4883A1C1DA79235CE2963515BD07FF (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_mF7859B227F4883A1C1DA79235CE2963515BD07FF_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m64004F3D97BCFE1AE8B9D277A9BDF1078A1F85A9 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m64004F3D97BCFE1AE8B9D277A9BDF1078A1F85A9_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE1D4EE196D8A41C94B0529904B1882DF7B67DAC8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tF0C9DDB602F789F19A16A1FA2EC584D35E067652 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mF7AC66FA6C9CD9047110D7EEE4276671B7F36AD2((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A* L_10 = (NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mE7B20EAFC97698B67540C38AF16BB6595C8B786D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_t144C42ACB2DDADF052103F43EA00E1E62D94C90F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TKey_t144C42ACB2DDADF052103F43EA00E1E62D94C90F);
	const uint32_t SizeOf_TValue_t4FEA332ED977D95FEBFE603FCE1F5250E543CBBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TValue_t4FEA332ED977D95FEBFE603FCE1F5250E543CBBF);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (void*)L_13, L_14, (Il2CppFullySharedGenericStruct*)L_15);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, L_11, L_15);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_16 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, (void*)L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), L_16, L_17, L_21);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m6C2AB1212EE83D0FD28591BF64FB09208F03DF08_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t7235B7A3A1991F703BB3FE6A3013076D0BE551DB ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mA05355BE86679503FF7C80E097C6E5CB89FB314A((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215* L_10 = (NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE* L_16 = (NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_mE512D3025CE4E886C96BA879671B0D967BEC0D1A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t2E39AD37EC959545BFA20EEEE6F130838BA1C7FB ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mAF7A306A0F3E307F36D79A8327C25CDB8A3FE08A((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E* L_10 = (NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E* L_16 = (NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6FC78553D77DCF4BD2C32F626425A5E4E46AA251_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t912256E0B2B816732608B1EF2A523DF7460A144D ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mA21CC4634690B9925CCCB531D34CE6D67A476869((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015* L_10 = (NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290* L_16 = (NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m931EF118679BB3EEADC72CC4DDB8A7EE5DDA29EE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t4D5C2BB96A9CB2EE83E4CABEA140554B5BB0864E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_mD18881E52D3F3167A6CEFA6F6B624D943B8170B2((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015* L_10 = (NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730* L_16 = (NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1332BA571DEA39C153344466C70A60A10325F496_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tA9D90BDB6A6A5B59E496BEBBDA8082D2A0598A49 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m4A745207D9267220A0F145A1E29332EF7D212017((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8* L_10 = (NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8*)(&(&___1_result)->___Keys);
		int32_t L_11 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_6;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		IL2CPP_NATIVEARRAY_SET_ITEM(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2, (L_10)->___m_Buffer, L_11, (L_15));
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_16 = (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*)(&(&___1_result)->___Values);
		int32_t L_17 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_6;
		bool L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 9));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, (L_16)->___m_Buffer, L_17, (L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		V_6 = L_25;
	}

IL_0072:
	{
		int32_t L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mF95680A9F7EE209027142F33359448C9B2924962_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mCA396E94E43F4490DD793AEF7EF272A499B52101_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mDCC44BC821F691C57FFD705ADC443B7E0AE6DD6B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_mA7130113674533398914BDAB5BEEFD514BE94310_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_mF9C14E2D10BE0D50C01023F8CF535E317AFF7FDD_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m370671121DAEDF4AA1942CAAE0A1DF58E954EBEB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mFFC3D26129A2C1E52BCEF3FB6542394B41D7B616_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m0668E7D373394F5F527494B084B4F5460C350E54_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m445703406DA0556AAF9857F6CFFD220931E0D6DF_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m3BF5627E5AA1D3D23C4A1F2A98D279B5CAACB59F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m5FB5CB357D3670ED5FEC6B8AE775CB762CDD1F60_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mD1E4F602BE953DED44C106DA0B6050BD473D84F3_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m4E5D2DC71802EC34903300385F65AE1A755332C8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m89803007681476DBD508BD11A3647BB5DF23D2F0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC207F978B303B5F48108C11804D921E6F240342D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAA6CF1576643C57C073B33CBA5D9EDAF50CA0A2B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		uint8_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint8_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m293B0131D202EAB4E6DA212BD1162D313571D9FF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m6FB1D1264CD2D67CEBDFA73298004CBA98F5A6DD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m834956570BC1506CF67FD2F4F2068BE24047B6C6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mB2E99510004443BADCB587A77413B3E0DCE17217_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mAD4BF717BFAFFF494B6E7DF79A571C6BCEA19CCB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m5F20ED97470003B13D34EDC08E6FF0DF59156479_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mDBDE437C405F193BED2D388250926BE5A75DABEE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m2ADCB1A0DE89B2E013B4BB7D300F81AECACFE8EA_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisIntPtr_t_m79D28DA0A3E136868A37FE725786CE5083B4D851_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		intptr_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(intptr_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_mC8DF0F65F9BE2B7218396D3B53256A74396FDD20_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_mB7ECEBCB843A7B806336859D7F76DD87639AA863_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD726977F6E8B5502D1AED57AAADDDB7D85557BDE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m91439C6FD025D3C9E929BD43E276597EE7FF824D_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mBC7131270A903695080DADE345E9C57145DB65A0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m47FC65DA1EDA13678179D454F041E1282BD048B1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m505B97941503583EDE85385D308833CF2BEC0E8A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m063FE6E754BE799DB5423B6F3505290896F32298_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		uint16_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint16_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAA88F040D002EBF86960F0DBA45E59002B6FB7AE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(uint64_t, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisIl2CppFullySharedGenericStruct_m127A626CD960E02AEBF7B88B7A8F3A9401445A69_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t0232C4E00D4E39FC209358F87310CF1B96E0619E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TValue_t0232C4E00D4E39FC209358F87310CF1B96E0619E);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_result), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_13, L_14, (Il2CppFullySharedGenericStruct*)L_15);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (&___1_result), L_11, L_15);
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m44F1062FFC8AF7534E0AE03CD765040FA23055B0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mAA521C888760072B0228AE23544FCE818F4D9D70_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_mEA6F0D5621BB62D9BAB8F26174D6429B86A5CFEA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m549FCD16FB0B346FAEF1ECA640A05C7BA52A6557_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m9DD0583EFFA9C2509921B4964AFE5513376F0D35_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m5F9E35B9BF5E451CE319116DEEE3A260F5B074E9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mF5257C327E9FB34ABACDE5874A737B9A5C80480E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mDEB58D8EC8B7BCF19DC362E9D3040B11FCADD98A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m8CA1118E89846668C8BE9E112F9E4E20A8455AD1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_m7F5B03651A12881ED661293F915FAF7C22584DEA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_m9C968973FC991F9A05B90160D2FA10D03FFD36A5_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m7C94251A629649B3EE609EBCBA79AB653EBF980E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m032965AB813EB99CD85953DAE0AF12D25148F7F3_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m16964097B3FE4BC6D8226C506D6FE6E845C4CD14_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mAA806B0B565234D880F7681FAF08F9FF4262BD84_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mCAC5737501AA6D1F498C0FBEC6E676524E42E6ED_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m20BE9CE88E63ECBA2DBC4F759408E4AAE89F0EE2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_mC7A8EDE89E178E8AA0E2DD67B7467597DC8026CE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m14BBB3C75525EE04E460C0A3D179C85C5BC7C612_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_mDA6B18C58B28B33AFE6BC97171E93F43A8380EDD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_result))->___m_Length);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))));
		V_6 = L_9;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___values;
		int32_t L_14 = V_6;
		LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_inline((void*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		IL2CPP_NATIVEARRAY_SET_ITEM(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02, ((&___1_result))->___m_Buffer, L_11, (L_15));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_6;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		V_6 = L_18;
	}

IL_0053:
	{
		int32_t L_19 = V_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m4DAEEB32F4ACAB377D82C44F0D3AD918136CB4A0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_m3E8894663C243EADCE59BA4016F754D9236EE7CF(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = AspectType_GetHashCode_m86EDAB33742A358767EB1E6D5791A16B6DDF7355((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m2D8E9C8AE2B6726465ACDCF93EDAA63F7BB43FE7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD10EF58B5654387E86EB7F127977066C890B491D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mB23017C415EBA02851252DB1F8CF87FA1147CAA7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mF48DAF0DF6D2E6AD598562E8D0EA857AA8300BA0(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = BlobAssetPtr_GetHashCode_mBF1AE2A108DE02B14AE8A026BD389380DED08973((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA953A8B0F394BAF6E93E51BEBA68720FE16DB0BB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m264C78F5B7D5AC8EEB00D9E8D3E3B12A25706D16(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = BlobAssetPtr_GetHashCode_mBF1AE2A108DE02B14AE8A026BD389380DED08973((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC432E7F225F1C5DD5544159D710C010A3E139C6C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F0A37407A90567E2713127658BBC89EB8C0F6F3(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = ComponentBakeTrigger_GetHashCode_m5FA5B5B239BA98105D49F6BC9A66977340575534((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6403D14FD6E61C90B4411FF79D878CFE4BFF4B8A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B53B3D8677F361C29E5739D6448675B83B5300A(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = ComponentTypeHash_GetHashCode_m2BDE47B17E712574DFAEDE8F7A037F5E3C355BE0((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m2F7D855BF39ABD687C33BD95094A05C80B0CE4C5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mCBA4B05BA324F08F46C24FAEAF26B6FA71706FDC(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mB2E99510004443BADCB587A77413B3E0DCE17217_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = ConnectionId_GetHashCode_m7CD005F8169BE20415267EA691CCBEAC252DE0F2((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2710534A68C4D26F048061509C1C4235CA2EE82D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA6DC96DECCCC7D7451C32DA04FA737DF490477F3(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = DrawCommandSettings_GetHashCode_m8AA387A9B67A74C11ABAD694934DBE1AE6DB3FCF_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6205954B55A03CF023CF426E3CE11C56B421D8F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4570F37CAB9613CDD30D99B65D76E0CE35E57F41(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = DrawCommandSettings_GetHashCode_m8AA387A9B67A74C11ABAD694934DBE1AE6DB3FCF_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA5214967AC7A02513DC9BE55B997DBBB677047BF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5F660BAD133BF1F84693E5B910539D5D58B003F7(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mA1C5965CEE2757CFC4C9E4143F084F193575BB8E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m961C8B0FFB19BD3E3BB8E3A9C375B4152EEDC346(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m8300266F44288D1F0B17CE3B0B751303FDD4EEEB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m64EB80CD761AC18B7A29DD8B487C9DEAEF018A90(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m48D04719323C3B790A574ACD6072F273C2C7D61C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m27CB63C50BE4E168FFBA8EF981D3543EC08B0681(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m2D0F94BAEBAFA122C1961DD60DB067D737C36621_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m1D73F4780B67C95303715AB9DCD5E61D5E3F55B9(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m0617038642FF70449BE24242B728F0E54AEE84E6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m2E7A8A544E474B9CF7F6A6583A3BF6C52A15A792(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCB277A2612818D54A568695A7700387D032F6E7E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m66FA9A4F4267615CBD35701D05DA27A6714EC512(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = EntityArchetype_GetHashCode_mBD985D6245CF40F92B1B6E69E7A0D3248DB6F496((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m91B6AA99EBCA30D55D2FE0757FD3C7B9FD2CF953_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7216D2B86F8A1A9FC404EED7C19EED762C0654D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m46A1C9A57EED36052EFD0849A65F478303247D08_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m726411A62BC663FBEE118825B88B3D6EC105638B(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m0DB1D2B79574C40FD95EA8B3640F38AA6ACF9F82_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m673580A0599E2E75A64EF364D358D4D35F40B8BF(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m16512D0D829915B35D6A6B294A13B53334E4CCBA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m59074F74ECD8518179E97A60A2FFCCD1E7C4FE4C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m112A1240FB7BFA922A7EE2BB1418D7C896252A88_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mA6587978CB654E5F829A8E1413F71B7210CE52FB(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC7D1A0F4CA7AB74B987C2A810E03D044EFDF497B_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = FixedString128Bytes_GetHashCode_mB211F7E224953364EE91770921BA59760A0E4428((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AE56E7D10632115F7E8DAEF8059D0E616536110_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E4E84C6C6FDEC6DE05C41B7221F88CD8DB86B5C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = GraphicsArchetype_GetHashCode_m458A6FA675099CE505F8DE63C99D2EC18DBD89BB((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_m021510D59854D97E463D3176FD011F1AF3EBD514_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mC5246891AD244CBC99F9C6FD54068EC708B343B3(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = Hash128_GetHashCode_m45A3BE3EF733FE381AE45C96F6C53FAEBFE2795B((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m2A1FC63ABBF42641E98D9BC61A1D80AB4DB6BF20_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m911BBA275FF1BA6D70905678494DBD9130C9C11C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = Hash128_GetHashCode_m45A3BE3EF733FE381AE45C96F6C53FAEBFE2795B((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7D3A8317F1248C62C14C0E6D4BC0A9546F79D92C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2AF3A7B50DDE078978F1119F9C3F7BDF0FC68481(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = Hash128_GetHashCode_m45A3BE3EF733FE381AE45C96F6C53FAEBFE2795B((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m88F376D17413FE2A5BC56233EBB53CFAA9A49E9B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m4AE7437A40EFF5354E2C8C1D37ABC8B427854ADE(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m63489A427B822425020D9246F28E33E4021EF4EC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m10E071C6662AEF39B36EC2E91DD4503F4CE73D27(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_mE806BED94940FD2063F87804162C0D4B1983198C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m261D7D01930E2902643EBE7BA7EBFD7CAFB764B1(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m828B11FDE1D251C28B59F25ED84675A651328ACF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m400C0F32C4D33582E27B87004E527531B833F44E(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m15D036BD7D376504A6DD860A5DE8AFE6E8A28765_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mBDC87456FE502E5BAC938EA53D890FE39B362DBD(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC1592EDA102507AF8B0F7C4D25C70D6E83EA2FD3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDEEAA27F96677B738EA23A5DC1C9B67B85A7935(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m45235B8C93F2D3E6709DF5C34FD69D54330371E4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5A51B6B737BF36BDBDD2EBABF8B84B3819FEAE08(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m8D235D7C18D4014ADA58BBAB94C0ABAE06F985B4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD789B40EE2934E1CD910AB375F12EFC58E9117A0(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42588E02F8FB973684E7752BF762ACBAF0AF200C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB151D38E73EEDFB7B82F1F6498C9906EB81D402A(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mB26EC93AF05343597EA309C45EEC48304113939D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mDFECD4B0B9A27B7D99F6F5DC1B82D38B1E3AB64D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(intptr_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_mAE0F458F8388C0603F067BE430B5993DC80C290F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m9CECFA1873B43565E3089BE531E75865AEAAF20C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m171AB23D44F702C092D27F44A126216B9B309D1B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mA20D98F5BD8484672F199DDCA5CC79C6D8C31B8F(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD9C9AF50C976D84D5366A55F80A70333592A31DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m705537632698BC86CA104281913A6D9E5E25E31E(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mDE225FFEF183A731695CCAC5B5389BDEEB15A28F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m67F6E0A534D9848EF2DEC8F2E5859C43D3BDC1B1(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m64324A1D9278382019C06F8E3C043D3B2F69082B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m4026E14DE7C304AB1431CF42B1AC966DD45E7ABE(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m597F7ED3BC01A5281C99236AE982E8E21018FD9A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m9C8D04883045D565DFD34201AF04867FEA3482DF(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m2E0CE0B4795308E1CC57E4C1F4708C654C5A0786_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m12C91235B6E75EFB8E3292ED0FEC78C99E106117(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mA220F97BC380C052D92CD1003A64668F7D669730_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mD5D566D90F389009DD7E4355967607EDB7BB52B1(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m026137D747D1633D12111DC88DE80F05AAD92F3B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m0474C3D242A7100A72EA09C4FA4FBAAFDDD7D075(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mAB0447DA4CD9796FD329AD3D59A1A0BAAD332E29_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m7151E7177D62D8D99E190ED5D6A2F4DAA3FA646D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_m9A6F2E3E8872C29AE32A9022D7AFB74D8116202D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_mF7859B227F4883A1C1DA79235CE2963515BD07FF(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m4DBC8C087CADECF348A4BCFA488D7E1BB26E7F82_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m64004F3D97BCFE1AE8B9D277A9BDF1078A1F85A9(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline (int64_t ___0_x, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_x;
		___0_x = ((int64_t)il2cpp_codegen_subtract(L_0, ((int64_t)1)));
		int64_t L_1 = ___0_x;
		int64_t L_2 = ___0_x;
		___0_x = ((int64_t)(L_1|((int64_t)(L_2>>1))));
		int64_t L_3 = ___0_x;
		int64_t L_4 = ___0_x;
		___0_x = ((int64_t)(L_3|((int64_t)(L_4>>2))));
		int64_t L_5 = ___0_x;
		int64_t L_6 = ___0_x;
		___0_x = ((int64_t)(L_5|((int64_t)(L_6>>4))));
		int64_t L_7 = ___0_x;
		int64_t L_8 = ___0_x;
		___0_x = ((int64_t)(L_7|((int64_t)(L_8>>8))));
		int64_t L_9 = ___0_x;
		int64_t L_10 = ___0_x;
		___0_x = ((int64_t)(L_9|((int64_t)(L_10>>((int32_t)16)))));
		int64_t L_11 = ___0_x;
		int64_t L_12 = ___0_x;
		___0_x = ((int64_t)(L_11|((int64_t)(L_12>>((int32_t)32)))));
		int64_t L_13 = ___0_x;
		return ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DrawCommandSettings_GetHashCode_m8AA387A9B67A74C11ABAD694934DBE1AE6DB3FCF_inline (DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_CachedHash;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Index;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_3 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = (*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_3 = (*(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F);
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_3 = (*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E);
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_3 = (*(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_3 = (*(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78);
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_3 = (*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C);
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_3 = (*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2);
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_3 = (*(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 UnsafeUtility_ReadArrayElement_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_mCA396E94E43F4490DD793AEF7EF272A499B52101_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602);
		BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602 L_3 = (*(BlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m1F1E944526C83C5C50C3BEFA897DB7849C6CF967_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_3 = (*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 UnsafeUtility_ReadArrayElement_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_mF9C14E2D10BE0D50C01023F8CF535E317AFF7FDD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665);
		UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 L_3 = (*(UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 UnsafeUtility_ReadArrayElement_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m331C4C63F372510AD14D346567E6B3877853D8BD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5);
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_3 = (*(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 UnsafeUtility_ReadArrayElement_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m42C27C99C832082CC850074116836AD6C7951F4F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50);
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 L_3 = (*(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 UnsafeUtility_ReadArrayElement_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m445703406DA0556AAF9857F6CFFD220931E0D6DF_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9);
		BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 L_3 = (*(BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 UnsafeUtility_ReadArrayElement_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m341C66DAFE22D7FF675AB26610BCA44E0E7636AD_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7);
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 L_3 = (*(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 UnsafeUtility_ReadArrayElement_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mD1E4F602BE953DED44C106DA0B6050BD473D84F3_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2);
		BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 L_3 = (*(BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeUtility_ReadArrayElement_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m11F042F9F93240F4EC774AB70400B604FB52EACF_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61);
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_3 = (*(BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 UnsafeUtility_ReadArrayElement_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m09665718EFC7893CDD26DCB1B3EC90D4E46D7A98_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_3 = (*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D UnsafeUtility_ReadArrayElement_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_mC0855E940EDA880F3AC7284411BE4E8ED52CA780_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D);
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D L_3 = (*(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA UnsafeUtility_ReadArrayElement_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mE975124B2DB09771E16EABF7A001A4619D5F6768_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA);
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_3 = (*(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB UnsafeUtility_ReadArrayElement_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_mB2E99510004443BADCB587A77413B3E0DCE17217_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB);
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_3 = (*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_3 = (*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_3 = (*(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E UnsafeUtility_ReadArrayElement_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m2ADCB1A0DE89B2E013B4BB7D300F81AECACFE8EA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E);
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E L_3 = (*(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(intptr_t);
		intptr_t L_3 = (*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 UnsafeUtility_ReadArrayElement_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_mB7ECEBCB843A7B806336859D7F76DD87639AA863_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29);
		MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 L_3 = (*(MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 UnsafeUtility_ReadArrayElement_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m91439C6FD025D3C9E929BD43E276597EE7FF824D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412);
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 L_3 = (*(MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 UnsafeUtility_ReadArrayElement_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m956BFBA7E125ECF42542E6A2ABAC0DD7059B8A10_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751);
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 L_3 = (*(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D UnsafeUtility_ReadArrayElement_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mB3EF85E0F07B6626BEE4350E49F8DD84F7E542CE_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D);
		TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D L_3 = (*(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = (*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA UnsafeUtility_ReadArrayElement_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m50C716C28EF2FACA3FD6ECDE4C2290D6ECB07A61_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA);
		ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA L_3 = (*(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE UnsafeUtility_ReadArrayElement_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m4E9D75DDD928F74FFDA7A6339190E37A04AA1BAA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE);
		GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE L_3 = (*(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E UnsafeUtility_ReadArrayElement_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m240057E500574E311F64D761C1B0E81D48539B71_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E);
		GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E L_3 = (*(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B UnsafeUtility_ReadArrayElement_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_mE31D1DD2E82C423B35C73B7F1E8D557C2DBC75C5_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B);
		GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B L_3 = (*(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 UnsafeUtility_ReadArrayElement_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m4E35AE63F5292F45C4B7D57F293CAB353B3768BC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452);
		GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 L_3 = (*(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 UnsafeUtility_ReadArrayElement_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_m68422EC542A6BB6DBE519B2416180FA28AFB543E_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34);
		ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 L_3 = (*(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C UnsafeUtility_ReadArrayElement_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mAA82F9B921463BA85338F4F6907EB371C99E2C0D_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C);
		ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C L_3 = (*(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA UnsafeUtility_ReadArrayElement_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mE3F1AB969DB8BDB1A3E3E15E2414CF6A0B1699F1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA);
		ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA L_3 = (*(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D UnsafeUtility_ReadArrayElement_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_m9C968973FC991F9A05B90160D2FA10D03FFD36A5_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D);
		ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D L_3 = (*(ElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2 UnsafeUtility_ReadArrayElement_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_m032965AB813EB99CD85953DAE0AF12D25148F7F3_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2);
		ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2 L_3 = (*(ChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 UnsafeUtility_ReadArrayElement_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m269B2EB28C9E6370F7CF1D48917001A93ECA1836_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055);
		EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 L_3 = (*(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 UnsafeUtility_ReadArrayElement_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m14BBB3C75525EE04E460C0A3D179C85C5BC7C612_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_3 = (*(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 UnsafeUtility_ReadArrayElement_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m836F60A4A610F7AD228932364B2855D5CBBE1D65_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02);
		LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 L_3 = (*(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 UnsafeUtility_ReadArrayElement_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mD0CAE37D791EB711A170B7F9BDCEAB6ED472C3E3_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0);
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_3 = (*(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB UnsafeUtility_ReadArrayElement_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_mF1DA179FEC24B2BD7741BBE13FC22FA26604FBB9_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB);
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB L_3 = (*(ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B);
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_3 = (*(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354);
		EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 L_3 = (*(EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_3 = (*(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 UnsafeUtility_ReadArrayElement_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_mC7D1A0F4CA7AB74B987C2A810E03D044EFDF497B_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_3 = (*(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B);
		GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B L_3 = (*(GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B);
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_3 = (*(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
