#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Firebase.Analytics.Parameter[]
struct ParameterU5BU5D_t81CBD4DE635765712A8DEFFAC5589D49EB2B0D4D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// Firebase.Analytics.Parameter
struct Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_m7471CF468EDA14ADD7774C477ED09132EB42DD44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_m8DD03033C87174E128C857C988EB1F0B04945394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_mA4D0DA0B6552AA0DEE1D2C369B9EB2349D95ADB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventAdImpression_m9B0448EEB7F949B1DAACBE63926A39BE805193DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventAppOpen_m2854D61AA6B0BEBE7FC639D29225EE9C71CAB023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventEarnVirtualCurrency_m0CA7CFD194DE850415EE55F5424AD493261E31F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventLevelEnd_mA551BD86E8B42CBB26A77BB01B6B3332DFE576D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventLevelStart_mD56A295BEB6DC59B02D9343248FE88348BE26F4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventPostScore_m04D5461BABBF8360B95B418B38D70138A2046DBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventPurchase_m337427A343D5EEDAB0E61AA23754FD11099EA810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventScreenView_m6DB44B1DD2FCF56C7B064B4D6D814A971F183FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventSignUp_m57939429A5597F91E54658CB45FD672245C316F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventSpendVirtualCurrency_m30CC74CF9F6871BC09736353B0D3C746A68D6C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventUnlocAchievement_m893131B428FD7E44AB1C870F29C1DBFEA9BDDF88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterAchievementId_mF7DBB149E736E1AA1B2F8C230A7680C1697C3622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterItemName_mFD3F396F7FDB5DB0DB5BBC46E91FCF798FF15149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterLevel_m50F7425985D05062B48D8A68DACB894F7E2B6FB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterMethod_m31EF08A11633511460C5601D3C97026AD68F28C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterScore_mFE2A574932494EDC9C23E283F34F4C6AEF7B1DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterValue_mC1C78C94338AC69A99499C39FAC49F877B334ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterVirtualCurrencyName_m99FF523FD04DD8CAAF232838D9D7DBFFC59FB7E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parameter__ctor_m2AFD8664E1B9E31DD57190F498FE7575BE0A2F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parameter__ctor_m9A98460539AEC9C5E001CA96F0F04A6AC27FF87C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
struct ParameterU5BU5D_t81CBD4DE635765712A8DEFFAC5589D49EB2B0D4D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB6332CCD6AF7F51765DD6F6FEAA4DD034DBF47EC 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Firebase.Analytics.FirebaseAnalytics
struct FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC  : public RuntimeObject
{
public:

public:
};

struct FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_StaticFields
{
public:
	// Firebase.FirebaseApp Firebase.Analytics.FirebaseAnalytics::app
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app_0;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_StaticFields, ___app_0)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_0), (void*)value);
	}
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE
struct FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099  : public RuntimeObject
{
public:

public:
};

struct FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_StaticFields
{
public:
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper Firebase.Analytics.FirebaseAnalyticsPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609 * ___swigExceptionHelper_0;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper Firebase.Analytics.FirebaseAnalyticsPINVOKE::swigStringHelper
	SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields
{
public:
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___applicationDelegate_0;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___arithmeticDelegate_1;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___divideByZeroDelegate_2;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___indexOutOfRangeDelegate_3;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___invalidCastDelegate_4;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___invalidOperationDelegate_5;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___ioDelegate_6;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___nullReferenceDelegate_7;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___outOfMemoryDelegate_8;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___overflowDelegate_9;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___systemDelegate_10;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentDelegate_11;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentNullDelegate_12;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException
struct SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields
{
public:
	// System.Int32 Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject * ___exceptionsLock_2;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}

	inline static int32_t get_offset_of_exceptionsLock_2() { return static_cast<int32_t>(offsetof(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields, ___exceptionsLock_2)); }
	inline RuntimeObject * get_exceptionsLock_2() const { return ___exceptionsLock_2; }
	inline RuntimeObject ** get_address_of_exceptionsLock_2() { return &___exceptionsLock_2; }
	inline void set_exceptionsLock_2(RuntimeObject * value)
	{
		___exceptionsLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionsLock_2), (void*)value);
	}
};

struct SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields
{
public:
	// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_StaticFields
{
public:
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_13;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_13)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_13() const { return ___appPlatform_13; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_13() { return &___appPlatform_13; }
	inline void set_appPlatform_13(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_13), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_11;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_12;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_11)); }
	inline int32_t get_CheckDependenciesThread_11() const { return ___CheckDependenciesThread_11; }
	inline int32_t* get_address_of_CheckDependenciesThread_11() { return &___CheckDependenciesThread_11; }
	inline void set_CheckDependenciesThread_11(int32_t value)
	{
		___CheckDependenciesThread_11 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_12)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_12() const { return ___CheckDependenciesThreadLock_12; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_12() { return &___CheckDependenciesThreadLock_12; }
	inline void set_CheckDependenciesThreadLock_12(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_12), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// Firebase.Analytics.Parameter
struct Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Analytics.Parameter::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Firebase.Analytics.Parameter[]
struct ParameterU5BU5D_t81CBD4DE635765712A8DEFFAC5589D49EB2B0D4D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * m_Items[1];

public:
	inline Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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



// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventAdImpression_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventAdImpression_get_mD95F54D81310EEA4E3399328F54783101AF5DE16 (const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventAppOpen_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventAppOpen_get_mE8F9DAEEE5F024AF05EADC93215607A3C53413E1 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventEarnVirtualCurrency_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventEarnVirtualCurrency_get_mBDC51A5F4499C3638DF31D0E3208C4A9441CD134 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventLevelEnd_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventLevelEnd_get_mB19842D33A61CE948EB0665E79D2A76F77359538 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventLevelStart_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventLevelStart_get_m68FAFC9C05D412ACAC7078B1D9587EF8D4E563F1 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventPostScore_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventPostScore_get_mB6F114BABA7D5F5701B84E0F036FDD39767BB536 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventPurchase_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventPurchase_get_m9BCB4260F952519FE26347F5EF38AF3720DE7653 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventScreenView_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventScreenView_get_m5D08C300D3091FCBC3ADFEC1CFF21D3661F5FF19 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventSignUp_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventSignUp_get_m77C1DF3C0D6DD18A1DDA163BB8A9DA5452D45DE3 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventSpendVirtualCurrency_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventSpendVirtualCurrency_get_mF3277C6A66D082CC5DB79ED0FC6FF6B1ECC2E981 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventUnlockAchievement_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventUnlockAchievement_get_mFFF0275D293A3BD7E93EC6A49A41A09DB2515724 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterAchievementId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterAchievementId_get_m0A20086098AC8EB39E429395B93016A8B44350C0 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterItemName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterItemName_get_m72D918252C30B61A976A45D81BDA079A137823A0 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterLevel_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterLevel_get_m64158CEB7BAD07E83F10134F1F31B070D237F310 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterMethod_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterMethod_get_m34F756CB5469D0A963F9E0B6FDDB61420010B293 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterScore_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterScore_get_m52712643291D07D1172D0EBDA22BB638CCC217B3 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterValue_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterValue_get_m3DC7B29A4ACE53566998931D55110D16FF58D4E4 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterVirtualCurrencyName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterVirtualCurrencyName_get_mEE30C148E32BB77118F9A45540466DD30E472EFE (const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::LogEvent__SWIG_3(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_LogEvent__SWIG_3_m3B89F627AE0705BEEA1980BB8F9CD8B2729FF9E3 (String_t* ___jarg10, String_t* ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::LogEvent__SWIG_4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_LogEvent__SWIG_4_m16C33510FC4D99D3DE5D5EE294ECEC3B2188FA76 (String_t* ___jarg10, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::getCPtr(Firebase.Analytics.Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  Parameter_getCPtr_mD0DDB8B367E483D10327798DFA22A9AFEC58F654 (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::op_Explicit(System.Runtime.InteropServices.HandleRef)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_op_Explicit_mAA2F9DBE61211508BC85C91A7A6BFA28EA6785BB_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___value0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::LogEvent__SWIG_5(System.String,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_LogEvent__SWIG_5_mE52899152969EF1FB42EC26DAD7BAE9F49884E26 (String_t* ___jarg10, intptr_t ___arg1, int32_t ___jarg22, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mCCBC46A1892117410E3FE51A3E45950AF17AB4EE (SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609 * __this, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mDEC657E2EDF40438D1EA9B8036CC40847BD1684F (SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.Parameter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Dispose_mEE755BE0CDD28FC44A666580B60DDB10C79F73E3 (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::delete_Parameter(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_delete_Parameter_mE43722FE2230A5480BB5B02D12C7183965D308E2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::new_Parameter__SWIG_0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_0_mAFEAB2B10DAD230641CD31408BB622BD64FFB3EC (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Analytics.Parameter::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m8AB3915C10EB74EBE1C9BC68F1B9B572BF96755E (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::new_Parameter__SWIG_1(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_1_m8682DC03AA27AE362D23F4BD3E7BEDF353762992 (String_t* ___jarg10, int64_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918 (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14 (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7 (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m5E18E41E6216C6F69404A939F29640DD2DE32ED9 (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_mCC740BF6084AE679AB4BCD455352BA10A28861DF (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___applicationDelegate0, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___arithmeticDelegate1, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___divideByZeroDelegate2, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___indexOutOfRangeDelegate3, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___invalidCastDelegate4, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___invalidOperationDelegate5, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___ioDelegate6, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___nullReferenceDelegate7, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___outOfMemoryDelegate8, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___overflowDelegate9, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_m9487FF26245C99F77EE5FFBA4A2B526FE7CDE818 (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentDelegate0, ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentNullDelegate1, ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mD7B738AA3D55528E45298820D449A71A59A58254 (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m271565E898E004E0A6CBEB43D5C8A5CFFD24AF9A (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * ___stringDelegate0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventAdImpression_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventAppOpen_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventEarnVirtualCurrency_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventLevelEnd_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventLevelStart_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventPostScore_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventPurchase_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventScreenView_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventSignUp_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventSpendVirtualCurrency_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kEventUnlockAchievement_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kParameterAchievementId_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kParameterItemName_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kParameterLevel_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kParameterMethod_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kParameterScore_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kParameterValue_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_CSharp_kParameterVirtualCurrencyName_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Analytics_CSharp_new_Parameter__SWIG_0(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Analytics_CSharp_new_Parameter__SWIG_1(char*, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_CSharp_delete_Parameter(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_CSharp_LogEvent__SWIG_3(char*, char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_CSharp_LogEvent__SWIG_4(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_CSharp_LogEvent__SWIG_5(char*, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_FirebaseAnalytics(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseAnalytics(Il2CppMethodPointer);
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
// System.Void Firebase.Analytics.FirebaseAnalytics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics__cctor_mFF78719600A04D584304CB70597C34A789696892 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0;
		L_0 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		((FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_il2cpp_TypeInfo_var))->set_app_0(L_0);
		return;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventAdImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventAdImpression_m9B0448EEB7F949B1DAACBE63926A39BE805193DE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventAdImpression_get_mD95F54D81310EEA4E3399328F54783101AF5DE16(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventAdImpression_m9B0448EEB7F949B1DAACBE63926A39BE805193DE_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventAppOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventAppOpen_m2854D61AA6B0BEBE7FC639D29225EE9C71CAB023 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventAppOpen_get_mE8F9DAEEE5F024AF05EADC93215607A3C53413E1(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventAppOpen_m2854D61AA6B0BEBE7FC639D29225EE9C71CAB023_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventEarnVirtualCurrency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventEarnVirtualCurrency_m0CA7CFD194DE850415EE55F5424AD493261E31F1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventEarnVirtualCurrency_get_mBDC51A5F4499C3638DF31D0E3208C4A9441CD134(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventEarnVirtualCurrency_m0CA7CFD194DE850415EE55F5424AD493261E31F1_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventLevelEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventLevelEnd_mA551BD86E8B42CBB26A77BB01B6B3332DFE576D6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventLevelEnd_get_mB19842D33A61CE948EB0665E79D2A76F77359538(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventLevelEnd_mA551BD86E8B42CBB26A77BB01B6B3332DFE576D6_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventLevelStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventLevelStart_mD56A295BEB6DC59B02D9343248FE88348BE26F4D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventLevelStart_get_m68FAFC9C05D412ACAC7078B1D9587EF8D4E563F1(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventLevelStart_mD56A295BEB6DC59B02D9343248FE88348BE26F4D_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventPostScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventPostScore_m04D5461BABBF8360B95B418B38D70138A2046DBB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventPostScore_get_mB6F114BABA7D5F5701B84E0F036FDD39767BB536(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventPostScore_m04D5461BABBF8360B95B418B38D70138A2046DBB_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventPurchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventPurchase_m337427A343D5EEDAB0E61AA23754FD11099EA810 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventPurchase_get_m9BCB4260F952519FE26347F5EF38AF3720DE7653(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventPurchase_m337427A343D5EEDAB0E61AA23754FD11099EA810_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventScreenView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventScreenView_m6DB44B1DD2FCF56C7B064B4D6D814A971F183FCD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventScreenView_get_m5D08C300D3091FCBC3ADFEC1CFF21D3661F5FF19(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventScreenView_m6DB44B1DD2FCF56C7B064B4D6D814A971F183FCD_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventSignUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventSignUp_m57939429A5597F91E54658CB45FD672245C316F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventSignUp_get_m77C1DF3C0D6DD18A1DDA163BB8A9DA5452D45DE3(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventSignUp_m57939429A5597F91E54658CB45FD672245C316F7_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventSpendVirtualCurrency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventSpendVirtualCurrency_m30CC74CF9F6871BC09736353B0D3C746A68D6C87 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventSpendVirtualCurrency_get_mF3277C6A66D082CC5DB79ED0FC6FF6B1ECC2E981(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventSpendVirtualCurrency_m30CC74CF9F6871BC09736353B0D3C746A68D6C87_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventUnlocAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventUnlocAchievement_m893131B428FD7E44AB1C870F29C1DBFEA9BDDF88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kEventUnlockAchievement_get_mFFF0275D293A3BD7E93EC6A49A41A09DB2515724(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_EventUnlocAchievement_m893131B428FD7E44AB1C870F29C1DBFEA9BDDF88_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterAchievementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterAchievementId_mF7DBB149E736E1AA1B2F8C230A7680C1697C3622 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kParameterAchievementId_get_m0A20086098AC8EB39E429395B93016A8B44350C0(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_ParameterAchievementId_mF7DBB149E736E1AA1B2F8C230A7680C1697C3622_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterItemName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterItemName_mFD3F396F7FDB5DB0DB5BBC46E91FCF798FF15149 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kParameterItemName_get_m72D918252C30B61A976A45D81BDA079A137823A0(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_ParameterItemName_mFD3F396F7FDB5DB0DB5BBC46E91FCF798FF15149_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterLevel_m50F7425985D05062B48D8A68DACB894F7E2B6FB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kParameterLevel_get_m64158CEB7BAD07E83F10134F1F31B070D237F310(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_ParameterLevel_m50F7425985D05062B48D8A68DACB894F7E2B6FB7_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterMethod_m31EF08A11633511460C5601D3C97026AD68F28C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kParameterMethod_get_m34F756CB5469D0A963F9E0B6FDDB61420010B293(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_ParameterMethod_m31EF08A11633511460C5601D3C97026AD68F28C5_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterScore_mFE2A574932494EDC9C23E283F34F4C6AEF7B1DB8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kParameterScore_get_m52712643291D07D1172D0EBDA22BB638CCC217B3(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_ParameterScore_mFE2A574932494EDC9C23E283F34F4C6AEF7B1DB8_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterValue_mC1C78C94338AC69A99499C39FAC49F877B334ECE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kParameterValue_get_m3DC7B29A4ACE53566998931D55110D16FF58D4E4(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_ParameterValue_mC1C78C94338AC69A99499C39FAC49F877B334ECE_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterVirtualCurrencyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterVirtualCurrencyName_m99FF523FD04DD8CAAF232838D9D7DBFFC59FB7E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseAnalyticsPINVOKE_kParameterVirtualCurrencyName_get_mEE30C148E32BB77118F9A45540466DD30E472EFE(/*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_get_ParameterVirtualCurrencyName_m99FF523FD04DD8CAAF232838D9D7DBFFC59FB7E5_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_m8DD03033C87174E128C857C988EB1F0B04945394 (String_t* ___name0, String_t* ___parameterName1, int32_t ___parameterValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___parameterName1;
		int32_t L_2 = ___parameterValue2;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_LogEvent__SWIG_3_m3B89F627AE0705BEEA1980BB8F9CD8B2729FF9E3(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_LogEvent_m8DD03033C87174E128C857C988EB1F0B04945394_RuntimeMethod_var)));
	}

IL_0019:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_mA4D0DA0B6552AA0DEE1D2C369B9EB2349D95ADB2 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_LogEvent__SWIG_4_m16C33510FC4D99D3DE5D5EE294ECEC3B2188FA76(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_LogEvent_mA4D0DA0B6552AA0DEE1D2C369B9EB2349D95ADB2_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String,Firebase.Analytics.Parameter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_m7471CF468EDA14ADD7774C477ED09132EB42DD44 (String_t* ___name0, ParameterU5BU5D_t81CBD4DE635765712A8DEFFAC5589D49EB2B0D4D* ___parameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	intptr_t* V_3 = NULL;
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_4 = NULL;
	bool V_5 = false;
	{
		ParameterU5BU5D_t81CBD4DE635765712A8DEFFAC5589D49EB2B0D4D* L_0 = ___parameters1;
		NullCheck(L_0);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_1 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)SZArrayNew(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0024;
	}

IL_000e:
	{
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_2 = V_0;
		int32_t L_3 = V_1;
		ParameterU5BU5D_t81CBD4DE635765712A8DEFFAC5589D49EB2B0D4D* L_4 = ___parameters1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8;
		L_8 = Parameter_getCPtr_mD0DDB8B367E483D10327798DFA22A9AFEC58F654(L_7, /*hidden argument*/NULL);
		intptr_t L_9;
		L_9 = HandleRef_op_Explicit_mAA2F9DBE61211508BC85C91A7A6BFA28EA6785BB_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (intptr_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_11 = V_1;
		ParameterU5BU5D_t81CBD4DE635765712A8DEFFAC5589D49EB2B0D4D* L_12 = ___parameters1;
		NullCheck(L_12);
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_000e;
		}
	}
	{
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_14 = V_0;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_15 = L_14;
		V_4 = L_15;
		if (!L_15)
		{
			goto IL_003a;
		}
	}
	{
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_16 = V_4;
		NullCheck(L_16);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))
		{
			goto IL_003f;
		}
	}

IL_003a:
	{
		V_3 = (intptr_t*)((uintptr_t)0);
		goto IL_0049;
	}

IL_003f:
	{
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_17 = V_4;
		NullCheck(L_17);
		V_3 = (intptr_t*)((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0049:
	{
		String_t* L_18 = ___name0;
		intptr_t* L_19 = V_3;
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_19, /*hidden argument*/NULL);
		ParameterU5BU5D_t81CBD4DE635765712A8DEFFAC5589D49EB2B0D4D* L_21 = ___parameters1;
		NullCheck(L_21);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_LogEvent__SWIG_5_mE52899152969EF1FB42EC26DAD7BAE9F49884E26(L_18, (intptr_t)L_20, ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_24;
		L_24 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAnalytics_LogEvent_m7471CF468EDA14ADD7774C477ED09132EB42DD44_RuntimeMethod_var)));
	}

IL_006b:
	{
		V_4 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)NULL;
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
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE__cctor_mA9574483C2E11BC9BA7B4268B741BBC46A09B31D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609 * L_0 = (SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609 *)il2cpp_codegen_object_new(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_mCCBC46A1892117410E3FE51A3E45950AF17AB4EE(L_0, /*hidden argument*/NULL);
		((FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0 * L_1 = (SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0 *)il2cpp_codegen_object_new(SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_mDEC657E2EDF40438D1EA9B8036CC40847BD1684F(L_1, /*hidden argument*/NULL);
		((FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventAdImpression_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventAdImpression_get_mD95F54D81310EEA4E3399328F54783101AF5DE16 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventAdImpression_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventAdImpression_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventAppOpen_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventAppOpen_get_mE8F9DAEEE5F024AF05EADC93215607A3C53413E1 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventAppOpen_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventAppOpen_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventEarnVirtualCurrency_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventEarnVirtualCurrency_get_mBDC51A5F4499C3638DF31D0E3208C4A9441CD134 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventEarnVirtualCurrency_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventEarnVirtualCurrency_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventLevelEnd_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventLevelEnd_get_mB19842D33A61CE948EB0665E79D2A76F77359538 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventLevelEnd_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventLevelEnd_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventLevelStart_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventLevelStart_get_m68FAFC9C05D412ACAC7078B1D9587EF8D4E563F1 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventLevelStart_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventLevelStart_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventPostScore_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventPostScore_get_mB6F114BABA7D5F5701B84E0F036FDD39767BB536 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventPostScore_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventPostScore_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventPurchase_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventPurchase_get_m9BCB4260F952519FE26347F5EF38AF3720DE7653 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventPurchase_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventPurchase_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventScreenView_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventScreenView_get_m5D08C300D3091FCBC3ADFEC1CFF21D3661F5FF19 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventScreenView_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventScreenView_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventSignUp_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventSignUp_get_m77C1DF3C0D6DD18A1DDA163BB8A9DA5452D45DE3 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventSignUp_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventSignUp_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventSpendVirtualCurrency_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventSpendVirtualCurrency_get_mF3277C6A66D082CC5DB79ED0FC6FF6B1ECC2E981 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventSpendVirtualCurrency_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventSpendVirtualCurrency_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kEventUnlockAchievement_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kEventUnlockAchievement_get_mFFF0275D293A3BD7E93EC6A49A41A09DB2515724 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kEventUnlockAchievement_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kEventUnlockAchievement_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterAchievementId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterAchievementId_get_m0A20086098AC8EB39E429395B93016A8B44350C0 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kParameterAchievementId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kParameterAchievementId_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterItemName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterItemName_get_m72D918252C30B61A976A45D81BDA079A137823A0 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kParameterItemName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kParameterItemName_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterLevel_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterLevel_get_m64158CEB7BAD07E83F10134F1F31B070D237F310 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kParameterLevel_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kParameterLevel_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterMethod_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterMethod_get_m34F756CB5469D0A963F9E0B6FDDB61420010B293 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kParameterMethod_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kParameterMethod_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterScore_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterScore_get_m52712643291D07D1172D0EBDA22BB638CCC217B3 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kParameterScore_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kParameterScore_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterValue_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterValue_get_m3DC7B29A4ACE53566998931D55110D16FF58D4E4 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kParameterValue_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kParameterValue_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::kParameterVirtualCurrencyName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_kParameterVirtualCurrencyName_get_mEE30C148E32BB77118F9A45540466DD30E472EFE (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_kParameterVirtualCurrencyName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_kParameterVirtualCurrencyName_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::new_Parameter__SWIG_0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_0_mAFEAB2B10DAD230641CD31408BB622BD64FFB3EC (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_new_Parameter__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_new_Parameter__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::new_Parameter__SWIG_1(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_1_m8682DC03AA27AE362D23F4BD3E7BEDF353762992 (String_t* ___jarg10, int64_t ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_new_Parameter__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_new_Parameter__SWIG_1)(____jarg10_marshaled, ___jarg21);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::delete_Parameter(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_delete_Parameter_mE43722FE2230A5480BB5B02D12C7183965D308E2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_delete_Parameter", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_delete_Parameter)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::LogEvent__SWIG_3(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_LogEvent__SWIG_3_m3B89F627AE0705BEEA1980BB8F9CD8B2729FF9E3 (String_t* ___jarg10, String_t* ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_LogEvent__SWIG_3", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_LogEvent__SWIG_3)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::LogEvent__SWIG_4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_LogEvent__SWIG_4_m16C33510FC4D99D3DE5D5EE294ECEC3B2188FA76 (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_LogEvent__SWIG_4", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_LogEvent__SWIG_4)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::LogEvent__SWIG_5(System.String,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_LogEvent__SWIG_5_mE52899152969EF1FB42EC26DAD7BAE9F49884E26 (String_t* ___jarg10, intptr_t ___arg1, int32_t ___jarg22, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Analytics_CSharp_LogEvent__SWIG_5", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_CSharp_LogEvent__SWIG_5)(____jarg10_marshaled, ___arg1, ___jarg22);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___arg1, ___jarg22);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Analytics.Parameter::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m8AB3915C10EB74EBE1C9BC68F1B9B572BF96755E (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::getCPtr(Firebase.Analytics.Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  Parameter_getCPtr_mD0DDB8B367E483D10327798DFA22A9AFEC58F654 (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2 = L_1->get_swigCPtr_0();
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Analytics.Parameter::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Finalize_m6380254722A4640D7F9207D74931CB880FAD876D (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		Parameter_Dispose_mEE755BE0CDD28FC44A666580B60DDB10C79F73E3(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Dispose_m23A0363783AAD796D539D6949F6C65546B110DA9 (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Parameter_Dispose_mEE755BE0CDD28FC44A666580B60DDB10C79F73E3(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Dispose_mEE755BE0CDD28FC44A666580B60DDB10C79F73E3 (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
			FirebaseAnalyticsPINVOKE_delete_Parameter_mE43722FE2230A5480BB5B02D12C7183965D308E2(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m2AFD8664E1B9E31DD57190F498FE7575BE0A2F1A (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * __this, String_t* ___parameterName0, String_t* ___parameterValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___parameterName0;
		String_t* L_1 = ___parameterValue1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_0_mAFEAB2B10DAD230641CD31408BB622BD64FFB3EC(L_0, L_1, /*hidden argument*/NULL);
		Parameter__ctor_m8AB3915C10EB74EBE1C9BC68F1B9B572BF96755E(__this, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Parameter__ctor_m2AFD8664E1B9E31DD57190F498FE7575BE0A2F1A_RuntimeMethod_var)));
	}

IL_001f:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m9A98460539AEC9C5E001CA96F0F04A6AC27FF87C (Parameter_t84022BB59150B1EE3A437526928A5CF5F4307738 * __this, String_t* ___parameterName0, int64_t ___parameterValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___parameterName0;
		int64_t L_1 = ___parameterValue1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_t74DDE4A56348835AC20F5FFB24F7662B5F252099_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FirebaseAnalyticsPINVOKE_new_Parameter__SWIG_1_m8682DC03AA27AE362D23F4BD3E7BEDF353762992(L_0, L_1, /*hidden argument*/NULL);
		Parameter__ctor_m8AB3915C10EB74EBE1C9BC68F1B9B572BF96755E(__this, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Parameter__ctor_m9A98460539AEC9C5E001CA96F0F04A6AC27FF87C_RuntimeMethod_var)));
	}

IL_001f:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_mCC740BF6084AE679AB4BCD455352BA10A28861DF (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___applicationDelegate0, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___arithmeticDelegate1, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___divideByZeroDelegate2, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___indexOutOfRangeDelegate3, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___invalidCastDelegate4, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___invalidOperationDelegate5, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___ioDelegate6, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___nullReferenceDelegate7, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___outOfMemoryDelegate8, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___overflowDelegate9, ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "SWIGRegisterExceptionCallbacks_FirebaseAnalytics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseAnalytics)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_m9487FF26245C99F77EE5FFBA4A2B526FE7CDE818 (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentDelegate0, ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentNullDelegate1, ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "SWIGRegisterExceptionArgumentCallbacks_FirebaseAnalytics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_FirebaseAnalytics)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, /*hidden argument*/NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_9 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, /*hidden argument*/NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mBFC0DB0FD741B65810632BE26F9D454F71266945 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_0 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_1 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_2 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_3 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_4 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_5 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_6 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_7 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_8 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_9 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_10 = (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC *)il2cpp_codegen_object_new(ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * L_11 = (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m5E18E41E6216C6F69404A939F29640DD2DE32ED9(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * L_12 = (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m5E18E41E6216C6F69404A939F29640DD2DE32ED9(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * L_13 = (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m5E18E41E6216C6F69404A939F29640DD2DE32ED9(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_14 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_15 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_16 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_17 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_18 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_19 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_20 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_21 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_22 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_23 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * L_24 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_mCC740BF6084AE679AB4BCD455352BA10A28861DF(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * L_25 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * L_26 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * L_27 = ((SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_m9487FF26245C99F77EE5FFBA4A2B526FE7CDE818(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mCCBC46A1892117410E3FE51A3E45950AF17AB4EE (SWIGExceptionHelper_t0F71E7D9C1E62D987A69BF2F992E0F849A472609 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_0 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var)));
		Exception_t * L_2 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_5 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_6 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m43B27BAA8A5AF04283E74E6D8E5CA87139C96DBB_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t * L_7 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->set_pendingException_0(L_7);
		RuntimeObject * L_8 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_1 = L_8;
		RuntimeObject * L_9 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		int32_t L_10 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x58, FINALLY_0050);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
	}

IL_0058:
	{
		return;
	}
}
// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m66AF2A39D408CCBF7386577DFE07406C70FF0540 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Exception_t *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		Exception_t * L_4 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_4;
		((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeObject * L_5 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_3 = L_5;
		RuntimeObject * L_6 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_6, /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		int32_t L_7 = ((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
		IL2CPP_LEAVE(0x4E, FINALLY_0046);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_3;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
	}

IL_004f:
	{
	}

IL_0050:
	{
		Exception_t * L_9 = V_0;
		V_4 = L_9;
		goto IL_0055;
	}

IL_0055:
	{
		Exception_t * L_10 = V_4;
		return L_10;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_mC1BFF54D9FEC863AAB079FB9817C5AB9AF8B600B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(0);
		((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->set_exceptionsLock_2(NULL);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t6CF2A3D5722BC1B7E1D4CAAB16F76E7AE8F91B9C_il2cpp_TypeInfo_var))->set_exceptionsLock_2(L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m271565E898E004E0A6CBEB43D5C8A5CFFD24AF9A (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "SWIGRegisterStringCallback_FirebaseAnalytics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseAnalytics)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB (String_t* ___cString0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___cString0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m35A7529C4732F3D381633B097FF1153345A54BF7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * L_0 = (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 *)il2cpp_codegen_object_new(SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mD7B738AA3D55528E45298820D449A71A59A58254(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * L_1 = ((SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m271565E898E004E0A6CBEB43D5C8A5CFFD24AF9A(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mDEC657E2EDF40438D1EA9B8036CC40847BD1684F (SWIGStringHelper_t97D0B0DED87E5FEC06993FA2814313F62A7F27C0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m5E18E41E6216C6F69404A939F29640DD2DE32ED9 (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m54362C7CF5D2F2AD5DB751AB56750B76090F0A75 (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m75852643E0D1BA08539757BAE748F2199B8E12B4 (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m223C13D4A375178C3463DB97EE7168B9BC9CD20E (ExceptionArgumentDelegate_t0B4E75C6FEE2D674D1B6C177ED0DEEF03B9B9E7E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m7E6FEA2DABF22C2CABFA92BF05821FBB5011ABC7 (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m332FBAEB09286B555BC88FFE7410D55E60366C79 (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mFAE63D0C8D2B7C831EB1817AD05E68B7D5B57548 (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mB9C8295DF7F224D4D7D1EAD35E0CDAF33E4F1993 (ExceptionDelegate_t73D9DC3453B171BDC76275017D99E401B4F2B6CC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mD7B738AA3D55528E45298820D449A71A59A58254 (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_mBB0A1F0BFE7D38439EEB01B05E0D6A52B1565B9F (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mA27E6BA36F2EB3640E5800E1E29FC5B7BB7B98A0 (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m6353E1FABAC7D5CC86EF5996A2F58BDB32B81990 (SWIGStringDelegate_t2B9F99922AC4679D8AE49E4D8BDD2C52391467B1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_op_Explicit_mAA2F9DBE61211508BC85C91A7A6BFA28EA6785BB_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___value0, const RuntimeMethod* method)
{
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___value0;
		intptr_t L_1 = L_0.get_m_handle_1();
		return (intptr_t)L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
