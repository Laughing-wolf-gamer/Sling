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

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4;
// System.Func`1<System.Int32>
struct Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
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
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1;
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
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3;
// Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D;
// Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9;
// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB;
// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m3DF471328472D6FF2D456977AF5E4C0CA935E53B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mA65C530B02E85B6334447BE3966BC003BEAEF0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_From_m5F6E2E5C92E5E58879EBF30D60AD7C8996B1A961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SendPendingEvents_mE9F8EBC13A11EA737EE9A5C6F090CF40E32C343E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacksEnabled_mA8D9ACAE5B68D3EB31DD6993D919309121132F6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacks_m95EC661B367E1492F7902B429F3C940A5D164F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CMessageReceivedDelegateMethodU3Eb__0_m1B9ABD5684D0CF4178B92E7929339B6FAB0698E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CTokenReceivedDelegateMethodU3Eb__0_m9E08E2501328FB92172608C0FF9A56055DF5D572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCFEDBE0779B68877985170FBC0761021CCCB6360 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessaging
struct FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294  : public RuntimeObject
{
public:

public:
};

struct FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields
{
public:
	// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::MessageReceivedInternal
	EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * ___MessageReceivedInternal_0;
	// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::TokenReceivedInternal
	EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * ___TokenReceivedInternal_1;
	// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging::listener
	Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * ___listener_2;

public:
	inline static int32_t get_offset_of_MessageReceivedInternal_0() { return static_cast<int32_t>(offsetof(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields, ___MessageReceivedInternal_0)); }
	inline EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * get_MessageReceivedInternal_0() const { return ___MessageReceivedInternal_0; }
	inline EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA ** get_address_of_MessageReceivedInternal_0() { return &___MessageReceivedInternal_0; }
	inline void set_MessageReceivedInternal_0(EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * value)
	{
		___MessageReceivedInternal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageReceivedInternal_0), (void*)value);
	}

	inline static int32_t get_offset_of_TokenReceivedInternal_1() { return static_cast<int32_t>(offsetof(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields, ___TokenReceivedInternal_1)); }
	inline EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * get_TokenReceivedInternal_1() const { return ___TokenReceivedInternal_1; }
	inline EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 ** get_address_of_TokenReceivedInternal_1() { return &___TokenReceivedInternal_1; }
	inline void set_TokenReceivedInternal_1(EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * value)
	{
		___TokenReceivedInternal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TokenReceivedInternal_1), (void*)value);
	}

	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields, ___listener_2)); }
	inline Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * get_listener_2() const { return ___listener_2; }
	inline Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_2), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE
struct FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8  : public RuntimeObject
{
public:

public:
};

struct FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018 * ___swigExceptionHelper_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigStringHelper
	SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
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

// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798  : public RuntimeObject
{
public:
	// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate Firebase.Messaging.FirebaseMessaging/Listener::messageReceivedDelegate
	MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * ___messageReceivedDelegate_0;
	// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate Firebase.Messaging.FirebaseMessaging/Listener::tokenReceivedDelegate
	TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * ___tokenReceivedDelegate_1;
	// Firebase.FirebaseApp Firebase.Messaging.FirebaseMessaging/Listener::app
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app_2;

public:
	inline static int32_t get_offset_of_messageReceivedDelegate_0() { return static_cast<int32_t>(offsetof(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798, ___messageReceivedDelegate_0)); }
	inline MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * get_messageReceivedDelegate_0() const { return ___messageReceivedDelegate_0; }
	inline MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB ** get_address_of_messageReceivedDelegate_0() { return &___messageReceivedDelegate_0; }
	inline void set_messageReceivedDelegate_0(MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * value)
	{
		___messageReceivedDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageReceivedDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_tokenReceivedDelegate_1() { return static_cast<int32_t>(offsetof(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798, ___tokenReceivedDelegate_1)); }
	inline TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * get_tokenReceivedDelegate_1() const { return ___tokenReceivedDelegate_1; }
	inline TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 ** get_address_of_tokenReceivedDelegate_1() { return &___tokenReceivedDelegate_1; }
	inline void set_tokenReceivedDelegate_1(TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * value)
	{
		___tokenReceivedDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenReceivedDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798, ___app_2)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_app_2() const { return ___app_2; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_2), (void*)value);
	}
};

struct Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::listener
	Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * ___listener_3;

public:
	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields, ___listener_3)); }
	inline Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * get_listener_3() const { return ___listener_3; }
	inline Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_3), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___applicationDelegate_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___arithmeticDelegate_1;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___divideByZeroDelegate_2;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___indexOutOfRangeDelegate_3;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___invalidCastDelegate_4;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___invalidOperationDelegate_5;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___ioDelegate_6;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___nullReferenceDelegate_7;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___outOfMemoryDelegate_8;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___overflowDelegate_9;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___systemDelegate_10;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentDelegate_11;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentNullDelegate_12;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException
struct SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields
{
public:
	// System.Int32 Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject * ___exceptionsLock_2;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}

	inline static int32_t get_offset_of_exceptionsLock_2() { return static_cast<int32_t>(offsetof(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields, ___exceptionsLock_2)); }
	inline RuntimeObject * get_exceptionsLock_2() const { return ___exceptionsLock_2; }
	inline RuntimeObject ** get_address_of_exceptionsLock_2() { return &___exceptionsLock_2; }
	inline void set_exceptionsLock_2(RuntimeObject * value)
	{
		___exceptionsLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionsLock_2), (void*)value);
	}
};

struct SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields
{
public:
	// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9  : public RuntimeObject
{
public:
	// System.String Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass14_0::token
	String_t* ___token_0;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9, ___token_0)); }
	inline String_t* get_token_0() const { return ___token_0; }
	inline String_t** get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(String_t* value)
	{
		___token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_0), (void*)value);
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
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


// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// Firebase.Messaging.FirebaseMessage Firebase.Messaging.MessageReceivedEventArgs::<Message>k__BackingField
	FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E, ___U3CMessageU3Ek__BackingField_1)); }
	inline FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 ** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}
};


// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String Firebase.Messaging.TokenReceivedEventArgs::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688, ___U3CTokenU3Ek__BackingField_1)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_1() const { return ___U3CTokenU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_1() { return &___U3CTokenU3Ek__BackingField_1; }
	inline void set_U3CTokenU3Ek__BackingField_1(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_1), (void*)value);
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass13_0::message
	intptr_t ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D, ___message_0)); }
	inline intptr_t get_message_0() const { return ___message_0; }
	inline intptr_t* get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(intptr_t value)
	{
		___message_0 = value;
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


// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Messaging.FirebaseMessage::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Messaging.FirebaseMessage::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

struct FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1_StaticFields
{
public:
	// System.DateTime Firebase.Messaging.FirebaseMessage::UnixEpochUtc
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___UnixEpochUtc_2;

public:
	inline static int32_t get_offset_of_UnixEpochUtc_2() { return static_cast<int32_t>(offsetof(FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1_StaticFields, ___UnixEpochUtc_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_UnixEpochUtc_2() const { return ___UnixEpochUtc_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_UnixEpochUtc_2() { return &___UnixEpochUtc_2; }
	inline void set_UnixEpochUtc_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___UnixEpochUtc_2 = value;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Int32>
struct Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673  : public MulticastDelegate_t
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


// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_gshared (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_gshared (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * ___func0, int32_t ___errorValue1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessage::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_mA5C3344A5D624F8095C57118A3B30F0B578F1D27 (FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * __this, bool ___disposing0, const RuntimeMethod* method);
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_FirebaseMessage_m26E8A58ADE5BB8F0A007A23FA9B51D60D90C049C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_From_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_From_get_mD68FBDC0696A8E967CE83BF6C8962798394D8B89 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * Listener_Create_m50D7018148E3687E5A44CFC6E9D52CFED330E96C (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m8BFAF5EC046922E9C042E83F98479BEC74BCC372 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_mA8D9ACAE5B68D3EB31DD6993D919309121132F6A (bool ___message_callback_enabled0, bool ___token_callback_enabled1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_mE9F8EBC13A11EA737EE9A5C6F090CF40E32C343E (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceivedInternal_mAC52A529821A67C59F3DEAB3BC3432B6821C07AC (EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_m879D0A83259868C38DF4A976341381EF61AD3F37 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceivedInternal_mDC3418B74AB69E175739BE4157CC97CC3A7D672A (EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m87BB7E71F143F6A3508D941BDF4ABC6BD6420654 (EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m9DA98C8FEB12A589FE32C59889A025CE7A903F7A (EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacks_m06960A6FEEB885AF1C2CBC775CCE847E83DB559F (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * ___jarg10, TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_mD3E4B41D7440DF5817BF3AE73F61E3766B78018F (bool ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SendPendingEvents_m8FAE0090A5646EB5EFF7785DDED9E7DC6F8D9E82 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m8187E2A180EB9F51147F0A956DEF1743721D6FE3 (SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018 * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m8A74C445F346DC7B95A32DBED4C1BBFEBFE8BD79 (SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3 * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m0E41C817EC87D91F64A762043000AF09C986978E_inline (MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E * __this, FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_m45D9D489E567C39B4EB1BE4859FB1C274631BF30_inline (TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428 (intptr_t ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74 (String_t* ___token0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_mC422C305D7ABCA70109898E89483A3FC4978087B (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_mD1C22A3D2409F2B90499013F8786403CAC32DF3A (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_mAD5B0636EBBFC226EE9E514FB77EE3364B813EC6 (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m19EE50E64D8BC37FED7DE01EF1290233D3DCB941 (TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_m95EC661B367E1492F7902B429F3C940A5D164F3B (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * ___messageCallback0, TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * ___tokenCallback1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mA1738E28DB87420EF7E101BC8157F9488A48E488 (U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_gshared)(__this, ___object0, ___method1, method);
}
// !!0 Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<!!0>,!!0)
inline int32_t ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8 (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * ___func0, int32_t ___errorValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *, int32_t, const RuntimeMethod*))ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_gshared)(___func0, ___errorValue1, method);
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m92584A2B7A42B49849A386214A16DB99FE2E8C91 (U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01 (Exception_t * ___e0, const RuntimeMethod* method);
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mA822CB95071800A15C01FFA55733DAA6176C6BFA (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m7E1603A87634B3BB6C7CE98D519C7CECBCCBC787 (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___applicationDelegate0, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___arithmeticDelegate1, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___divideByZeroDelegate2, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___indexOutOfRangeDelegate3, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___invalidCastDelegate4, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___invalidOperationDelegate5, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___ioDelegate6, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___nullReferenceDelegate7, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___outOfMemoryDelegate8, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___overflowDelegate9, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mF2AA0034B977604E29CD3497CDBA0BCD8E93EEEF (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentDelegate0, ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentNullDelegate1, ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mCAE598402C0EE57018A698736B02CC9A85D92905 (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m6C548628509D0559F70E843FE3E9C814537DFD5C (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_m75E797A8BC43F165D16E7DFF237A1BA47768B20E (FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_mFC24EB80EF55BCB1DA1FAC0D8F88D11A1BB52674 (MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E * __this, FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * ___msg0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m3DF471328472D6FF2D456977AF5E4C0CA935E53B (EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * __this, RuntimeObject * ___sender0, MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *, RuntimeObject *, MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_m96C2A19183DBD0CC7B681F91848148315AB9FA81 (TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 * __this, String_t* ___token0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mA65C530B02E85B6334447BE3966BC003BEAEF0E6 (EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * __this, RuntimeObject * ___sender0, TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *, RuntimeObject *, TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_delete_FirebaseMessage(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_From_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SetListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SetListenerCallbacksEnabled(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SendPendingEvents();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseMessaging(Il2CppMethodPointer);
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
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_m75E797A8BC43F165D16E7DFF237A1BA47768B20E (FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessage::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Finalize_mA4E50441266F08D3513DF5EFA46F7A8598F4701E (FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		FirebaseMessage_Dispose_mA5C3344A5D624F8095C57118A3B30F0B578F1D27(__this, (bool)0, /*hidden argument*/NULL);
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
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_m8665ACFB9F84A1D339F0C1A6FE0D55D3321419C8 (FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseMessage_Dispose_mA5C3344A5D624F8095C57118A3B30F0B578F1D27(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_mA5C3344A5D624F8095C57118A3B30F0B578F1D27 (FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
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
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
			FirebaseMessagingPINVOKE_delete_FirebaseMessage_m26E8A58ADE5BB8F0A007A23FA9B51D60D90C049C(L_8, /*hidden argument*/NULL);
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
// System.String Firebase.Messaging.FirebaseMessage::get_From()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_From_m5F6E2E5C92E5E58879EBF30D60AD7C8996B1A961 (FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_From_get_mD68FBDC0696A8E967CE83BF6C8962798394D8B89(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_From_m5F6E2E5C92E5E58879EBF30D60AD7C8996B1A961_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__cctor_m7422ED9B5E9FFE05D3284413C2547510FB245BA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1_il2cpp_TypeInfo_var))->set_UnixEpochUtc_2(L_0);
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
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceivedInternal_mAC52A529821A67C59F3DEAB3BC3432B6821C07AC (EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * V_0 = NULL;
	EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * V_1 = NULL;
	EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_0 = ((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_2 = V_1;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_5 = V_2;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_6 = V_1;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *>((EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA **)(((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_address_of_MessageReceivedInternal_0()), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_8 = V_0;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *)L_8) == ((RuntimeObject*)(EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceivedInternal_mDC3418B74AB69E175739BE4157CC97CC3A7D672A (EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * V_0 = NULL;
	EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * V_1 = NULL;
	EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_0 = ((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_2 = V_1;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_5 = V_2;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_6 = V_1;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *>((EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA **)(((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_address_of_MessageReceivedInternal_0()), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_8 = V_0;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *)L_8) == ((RuntimeObject*)(EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m87BB7E71F143F6A3508D941BDF4ABC6BD6420654 (EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * V_0 = NULL;
	EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * V_1 = NULL;
	EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_0 = ((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_2 = V_1;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_5 = V_2;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_6 = V_1;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *>((EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 **)(((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_address_of_TokenReceivedInternal_1()), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_8 = V_0;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *)L_8) == ((RuntimeObject*)(EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m9DA98C8FEB12A589FE32C59889A025CE7A903F7A (EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * V_0 = NULL;
	EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * V_1 = NULL;
	EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_0 = ((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_2 = V_1;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_5 = V_2;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_6 = V_1;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *>((EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 **)(((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_address_of_TokenReceivedInternal_1()), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_8 = V_0;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *)L_8) == ((RuntimeObject*)(EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_m879D0A83259868C38DF4A976341381EF61AD3F37 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
			EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_3 = ((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
			V_1 = (bool)((!(((RuntimeObject*)(EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_4 = ((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
			V_2 = (bool)((!(((RuntimeObject*)(EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_5 = V_1;
			bool L_6 = V_2;
			V_3 = (bool)((int32_t)((int32_t)L_5|(int32_t)L_6));
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_0037;
			}
		}

IL_002d:
		{
			Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_8;
			L_8 = Listener_Create_m50D7018148E3687E5A44CFC6E9D52CFED330E96C(/*hidden argument*/NULL);
			goto IL_003f;
		}

IL_0037:
		{
			Listener_Destroy_m8BFAF5EC046922E9C042E83F98479BEC74BCC372(/*hidden argument*/NULL);
		}

IL_003f:
		{
			bool L_9 = V_1;
			bool L_10 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
			FirebaseMessaging_SetListenerCallbacksEnabled_mA8D9ACAE5B68D3EB31DD6993D919309121132F6A(L_9, L_10, /*hidden argument*/NULL);
			bool L_11 = V_1;
			bool L_12 = V_2;
			V_4 = (bool)((int32_t)((int32_t)L_11|(int32_t)L_12));
			bool L_13 = V_4;
			if (!L_13)
			{
				goto IL_0058;
			}
		}

IL_0050:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
			FirebaseMessaging_SendPendingEvents_mE9F8EBC13A11EA737EE9A5C6F090CF40E32C343E(/*hidden argument*/NULL);
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x63, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		Type_t * L_14 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging__cctor_m7228B17DF248B15AF464F285F6E09E93B4B3AA2B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_0;
		L_0 = Listener_Create_m50D7018148E3687E5A44CFC6E9D52CFED330E96C(/*hidden argument*/NULL);
		((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->set_listener_2(L_0);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceived(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceived_mA007DEE5F356266112E47B95D0E257034ED517C8 (EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		FirebaseMessaging_add_MessageReceivedInternal_mAC52A529821A67C59F3DEAB3BC3432B6821C07AC(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_m879D0A83259868C38DF4A976341381EF61AD3F37(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2C, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Type_t * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceived(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceived_m0DA7AC27AD39BF9CDBB2F05633BD7F346A171FB5 (EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		FirebaseMessaging_remove_MessageReceivedInternal_mDC3418B74AB69E175739BE4157CC97CC3A7D672A(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_m879D0A83259868C38DF4A976341381EF61AD3F37(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2C, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Type_t * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceived_m671869978092B9A5CFEC163D45BCAC4989C1EED0 (EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		FirebaseMessaging_add_TokenReceivedInternal_m87BB7E71F143F6A3508D941BDF4ABC6BD6420654(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_m879D0A83259868C38DF4A976341381EF61AD3F37(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2C, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Type_t * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceived_m3716DDF2E213EA1045F2EFADA7B0593B54EB0295 (EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		FirebaseMessaging_remove_TokenReceivedInternal_m9DA98C8FEB12A589FE32C59889A025CE7A903F7A(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_m879D0A83259868C38DF4A976341381EF61AD3F37(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2C, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Type_t * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_m95EC661B367E1492F7902B429F3C940A5D164F3B (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * ___messageCallback0, TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * ___tokenCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * L_0 = ___messageCallback0;
		TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * L_1 = ___tokenCallback1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SetListenerCallbacks_m06960A6FEEB885AF1C2CBC775CCE847E83DB559F(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetListenerCallbacks_m95EC661B367E1492F7902B429F3C940A5D164F3B_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_mA8D9ACAE5B68D3EB31DD6993D919309121132F6A (bool ___message_callback_enabled0, bool ___token_callback_enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___message_callback_enabled0;
		bool L_1 = ___token_callback_enabled1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_mD3E4B41D7440DF5817BF3AE73F61E3766B78018F(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetListenerCallbacksEnabled_mA8D9ACAE5B68D3EB31DD6993D919309121132F6A_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_mE9F8EBC13A11EA737EE9A5C6F090CF40E32C343E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SendPendingEvents_m8FAE0090A5646EB5EFF7785DDED9E7DC6F8D9E82(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SendPendingEvents_mE9F8EBC13A11EA737EE9A5C6F090CF40E32C343E_RuntimeMethod_var)));
	}

IL_0016:
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE__cctor_mC114C603D7259567DE890796271FD91CF5C47658 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018 * L_0 = (SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018 *)il2cpp_codegen_object_new(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m8187E2A180EB9F51147F0A956DEF1743721D6FE3(L_0, /*hidden argument*/NULL);
		((FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3 * L_1 = (SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3 *)il2cpp_codegen_object_new(SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m8A74C445F346DC7B95A32DBED4C1BBFEBFE8BD79(L_1, /*hidden argument*/NULL);
		((FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t63F9B29CBA853F9CA7FD0AC94E6204AD5F02A7C8_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_FirebaseMessage_m26E8A58ADE5BB8F0A007A23FA9B51D60D90C049C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Messaging_CSharp_delete_FirebaseMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_delete_FirebaseMessage)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_From_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_From_get_mD68FBDC0696A8E967CE83BF6C8962798394D8B89 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Messaging_CSharp_FirebaseMessage_From_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_From_get)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacks_m06960A6FEEB885AF1C2CBC775CCE847E83DB559F (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * ___jarg10, TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Messaging_CSharp_SetListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SetListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_mD3E4B41D7440DF5817BF3AE73F61E3766B78018F (bool ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4 + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Messaging_CSharp_SetListenerCallbacksEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SetListenerCallbacksEnabled)(static_cast<int32_t>(___jarg10), static_cast<int32_t>(___jarg21));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___jarg10), static_cast<int32_t>(___jarg21));
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SendPendingEvents_m8FAE0090A5646EB5EFF7785DDED9E7DC6F8D9E82 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "Firebase_Messaging_CSharp_SendPendingEvents", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SendPendingEvents)();
	#else
	il2cppPInvokeFunc();
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_mFC24EB80EF55BCB1DA1FAC0D8F88D11A1BB52674 (MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E * __this, FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * L_0 = ___msg0;
		MessageReceivedEventArgs_set_Message_m0E41C817EC87D91F64A762043000AF09C986978E_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Messaging.FirebaseMessage Firebase.Messaging.MessageReceivedEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * MessageReceivedEventArgs_get_Message_m61EA1B4381139C547A78096AD64C462031F836C2 (MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E * __this, const RuntimeMethod* method)
{
	{
		FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m0E41C817EC87D91F64A762043000AF09C986978E (MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E * __this, FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
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
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_m96C2A19183DBD0CC7B681F91848148315AB9FA81 (TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___token0;
		TokenReceivedEventArgs_set_Token_m45D9D489E567C39B4EB1BE4859FB1C274631BF30_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Firebase.Messaging.TokenReceivedEventArgs::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenReceivedEventArgs_get_Token_m82A51A896FF4A0BD59D6CD8AB4131390A8AB303A (TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_m45D9D489E567C39B4EB1BE4859FB1C274631BF30 (TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_1(L_0);
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428(intptr_t ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428(___message0, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74(char* ___token0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___token0' to managed representation
	String_t* ____token0_unmarshaled = NULL;
	____token0_unmarshaled = il2cpp_codegen_marshal_string_result(___token0);

	// Managed method invocation
	Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74(____token0_unmarshaled, NULL);

}
// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * Listener_Create_m50D7018148E3687E5A44CFC6E9D52CFED330E96C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_3 = ((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var))->get_listener_3();
			V_1 = (bool)((!(((RuntimeObject*)(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0020:
		{
			Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_5 = ((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var))->get_listener_3();
			V_2 = L_5;
			IL2CPP_LEAVE(0x42, FINALLY_003a);
		}

IL_0028:
		{
			Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_6 = (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 *)il2cpp_codegen_object_new(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var);
			Listener__ctor_mC422C305D7ABCA70109898E89483A3FC4978087B(L_6, /*hidden argument*/NULL);
			((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var))->set_listener_3(L_6);
			Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_7 = ((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var))->get_listener_3();
			V_2 = L_7;
			IL2CPP_LEAVE(0x42, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Type_t * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_9 = V_2;
		return L_9;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m8BFAF5EC046922E9C042E83F98479BEC74BCC372 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_3 = ((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var))->get_listener_3();
			V_1 = (bool)((((RuntimeObject*)(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0022;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0030);
		}

IL_0022:
		{
			Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_5 = ((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var))->get_listener_3();
			NullCheck(L_5);
			Listener_Dispose_mD1C22A3D2409F2B90499013F8786403CAC32DF3A(L_5, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x38, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Type_t * L_6 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_mC422C305D7ABCA70109898E89483A3FC4978087B (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * L_0 = (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB *)il2cpp_codegen_object_new(MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB_il2cpp_TypeInfo_var);
		MessageReceivedDelegate__ctor_mAD5B0636EBBFC226EE9E514FB77EE3364B813EC6(L_0, NULL, (intptr_t)((intptr_t)Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_messageReceivedDelegate_0(L_0);
		TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * L_1 = (TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 *)il2cpp_codegen_object_new(TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14_il2cpp_TypeInfo_var);
		TokenReceivedDelegate__ctor_m19EE50E64D8BC37FED7DE01EF1290233D3DCB941(L_1, NULL, (intptr_t)((intptr_t)Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_tokenReceivedDelegate_1(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2;
		L_2 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		__this->set_app_2(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * L_3 = __this->get_messageReceivedDelegate_0();
		TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * L_4 = __this->get_tokenReceivedDelegate_1();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		FirebaseMessaging_SetListenerCallbacks_m95EC661B367E1492F7902B429F3C940A5D164F3B(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Finalize_m08388CE62BD8B33B2555B8A6BC21061379FB9D29 (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		Listener_Dispose_mD1C22A3D2409F2B90499013F8786403CAC32DF3A(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_mD1C22A3D2409F2B90499013F8786403CAC32DF3A (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 * L_3 = ((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var))->get_listener_3();
			V_1 = (bool)((((RuntimeObject*)(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 *)L_3) == ((RuntimeObject*)(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 *)__this))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_0020:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
			FirebaseMessaging_SetListenerCallbacks_m95EC661B367E1492F7902B429F3C940A5D164F3B((MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB *)NULL, (TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 *)NULL, /*hidden argument*/NULL);
			((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798_il2cpp_TypeInfo_var))->set_listener_3((Listener_tAB19365189BB8A64F1690C05B95B6EB8AD39F798 *)NULL);
			__this->set_app_2((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL);
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Type_t * L_5 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428 (intptr_t ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CMessageReceivedDelegateMethodU3Eb__0_m1B9ABD5684D0CF4178B92E7929339B6FAB0698E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D * L_0 = (U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_mA1738E28DB87420EF7E101BC8157F9488A48E488(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D * L_1 = V_0;
		intptr_t L_2 = ___message0;
		NullCheck(L_1);
		L_1->set_message_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D * L_3 = V_0;
		Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * L_4 = (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)il2cpp_codegen_object_new(Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA_il2cpp_TypeInfo_var);
		Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CMessageReceivedDelegateMethodU3Eb__0_m1B9ABD5684D0CF4178B92E7929339B6FAB0698E8_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8(L_4, 0, /*hidden argument*/ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74 (String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CTokenReceivedDelegateMethodU3Eb__0_m9E08E2501328FB92172608C0FF9A56055DF5D572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9 * L_0 = (U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_m92584A2B7A42B49849A386214A16DB99FE2E8C91(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9 * L_1 = V_0;
		String_t* L_2 = ___token0;
		NullCheck(L_1);
		L_1->set_token_0(L_2);
		U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9 * L_3 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass14_0_U3CTokenReceivedDelegateMethodU3Eb__0_m9E08E2501328FB92172608C0FF9A56055DF5D572_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_4, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m7E1603A87634B3BB6C7CE98D519C7CECBCCBC787 (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___applicationDelegate0, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___arithmeticDelegate1, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___divideByZeroDelegate2, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___indexOutOfRangeDelegate3, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___invalidCastDelegate4, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___invalidOperationDelegate5, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___ioDelegate6, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___nullReferenceDelegate7, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___outOfMemoryDelegate8, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___overflowDelegate9, ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "SWIGRegisterExceptionCallbacks_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseMessaging)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mF2AA0034B977604E29CD3497CDBA0BCD8E93EEEF (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentDelegate0, ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentNullDelegate1, ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585(/*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mB62F4CBC42B84029C1DDBB4275A8E749363B1261 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_0 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_1 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_2 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_3 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_4 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_5 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_6 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_7 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_8 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_9 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_10 = (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE *)il2cpp_codegen_object_new(ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * L_11 = (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mA822CB95071800A15C01FFA55733DAA6176C6BFA(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * L_12 = (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mA822CB95071800A15C01FFA55733DAA6176C6BFA(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * L_13 = (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mA822CB95071800A15C01FFA55733DAA6176C6BFA(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_14 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_15 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_16 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_17 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_18 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_19 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_20 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_21 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_22 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_23 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * L_24 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m7E1603A87634B3BB6C7CE98D519C7CECBCCBC787(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * L_25 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * L_26 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * L_27 = ((SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mF2AA0034B977604E29CD3497CDBA0BCD8E93EEEF(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m8187E2A180EB9F51147F0A956DEF1743721D6FE3 (SWIGExceptionHelper_tD08685E1F4DEB4CCFC0568D515676EC2BF3A1018 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_0 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var)));
		Exception_t * L_2 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_5 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_6 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m6B19FBF707BFB65B854F2563803F30A78CBA8B01_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t * L_7 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->set_pendingException_0(L_7);
		RuntimeObject * L_8 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_1 = L_8;
		RuntimeObject * L_9 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		int32_t L_10 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
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
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mC6F534213BDAC1BC12725DB785936EDD9FB86585 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
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
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		Exception_t * L_4 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_4;
		((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeObject * L_5 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_3 = L_5;
		RuntimeObject * L_6 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_6, /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		int32_t L_7 = ((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m4A9F7F8C39B46A6DED18DB7765D7EE4B25A96A17 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(0);
		((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->set_exceptionsLock_2(NULL);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tB4EB426D3BA15C774E6B6CFAAD5B13F795272407_il2cpp_TypeInfo_var))->set_exceptionsLock_2(L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m6C548628509D0559F70E843FE3E9C814537DFD5C (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_10_1"), "SWIGRegisterStringCallback_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_10_1_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseMessaging)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2 (String_t* ___cString0, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mA2247EAA7331A5EAB1AB8148D360C22EE43A9CD5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * L_0 = (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 *)il2cpp_codegen_object_new(SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mCAE598402C0EE57018A698736B02CC9A85D92905(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * L_1 = ((SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m6C548628509D0559F70E843FE3E9C814537DFD5C(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m8A74C445F346DC7B95A32DBED4C1BBFEBFE8BD79 (SWIGStringHelper_tBEEB221612E5E4D698734C3D1E16B6AC158D96D3 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mA1738E28DB87420EF7E101BC8157F9488A48E488 (U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass13_0::<MessageReceivedDelegateMethod>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass13_0_U3CMessageReceivedDelegateMethodU3Eb__0_m1B9ABD5684D0CF4178B92E7929339B6FAB0698E8 (U3CU3Ec__DisplayClass13_0_t38DBA4DF96E92B820B5E323E2FAF41BADF63929D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m3DF471328472D6FF2D456977AF5E4C0CA935E53B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_0 = ((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
		V_0 = L_0;
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		EventHandler_1_t993C30857E350C8F4C6DE79548C9F54BE9BFA4CA * L_3 = V_0;
		intptr_t L_4 = __this->get_message_0();
		FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * L_5 = (FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 *)il2cpp_codegen_object_new(FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1_il2cpp_TypeInfo_var);
		FirebaseMessage__ctor_m75E797A8BC43F165D16E7DFF237A1BA47768B20E(L_5, (intptr_t)L_4, (bool)1, /*hidden argument*/NULL);
		MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E * L_6 = (MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E *)il2cpp_codegen_object_new(MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E_il2cpp_TypeInfo_var);
		MessageReceivedEventArgs__ctor_mFC24EB80EF55BCB1DA1FAC0D8F88D11A1BB52674(L_6, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		EventHandler_1_Invoke_m3DF471328472D6FF2D456977AF5E4C0CA935E53B(L_3, NULL, L_6, /*hidden argument*/EventHandler_1_Invoke_m3DF471328472D6FF2D456977AF5E4C0CA935E53B_RuntimeMethod_var);
		V_2 = 1;
		goto IL_0031;
	}

IL_002d:
	{
		V_2 = 0;
		goto IL_0031;
	}

IL_0031:
	{
		int32_t L_7 = V_2;
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
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m92584A2B7A42B49849A386214A16DB99FE2E8C91 (U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<>c__DisplayClass14_0::<TokenReceivedDelegateMethod>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CTokenReceivedDelegateMethodU3Eb__0_m9E08E2501328FB92172608C0FF9A56055DF5D572 (U3CU3Ec__DisplayClass14_0_tAA6225287176613B414140EE25B8AE953FD2D8F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mA65C530B02E85B6334447BE3966BC003BEAEF0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var);
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_0 = ((FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_t7E8C11E00BD046184644F07B25837B2483CD8294_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		EventHandler_1_tE00DA0138E91B1CCF1B26CCFC4EE6C41F8A0E0F4 * L_3 = V_0;
		String_t* L_4 = __this->get_token_0();
		TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 * L_5 = (TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 *)il2cpp_codegen_object_new(TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688_il2cpp_TypeInfo_var);
		TokenReceivedEventArgs__ctor_m96C2A19183DBD0CC7B681F91848148315AB9FA81(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		EventHandler_1_Invoke_mA65C530B02E85B6334447BE3966BC003BEAEF0E6(L_3, NULL, L_5, /*hidden argument*/EventHandler_1_Invoke_mA65C530B02E85B6334447BE3966BC003BEAEF0E6_RuntimeMethod_var);
	}

IL_0024:
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * __this, intptr_t ___message0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___message0);

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_mAD5B0636EBBFC226EE9E514FB77EE3364B813EC6 (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_Invoke_m3847D4307C737BEE5DDC1571D4F988EE0D9A5DA1 (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * __this, intptr_t ___message0, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceivedDelegate_BeginInvoke_mC715F15010C739F37CD29BCBED46033623C3A0BF (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * __this, intptr_t ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___message0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_EndInvoke_mD21BD88A2AFA70396F57FFB65770FEA39658A5AB (MessageReceivedDelegate_tE18F4BB3BF89C00933FCD115C117841EE305C3EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 (TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___token0' to native representation
	char* ____token0_marshaled = NULL;
	____token0_marshaled = il2cpp_codegen_marshal_string(___token0);

	// Native function invocation
	il2cppPInvokeFunc(____token0_marshaled);

	// Marshaling cleanup of parameter '___token0' native representation
	il2cpp_codegen_marshal_free(____token0_marshaled);
	____token0_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m19EE50E64D8BC37FED7DE01EF1290233D3DCB941 (TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_Invoke_mD95FCBE75F3B5614F8A958A5A2EDF05169BCD745 (TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * __this, String_t* ___token0, const RuntimeMethod* method)
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
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___token0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___token0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___token0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___token0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___token0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenReceivedDelegate_BeginInvoke_m89206F156547ED8CE3C204568E26C28F2CA00145 (TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * __this, String_t* ___token0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___token0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_EndInvoke_m1AB8898F610710B02F7A074316AC4F2BD2142D14 (TokenReceivedDelegate_t7C285AEE088754FC4EBDC30C43FC0B3AC3615D14 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mA822CB95071800A15C01FFA55733DAA6176C6BFA (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_mFE734A126A5C2F842BFA1068443F7DA1B7BDD601 (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m5D1085ADA14C2C9B04DBE70AE49E81735CC07541 (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m81D465FD0E0B681F5E97AD7AF2ED92E4F03667D9 (ExceptionArgumentDelegate_tC31358013D374B72F947093C770F1377F816C95C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mA62213742DA18AC79B32B9630FECC3C2F723EA6A (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mBD108CA4A02F2CC533347F695F7608A35A46706B (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m0308068CA27DAED63D57F482232FD3730E5B1EEB (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m4F8B7EFCED759B6EDB044E0317865F81D71CA5E2 (ExceptionDelegate_t0BCAA7DDFD5FBB1AD554DA5CC4D53FF523B9EADE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mCAE598402C0EE57018A698736B02CC9A85D92905 (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m0FB9C0AB9D51A401EAFE1943D630A73859A36716 (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mAEE6819D1E14E56FA2B3A4BD0A2C233DCF077486 (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m6B0BA9D3E07CCC4026F6FCC17F36790ECE73FFB8 (SWIGStringDelegate_tDB1EE3B9839FDA290E780887BCF3429D36736673 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m0E41C817EC87D91F64A762043000AF09C986978E_inline (MessageReceivedEventArgs_t4C3F2AFEC24590AEF60A4E1AF4CE58592381760E * __this, FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseMessage_tC6E40963F085EC6E10809B1E3C0C37A96EDAC3F1 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_m45D9D489E567C39B4EB1BE4859FB1C274631BF30_inline (TokenReceivedEventArgs_tD0F9A4E250C0584BAF58EFB20C387CDF91684688 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_1(L_0);
		return;
	}
}
