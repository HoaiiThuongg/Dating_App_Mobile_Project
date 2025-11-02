#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86;
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39;
struct BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629;
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F;
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
struct EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ICertificateValidator_t8ECF48A37EC708C8A16305F9B6B44C50676AA854;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
struct LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2;
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859;
struct MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F;
struct MethodInfo_t;
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E;
struct MobileTlsContext_t456DDC89866EE34EF32EEF959AD92C9F17684476;
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
struct MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3;
struct MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0;
struct MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E;
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3;
struct OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41;
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654;
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
struct SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9;
struct SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4;
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
struct X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6;
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D;
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB;
struct X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC;
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
struct X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF;
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5;
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0;
struct X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6;
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B;
struct X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661;
struct X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6;
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
struct U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F40F39B9F659411903AC93DF93E8658291E5522;
IL2CPP_EXTERN_C String_t* _stringLiteral215B9008FEB54933AF219588889451A0CB610D34;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5896CBBFC90905C75DD54D891BDA98D58E394A45;
IL2CPP_EXTERN_C String_t* _stringLiteral6F581DC31922CB8BA16D8D1268547106C0D2A599;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE6AA6EF03FB6550152903A7B201A6108F728DB;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral73E7438EC9EFF139A2E1CEA81F03B87F9EF5CF0A;
IL2CPP_EXTERN_C String_t* _stringLiteral7432BC139FBCA09AC74A0F2BAE3FBB728A59E72D;
IL2CPP_EXTERN_C String_t* _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152;
IL2CPP_EXTERN_C String_t* _stringLiteral83E9CCD7DD65E416C7C3EC61053CC9CD331CBBAB;
IL2CPP_EXTERN_C String_t* _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057;
IL2CPP_EXTERN_C String_t* _stringLiteral94EC39D9CD015C12CA91AF28F761F4059A1C6437;
IL2CPP_EXTERN_C String_t* _stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D;
IL2CPP_EXTERN_C String_t* _stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6;
IL2CPP_EXTERN_C String_t* _stringLiteralB7FD6B173F8DDB3354F28BB648CED69286F416C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9340620E0F239BC39D9B1AA9CCF6119A0BB3FF;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0B1BB928B058DE0C421F4CC78A66B77C67F6D5;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DomainLiteralReader_ReadReverse_mB36850012C7403282295BC95516BBD23C059AA10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DotAtomReader_ReadReverse_m1DEBA10F0101721E517A9C8F9DA9A8446F0D45C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MailAddressParser_NormalizeOrThrow_m452C43EAA6D36B40B3C51193879EFB01BB42FCCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MailAddressParser_ParseAddress_mD85B7E4CCA06B155147575178545BB4C7DC25601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MailAddressParser_ParseDisplayName_mB9ECCC05BA67BA246E0930CD8CCB8D2039218C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MailAddressParser_ParseLocalPart_mFB8B7706E41347A3B5A3133AC711DB66309BADDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MailAddressParser_ReadCfwsAndThrowIfIncomplete_mA0C9417A8608AF181267879418AC79A263B469DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MailAddress__ctor_m2D8BE5D5AF75CAA42F6B709D3108CD5ABFAB152F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuotedPairReader_CountQuotedChars_m2BE55AE24C01917E2CCD7BDB8255767DC55FF0E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuotedStringFormatReader_ReadReverseQuoted_m130E54106CBD2C107460DD17684925908001C03A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuotedStringFormatReader_ReadReverseUnQuoted_m8609F7A26AC4EE4D2DBEF477027EF433F1D244F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslClientAuthenticationOptions_set_CertificateRevocationCheckMode_m5DB15346690DAC5A8F610AA8C7DEC7F2DFC29DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslClientAuthenticationOptions_set_EncryptionPolicy_m008E6F28D3C4BFEFFB32A9BEA6AEF1C2B53F1C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslServerAuthenticationOptions_set_CertificateRevocationCheckMode_mCB4596F4D3F547C63E3029612C713F90EF28854C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslServerAuthenticationOptions_set_EncryptionPolicy_m88D26CB33718B5E589647926F4264CFF5AC0E909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CSetAndVerifySelectionCallbackU3Eb__0_mADCFBC85C66A800C57CD2CECA4CDB6A9E5BB020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};
struct AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8  : public RuntimeObject
{
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ____oid;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____raw;
};
struct CertificateHelper_t47A3A32F421AE27CB022483D3104B54E505230B2  : public RuntimeObject
{
};
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list;
};
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};
struct DomainLiteralReader_t1FCA48D669DB156D7BF5DA0DC6B27282754ACB83  : public RuntimeObject
{
};
struct DotAtomReader_tB3414EAB5644CF1B70FD3D74AFD3DD20E4BEB1C7  : public RuntimeObject
{
};
struct EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F  : public RuntimeObject
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____displayNameEncoding;
	String_t* ____displayName;
	String_t* ____userName;
	String_t* ____host;
};
struct MailAddressParser_t07DE4876BEDCB5B102117AA2936BE1CCD661EF25  : public RuntimeObject
{
};
struct MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E  : public RuntimeObject
{
};
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3  : public RuntimeObject
{
	List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* ____list;
};
struct OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41  : public RuntimeObject
{
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ____oids;
	int32_t ____current;
};
struct QuotedPairReader_t6F5B586BAA4C96FF6CE48BF1481F3A799A9A50A4  : public RuntimeObject
{
};
struct QuotedStringFormatReader_tD1934DEE1B6516B4DEC2F4FB71823A38E2FDDC21  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
struct WhitespaceReader_t819F2EC2C4409514DB2FC3DC7FF62C8A242B46FD  : public RuntimeObject
{
};
struct X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC  : public RuntimeObject
{
	RuntimeObject* ___enumerator;
};
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl;
};
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0  : public RuntimeObject
{
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list;
};
struct X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6  : public RuntimeObject
{
	RuntimeObject* ___enumerator;
};
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parentNode;
};
struct U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C  : public RuntimeObject
{
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___callback;
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___U3CU3E4__this;
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
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
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
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
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017  : public MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E
{
};
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5  : public AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8
{
	bool ____critical;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800__padding[10];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26__padding[14];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8__padding[256];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F__padding[44];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D__padding[6];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7__padding[9];
	};
};
#pragma pack(pop, tp)
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	bool ___hasValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value;
};
struct AsnDecodeStatus_t737979F35649102176A6E9667DB7BE674F1A13CB 
{
	int32_t ___value__;
};
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____InnerStream;
	bool ____LeaveStreamOpen;
};
struct AuthenticationLevel_tD91F6CE700057352B4F45FC290E35B9E936DECAF 
{
	int32_t ___value__;
};
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
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
struct EncryptionPolicy_t5BCDD1A5A1B42E3843DBD8B55A1BECBD2A523D99 
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
struct MonoSslPolicyErrors_t064CCA79859C39247FA94E7DA8DCBD327C650BB7 
{
	int32_t ___value__;
};
struct NormalizationForm_t000C9151F649215BBA45A3AC3FB73C317B86EE7B 
{
	int32_t ___value__;
};
struct OidGroup_t7B851FE5BD88C9E5CA5365670A3EAF8B70D239B0 
{
	int32_t ___value__;
};
struct OpenFlags_t36A7F7746910A2D056E64475F8DE926B5AE2BF00 
{
	int32_t ___value__;
};
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	int32_t ___value__;
};
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct SslPolicyErrors_t92DF45EC5BA5BEFF38EF53C2C8488B27385EBB08 
{
	int32_t ___value__;
};
struct SslProtocols_t21FADB874FCAEC5039AE593AA3544639C938C77E 
{
	int32_t ___value__;
};
struct StoreLocation_t1B4292CC32103A252CD439258A6C7F766857D620 
{
	int32_t ___value__;
};
struct StoreName_t9A66D4BB10141BBD14BC206C94CE9928F7259A17 
{
	int32_t ___value__;
};
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	int32_t ___value__;
};
struct TlsProtocols_tCC009DAEEFCA5769448145AD24A1193CD5E8541B 
{
	int32_t ___value__;
};
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber;
	String_t* ___lazyIssuer;
	String_t* ___lazySubject;
	String_t* ___lazyKeyAlgorithm;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter;
};
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB  : public X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE
{
};
struct X509KeyUsageFlags_tA8507F67CB3F1DF68E2126C9D40A62CCF27065BA 
{
	int32_t ___value__;
};
struct X509RevocationMode_t952728D003111036C0DF94B0F66FF02B7DB04E62 
{
	int32_t ___value__;
};
struct Operation_tC35F3423442F066D3B3CB2E5FCC61CEA2D618017 
{
	int32_t ___value__;
};
struct Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 
{
	bool ___hasValue;
	int32_t ___value;
};
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	MobileTlsContext_t456DDC89866EE34EF32EEF959AD92C9F17684476* ___xobileTlsContext;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___lastException;
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncHandshakeRequest;
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncReadRequest;
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncWriteRequest;
	BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629* ___readBuffer;
	BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629* ___writeBuffer;
	RuntimeObject* ___ioLock;
	int32_t ___closeRequested;
	bool ___shutdown;
	int32_t ___operation;
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___U3CSslStreamU3Ek__BackingField;
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___U3CSettingsU3Ek__BackingField;
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___U3CProviderU3Ek__BackingField;
	String_t* ___U3CTargetHostU3Ek__BackingField;
	int32_t ___ID;
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
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287  : public RuntimeObject
{
	String_t* ____value;
	String_t* ____friendlyName;
	int32_t ____group;
};
struct SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9  : public RuntimeObject
{
	int32_t ____encryptionPolicy;
	int32_t ____checkCertificateRevocation;
	int32_t ____enabledSslProtocols;
	bool ____allowRenegotiation;
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___U3CLocalCertificateSelectionCallbackU3Ek__BackingField;
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField;
	String_t* ___U3CTargetHostU3Ek__BackingField;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___U3CClientCertificatesU3Ek__BackingField;
};
struct SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4  : public RuntimeObject
{
	int32_t ____checkCertificateRevocation;
	int32_t ____enabledSslProtocols;
	int32_t ____encryptionPolicy;
	bool ____allowRenegotiation;
	bool ___U3CClientCertificateRequiredU3Ek__BackingField;
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___U3CServerCertificateU3Ek__BackingField;
};
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___provider;
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___settings;
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___validationCallback;
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___selectionCallback;
	MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* ___impl;
	bool ___explicitSettings;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D  : public X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyRawData;
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___lazySignatureAlgorithm;
	int32_t ___lazyVersion;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazySubjectName;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazyIssuerName;
	PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___lazyPublicKey;
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___lazyPrivateKey;
	X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* ___lazyExtensions;
};
struct X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ____enhKeyUsage;
	int32_t ____status;
};
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	int32_t ____keyUsages;
	int32_t ____status;
};
struct X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6  : public RuntimeObject
{
	String_t* ____name;
	int32_t ____location;
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___list;
	int32_t ____flags;
	X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661* ___store;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2  : public MulticastDelegate_t
{
};
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859  : public MulticastDelegate_t
{
};
struct MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3  : public MulticastDelegate_t
{
};
struct MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0  : public MulticastDelegate_t
{
};
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0  : public RuntimeObject
{
	MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField;
	MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___U3CClientCertificateSelectionCallbackU3Ek__BackingField;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___U3CCertificateValidationTimeU3Ek__BackingField;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___U3CTrustAnchorsU3Ek__BackingField;
	RuntimeObject* ___U3CUserSettingsU3Ek__BackingField;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CCertificateSearchPathsU3Ek__BackingField;
	bool ___U3CSendCloseNotifyU3Ek__BackingField;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CClientCertificateIssuersU3Ek__BackingField;
	bool ___U3CDisallowUnauthenticatedCertificateRequestU3Ek__BackingField;
	Nullable_1_t9A98093485034F2B86BC66B725022122E0E5B2A4 ___U3CEnabledProtocolsU3Ek__BackingField;
	CipherSuiteCodeU5BU5D_t61EC0E6F53394985FFC36DEB587C70F4EE26D435* ___U3CEnabledCiphersU3Ek__BackingField;
	bool ___cloned;
	bool ___checkCertName;
	bool ___checkCertRevocationStatus;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___useServicePointManagerCallback;
	bool ___skipSystemValidators;
	bool ___callbackNeedsChain;
	RuntimeObject* ___certificateValidator;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};
struct ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	__StaticArrayInitTypeSizeU3D256_tD401FB34D66ACCFAD94A32F8001469D038F350C8 ___00C700F38385659BA060672F86D4A9A5376EADF9ED1CABB1C63290A0FDEFE36A;
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5;
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___063691760A57230E8119DF650327304D68AE1C009E476E48BE8C73DCA199D374;
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B;
	__StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 ___27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811;
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70;
	int64_t ___3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C;
	__StaticArrayInitTypeSizeU3D12_t32C4FAAB522AC6551334F4E397A28A8CF95552DD ___356A582FCE68ACAE8FC944F7B4F0C0DA2BFF4A90D3767C75905F3EDE2E4E66CF;
	int64_t ___6C8F647E1FCD63826D12272FF0930E9C16F1FFEF719948703A4C0F3B90052885;
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___8109EF063456779751E8A4AEE94A0BE9AE32827B6EB153ABD7F40057FF2C9CE3;
	__StaticArrayInitTypeSizeU3D44_tDBE82A359520A01FA0C117855F1C3185BA1AEB0F ___9001C3EDE1D7E939C07996B84F82F7CBE59A7266C1FC2735E959E3C8609602E8;
	__StaticArrayInitTypeSizeU3D6_tA4881AF2477A5E66902A636B307315D4FA964D8D ___9F58F1261D211553DE8FBC1AFA477C84EA3974B9BFF38223D771D0CDA787E15A;
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C;
	int64_t ___BB6BB42AC5453BD8AA992CCB8929F1CB7D4E112E3FC56E57D711E106D1F72859;
	__StaticArrayInitTypeSizeU3D14_t5A7362C844CE0A2E27C9434CD029FA82339CFF26 ___DFA7289CF8D8029ACEE90F30530C6926950E8DD20285772458F271AFD015BAD5;
	__StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 ___E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_StaticFields
{
	EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C* ___s_encoderFactory;
};
struct MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Atext;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Qtext;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Dtext;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Ftext;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Ttext;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Ctext;
	int32_t ___Ascii7bitMaxValue;
	Il2CppChar ___Quote;
	Il2CppChar ___Space;
	Il2CppChar ___Tab;
	Il2CppChar ___CR;
	Il2CppChar ___LF;
	Il2CppChar ___StartComment;
	Il2CppChar ___EndComment;
	Il2CppChar ___Backslash;
	Il2CppChar ___At;
	Il2CppChar ___EndAngleBracket;
	Il2CppChar ___StartAngleBracket;
	Il2CppChar ___StartSquareBracket;
	Il2CppChar ___EndSquareBracket;
	Il2CppChar ___Comma;
	Il2CppChar ___Dot;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_colonSeparator;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_months;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Empty;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newline_split;
};
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E_StaticFields
{
	int32_t ___uniqueNameInteger;
	int32_t ___nextId;
};
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0_StaticFields
{
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___defaultSettings;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuotedPairReader_CountQuotedChars_m2BE55AE24C01917E2CCD7BDB8255767DC55FF0E3 (String_t* ___0_data, int32_t ___1_index, bool ___2_permitUnicodeEscaping, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* MailAddressParser_ParseAddress_mD85B7E4CCA06B155147575178545BB4C7DC25601 (String_t* ___0_data, bool ___1_expectMultipleAddresses, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MailAddressParser_ReadCfwsAndThrowIfIncomplete_mA0C9417A8608AF181267879418AC79A263B469DE (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddressParser_ParseDomain_m9AC20E19405F899E27A5D7D42C2F4D231A945BB8 (String_t* ___0_data, int32_t* ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddressParser_ParseLocalPart_mFB8B7706E41347A3B5A3133AC711DB66309BADDF (String_t* ___0_data, int32_t* ___1_index, bool ___2_expectAngleBracket, bool ___3_expectMultipleAddresses, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddressParser_ParseDisplayName_mB9ECCC05BA67BA246E0930CD8CCB8D2039218C71 (String_t* ___0_data, int32_t* ___1_index, bool ___2_expectMultipleAddresses, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MailAddress__ctor_mF5F4AEC2D7323678C7E72BE2AA3B9CD4F814F49B (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, String_t* ___0_displayName, String_t* ___1_userName, String_t* ___2_domain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DomainLiteralReader_ReadReverse_mB36850012C7403282295BC95516BBD23C059AA10 (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotAtomReader_ReadReverse_m1DEBA10F0101721E517A9C8F9DA9A8446F0D45C1 (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddressParser_NormalizeOrThrow_m452C43EAA6D36B40B3C51193879EFB01BB42FCCA (String_t* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuotedStringFormatReader_ReadReverseQuoted_m130E54106CBD2C107460DD17684925908001C03A (String_t* ___0_data, int32_t ___1_index, bool ___2_permitUnicode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MailBnfHelper_IsAllowedWhiteSpace_m38571900795BC651C0BD168285F8F137EF993F92 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuotedStringFormatReader_ReadReverseUnQuoted_m8609F7A26AC4EE4D2DBEF477027EF433F1D244F2 (String_t* ___0_data, int32_t ___1_index, bool ___2_permitUnicode, bool ___3_expectCommaDelimiter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_SubstringTrim_mFE0BE086CF1854B8AE6C4938878402D1A68E12CA (String_t* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Normalize_mB458CCECBD27D6E9FB44CF03D37E856846C41831 (String_t* __this, int32_t ___0_normalizationForm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4 (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuotedPairReader_CountBackslashes_m15376EDFC46ACBBA01BA5CF5DCECF7E99532DAAA (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuotedStringFormatReader_IsValidQtext_m56EDB21ADEB0011B7AB99CA5AE8075FEB52607D4 (bool ___0_allowUnicode, Il2CppChar ___1_ch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_GetEncoding_m979B224460094E241BD5C283BE279886664C9187 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MailAddress__ctor_m2D8BE5D5AF75CAA42F6B709D3108CD5ABFAB152F (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, String_t* ___0_address, String_t* ___1_displayName, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_displayNameEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* MailAddressParser_ParseAddress_mF12BAE3F64BC6EF64965E14C2F5901DF4ABF7FB3 (String_t* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddress_get_Address_mF669BEE1774AAA9F3C355A403093DE0F27278146 (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MailAddress_get_DisplayName_m0A2747BF562CBB389D9B746A644BE6C248EF7E4E_inline (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddress_get_SmtpAddress_m947E57B67AA3F9BFA3C755911FDB75D878D578B3 (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodedStreamFactory__ctor_mA9684320A2A5225AEA9B6DFC96B1DDC82603AEBA (EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72 (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2Collection__ctor_mC7A17C695E7DB906D549A0BF60943D2490F4C2B9 (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m45914B11721824E8BE7FC2B2FC4ADD28F2C45EDB (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* CertificateHelper_GetEligibleClientCertificate_m00DC10857ED3F31A4F74A386F172784868FB5E3A (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___0_candidateCerts, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC* X509Certificate2Collection_GetEnumerator_m2D2A261B2F68A857C3C8B0037C5E05F10A6761FC (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* X509Certificate2Enumerator_get_Current_m7D19172490F76C81A7E7DB5AF8D172400BC95B53 (X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Certificate2_get_HasPrivateKey_m561EE07579AC86B96856A73367961AD01DAD8567 (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHelper_IsValidClientCertificate_mF8CB7C4FE96D48B396C14565C51008BC370E0937 (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___0_cert, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Certificate2Enumerator_MoveNext_m824241D32F6E1B3FF4CAE0E2B370BB5E32238F19 (X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* X509Certificate2_get_Extensions_m3746E7EB004789DF5AF56AD36209676860901579 (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* X509ExtensionCollection_GetEnumerator_m7F4BDDDF50FD335D3F6A2AB490221D27524BD0BF (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* X509ExtensionEnumerator_get_Current_m6057D68B2D7750669A51630A1561FCE7F597E232 (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHelper_IsValidForClientAuthenticationEKU_m4A647A8BA48A7E09E509D392E7299BE37FE0B342 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* ___0_eku, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHelper_IsValidForDigitalSignatureUsage_m8F557DEA13DF9D19B457039F0315F9DBBDB5133D (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* ___0_ku, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ExtensionEnumerator_MoveNext_mDCF343DCC4699DFB3D6E72D84AF8A6C11AB247C3 (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* X509EnhancedKeyUsageExtension_get_EnhancedKeyUsages_m6D1DC16A0828B8407577EE61EA234F1C3859D5CB (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store__ctor_m4BC006F268440F969A1E2550A4884AA9FB4FEB1E (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, int32_t ___0_storeName, int32_t ___1_storeLocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Open_mE65F1CB5311705EB955D576295B048C1155CCED8 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, int32_t ___0_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* X509Store_get_Certificates_m3605E1FE284AD55C48E874C49CD22C11828D2DA0 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MobileAuthenticatedStream_get_TargetHost_m572DA701CB3CE3FA4006D5745F9A3B9A52739CAB_inline (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* MonoTlsProviderFactory_GetProvider_m8684E3A1AFB043FA00DEC4BCF95F8B288C136936 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_mB4497903594E8A33C14B9A4C4DAB7B16BA2E9B2C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_innerStream, bool ___1_leaveInnerStreamOpen, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___2_userCertificateValidationCallback, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___3_userCertificateSelectionCallback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357 (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_innerStream, bool ___1_leaveInnerStreamOpen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* SslStream_GetProvider_mE1D070C13DB759156659F57AB9DF4D2E397FD85B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_CopyDefaultSettings_m4B0A3E8B7D106FA7F0D243FB2A0A4B115CD21942 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* MonoTlsSettings_Clone_mC4F9A27889ADD0B275018B32BCDA67C30865EA7D (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* CallbackHelpers_PublicToMono_m6404DAFAD159E4D91FB5822B4855B6A8F05777EE (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0 (Delegate_t* ___0_d1, Delegate_t* ___1_d2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mBE4019B5D6D20FC100DAF52B1172ACF497046370 (U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoLocalCertificateSelectionCallback__ctor_mCA81824D698BD5808E501A9AC4DA99758B69D3FC (MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAuthenticatedStream_AuthenticateAsClient_mEB1237B52A4AB1FF3D7D3E52F61CE78A744973FC (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_clientCertificates, int32_t ___2_enabledSslProtocols, bool ___3_checkCertificateRevocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MobileAuthenticatedStream_AuthenticateAsClientAsync_mBD8A0E7FFAFDE608063E545EF057304AF2C35EF2 (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_clientCertificates, int32_t ___2_enabledSslProtocols, bool ___3_checkCertificateRevocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAuthenticatedStream_AuthenticateAsServer_m38A5035F798D754F9C460A3C4E2B90B673DD9091 (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___0_serverCertificate, bool ___1_clientCertificateRequired, int32_t ___2_enabledSslProtocols, bool ___3_checkCertificateRevocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* MobileAuthenticatedStream_get_LocalCertificate_m59FF8438D988F2CE633B454CE2B54D614E6C50EF (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Stream_ReadAsync_m734E5C146A1217C9E8FEC56ABDBD2AC33F5F8F87 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
inline int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared)(___0_asyncResult, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_inline (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodedStreamFactory__ctor_mA9684320A2A5225AEA9B6DFC96B1DDC82603AEBA (EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DomainLiteralReader_ReadReverse_mB36850012C7403282295BC95516BBD23C059AA10 (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}

IL_0005:
	{
		String_t* L_1 = ___0_data;
		int32_t L_2 = ___1_index;
		int32_t L_3;
		L_3 = WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA(L_1, L_2, NULL);
		___1_index = L_3;
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_5 = ___0_data;
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = QuotedPairReader_CountQuotedChars_m2BE55AE24C01917E2CCD7BDB8255767DC55FF0E3(L_5, L_6, (bool)0, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_9 = ___1_index;
		int32_t L_10 = V_0;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		goto IL_0076;
	}

IL_0026:
	{
		String_t* L_11 = ___0_data;
		int32_t L_12 = ___1_index;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_14 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___StartSquareBracket;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_15 = ___1_index;
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0038:
	{
		String_t* L_16 = ___0_data;
		int32_t L_17 = ___1_index;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		int32_t L_19 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Ascii7bitMaxValue;
		if ((((int32_t)L_18) > ((int32_t)L_19)))
		{
			goto IL_0055;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Dtext;
		String_t* L_21 = ___0_data;
		int32_t L_22 = ___1_index;
		NullCheck(L_21);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_21, L_22, NULL);
		NullCheck(L_20);
		Il2CppChar L_24 = L_23;
		uint8_t L_25 = (uint8_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if (L_25)
		{
			goto IL_0071;
		}
	}

IL_0055:
	{
		String_t* L_26 = ___0_data;
		int32_t L_27 = ___1_index;
		NullCheck(L_26);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, L_27, NULL);
		Il2CppChar L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_defaults.char_class, &L_29);
		String_t* L_31;
		L_31 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_30, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_32 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DomainLiteralReader_ReadReverse_mB36850012C7403282295BC95516BBD23C059AA10_RuntimeMethod_var)));
	}

IL_0071:
	{
		int32_t L_33 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
	}

IL_0076:
	{
		int32_t L_34 = ___1_index;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}

IL_007a:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var)));
		Il2CppChar L_35 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))))->___EndSquareBracket;
		Il2CppChar L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_defaults.char_class, &L_36);
		String_t* L_38;
		L_38 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_37, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_39 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_39, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DomainLiteralReader_ReadReverse_mB36850012C7403282295BC95516BBD23C059AA10_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotAtomReader_ReadReverse_m1DEBA10F0101721E517A9C8F9DA9A8446F0D45C1 (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_index;
		V_0 = L_0;
		goto IL_0034;
	}

IL_0004:
	{
		String_t* L_1 = ___0_data;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Ascii7bitMaxValue;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_5 = ___0_data;
		int32_t L_6 = ___1_index;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_8 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Dot;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Atext;
		String_t* L_10 = ___0_data;
		int32_t L_11 = ___1_index;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		NullCheck(L_9);
		Il2CppChar L_13 = L_12;
		uint8_t L_14 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (!L_14)
		{
			goto IL_0038;
		}
	}

IL_002f:
	{
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0034:
	{
		int32_t L_16 = ___1_index;
		if ((((int32_t)0) <= ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}

IL_0038:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_19 = ___0_data;
		int32_t L_20 = ___1_index;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_20, NULL);
		Il2CppChar L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_defaults.char_class, &L_22);
		String_t* L_24;
		L_24 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_23, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_25 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DotAtomReader_ReadReverse_m1DEBA10F0101721E517A9C8F9DA9A8446F0D45C1_RuntimeMethod_var)));
	}

IL_0058:
	{
		String_t* L_26 = ___0_data;
		int32_t L_27 = ___1_index;
		NullCheck(L_26);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, ((int32_t)il2cpp_codegen_add(L_27, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_29 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Dot;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0082;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var)));
		Il2CppChar L_30 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))))->___Dot;
		Il2CppChar L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_defaults.char_class, &L_31);
		String_t* L_33;
		L_33 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_32, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_34 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DotAtomReader_ReadReverse_m1DEBA10F0101721E517A9C8F9DA9A8446F0D45C1_RuntimeMethod_var)));
	}

IL_0082:
	{
		int32_t L_35 = ___1_index;
		return L_35;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* MailAddressParser_ParseAddress_mF12BAE3F64BC6EF64965E14C2F5901DF4ABF7FB3 (String_t* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		String_t* L_2 = ___0_data;
		MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* L_3;
		L_3 = MailAddressParser_ParseAddress_mD85B7E4CCA06B155147575178545BB4C7DC25601(L_2, (bool)0, (&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* MailAddressParser_ParseAddress_mD85B7E4CCA06B155147575178545BB4C7DC25601 (String_t* ___0_data, bool ___1_expectMultipleAddresses, int32_t* ___2_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* G_B10_0 = NULL;
	String_t* G_B9_0 = NULL;
	Il2CppChar G_B11_0 = 0x0;
	String_t* G_B11_1 = NULL;
	{
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		int32_t* L_0 = ___2_index;
		String_t* L_1 = ___0_data;
		int32_t* L_2 = ___2_index;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4;
		L_4 = MailAddressParser_ReadCfwsAndThrowIfIncomplete_mA0C9417A8608AF181267879418AC79A263B469DE(L_1, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		V_3 = (bool)0;
		String_t* L_5 = ___0_data;
		int32_t* L_6 = ___2_index;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_9 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___EndAngleBracket;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0029;
		}
	}
	{
		V_3 = (bool)1;
		int32_t* L_10 = ___2_index;
		int32_t* L_11 = ___2_index;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0029:
	{
		String_t* L_13 = ___0_data;
		int32_t* L_14 = ___2_index;
		String_t* L_15;
		L_15 = MailAddressParser_ParseDomain_m9AC20E19405F899E27A5D7D42C2F4D231A945BB8(L_13, L_14, NULL);
		V_0 = L_15;
		String_t* L_16 = ___0_data;
		int32_t* L_17 = ___2_index;
		int32_t L_18 = *((int32_t*)L_17);
		NullCheck(L_16);
		Il2CppChar L_19;
		L_19 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_20 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___At;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_004b;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_21 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83E9CCD7DD65E416C7C3EC61053CC9CD331CBBAB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailAddressParser_ParseAddress_mD85B7E4CCA06B155147575178545BB4C7DC25601_RuntimeMethod_var)));
	}

IL_004b:
	{
		int32_t* L_22 = ___2_index;
		int32_t* L_23 = ___2_index;
		int32_t L_24 = *((int32_t*)L_23);
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1));
		String_t* L_25 = ___0_data;
		int32_t* L_26 = ___2_index;
		bool L_27 = V_3;
		bool L_28 = ___1_expectMultipleAddresses;
		String_t* L_29;
		L_29 = MailAddressParser_ParseLocalPart_mFB8B7706E41347A3B5A3133AC711DB66309BADDF(L_25, L_26, L_27, L_28, NULL);
		V_1 = L_29;
		bool L_30 = V_3;
		if (!L_30)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t* L_31 = ___2_index;
		int32_t L_32 = *((int32_t*)L_31);
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_33 = ___0_data;
		int32_t* L_34 = ___2_index;
		int32_t L_35 = *((int32_t*)L_34);
		NullCheck(L_33);
		Il2CppChar L_36;
		L_36 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_37 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___StartAngleBracket;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t* L_38 = ___2_index;
		int32_t* L_39 = ___2_index;
		int32_t L_40 = *((int32_t*)L_39);
		*((int32_t*)L_38) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t* L_41 = ___2_index;
		String_t* L_42 = ___0_data;
		int32_t* L_43 = ___2_index;
		int32_t L_44 = *((int32_t*)L_43);
		int32_t L_45;
		L_45 = WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA(L_42, L_44, NULL);
		*((int32_t*)L_41) = (int32_t)L_45;
		goto IL_00ad;
	}

IL_0084:
	{
		int32_t* L_46 = ___2_index;
		int32_t L_47 = *((int32_t*)L_46);
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			G_B10_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A));
			goto IL_0095;
		}
		G_B9_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A));
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var)));
		Il2CppChar L_48 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))))->___EndAngleBracket;
		G_B11_0 = L_48;
		G_B11_1 = G_B9_0;
		goto IL_009d;
	}

IL_0095:
	{
		String_t* L_49 = ___0_data;
		int32_t* L_50 = ___2_index;
		int32_t L_51 = *((int32_t*)L_50);
		NullCheck(L_49);
		Il2CppChar L_52;
		L_52 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_49, L_51, NULL);
		G_B11_0 = L_52;
		G_B11_1 = G_B10_0;
	}

IL_009d:
	{
		Il2CppChar L_53 = G_B11_0;
		RuntimeObject* L_54 = Box(il2cpp_defaults.char_class, &L_53);
		String_t* L_55;
		L_55 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(G_B11_1, L_54, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_56 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_56, L_55, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailAddressParser_ParseAddress_mD85B7E4CCA06B155147575178545BB4C7DC25601_RuntimeMethod_var)));
	}

IL_00ad:
	{
		int32_t* L_57 = ___2_index;
		int32_t L_58 = *((int32_t*)L_57);
		if ((((int32_t)L_58) < ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		bool L_59 = ___1_expectMultipleAddresses;
		if (!L_59)
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_60 = ___0_data;
		int32_t* L_61 = ___2_index;
		int32_t L_62 = *((int32_t*)L_61);
		NullCheck(L_60);
		Il2CppChar L_63;
		L_63 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_60, L_62, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_64 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Comma;
		if ((((int32_t)L_63) == ((int32_t)L_64)))
		{
			goto IL_00cf;
		}
	}

IL_00c4:
	{
		String_t* L_65 = ___0_data;
		int32_t* L_66 = ___2_index;
		bool L_67 = ___1_expectMultipleAddresses;
		String_t* L_68;
		L_68 = MailAddressParser_ParseDisplayName_mB9ECCC05BA67BA246E0930CD8CCB8D2039218C71(L_65, L_66, L_67, NULL);
		V_2 = L_68;
		goto IL_00d5;
	}

IL_00cf:
	{
		String_t* L_69 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		V_2 = L_69;
	}

IL_00d5:
	{
		String_t* L_70 = V_2;
		String_t* L_71 = V_1;
		String_t* L_72 = V_0;
		MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* L_73 = (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F*)il2cpp_codegen_object_new(MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_il2cpp_TypeInfo_var);
		MailAddress__ctor_mF5F4AEC2D7323678C7E72BE2AA3B9CD4F814F49B(L_73, L_70, L_71, L_72, NULL);
		return L_73;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MailAddressParser_ReadCfwsAndThrowIfIncomplete_mA0C9417A8608AF181267879418AC79A263B469DE (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF(L_0, L_1, NULL);
		___1_index = L_2;
		int32_t L_3 = ___1_index;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_4 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83E9CCD7DD65E416C7C3EC61053CC9CD331CBBAB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailAddressParser_ReadCfwsAndThrowIfIncomplete_mA0C9417A8608AF181267879418AC79A263B469DE_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_5 = ___1_index;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddressParser_ParseDomain_m9AC20E19405F899E27A5D7D42C2F4D231A945BB8 (String_t* ___0_data, int32_t* ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___1_index;
		String_t* L_1 = ___0_data;
		int32_t* L_2 = ___1_index;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4;
		L_4 = MailAddressParser_ReadCfwsAndThrowIfIncomplete_mA0C9417A8608AF181267879418AC79A263B469DE(L_1, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		int32_t* L_5 = ___1_index;
		int32_t L_6 = *((int32_t*)L_5);
		V_0 = L_6;
		String_t* L_7 = ___0_data;
		int32_t* L_8 = ___1_index;
		int32_t L_9 = *((int32_t*)L_8);
		NullCheck(L_7);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_11 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___EndSquareBracket;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t* L_12 = ___1_index;
		String_t* L_13 = ___0_data;
		int32_t* L_14 = ___1_index;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16;
		L_16 = DomainLiteralReader_ReadReverse_mB36850012C7403282295BC95516BBD23C059AA10(L_13, L_15, NULL);
		*((int32_t*)L_12) = (int32_t)L_16;
		goto IL_0032;
	}

IL_0028:
	{
		int32_t* L_17 = ___1_index;
		String_t* L_18 = ___0_data;
		int32_t* L_19 = ___1_index;
		int32_t L_20 = *((int32_t*)L_19);
		int32_t L_21;
		L_21 = DotAtomReader_ReadReverse_m1DEBA10F0101721E517A9C8F9DA9A8446F0D45C1(L_18, L_20, NULL);
		*((int32_t*)L_17) = (int32_t)L_21;
	}

IL_0032:
	{
		String_t* L_22 = ___0_data;
		int32_t* L_23 = ___1_index;
		int32_t L_24 = *((int32_t*)L_23);
		int32_t L_25 = V_0;
		int32_t* L_26 = ___1_index;
		int32_t L_27 = *((int32_t*)L_26);
		NullCheck(L_22);
		String_t* L_28;
		L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_22, ((int32_t)il2cpp_codegen_add(L_24, 1)), ((int32_t)il2cpp_codegen_subtract(L_25, L_27)), NULL);
		int32_t* L_29 = ___1_index;
		String_t* L_30 = ___0_data;
		int32_t* L_31 = ___1_index;
		int32_t L_32 = *((int32_t*)L_31);
		int32_t L_33;
		L_33 = MailAddressParser_ReadCfwsAndThrowIfIncomplete_mA0C9417A8608AF181267879418AC79A263B469DE(L_30, L_32, NULL);
		*((int32_t*)L_29) = (int32_t)L_33;
		String_t* L_34;
		L_34 = MailAddressParser_NormalizeOrThrow_m452C43EAA6D36B40B3C51193879EFB01BB42FCCA(L_28, NULL);
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddressParser_ParseLocalPart_mFB8B7706E41347A3B5A3133AC711DB66309BADDF (String_t* ___0_data, int32_t* ___1_index, bool ___2_expectAngleBracket, bool ___3_expectMultipleAddresses, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___1_index;
		String_t* L_1 = ___0_data;
		int32_t* L_2 = ___1_index;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4;
		L_4 = MailAddressParser_ReadCfwsAndThrowIfIncomplete_mA0C9417A8608AF181267879418AC79A263B469DE(L_1, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		int32_t* L_5 = ___1_index;
		int32_t L_6 = *((int32_t*)L_5);
		V_0 = L_6;
		String_t* L_7 = ___0_data;
		int32_t* L_8 = ___1_index;
		int32_t L_9 = *((int32_t*)L_8);
		NullCheck(L_7);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_11 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Quote;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_12 = ___1_index;
		String_t* L_13 = ___0_data;
		int32_t* L_14 = ___1_index;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16;
		L_16 = QuotedStringFormatReader_ReadReverseQuoted_m130E54106CBD2C107460DD17684925908001C03A(L_13, L_15, (bool)1, NULL);
		*((int32_t*)L_12) = (int32_t)L_16;
		goto IL_00a6;
	}

IL_0029:
	{
		int32_t* L_17 = ___1_index;
		String_t* L_18 = ___0_data;
		int32_t* L_19 = ___1_index;
		int32_t L_20 = *((int32_t*)L_19);
		int32_t L_21;
		L_21 = DotAtomReader_ReadReverse_m1DEBA10F0101721E517A9C8F9DA9A8446F0D45C1(L_18, L_20, NULL);
		*((int32_t*)L_17) = (int32_t)L_21;
		int32_t* L_22 = ___1_index;
		int32_t L_23 = *((int32_t*)L_22);
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_24 = ___0_data;
		int32_t* L_25 = ___1_index;
		int32_t L_26 = *((int32_t*)L_25);
		NullCheck(L_24);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = MailBnfHelper_IsAllowedWhiteSpace_m38571900795BC651C0BD168285F8F137EF993F92(L_27, NULL);
		if (L_28)
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_29 = ___0_data;
		int32_t* L_30 = ___1_index;
		int32_t L_31 = *((int32_t*)L_30);
		NullCheck(L_29);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_29, L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_33 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___EndComment;
		if ((((int32_t)L_32) == ((int32_t)L_33)))
		{
			goto IL_00a6;
		}
	}
	{
		bool L_34 = ___2_expectAngleBracket;
		if (!L_34)
		{
			goto IL_0068;
		}
	}
	{
		String_t* L_35 = ___0_data;
		int32_t* L_36 = ___1_index;
		int32_t L_37 = *((int32_t*)L_36);
		NullCheck(L_35);
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_39 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___StartAngleBracket;
		if ((((int32_t)L_38) == ((int32_t)L_39)))
		{
			goto IL_00a6;
		}
	}

IL_0068:
	{
		bool L_40 = ___3_expectMultipleAddresses;
		if (!L_40)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_41 = ___0_data;
		int32_t* L_42 = ___1_index;
		int32_t L_43 = *((int32_t*)L_42);
		NullCheck(L_41);
		Il2CppChar L_44;
		L_44 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_41, L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_45 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Comma;
		if ((((int32_t)L_44) == ((int32_t)L_45)))
		{
			goto IL_00a6;
		}
	}

IL_007a:
	{
		String_t* L_46 = ___0_data;
		int32_t* L_47 = ___1_index;
		int32_t L_48 = *((int32_t*)L_47);
		NullCheck(L_46);
		Il2CppChar L_49;
		L_49 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_46, L_48, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_50 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Quote;
		if ((((int32_t)L_49) == ((int32_t)L_50)))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_51 = ___0_data;
		int32_t* L_52 = ___1_index;
		int32_t L_53 = *((int32_t*)L_52);
		NullCheck(L_51);
		Il2CppChar L_54;
		L_54 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_51, L_53, NULL);
		Il2CppChar L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_defaults.char_class, &L_55);
		String_t* L_57;
		L_57 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_56, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_58 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_58, L_57, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailAddressParser_ParseLocalPart_mFB8B7706E41347A3B5A3133AC711DB66309BADDF_RuntimeMethod_var)));
	}

IL_00a6:
	{
		String_t* L_59 = ___0_data;
		int32_t* L_60 = ___1_index;
		int32_t L_61 = *((int32_t*)L_60);
		int32_t L_62 = V_0;
		int32_t* L_63 = ___1_index;
		int32_t L_64 = *((int32_t*)L_63);
		NullCheck(L_59);
		String_t* L_65;
		L_65 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_59, ((int32_t)il2cpp_codegen_add(L_61, 1)), ((int32_t)il2cpp_codegen_subtract(L_62, L_64)), NULL);
		int32_t* L_66 = ___1_index;
		String_t* L_67 = ___0_data;
		int32_t* L_68 = ___1_index;
		int32_t L_69 = *((int32_t*)L_68);
		int32_t L_70;
		L_70 = WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF(L_67, L_69, NULL);
		*((int32_t*)L_66) = (int32_t)L_70;
		String_t* L_71;
		L_71 = MailAddressParser_NormalizeOrThrow_m452C43EAA6D36B40B3C51193879EFB01BB42FCCA(L_65, NULL);
		return L_71;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddressParser_ParseDisplayName_mB9ECCC05BA67BA246E0930CD8CCB8D2039218C71 (String_t* ___0_data, int32_t* ___1_index, bool ___2_expectMultipleAddresses, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___0_data;
		int32_t* L_1 = ___1_index;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF(L_0, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_5 = ___0_data;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_8 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Quote;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t* L_9 = ___1_index;
		String_t* L_10 = ___0_data;
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = QuotedStringFormatReader_ReadReverseQuoted_m130E54106CBD2C107460DD17684925908001C03A(L_10, L_11, (bool)1, NULL);
		*((int32_t*)L_9) = (int32_t)L_12;
		int32_t* L_13 = ___1_index;
		int32_t L_14 = *((int32_t*)L_13);
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 2));
		String_t* L_15 = ___0_data;
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_15);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		V_0 = L_19;
		int32_t* L_20 = ___1_index;
		String_t* L_21 = ___0_data;
		int32_t* L_22 = ___1_index;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24;
		L_24 = WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF(L_21, L_23, NULL);
		*((int32_t*)L_20) = (int32_t)L_24;
		int32_t* L_25 = ___1_index;
		int32_t L_26 = *((int32_t*)L_25);
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		bool L_27 = ___2_expectMultipleAddresses;
		if (!L_27)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_28 = ___0_data;
		int32_t* L_29 = ___1_index;
		int32_t L_30 = *((int32_t*)L_29);
		NullCheck(L_28);
		Il2CppChar L_31;
		L_31 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_32 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Comma;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_0091;
		}
	}

IL_0056:
	{
		String_t* L_33 = ___0_data;
		int32_t* L_34 = ___1_index;
		int32_t L_35 = *((int32_t*)L_34);
		NullCheck(L_33);
		Il2CppChar L_36;
		L_36 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, L_35, NULL);
		Il2CppChar L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_defaults.char_class, &L_37);
		String_t* L_39;
		L_39 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_38, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_40 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_40, L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailAddressParser_ParseDisplayName_mB9ECCC05BA67BA246E0930CD8CCB8D2039218C71_RuntimeMethod_var)));
	}

IL_0073:
	{
		int32_t* L_41 = ___1_index;
		int32_t L_42 = *((int32_t*)L_41);
		V_3 = L_42;
		int32_t* L_43 = ___1_index;
		String_t* L_44 = ___0_data;
		int32_t* L_45 = ___1_index;
		int32_t L_46 = *((int32_t*)L_45);
		bool L_47 = ___2_expectMultipleAddresses;
		int32_t L_48;
		L_48 = QuotedStringFormatReader_ReadReverseUnQuoted_m8609F7A26AC4EE4D2DBEF477027EF433F1D244F2(L_44, L_46, (bool)1, L_47, NULL);
		*((int32_t*)L_43) = (int32_t)L_48;
		String_t* L_49 = ___0_data;
		int32_t* L_50 = ___1_index;
		int32_t L_51 = *((int32_t*)L_50);
		int32_t L_52 = V_3;
		int32_t* L_53 = ___1_index;
		int32_t L_54 = *((int32_t*)L_53);
		String_t* L_55;
		L_55 = StringExtensions_SubstringTrim_mFE0BE086CF1854B8AE6C4938878402D1A68E12CA(L_49, ((int32_t)il2cpp_codegen_add(L_51, 1)), ((int32_t)il2cpp_codegen_subtract(L_52, L_54)), NULL);
		V_0 = L_55;
	}

IL_0091:
	{
		String_t* L_56 = V_0;
		String_t* L_57;
		L_57 = MailAddressParser_NormalizeOrThrow_m452C43EAA6D36B40B3C51193879EFB01BB42FCCA(L_56, NULL);
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddressParser_NormalizeOrThrow_m452C43EAA6D36B40B3C51193879EFB01BB42FCCA (String_t* ___0_input, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		String_t* L_0 = ___0_input;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Normalize_mB458CCECBD27D6E9FB44CF03D37E856846C41831(L_0, 1, NULL);
		V_0 = L_1;
		goto IL_0017;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000a;
		}
		throw e;
	}

CATCH_000a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_1 = L_2;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = V_1;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_4 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83E9CCD7DD65E416C7C3EC61053CC9CD331CBBAB)), L_3, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailAddressParser_NormalizeOrThrow_m452C43EAA6D36B40B3C51193879EFB01BB42FCCA_RuntimeMethod_var)));
	}

IL_0017:
	{
		String_t* L_5 = V_0;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuotedPairReader_CountQuotedChars_m2BE55AE24C01917E2CCD7BDB8255767DC55FF0E3 (String_t* ___0_data, int32_t ___1_index, bool ___2_permitUnicodeEscaping, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_index;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___0_data;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_4 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Backslash;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return 0;
	}

IL_0016:
	{
		String_t* L_5 = ___0_data;
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = QuotedPairReader_CountBackslashes_m15376EDFC46ACBBA01BA5CF5DCECF7E99532DAAA(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if (((int32_t)(L_8%2)))
		{
			goto IL_0027;
		}
	}
	{
		return 0;
	}

IL_0027:
	{
		bool L_9 = ___2_permitUnicodeEscaping;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_10 = ___0_data;
		int32_t L_11 = ___1_index;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		int32_t L_13 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Ascii7bitMaxValue;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_14 = ___0_data;
		int32_t L_15 = ___1_index;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		Il2CppChar L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.char_class, &L_17);
		String_t* L_19;
		L_19 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_18, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_20 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QuotedPairReader_CountQuotedChars_m2BE55AE24C01917E2CCD7BDB8255767DC55FF0E3_RuntimeMethod_var)));
	}

IL_0054:
	{
		int32_t L_21 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_21, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuotedPairReader_CountBackslashes_m15376EDFC46ACBBA01BA5CF5DCECF7E99532DAAA (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___0_data;
		int32_t L_4 = ___1_index;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_6 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Backslash;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0002;
		}
	}

IL_001d:
	{
		int32_t L_7 = V_0;
		return L_7;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuotedStringFormatReader_ReadReverseQuoted_m130E54106CBD2C107460DD17684925908001C03A (String_t* ___0_data, int32_t ___1_index, bool ___2_permitUnicode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}

IL_0005:
	{
		String_t* L_1 = ___0_data;
		int32_t L_2 = ___1_index;
		int32_t L_3;
		L_3 = WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA(L_1, L_2, NULL);
		___1_index = L_3;
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_5 = ___0_data;
		int32_t L_6 = ___1_index;
		bool L_7 = ___2_permitUnicode;
		int32_t L_8;
		L_8 = QuotedPairReader_CountQuotedChars_m2BE55AE24C01917E2CCD7BDB8255767DC55FF0E3(L_5, L_6, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_10 = ___1_index;
		int32_t L_11 = V_0;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		goto IL_0068;
	}

IL_0026:
	{
		String_t* L_12 = ___0_data;
		int32_t L_13 = ___1_index;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_15 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Quote;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_16 = ___1_index;
		return ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0038:
	{
		bool L_17 = ___2_permitUnicode;
		String_t* L_18 = ___0_data;
		int32_t L_19 = ___1_index;
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_18, L_19, NULL);
		bool L_21;
		L_21 = QuotedStringFormatReader_IsValidQtext_m56EDB21ADEB0011B7AB99CA5AE8075FEB52607D4(L_17, L_20, NULL);
		if (L_21)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_22 = ___0_data;
		int32_t L_23 = ___1_index;
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, L_23, NULL);
		Il2CppChar L_25 = L_24;
		RuntimeObject* L_26 = Box(il2cpp_defaults.char_class, &L_25);
		String_t* L_27;
		L_27 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_26, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_28 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QuotedStringFormatReader_ReadReverseQuoted_m130E54106CBD2C107460DD17684925908001C03A_RuntimeMethod_var)));
	}

IL_0063:
	{
		int32_t L_29 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_0068:
	{
		int32_t L_30 = ___1_index;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}

IL_006c:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var)));
		Il2CppChar L_31 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))))->___Quote;
		Il2CppChar L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_defaults.char_class, &L_32);
		String_t* L_34;
		L_34 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_33, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_35 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QuotedStringFormatReader_ReadReverseQuoted_m130E54106CBD2C107460DD17684925908001C03A_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuotedStringFormatReader_ReadReverseUnQuoted_m8609F7A26AC4EE4D2DBEF477027EF433F1D244F2 (String_t* ___0_data, int32_t ___1_index, bool ___2_permitUnicode, bool ___3_expectCommaDelimiter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;

IL_0000:
	{
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA(L_0, L_1, NULL);
		___1_index = L_2;
		int32_t L_3 = ___1_index;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_4 = ___0_data;
		int32_t L_5 = ___1_index;
		bool L_6 = ___2_permitUnicode;
		int32_t L_7;
		L_7 = QuotedPairReader_CountQuotedChars_m2BE55AE24C01917E2CCD7BDB8255767DC55FF0E3(L_4, L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_9 = ___1_index;
		int32_t L_10 = V_0;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		goto IL_0062;
	}

IL_0021:
	{
		bool L_11 = ___3_expectCommaDelimiter;
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_12 = ___0_data;
		int32_t L_13 = ___1_index;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_15 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Comma;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0066;
		}
	}

IL_0032:
	{
		bool L_16 = ___2_permitUnicode;
		String_t* L_17 = ___0_data;
		int32_t L_18 = ___1_index;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, L_18, NULL);
		bool L_20;
		L_20 = QuotedStringFormatReader_IsValidQtext_m56EDB21ADEB0011B7AB99CA5AE8075FEB52607D4(L_16, L_19, NULL);
		if (L_20)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_21 = ___0_data;
		int32_t L_22 = ___1_index;
		NullCheck(L_21);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_21, L_22, NULL);
		Il2CppChar L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_defaults.char_class, &L_24);
		String_t* L_26;
		L_26 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_25, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_27 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QuotedStringFormatReader_ReadReverseUnQuoted_m8609F7A26AC4EE4D2DBEF477027EF433F1D244F2_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_28 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
	}

IL_0062:
	{
		int32_t L_29 = ___1_index;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_0000;
		}
	}

IL_0066:
	{
		int32_t L_30 = ___1_index;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuotedStringFormatReader_IsValidQtext_m56EDB21ADEB0011B7AB99CA5AE8075FEB52607D4 (bool ___0_allowUnicode, Il2CppChar ___1_ch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___1_ch;
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		int32_t L_1 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Ascii7bitMaxValue;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		bool L_2 = ___0_allowUnicode;
		return L_2;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Qtext;
		Il2CppChar L_4 = ___1_ch;
		NullCheck(L_3);
		Il2CppChar L_5 = L_4;
		uint8_t L_6 = (uint8_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return (bool)L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_006a;
	}

IL_0004:
	{
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_index;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_3 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___CR;
		bool L_4 = V_0;
		if (!((int32_t)(((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_001a;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0065;
	}

IL_001a:
	{
		String_t* L_5 = ___0_data;
		int32_t L_6 = ___1_index;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_8 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___CR;
		bool L_9 = V_0;
		if (!((int32_t)(((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)|(int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_10 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83E9CCD7DD65E416C7C3EC61053CC9CD331CBBAB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA_RuntimeMethod_var)));
	}

IL_0037:
	{
		String_t* L_11 = ___0_data;
		int32_t L_12 = ___1_index;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_14 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___LF;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0049;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0065;
	}

IL_0049:
	{
		String_t* L_15 = ___0_data;
		int32_t L_16 = ___1_index;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_18 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Space;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_19 = ___0_data;
		int32_t L_20 = ___1_index;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_22 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Tab;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_006e;
		}
	}

IL_0065:
	{
		int32_t L_23 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_006a:
	{
		int32_t L_24 = ___1_index;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}

IL_006e:
	{
		bool L_25 = V_0;
		if (!L_25)
		{
			goto IL_007c;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_26 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83E9CCD7DD65E416C7C3EC61053CC9CD331CBBAB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA_RuntimeMethod_var)));
	}

IL_007c:
	{
		int32_t L_27 = ___1_index;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF (String_t* ___0_data, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA(L_0, L_1, NULL);
		___1_index = L_2;
		goto IL_00cc;
	}

IL_0010:
	{
		String_t* L_3 = ___0_data;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = QuotedPairReader_CountQuotedChars_m2BE55AE24C01917E2CCD7BDB8255767DC55FF0E3(L_3, L_4, (bool)1, NULL);
		V_1 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_8 = ___1_index;
		int32_t L_9 = V_1;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		goto IL_00c3;
	}

IL_002b:
	{
		String_t* L_10 = ___0_data;
		int32_t L_11 = ___1_index;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_13 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___EndComment;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		goto IL_00c3;
	}

IL_0044:
	{
		String_t* L_16 = ___0_data;
		int32_t L_17 = ___1_index;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		Il2CppChar L_19 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___StartComment;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var)));
		Il2CppChar L_22 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))))->___StartComment;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_defaults.char_class, &L_23);
		String_t* L_25;
		L_25 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_24, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_26 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF_RuntimeMethod_var)));
	}

IL_0074:
	{
		int32_t L_27 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_00c3;
	}

IL_007b:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		String_t* L_29 = ___0_data;
		int32_t L_30 = ___1_index;
		NullCheck(L_29);
		Il2CppChar L_31;
		L_31 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_29, L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		int32_t L_32 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Ascii7bitMaxValue;
		if ((((int32_t)L_31) > ((int32_t)L_32)))
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_33 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))->___Ctext;
		String_t* L_34 = ___0_data;
		int32_t L_35 = ___1_index;
		NullCheck(L_34);
		Il2CppChar L_36;
		L_36 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_34, L_35, NULL);
		NullCheck(L_33);
		Il2CppChar L_37 = L_36;
		uint8_t L_38 = (uint8_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if (!L_38)
		{
			goto IL_00a3;
		}
	}

IL_009c:
	{
		int32_t L_39 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		goto IL_00c3;
	}

IL_00a3:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_00d3;
		}
	}
	{
		String_t* L_41 = ___0_data;
		int32_t L_42 = ___1_index;
		NullCheck(L_41);
		Il2CppChar L_43;
		L_43 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_41, L_42, NULL);
		Il2CppChar L_44 = L_43;
		RuntimeObject* L_45 = Box(il2cpp_defaults.char_class, &L_44);
		String_t* L_46;
		L_46 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_45, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_47 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_47, L_46, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF_RuntimeMethod_var)));
	}

IL_00c3:
	{
		String_t* L_48 = ___0_data;
		int32_t L_49 = ___1_index;
		int32_t L_50;
		L_50 = WhitespaceReader_ReadFwsReverse_m3C6E0D1A016AC14721DF86854805CC85BD15CCDA(L_48, L_49, NULL);
		___1_index = L_50;
	}

IL_00cc:
	{
		int32_t L_51 = ___1_index;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}

IL_00d3:
	{
		int32_t L_52 = V_0;
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_00f1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var)));
		Il2CppChar L_53 = ((MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailBnfHelper_t2CDB7D0BC24474412570E5D88EB3DE72A847B316_il2cpp_TypeInfo_var))))->___EndComment;
		Il2CppChar L_54 = L_53;
		RuntimeObject* L_55 = Box(il2cpp_defaults.char_class, &L_54);
		String_t* L_56;
		L_56 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7CF26B9A9AA81D4F54FCB3D66D0DD3BEC0D60A)), L_55, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_57 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_57, L_56, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhitespaceReader_ReadCfwsReverse_mCFBCDDAFE25CD70AC967C533B51C083A77B0D0CF_RuntimeMethod_var)));
	}

IL_00f1:
	{
		int32_t L_58 = ___1_index;
		return L_58;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MailAddress__ctor_mF5F4AEC2D7323678C7E72BE2AA3B9CD4F814F49B (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, String_t* ___0_displayName, String_t* ___1_userName, String_t* ___2_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7FD6B173F8DDB3354F28BB648CED69286F416C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___2_domain;
		__this->____host = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____host), (void*)L_0);
		String_t* L_1 = ___1_userName;
		__this->____userName = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userName), (void*)L_1);
		String_t* L_2 = ___0_displayName;
		__this->____displayName = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displayName), (void*)L_2);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_GetEncoding_m979B224460094E241BD5C283BE279886664C9187(_stringLiteralB7FD6B173F8DDB3354F28BB648CED69286F416C9, NULL);
		__this->____displayNameEncoding = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displayNameEncoding), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MailAddress__ctor_mC6FA396A5BAA990FCCBACD753EA397E29DF971A8 (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_address;
		MailAddress__ctor_m2D8BE5D5AF75CAA42F6B709D3108CD5ABFAB152F(__this, L_0, (String_t*)NULL, (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MailAddress__ctor_m2D8BE5D5AF75CAA42F6B709D3108CD5ABFAB152F (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, String_t* ___0_address, String_t* ___1_displayName, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_displayNameEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7FD6B173F8DDB3354F28BB648CED69286F416C9);
		s_Il2CppMethodInitialized = true;
	}
	MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* V_0 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B6_0 = NULL;
	MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* G_B6_1 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B5_0 = NULL;
	MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* G_B5_1 = NULL;
	String_t* G_B8_0 = NULL;
	MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* G_B7_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_address;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailAddress__ctor_m2D8BE5D5AF75CAA42F6B709D3108CD5ABFAB152F_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___0_address;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5896CBBFC90905C75DD54D891BDA98D58E394A45)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MailAddress__ctor_m2D8BE5D5AF75CAA42F6B709D3108CD5ABFAB152F_RuntimeMethod_var)));
	}

IL_003b:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___2_displayNameEncoding;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8 = L_7;
		if (L_8)
		{
			G_B6_0 = L_8;
			G_B6_1 = __this;
			goto IL_004b;
		}
		G_B5_0 = L_8;
		G_B5_1 = __this;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
		L_9 = Encoding_GetEncoding_m979B224460094E241BD5C283BE279886664C9187(_stringLiteralB7FD6B173F8DDB3354F28BB648CED69286F416C9, NULL);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_004b:
	{
		NullCheck(G_B6_1);
		G_B6_1->____displayNameEncoding = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->____displayNameEncoding), (void*)G_B6_0);
		String_t* L_10 = ___1_displayName;
		String_t* L_11 = L_10;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = __this;
			goto IL_005b;
		}
		G_B7_0 = L_11;
		G_B7_1 = __this;
	}
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
	}

IL_005b:
	{
		NullCheck(G_B8_1);
		G_B8_1->____displayName = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->____displayName), (void*)G_B8_0);
		String_t* L_13 = __this->____displayName;
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		if (L_14)
		{
			goto IL_00d7;
		}
	}
	{
		String_t* L_15 = __this->____displayName;
		String_t* L_16;
		L_16 = MailAddressParser_NormalizeOrThrow_m452C43EAA6D36B40B3C51193879EFB01BB42FCCA(L_15, NULL);
		__this->____displayName = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displayName), (void*)L_16);
		String_t* L_17 = __this->____displayName;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)2)))
		{
			goto IL_00d7;
		}
	}
	{
		String_t* L_19 = __this->____displayName;
		NullCheck(L_19);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, 0, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00d7;
		}
	}
	{
		String_t* L_21 = __this->____displayName;
		String_t* L_22 = __this->____displayName;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		NullCheck(L_21);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_21, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00d7;
		}
	}
	{
		String_t* L_25 = __this->____displayName;
		String_t* L_26 = __this->____displayName;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_26, NULL);
		NullCheck(L_25);
		String_t* L_28;
		L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_25, 1, ((int32_t)il2cpp_codegen_subtract(L_27, 2)), NULL);
		__this->____displayName = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displayName), (void*)L_28);
	}

IL_00d7:
	{
		String_t* L_29 = ___0_address;
		MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* L_30;
		L_30 = MailAddressParser_ParseAddress_mF12BAE3F64BC6EF64965E14C2F5901DF4ABF7FB3(L_29, NULL);
		V_0 = L_30;
		MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = L_31->____host;
		__this->____host = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____host), (void*)L_32);
		MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = L_33->____userName;
		__this->____userName = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userName), (void*)L_34);
		String_t* L_35 = __this->____displayName;
		bool L_36;
		L_36 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_35, NULL);
		if (!L_36)
		{
			goto IL_010f;
		}
	}
	{
		MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = L_37->____displayName;
		__this->____displayName = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displayName), (void*)L_38);
	}

IL_010f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddress_get_DisplayName_m0A2747BF562CBB389D9B746A644BE6C248EF7E4E (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____displayName;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddress_get_Address_mF669BEE1774AAA9F3C355A403093DE0F27278146 (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____userName;
		String_t* L_1 = __this->____host;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddress_get_SmtpAddress_m947E57B67AA3F9BFA3C755911FDB75D878D578B3 (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = MailAddress_get_Address_mF669BEE1774AAA9F3C355A403093DE0F27278146(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_0, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MailAddress_ToString_m23DC284AD5706EDFB488ECB2877DC0A36CB2C6D8 (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = MailAddress_get_DisplayName_m0A2747BF562CBB389D9B746A644BE6C248EF7E4E_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2;
		L_2 = MailAddress_get_Address_mF669BEE1774AAA9F3C355A403093DE0F27278146(__this, NULL);
		return L_2;
	}

IL_0014:
	{
		String_t* L_3;
		L_3 = MailAddress_get_DisplayName_m0A2747BF562CBB389D9B746A644BE6C248EF7E4E_inline(__this, NULL);
		String_t* L_4;
		L_4 = MailAddress_get_SmtpAddress_m947E57B67AA3F9BFA3C755911FDB75D878D578B3(__this, NULL);
		String_t* L_5;
		L_5 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_3, _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MailAddress_Equals_m2EE63E87B8F49C2DEB3533A1375A0F6C19F84DFD (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, __this);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_1, L_3, 3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MailAddress_GetHashCode_mA86E0FBA72D5FFC5170F4FBBD417CFD4FDD99C54 (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MailAddress__cctor_mC8B8646424F2EB51398F3EE6B820995FA2B4DE89 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C* L_0 = (EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C*)il2cpp_codegen_object_new(EncodedStreamFactory_t31E77F464C7C3EDA66535133BDB66A39E746918C_il2cpp_TypeInfo_var);
		EncodedStreamFactory__ctor_mA9684320A2A5225AEA9B6DFC96B1DDC82603AEBA(L_0, NULL);
		((MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_StaticFields*)il2cpp_codegen_static_fields_for(MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_il2cpp_TypeInfo_var))->___s_encoderFactory = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_StaticFields*)il2cpp_codegen_static_fields_for(MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F_il2cpp_TypeInfo_var))->___s_encoderFactory), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* CertificateHelper_GetEligibleClientCertificate_m4B460E5344143E0E363A47FED5858D78E4A5E34B (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___0_candidateCerts, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = ___0_candidateCerts;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)NULL;
	}

IL_000a:
	{
		X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_2 = (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)il2cpp_codegen_object_new(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_il2cpp_TypeInfo_var);
		X509Certificate2Collection__ctor_mC7A17C695E7DB906D549A0BF60943D2490F4C2B9(L_2, NULL);
		X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_3 = L_2;
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_4 = ___0_candidateCerts;
		NullCheck(L_3);
		X509CertificateCollection_AddRange_m45914B11721824E8BE7FC2B2FC4ADD28F2C45EDB(L_3, L_4, NULL);
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_5;
		L_5 = CertificateHelper_GetEligibleClientCertificate_m00DC10857ED3F31A4F74A386F172784868FB5E3A(L_3, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* CertificateHelper_GetEligibleClientCertificate_m00DC10857ED3F31A4F74A386F172784868FB5E3A (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___0_candidateCerts, const RuntimeMethod* method) 
{
	X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC* V_0 = NULL;
	X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* V_1 = NULL;
	{
		X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_0 = ___0_candidateCerts;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)NULL;
	}

IL_000a:
	{
		X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_2 = ___0_candidateCerts;
		NullCheck(L_2);
		X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC* L_3;
		L_3 = X509Certificate2Collection_GetEnumerator_m2D2A261B2F68A857C3C8B0037C5E05F10A6761FC(L_2, NULL);
		V_0 = L_3;
		goto IL_002c;
	}

IL_0013:
	{
		X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC* L_4 = V_0;
		NullCheck(L_4);
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_5;
		L_5 = X509Certificate2Enumerator_get_Current_m7D19172490F76C81A7E7DB5AF8D172400BC95B53(L_4, NULL);
		V_1 = L_5;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_6 = V_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = X509Certificate2_get_HasPrivateKey_m561EE07579AC86B96856A73367961AD01DAD8567(L_6, NULL);
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_8 = V_1;
		bool L_9;
		L_9 = CertificateHelper_IsValidClientCertificate_mF8CB7C4FE96D48B396C14565C51008BC370E0937(L_8, NULL);
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_10 = V_1;
		return L_10;
	}

IL_002c:
	{
		X509Certificate2Enumerator_t22D702E84069BAFE855F2A160A391D77A05090EC* L_11 = V_0;
		NullCheck(L_11);
		bool L_12;
		L_12 = X509Certificate2Enumerator_MoveNext_m824241D32F6E1B3FF4CAE0E2B370BB5E32238F19(L_11, NULL);
		if (L_12)
		{
			goto IL_0013;
		}
	}
	{
		return (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHelper_IsValidClientCertificate_mF8CB7C4FE96D48B396C14565C51008BC370E0937 (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___0_cert, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* V_0 = NULL;
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_1 = NULL;
	X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* V_2 = NULL;
	X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* V_3 = NULL;
	{
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_0 = ___0_cert;
		NullCheck(L_0);
		X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* L_1;
		L_1 = X509Certificate2_get_Extensions_m3746E7EB004789DF5AF56AD36209676860901579(L_0, NULL);
		NullCheck(L_1);
		X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* L_2;
		L_2 = X509ExtensionCollection_GetEnumerator_m7F4BDDDF50FD335D3F6A2AB490221D27524BD0BF(L_1, NULL);
		V_0 = L_2;
		goto IL_003d;
	}

IL_000e:
	{
		X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* L_3 = V_0;
		NullCheck(L_3);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_4;
		L_4 = X509ExtensionEnumerator_get_Current_m6057D68B2D7750669A51630A1561FCE7F597E232(L_3, NULL);
		V_1 = L_4;
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_5 = V_1;
		V_2 = ((X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF*)IsInstSealed((RuntimeObject*)L_5, X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var));
		X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* L_7 = V_2;
		bool L_8;
		L_8 = CertificateHelper_IsValidForClientAuthenticationEKU_m4A647A8BA48A7E09E509D392E7299BE37FE0B342(L_7, NULL);
		if (L_8)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_1;
		V_3 = ((X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B*)IsInstSealed((RuntimeObject*)L_9, X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var));
		X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* L_10 = V_3;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* L_11 = V_3;
		bool L_12;
		L_12 = CertificateHelper_IsValidForDigitalSignatureUsage_m8F557DEA13DF9D19B457039F0315F9DBBDB5133D(L_11, NULL);
		if (L_12)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = X509ExtensionEnumerator_MoveNext_mDCF343DCC4699DFB3D6E72D84AF8A6C11AB247C3(L_13, NULL);
		if (L_14)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHelper_IsValidForClientAuthenticationEKU_m4A647A8BA48A7E09E509D392E7299BE37FE0B342 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* ___0_eku, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0B1BB928B058DE0C421F4CC78A66B77C67F6D5);
		s_Il2CppMethodInitialized = true;
	}
	OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* V_0 = NULL;
	{
		X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* L_0 = ___0_eku;
		NullCheck(L_0);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_1;
		L_1 = X509EnhancedKeyUsageExtension_get_EnhancedKeyUsages_m6D1DC16A0828B8407577EE61EA234F1C3859D5CB(L_0, NULL);
		NullCheck(L_1);
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_2;
		L_2 = OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC(L_1, NULL);
		V_0 = L_2;
		goto IL_0027;
	}

IL_000e:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_3 = V_0;
		NullCheck(L_3);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_4;
		L_4 = OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralFE0B1BB928B058DE0C421F4CC78A66B77C67F6D5, NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD(L_7, NULL);
		if (L_8)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHelper_IsValidForDigitalSignatureUsage_m8F557DEA13DF9D19B457039F0315F9DBBDB5133D (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* ___0_ku, const RuntimeMethod* method) 
{
	{
		X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* L_0 = ___0_ku;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F(L_0, NULL);
		return (bool)((((int32_t)((int32_t)((int32_t)L_1&((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* CertificateHelper_GetEligibleClientCertificate_m91706060E33354974FBDD5D1D141AA0C573B4581 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* V_0 = NULL;
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* V_1 = NULL;
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_0 = (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)il2cpp_codegen_object_new(X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6_il2cpp_TypeInfo_var);
		X509Store__ctor_m4BC006F268440F969A1E2550A4884AA9FB4FEB1E(L_0, 5, 1, NULL);
		V_1 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{
				{
					X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_1 = V_1;
					if (!L_1)
					{
						goto IL_0021;
					}
				}
				{
					X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_2 = V_1;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0021:
				{
					return;
				}
			}
		});
		try
		{
			X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_3 = V_1;
			NullCheck(L_3);
			X509Store_Open_mE65F1CB5311705EB955D576295B048C1155CCED8(L_3, 0, NULL);
			X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_4 = V_1;
			NullCheck(L_4);
			X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_5;
			L_5 = X509Store_get_Certificates_m3605E1FE284AD55C48E874C49CD22C11828D2DA0(L_4, NULL);
			V_0 = L_5;
			goto IL_0022;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_6 = V_0;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_7;
		L_7 = CertificateHelper_GetEligibleClientCertificate_m00DC10857ED3F31A4F74A386F172784868FB5E3A(L_6, NULL);
		return L_7;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* SslClientAuthenticationOptions_get_LocalCertificateSelectionCallback_mE3D90047E657C138925CEF79D5DE4E2741DD51D2 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_0 = __this->___U3CLocalCertificateSelectionCallbackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_LocalCertificateSelectionCallback_m80ABC92CAEC851149877E117BCE50E1169B7BDD6 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___0_value, const RuntimeMethod* method) 
{
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_0 = ___0_value;
		__this->___U3CLocalCertificateSelectionCallbackU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocalCertificateSelectionCallbackU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* SslClientAuthenticationOptions_get_RemoteCertificateValidationCallback_m3A570E52767539300FC7F4FAFCC1638101748CC2 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_0 = __this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SslClientAuthenticationOptions_get_TargetHost_mC4CF1905E7B4F8193544D4997E305406B976A797 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetHostU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_TargetHost_m0D8FF94F267DC51F2BDE6E1C94C2CD67783C4019 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTargetHostU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetHostU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* SslClientAuthenticationOptions_get_ClientCertificates_mD6898001726E82ADD9E3083D78BD05DB619B313C (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = __this->___U3CClientCertificatesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_ClientCertificates_m08B053F1C158912EEA43A4A28D37A740041CA78B (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___0_value, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = ___0_value;
		__this->___U3CClientCertificatesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientCertificatesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_CertificateRevocationCheckMode_m5DB15346690DAC5A8F610AA8C7DEC7F2DFC29DE9 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215B9008FEB54933AF219588889451A0CB610D34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73E7438EC9EFF139A2E1CEA81F03B87F9EF5CF0A)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslClientAuthenticationOptions_set_CertificateRevocationCheckMode_m5DB15346690DAC5A8F610AA8C7DEC7F2DFC29DE9_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___0_value;
		__this->____checkCertificateRevocation = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_EncryptionPolicy_m008E6F28D3C4BFEFFB32A9BEA6AEF1C2B53F1C77 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215B9008FEB54933AF219588889451A0CB610D34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9340620E0F239BC39D9B1AA9CCF6119A0BB3FF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslClientAuthenticationOptions_set_EncryptionPolicy_m008E6F28D3C4BFEFFB32A9BEA6AEF1C2B53F1C77_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___0_value;
		__this->____encryptionPolicy = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslClientAuthenticationOptions_get_EnabledSslProtocols_mEC43F31DCFB3322900792809C72AC48070A9D93B (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____enabledSslProtocols;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions_set_EnabledSslProtocols_mC0D304F69A5DC05292B87E00A73415BC83A632D5 (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____enabledSslProtocols = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslClientAuthenticationOptions__ctor_mFFA8C3E39592A8376E7C3F6AC6FB89A6B7A702CD (SslClientAuthenticationOptions_tA5277DAACAFB33887D2513D9399C5154B0D5CBC9* __this, const RuntimeMethod* method) 
{
	{
		__this->____allowRenegotiation = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslServerAuthenticationOptions_get_ClientCertificateRequired_mD383FFDB61C59FD5568DFE8B6CDED914AB9977B3 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CClientCertificateRequiredU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_ClientCertificateRequired_m30FD56EF277CCC34618D4BE98CFC4B541A8AF822 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CClientCertificateRequiredU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* SslServerAuthenticationOptions_get_ServerCertificate_m7B4C5BBA8FE842496FA13E51D45BE6833671E980 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_0 = __this->___U3CServerCertificateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_ServerCertificate_mBA59C3095AB36F693A8DDF611E7EBE5D2AAC51E1 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___0_value, const RuntimeMethod* method) 
{
	{
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_0 = ___0_value;
		__this->___U3CServerCertificateU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerCertificateU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslServerAuthenticationOptions_get_EnabledSslProtocols_m31B8C712D5D3A161E9EC3CE855D7FA44F8E98012 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____enabledSslProtocols;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_EnabledSslProtocols_mC66D59B188A010F1B1726EA34BF61E6DFE5A51A0 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____enabledSslProtocols = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_CertificateRevocationCheckMode_mCB4596F4D3F547C63E3029612C713F90EF28854C (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215B9008FEB54933AF219588889451A0CB610D34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73E7438EC9EFF139A2E1CEA81F03B87F9EF5CF0A)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslServerAuthenticationOptions_set_CertificateRevocationCheckMode_mCB4596F4D3F547C63E3029612C713F90EF28854C_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___0_value;
		__this->____checkCertificateRevocation = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions_set_EncryptionPolicy_m88D26CB33718B5E589647926F4264CFF5AC0E909 (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215B9008FEB54933AF219588889451A0CB610D34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9340620E0F239BC39D9B1AA9CCF6119A0BB3FF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslServerAuthenticationOptions_set_EncryptionPolicy_m88D26CB33718B5E589647926F4264CFF5AC0E909_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___0_value;
		__this->____encryptionPolicy = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslServerAuthenticationOptions__ctor_mDF5CCA0826DF6EFA4ECEDC6CB49A10B96D0A7EEF (SslServerAuthenticationOptions_tB71339A38CEE0BA50AA270950FA76FD79E4B76B4* __this, const RuntimeMethod* method) 
{
	{
		__this->____allowRenegotiation = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357 (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_innerStream, bool ___1_leaveInnerStreamOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_innerStream;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_innerStream;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null;
		if ((!(((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_1) == ((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_2))))
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var)));
	}

IL_001c:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___0_innerStream;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(7, L_4);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_innerStream;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(10, L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}

IL_002c:
	{
		String_t* L_8;
		L_8 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F40F39B9F659411903AC93DF93E8658291E5522)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var)));
	}

IL_0041:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___0_innerStream;
		__this->____InnerStream = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____InnerStream), (void*)L_10);
		bool L_11 = ___1_leaveInnerStreamOpen;
		__this->____LeaveStreamOpen = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7 (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____InnerStream;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{
				bool L_0 = ___0_disposing;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				bool L_1 = ___0_disposing;
				if (!L_1)
				{
					goto IL_0023_1;
				}
			}
			{
				bool L_2 = __this->____LeaveStreamOpen;
				if (!L_2)
				{
					goto IL_0018_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____InnerStream;
				NullCheck(L_3);
				VirtualActionInvoker0::Invoke(22, L_3);
				goto IL_002d;
			}

IL_0018_1:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->____InnerStream;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(20, L_4);
			}

IL_0023_1:
			{
				goto IL_002d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
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
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_Multicast(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* currentDelegate = reinterpret_cast<LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859*>(delegatesToInvoke[i]);
		typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInst(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStatic(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenVirtual(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	return VirtualFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInterface(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	return InterfaceFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericVirtual(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	return GenericVirtualFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(method, ___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericInterface(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	return GenericInterfaceFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(method, ___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalCertificateSelectionCallback__ctor_mE4F3A8BFF483881C2634112BB581CA4B07809805 (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_Multicast(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* currentDelegate = reinterpret_cast<RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_sender, ___1_certificate, ___2_chain, ___3_sslPolicyErrors, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInst(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef bool (*FunctionPointerType) (RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_certificate, ___2_chain, ___3_sslPolicyErrors, method);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStatic(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_certificate, ___2_chain, ___3_sslPolicyErrors, method);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenVirtual(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	return VirtualFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_certificate, ___2_chain, ___3_sslPolicyErrors);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInterface(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	return InterfaceFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_certificate, ___2_chain, ___3_sslPolicyErrors);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericVirtual(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	return GenericVirtualFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(method, ___0_sender, ___1_certificate, ___2_chain, ___3_sslPolicyErrors);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericInterface(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	return GenericInterfaceFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(method, ___0_sender, ___1_certificate, ___2_chain, ___3_sslPolicyErrors);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_certificate, ___2_chain, ___3_sslPolicyErrors, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_Multicast(LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___2_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_acceptableIssuers, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* currentDelegate = reinterpret_cast<LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2*>(delegatesToInvoke[i]);
		typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_targetHost, ___1_localCertificates, ___2_remoteCertificate, ___3_acceptableIssuers, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenInst(LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___2_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_acceptableIssuers, const RuntimeMethod* method)
{
	NullCheck(___0_targetHost);
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_targetHost, ___1_localCertificates, ___2_remoteCertificate, ___3_acceptableIssuers, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenStatic(LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___2_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_acceptableIssuers, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_targetHost, ___1_localCertificates, ___2_remoteCertificate, ___3_acceptableIssuers, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalCertSelectionCallback__ctor_mA7B36924E69A918A71649CFF95CB361E33317C38 (LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertSelectionCallback_Invoke_m3AD956B5D53937117BD3E036068B49615337B5B9 (LocalCertSelectionCallback_t3AB79A8AA642074A3EF886118963EEA3CCABABE2* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___2_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_acceptableIssuers, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_targetHost, ___1_localCertificates, ___2_remoteCertificate, ___3_acceptableIssuers, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_Multicast(ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___0_hostName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* currentDelegate = reinterpret_cast<ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654*>(delegatesToInvoke[i]);
		typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_hostName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenInst(ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___0_hostName, const RuntimeMethod* method)
{
	NullCheck(___0_hostName);
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_hostName, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenStatic(ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___0_hostName, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_hostName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerCertSelectionCallback__ctor_m06DDCEDF49D7A5F0F8494E3E960C7DFC64C64946 (ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ServerCertSelectionCallback_Invoke_mB6A207E1A8CA76F667A242B68943297741CC6EC1 (ServerCertSelectionCallback_t653386CAEAE0236FCF61A92963AB1646BB23C654* __this, String_t* ___0_hostName, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_hostName, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95(__this, NULL);
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SslStream_get_InternalTargetHost_m9434AC1422D463C25B5C5313AC9BE45B095136AE (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95(__this, NULL);
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MobileAuthenticatedStream_get_TargetHost_m572DA701CB3CE3FA4006D5745F9A3B9A52739CAB_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* SslStream_GetProvider_mE1D070C13DB759156659F57AB9DF4D2E397FD85B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* L_0;
		L_0 = MonoTlsProviderFactory_GetProvider_m8684E3A1AFB043FA00DEC4BCF95F8B288C136936(NULL);
		return ((MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017*)CastclassClass((RuntimeObject*)L_0, MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_m9096E6E85E60C4D205A26FA43D121FECEC735484 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_innerStream, bool ___1_leaveInnerStreamOpen, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___2_userCertificateValidationCallback, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_innerStream;
		bool L_1 = ___1_leaveInnerStreamOpen;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_2 = ___2_userCertificateValidationCallback;
		SslStream__ctor_mB4497903594E8A33C14B9A4C4DAB7B16BA2E9B2C(__this, L_0, L_1, L_2, (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_mB4497903594E8A33C14B9A4C4DAB7B16BA2E9B2C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_innerStream, bool ___1_leaveInnerStreamOpen, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___2_userCertificateValidationCallback, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___3_userCertificateSelectionCallback, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_innerStream;
		bool L_1 = ___1_leaveInnerStreamOpen;
		AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357(__this, L_0, L_1, NULL);
		MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* L_2;
		L_2 = SslStream_GetProvider_mE1D070C13DB759156659F57AB9DF4D2E397FD85B(NULL);
		__this->___provider = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___provider), (void*)L_2);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_3;
		L_3 = MonoTlsSettings_CopyDefaultSettings_m4B0A3E8B7D106FA7F0D243FB2A0A4B115CD21942(NULL);
		__this->___settings = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings), (void*)L_3);
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_4 = ___2_userCertificateValidationCallback;
		SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D(__this, L_4, NULL);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_5 = ___3_userCertificateSelectionCallback;
		SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B(__this, L_5, NULL);
		MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* L_6 = __this->___provider;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___0_innerStream;
		bool L_8 = ___1_leaveInnerStreamOpen;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_9 = __this->___settings;
		NullCheck(L_6);
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_10;
		L_10 = VirtualFuncInvoker4< MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*, SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, bool, MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* >::Invoke(11, L_6, __this, L_7, L_8, L_9);
		__this->___impl = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl), (void*)L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_m222C4F58E1CBA2382263444001AA70862B2EC462 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_innerStream, bool ___1_leaveInnerStreamOpen, MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* ___2_provider, MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___3_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_innerStream;
		bool L_1 = ___1_leaveInnerStreamOpen;
		AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357(__this, L_0, L_1, NULL);
		MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* L_2 = ___2_provider;
		__this->___provider = ((MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017*)CastclassClass((RuntimeObject*)L_2, MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___provider), (void*)((MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017*)CastclassClass((RuntimeObject*)L_2, MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017_il2cpp_TypeInfo_var)));
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_3 = ___3_settings;
		NullCheck(L_3);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_4;
		L_4 = MonoTlsSettings_Clone_mC4F9A27889ADD0B275018B32BCDA67C30865EA7D(L_3, NULL);
		__this->___settings = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings), (void*)L_4);
		__this->___explicitSettings = (bool)1;
		MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* L_5 = __this->___provider;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_innerStream;
		bool L_7 = ___1_leaveInnerStreamOpen;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_8 = ___3_settings;
		NullCheck(L_5);
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_9;
		L_9 = VirtualFuncInvoker4< MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*, SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, bool, MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* >::Invoke(11, L_5, __this, L_6, L_7, L_8);
		__this->___impl = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___0_callback, const RuntimeMethod* method) 
{
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_0 = __this->___validationCallback;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_1 = ___0_callback;
		__this->___validationCallback = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___validationCallback), (void*)L_1);
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_2 = __this->___settings;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_3 = ___0_callback;
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_4;
		L_4 = CallbackHelpers_PublicToMono_m6404DAFAD159E4D91FB5822B4855B6A8F05777EE(L_3, NULL);
		NullCheck(L_2);
		MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline(L_2, L_4, NULL);
		return;
	}

IL_0021:
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_5 = ___0_callback;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_6 = __this->___validationCallback;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_7 = ___0_callback;
		bool L_8;
		L_8 = Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_0049;
		}
	}

IL_0032:
	{
		bool L_9 = __this->___explicitSettings;
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_10 = __this->___settings;
		NullCheck(L_10);
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_11;
		L_11 = MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline(L_10, NULL);
		if (!((int32_t)((int32_t)L_9&((!(((RuntimeObject*)(MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0))))
		{
			goto IL_005e;
		}
	}

IL_0049:
	{
		String_t* L_12;
		L_12 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94EC39D9CD015C12CA91AF28F761F4059A1C6437)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F581DC31922CB8BA16D8D1268547106C0D2A599)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_SetAndVerifyValidationCallback_m6FA4BE931FA1C7BC5D175B4E1CA2959742FA9C9D_RuntimeMethod_var)));
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CSetAndVerifySelectionCallbackU3Eb__0_mADCFBC85C66A800C57CD2CECA4CDB6A9E5BB020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_0 = (U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_mBE4019B5D6D20FC100DAF52B1172ACF497046370(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_1 = V_0;
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_2 = ___0_callback;
		NullCheck(L_1);
		L_1->___callback = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback), (void*)L_2);
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this), (void*)__this);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_4 = __this->___selectionCallback;
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_5 = V_0;
		NullCheck(L_5);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_6 = L_5->___callback;
		__this->___selectionCallback = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectionCallback), (void*)L_6);
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_7 = V_0;
		NullCheck(L_7);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_8 = L_7->___callback;
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_9 = __this->___settings;
		NullCheck(L_9);
		MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline(L_9, (MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3*)NULL, NULL);
		return;
	}

IL_003d:
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_10 = __this->___settings;
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_11 = V_0;
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_12 = (MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3*)il2cpp_codegen_object_new(MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3_il2cpp_TypeInfo_var);
		MonoLocalCertificateSelectionCallback__ctor_mCA81824D698BD5808E501A9AC4DA99758B69D3FC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CSetAndVerifySelectionCallbackU3Eb__0_mADCFBC85C66A800C57CD2CECA4CDB6A9E5BB020D_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline(L_10, L_12, NULL);
		return;
	}

IL_0055:
	{
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_13 = V_0;
		NullCheck(L_13);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_14 = L_13->___callback;
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_15 = __this->___selectionCallback;
		U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* L_16 = V_0;
		NullCheck(L_16);
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_17 = L_16->___callback;
		bool L_18;
		L_18 = Delegate_op_Inequality_mA9EAADBA0C976289CCD49DC5A4BEDBB060B579E0(L_15, L_17, NULL);
		if (L_18)
		{
			goto IL_0085;
		}
	}

IL_0070:
	{
		bool L_19 = __this->___explicitSettings;
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* L_20 = __this->___settings;
		NullCheck(L_20);
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_21;
		L_21 = MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline(L_20, NULL);
		if (!L_21)
		{
			goto IL_009a;
		}
	}

IL_0085:
	{
		String_t* L_22;
		L_22 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94EC39D9CD015C12CA91AF28F761F4059A1C6437)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7432BC139FBCA09AC74A0F2BAE3FBB728A59E72D)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_SetAndVerifySelectionCallback_m8B82CA433CF92AD113F606ACE7229D442587DA0B_RuntimeMethod_var)));
	}

IL_009a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_AuthenticateAsClient_mB88736B524C5E2095C51B96634E38E38D759853C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_clientCertificates, int32_t ___2_enabledSslProtocols, bool ___3_checkCertificateRevocation, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		String_t* L_1 = ___0_targetHost;
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_2 = ___1_clientCertificates;
		int32_t L_3 = ___2_enabledSslProtocols;
		bool L_4 = ___3_checkCertificateRevocation;
		NullCheck(L_0);
		MobileAuthenticatedStream_AuthenticateAsClient_mEB1237B52A4AB1FF3D7D3E52F61CE78A744973FC(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SslStream_BeginAuthenticateAsClient_mC26B4A47157FFFB8015EB46AB417452E886A215F (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_clientCertificates, int32_t ___2_enabledSslProtocols, bool ___3_checkCertificateRevocation, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_asyncCallback, RuntimeObject* ___5_asyncState, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		String_t* L_1 = ___0_targetHost;
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_2 = ___1_clientCertificates;
		int32_t L_3 = ___2_enabledSslProtocols;
		bool L_4 = ___3_checkCertificateRevocation;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = MobileAuthenticatedStream_AuthenticateAsClientAsync_mBD8A0E7FFAFDE608063E545EF057304AF2C35EF2(L_0, L_1, L_2, L_3, L_4, NULL);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_6 = ___4_asyncCallback;
		RuntimeObject* L_7 = ___5_asyncState;
		RuntimeObject* L_8;
		L_8 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_EndAuthenticateAsClient_mE0D4B8AC81E851403DDA1819C19539F94386D1FE (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_AuthenticateAsServer_m5573B24BAE2B574D3AA2023E1070198776919130 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___0_serverCertificate, bool ___1_clientCertificateRequired, int32_t ___2_enabledSslProtocols, bool ___3_checkCertificateRevocation, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_1 = ___0_serverCertificate;
		bool L_2 = ___1_clientCertificateRequired;
		int32_t L_3 = ___2_enabledSslProtocols;
		bool L_4 = ___3_checkCertificateRevocation;
		NullCheck(L_0);
		MobileAuthenticatedStream_AuthenticateAsServer_m38A5035F798D754F9C460A3C4E2B90B673DD9091(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SslStream_AuthenticateAsClientAsync_mAD6DEB8ADE693F969D039B19C19A85F13A2DCB23 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, String_t* ___0_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_clientCertificates, int32_t ___2_enabledSslProtocols, bool ___3_checkCertificateRevocation, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		String_t* L_1 = ___0_targetHost;
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_2 = ___1_clientCertificates;
		int32_t L_3 = ___2_enabledSslProtocols;
		bool L_4 = ___3_checkCertificateRevocation;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = MobileAuthenticatedStream_AuthenticateAsClientAsync_mBD8A0E7FFAFDE608063E545EF057304AF2C35EF2(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_IsAuthenticated_m5056C714711944DA54B35F6F2A3025A720B49290 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(40, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* SslStream_get_LocalCertificate_mA79551323D9A742DA85F9377868860CDABB3C1AA (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_1;
		L_1 = MobileAuthenticatedStream_get_LocalCertificate_m59FF8438D988F2CE633B454CE2B54D614E6C50EF(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanSeek_mA98FD41EDB70B03DB44F714CE952E128CA9D9B4B (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanRead_m0B2ED5711B4D7C796529F56D7039AD546571FEF2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_1 = __this->___impl;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanTimeout_m92F31A9B8D6C1010B59BE8FECD10CFA3B880FEFF (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(9, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanWrite_mCBCABFAC940539066F34E4480E52E07CA06DA7CE (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_1 = __this->___impl;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(10, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslStream_get_ReadTimeout_m75B9430F39F610082318B1D37925CA4B651F1E12 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(14, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_set_ReadTimeout_m0043E5CDEDC5690A118A429F79CF54DC071F895F (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(15, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslStream_get_WriteTimeout_mDC207A2CBAD4D969AC4924A0704242936086D0FF (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_set_WriteTimeout_m316C6CCEC0BE604E8D0A05328FBAB4D946CF3409 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(17, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_get_Length_mD6515D77DBB57912C598761F67C321B6B16E129C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_get_Position_mD2DBB36BA22F4620B635557B5748E0928F28B6A2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetLength_m3B8BAE2F8203BB823F1E934195F50842A46E5643 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		int64_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(33, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SslStream_FlushAsync_mF90FEDB78373A361409477F77B3B6F1BBB8F6818 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline(__this, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancellationToken;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = VirtualFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(23, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Flush_m61B328FCFEB939DE23740823CE3EB7E8DF3B14A4 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(22, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FE6AA6EF03FB6550152903A7B201A6108F728DB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Dispose_m187B76F54E2471469F5B62B8DDB33E11E40EE397 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{
				bool L_0 = ___0_disposing;
				AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F(__this, L_0, NULL);
				return;
			}
		});
		try
		{
			{
				MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_1 = __this->___impl;
				bool L_2 = ___0_disposing;
				if (!((int32_t)(((!(((RuntimeObject*)(MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)&(int32_t)L_2)))
				{
					goto IL_001f_1;
				}
			}
			{
				MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_3 = __this->___impl;
				NullCheck(L_3);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
				__this->___impl = (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___impl), (void*)(MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E*)NULL);
			}

IL_001f_1:
			{
				goto IL_0029;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslStream_Read_mEAFC2AA192D9EAF401E2B067395EA08EDC5FB47E (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Write_mCF650FDF725E1AAEDC462A016A38E535F7210F3C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37, L_0, L_1, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* SslStream_ReadAsync_m0F251A72A8D1C8C41A49CC99AE55D8D0F96A956C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		NullCheck(L_0);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5;
		L_5 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(26, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SslStream_WriteAsync_m8211FC8F3FF4552E897516BE6CD70923848B89C3 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(30, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SslStream_BeginRead_m716BC242891C530ECB08DA4989AE27EEBAC71C98 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = Stream_ReadAsync_m734E5C146A1217C9E8FEC56ABDBD2AC33F5F8F87(L_0, L_1, L_2, L_3, NULL);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___3_callback;
		RuntimeObject* L_6 = ___4_state;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslStream_EndRead_m881FE67FB5376508CBB50A96ED65BC672FB3A7A0 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		int32_t L_1;
		L_1 = TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED(L_0, TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SslStream_BeginWrite_m66F3B2CDAAE0E1FD662552A8D1ECAC889F2AD2D0 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D(L_0, L_1, L_2, L_3, NULL);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___3_callback;
		RuntimeObject* L_6 = ___4_state;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_EndWrite_m78C915054198C80ECEE67CBB07D782E10686BA61 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED(L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mBE4019B5D6D20FC100DAF52B1172ACF497046370 (U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* U3CU3Ec__DisplayClass21_0_U3CSetAndVerifySelectionCallbackU3Eb__0_mADCFBC85C66A800C57CD2CECA4CDB6A9E5BB020D (U3CU3Ec__DisplayClass21_0_t651FDD00AC35BAE47495F8C7D934432BEC7A178C* __this, String_t* ___0_t, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___1_lc, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___2_rc, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_ai, const RuntimeMethod* method) 
{
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_0 = __this->___callback;
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_1 = __this->___U3CU3E4__this;
		String_t* L_2 = ___0_t;
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_3 = ___1_lc;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_4 = ___2_rc;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___3_ai;
		NullCheck(L_0);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_6;
		L_6 = LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_inline(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_parentElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_configContext, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MailAddress_get_DisplayName_m0A2747BF562CBB389D9B746A644BE6C248EF7E4E_inline (MailAddress_t543FDACEABCE85F9DE9586D333CF45D6259AB51F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____displayName;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MobileAuthenticatedStream_get_TargetHost_m572DA701CB3CE3FA4006D5745F9A3B9A52739CAB_inline (MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTargetHostU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_RemoteCertificateValidationCallback_m6CEA8A6E38C85A96C2D26613407C13DD4F965C87_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* ___0_value, const RuntimeMethod* method) 
{
	{
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_0 = ___0_value;
		__this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* MonoTlsSettings_get_RemoteCertificateValidationCallback_mE07825B4A75DAE2A4BB5037D504A36311814446C_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		MonoRemoteCertificateValidationCallback_t1A389B61998873F6B9A2EE7A11C36333A8AECCA0* L_0 = __this->___U3CRemoteCertificateValidationCallbackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoTlsSettings_set_ClientCertificateSelectionCallback_mB404DFD0C0475254CC129740A472D6D9615C56FD_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* ___0_value, const RuntimeMethod* method) 
{
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_0 = ___0_value;
		__this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* MonoTlsSettings_get_ClientCertificateSelectionCallback_mCFE63487D867109AD1AF856ECC8BA0996C0AA605_inline (MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* __this, const RuntimeMethod* method) 
{
	{
		MonoLocalCertificateSelectionCallback_t34F7772BA5ECE38E6CBD4C311F579DD1D4724DE3* L_0 = __this->___U3CClientCertificateSelectionCallbackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____InnerStream;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_inline (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___0_sender, String_t* ___1_targetHost, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___2_localCertificates, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___3_remoteCertificate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_acceptableIssuers, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_targetHost, ___2_localCertificates, ___3_remoteCertificate, ___4_acceptableIssuers, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
