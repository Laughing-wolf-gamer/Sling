﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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


// Firebase.LogLevel
struct LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281(int32_t ___key0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107(int32_t ___logLevel0, char* ___message1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15(char* ___message0);
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC(char* ___cString0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0(char* ___message0);
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB(char* ___cString0);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428(intptr_t ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74(char* ___token0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC(char* ___message0, char* ___paramName1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77(char* ___message0);
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2(char* ___cString0);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[50] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m7EAA3ACC9C97CF7DDD7701707641ABA392208561),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m38604865A84999EB636A84237B8B029E9FC19C27),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mCAF35EC4B5242CE9AA79008A84DCA1706DC44181),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6550F8795BF3C4119E192032221D8BC86EB4003F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mB00883BB2F0DAAD24B0C926A9146B1A4486DC177),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m721CA80FBD6A63B77994883D1F42C5677AC58E19),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m201F18741CDA3A489106451CCB9F1CEE1BF8626C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m317AC90AEADD96EDF1B53CB9C2E050327F6E2EA7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m75170079D7DA27BDAAAAE28D9ED97A4D84244702),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3074495CC0BAE421ADE52E4DBBDF31E0F0EE647A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m935F4538727CC4029F3D4A956CAF8F856FD7B1F7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m3F4A8AEB78B6BEB84117608207D5EF82D95D747B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m63A4889B1103ADAEC609547F57DF26B50CBBDD0D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mA22873F2A007D1762D832EE4F6BD830F5ADE02D0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGStringHelper_CreateString_mB1E9F080FAC26971AAFAC66369A6AA063C34C5DB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Listener_MessageReceivedDelegateMethod_m742D07172840A1868FDC44F250CE33D1E783D428),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Listener_TokenReceivedDelegateMethod_m14CF884C62521CDA7BBD51BB2E8C5B16B65DCA74),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m0598DDD6FD8226211864E1DBB70326500A3E003C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m8B1C619BCC23DDF794C88BC4B00C7CE9CB24388A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m557D190049E226B4ECD975518F14F12DFDDCC6C1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mFAF42B3634178FF03EE16CEE0323360B1E2087AC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m7665BC40FCDB5BB8CAB1A7BA6FE2053295C349DB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m3AD07F9107950547138B306847530DD2C43EB39C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mBE35EEAABFECAE1EBC16E25CD0E7CA9412BB59B3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m6E7E3C662EE3DAF8CEE4CCB63995C5BE76001D34),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m97EE8D25F57A1BCA4B257A4495F83C2EF1F5E922),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m60B6388A697F66A66C0C4695E29757F7F758DA4D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m0CE307A64433F70AAF2E7ABC65E54C9331EF05F7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mF12138B8ADF250ECEDA3A1305B21A877FC5FAE37),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m5D45CDDA5D45FD32BE68EF12870F8FB49DBCB8BA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m481AAC2442F6C8A7C112F9E60EC94F5B826E6A77),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SWIGStringHelper_CreateString_m7F1768F48405F99D2251BC488D79AFBBFF14AAA2),
};
