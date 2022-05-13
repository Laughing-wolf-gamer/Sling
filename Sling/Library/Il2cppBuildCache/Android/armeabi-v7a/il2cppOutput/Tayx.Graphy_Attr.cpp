#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// UnityEngine.MultilineAttribute
struct MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291;
// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.MultilineAttribute
struct MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Int32 UnityEngine.MultilineAttribute::lines
	int32_t ___lines_0;

public:
	inline static int32_t get_offset_of_lines_0() { return static_cast<int32_t>(offsetof(MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291, ___lines_0)); }
	inline int32_t get_lines_0() const { return ___lines_0; }
	inline int32_t* get_address_of_lines_0() { return &___lines_0; }
	inline void set_lines_0(int32_t value)
	{
		___lines_0 = value;
	}
};


// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
// System.Void UnityEngine.MultilineAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilineAttribute__ctor_m353DC377C95D4C341F5DDD0F9894878F64E5703E (MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000 (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * __this, float ___min0, float ___max1, const RuntimeMethod* method);
static void Tayx_Graphy_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[1];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[3];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void GraphyDebugger_tCD42B251E2CF1BE2A2D23885D63326D40227D946_CustomAttributesCacheGenerator_m_debugPackets(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void DebugCondition_t45D56B9012F21E4BE8D50854AF7BFB30E8F2A90D_CustomAttributesCacheGenerator_Variable(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x56\x61\x72\x69\x61\x62\x6C\x65\x20\x74\x6F\x20\x63\x6F\x6D\x70\x61\x72\x65\x20\x61\x67\x61\x69\x6E\x73\x74"), NULL);
	}
}
static void DebugCondition_t45D56B9012F21E4BE8D50854AF7BFB30E8F2A90D_CustomAttributesCacheGenerator_Comparer(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x6D\x70\x61\x72\x65\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x20\x74\x6F\x20\x75\x73\x65"), NULL);
	}
}
static void DebugCondition_t45D56B9012F21E4BE8D50854AF7BFB30E8F2A90D_CustomAttributesCacheGenerator_Value(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x56\x61\x6C\x75\x65\x20\x74\x6F\x20\x63\x6F\x6D\x70\x61\x72\x65\x20\x61\x67\x61\x69\x6E\x73\x74\x20\x74\x68\x65\x20\x63\x68\x6F\x73\x65\x6E\x20\x76\x61\x72\x69\x61\x62\x6C\x65"), NULL);
	}
}
static void DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_Active(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x49\x66\x20\x66\x61\x6C\x73\x65\x2C\x20\x69\x74\x20\x77\x6F\x6E\x27\x74\x20\x62\x65\x20\x63\x68\x65\x63\x6B\x65\x64"), NULL);
	}
}
static void DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_Id(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x70\x74\x69\x6F\x6E\x61\x6C\x20\x49\x64\x2E\x20\x49\x74\x27\x73\x20\x75\x73\x65\x64\x20\x74\x6F\x20\x67\x65\x74\x20\x6F\x72\x20\x72\x65\x6D\x6F\x76\x65\x20\x44\x65\x62\x75\x67\x50\x61\x63\x6B\x65\x74\x73\x20\x69\x6E\x20\x72\x75\x6E\x74\x69\x6D\x65"), NULL);
	}
}
static void DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_ExecuteOnce(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x49\x66\x20\x74\x72\x75\x65\x2C\x20\x6F\x6E\x63\x65\x20\x74\x68\x65\x20\x61\x63\x74\x69\x6F\x6E\x73\x20\x61\x72\x65\x20\x65\x78\x65\x63\x75\x74\x65\x64\x2C\x20\x74\x68\x69\x73\x20\x44\x65\x62\x75\x67\x50\x61\x63\x6B\x65\x74\x20\x77\x69\x6C\x6C\x20\x64\x65\x6C\x65\x74\x65\x20\x69\x74\x73\x65\x6C\x66"), NULL);
	}
}
static void DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_InitSleepTime(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x69\x6D\x65\x20\x74\x6F\x20\x77\x61\x69\x74\x20\x62\x65\x66\x6F\x72\x65\x20\x63\x68\x65\x63\x6B\x69\x6E\x67\x20\x69\x66\x20\x63\x6F\x6E\x64\x69\x74\x69\x6F\x6E\x73\x20\x61\x72\x65\x20\x6D\x65\x74\x20\x28\x75\x73\x65\x20\x74\x68\x69\x73\x20\x74\x6F\x20\x61\x76\x6F\x69\x64\x20\x6C\x6F\x77\x20\x66\x70\x73\x20\x64\x72\x6F\x70\x73\x20\x74\x72\x69\x67\x67\x65\x72\x69\x6E\x67\x20\x74\x68\x65\x20\x63\x6F\x6E\x64\x69\x74\x69\x6F\x6E\x73\x20\x77\x68\x65\x6E\x20\x6C\x6F\x61\x64\x69\x6E\x67\x20\x74\x68\x65\x20\x67\x61\x6D\x65\x29"), NULL);
	}
}
static void DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_ExecuteSleepTime(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x69\x6D\x65\x20\x74\x6F\x20\x77\x61\x69\x74\x20\x62\x65\x66\x6F\x72\x65\x20\x63\x68\x65\x63\x6B\x69\x6E\x67\x20\x69\x66\x20\x63\x6F\x6E\x64\x69\x74\x69\x6F\x6E\x73\x20\x61\x72\x65\x20\x6D\x65\x74\x20\x61\x67\x61\x69\x6E\x20\x28\x6F\x6E\x63\x65\x20\x74\x68\x65\x79\x20\x68\x61\x76\x65\x20\x61\x6C\x72\x65\x61\x64\x79\x20\x62\x65\x65\x6E\x20\x6D\x65\x74\x20\x61\x6E\x64\x20\x69\x66\x20\x45\x78\x65\x63\x75\x74\x65\x4F\x6E\x63\x65\x20\x69\x73\x20\x66\x61\x6C\x73\x65\x29"), NULL);
	}
}
static void DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_DebugConditions(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x69\x73\x74\x20\x6F\x66\x20\x63\x6F\x6E\x64\x69\x74\x69\x6F\x6E\x73\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x63\x68\x65\x63\x6B\x65\x64\x20\x65\x61\x63\x68\x20\x66\x72\x61\x6D\x65"), NULL);
	}
}
static void DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_Message(CustomAttributesCache* cache)
{
	{
		MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 * tmp = (MultilineAttribute_tA4DCA9D8519E0C1B05636F2EFF74F81335A7F291 *)cache->attributes[0];
		MultilineAttribute__ctor_m353DC377C95D4C341F5DDD0F9894878F64E5703E(tmp, NULL);
	}
}
static void DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_DebugBreak(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x49\x66\x20\x74\x72\x75\x65\x2C\x20\x69\x74\x20\x70\x61\x75\x73\x65\x73\x20\x74\x68\x65\x20\x65\x64\x69\x74\x6F\x72"), NULL);
	}
}
static void U3CU3Ec__DisplayClass18_0_t3D3F2EDEEBF75F7C5C93CB41BB7EF5850AAF472D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass19_0_t5918FD1B94A675962640084325724DF9889BE914_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass21_0_t20389D6A9E22A716BAAB4DF03CF484F3A9AC07E5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t25EEE6F96D65013C2B98D2E7F9D568253A7EC0C5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_graphyMode(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_enableOnStartup(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_keepAlive(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_background(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_backgroundColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_enableHotkeys(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleModeKeyCode(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleModeCtrl(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleModeAlt(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleActiveKeyCode(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleActiveCtrl(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleActiveAlt(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_graphModulePosition(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_fpsModuleState(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_goodFpsColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_goodFpsThreshold(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_cautionFpsColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_cautionFpsThreshold(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_criticalFpsColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_fpsGraphResolution(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 10.0f, 300.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_fpsTextUpdateRate(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 1.0f, 200.0f, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_ramModuleState(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_allocatedRamColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_reservedRamColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_monoRamColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_ramGraphResolution(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 10.0f, 300.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_ramTextUpdateRate(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 1.0f, 200.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioModuleState(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_findAudioListenerInCameraIfNull(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioListener(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioGraphColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioGraphResolution(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 10.0f, 300.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioTextUpdateRate(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 1.0f, 200.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_FFTWindow(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_spectrumSize(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x75\x73\x74\x20\x62\x65\x20\x61\x20\x70\x6F\x77\x65\x72\x20\x6F\x66\x20\x32\x20\x61\x6E\x64\x20\x62\x65\x74\x77\x65\x65\x6E\x20\x36\x34\x2D\x38\x31\x39\x32"), NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_advancedModulePosition(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_advancedModuleState(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_ExtensionMethods_t514F2AAEC2CA279AFB02ADCCD6FCE62C8A6F9BB2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_ExtensionMethods_t514F2AAEC2CA279AFB02ADCCD6FCE62C8A6F9BB2_CustomAttributesCacheGenerator_G_ExtensionMethods_SetAllActive_m740554533AED27EC64F0439395BD897283608E5F(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_ExtensionMethods_t514F2AAEC2CA279AFB02ADCCD6FCE62C8A6F9BB2_CustomAttributesCacheGenerator_G_ExtensionMethods_SetOneActive_m40E8E8E2AE3B8A0D8B3F7281E64DB5CDF6EC016A(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_ExtensionMethods_t514F2AAEC2CA279AFB02ADCCD6FCE62C8A6F9BB2_CustomAttributesCacheGenerator_G_ExtensionMethods_SetAllActive_m78251C3DD68036E73824FAEF16539F0E73AEEEDA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToStringNonAlloc_m6E7D0D449F0D4EB24187A3178F12B5D4284A91CB(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToStringNonAlloc_m89C2603EBBD9EC83C4CEBAF874537C35238DFC3A(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToInt_m6D717748F87EF7503B5F3C06A4A84CB8AC7471D4(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToFloat_m7C957F93071C08069E8E0F4F8EBB9823761207E8(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToIndex_m6B180B3AA98C5A4B65DF411F827CA38DFD049944(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_FromIndex_m6235C6407B3AF762E16B249C3633957872914F01(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_IntString_tD6194CCCB96DCFA615A3C7CF00097201C44FAF29_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_IntString_tD6194CCCB96DCFA615A3C7CF00097201C44FAF29_CustomAttributesCacheGenerator_G_IntString_ToStringNonAlloc_mB69FAC0025B7536C3E872FC58D22052DB4C7D64D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_m_imageAllocated(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_m_imageReserved(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_m_imageMono(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_ShaderFull(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_ShaderLight(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_m_isInitialized(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamManager_t07242459948656696E848995CF558C53831842B0_CustomAttributesCacheGenerator_m_ramGraphGameObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamManager_t07242459948656696E848995CF558C53831842B0_CustomAttributesCacheGenerator_m_backgroundImages(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_U3CAllocatedRamU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_U3CReservedRamU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_U3CMonoRamU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_get_AllocatedRam_m14ECD8A19A64862D86707825015C8A7C020048A2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_set_AllocatedRam_m0BD86D202FE34E8597DC69933E02FA3D4AC4E444(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_get_ReservedRam_m5D057881AA9B5772D9232EA150FE6C41751F6A3A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_set_ReservedRam_m7A11099549C70040E2D611DFD8E06F495016F560(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_get_MonoRam_m3A4142CA689A9C613A390E428B1186D1FE758970(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_set_MonoRam_m357A63B2ABEB23EB152B3AE99C5CAB939F2D3010(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_RamText_t46613B7722D8B1167B4021041850E78BEC93FE58_CustomAttributesCacheGenerator_m_allocatedSystemMemorySizeText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamText_t46613B7722D8B1167B4021041850E78BEC93FE58_CustomAttributesCacheGenerator_m_reservedSystemMemorySizeText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_RamText_t46613B7722D8B1167B4021041850E78BEC93FE58_CustomAttributesCacheGenerator_m_monoSystemMemorySizeText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsGraph_tED66E24F7660C3DD1D74F6D907863DA74C157656_CustomAttributesCacheGenerator_m_imageGraph(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsGraph_tED66E24F7660C3DD1D74F6D907863DA74C157656_CustomAttributesCacheGenerator_ShaderFull(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsGraph_tED66E24F7660C3DD1D74F6D907863DA74C157656_CustomAttributesCacheGenerator_ShaderLight(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsGraph_tED66E24F7660C3DD1D74F6D907863DA74C157656_CustomAttributesCacheGenerator_m_isInitialized(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsManager_tF8EB51658D0262F5E29A636254353D7892AD3DF6_CustomAttributesCacheGenerator_m_fpsGraphGameObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsManager_tF8EB51658D0262F5E29A636254353D7892AD3DF6_CustomAttributesCacheGenerator_m_nonBasicTextGameObjects(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsManager_tF8EB51658D0262F5E29A636254353D7892AD3DF6_CustomAttributesCacheGenerator_m_backgroundImages(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_U3CCurrentFPSU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_U3CAverageFPSU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_U3COnePercentFPSU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_U3CZero1PercentFpsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_get_CurrentFPS_m2C29E6EF7F120F87728554463F169EDE25B6BEE2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_set_CurrentFPS_mDC48A7424E7B2DD31DC17C0AFEE0F4567C4F0D54(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_get_AverageFPS_m09ED7DC4DEA54264F91CA5A788354FBCEAC20E7E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_set_AverageFPS_mFDA07EE6C7435AE2453F54AF03530AE1FE3F0E6A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_get_OnePercentFPS_m2E4DFC5026D062598674FB6F06574C07E02CA23D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_set_OnePercentFPS_m77414B84DAAF03AA75F3D109682B950ABBEF7D5B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_get_Zero1PercentFps_mFEE6516FBA763B916A5BCE55A0A6FDE78BF38627(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_set_Zero1PercentFps_m1A670BE6F8B745E5091D4FE43D6694B8679F76B7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t92A827B26A9F45654A2F133DA255E1C78A1796AC_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_fpsText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_msText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_avgFpsText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_onePercentFpsText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_zero1PercentFpsText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_m_imageGraph(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_m_imageGraphHighestValues(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_ShaderFull(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_ShaderLight(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_m_isInitialized(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioManager_tF5D269D6C53806CE60A170A00CF4BE86FB4C5DF4_CustomAttributesCacheGenerator_m_audioGraphGameObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioManager_tF5D269D6C53806CE60A170A00CF4BE86FB4C5DF4_CustomAttributesCacheGenerator_m_audioDbText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioManager_tF5D269D6C53806CE60A170A00CF4BE86FB4C5DF4_CustomAttributesCacheGenerator_m_backgroundImages(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_U3CSpectrumU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_U3CSpectrumHighestValuesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_U3CMaxDBU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_get_Spectrum_m063D4250EAAAB6817B34A57ADB2383494CFCF5C0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_set_Spectrum_mBD23A0BB1DDAEE7460496ABA7C74F117C5B5AD68(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_get_SpectrumHighestValues_m7BFFA96DCF1E9D22E0EC7095F683FB7C10BCF92C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_set_SpectrumHighestValues_m4442B7A4A794C01224CCBCBD43FFBC50E2C7C89C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_get_MaxDB_mBDA8AC1FD40F5EEBD53DFA5F0CBC6D5AFA85410C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_set_MaxDB_mABC091CC2AA5C53F9AFE03892F2323F8FE7B54B5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void G_AudioText_tBA9889BDF9A871EE5BB41407D8693EE07F4D455F_CustomAttributesCacheGenerator_m_DBText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_backgroundImages(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_graphicsDeviceVersionText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_processorTypeText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_operatingSystemText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_systemMemoryText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_graphicsDeviceNameText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_graphicsMemorySizeText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_screenResolutionText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_gameWindowResolutionText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_updateRate(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 1.0f, 60.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Tayx_Graphy_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Tayx_Graphy_AttributeGenerators[140] = 
{
	U3CU3Ec__DisplayClass18_0_t3D3F2EDEEBF75F7C5C93CB41BB7EF5850AAF472D_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass19_0_t5918FD1B94A675962640084325724DF9889BE914_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass21_0_t20389D6A9E22A716BAAB4DF03CF484F3A9AC07E5_CustomAttributesCacheGenerator,
	U3CU3Ec_t25EEE6F96D65013C2B98D2E7F9D568253A7EC0C5_CustomAttributesCacheGenerator,
	G_ExtensionMethods_t514F2AAEC2CA279AFB02ADCCD6FCE62C8A6F9BB2_CustomAttributesCacheGenerator,
	G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator,
	G_IntString_tD6194CCCB96DCFA615A3C7CF00097201C44FAF29_CustomAttributesCacheGenerator,
	U3CU3Ec_t92A827B26A9F45654A2F133DA255E1C78A1796AC_CustomAttributesCacheGenerator,
	GraphyDebugger_tCD42B251E2CF1BE2A2D23885D63326D40227D946_CustomAttributesCacheGenerator_m_debugPackets,
	DebugCondition_t45D56B9012F21E4BE8D50854AF7BFB30E8F2A90D_CustomAttributesCacheGenerator_Variable,
	DebugCondition_t45D56B9012F21E4BE8D50854AF7BFB30E8F2A90D_CustomAttributesCacheGenerator_Comparer,
	DebugCondition_t45D56B9012F21E4BE8D50854AF7BFB30E8F2A90D_CustomAttributesCacheGenerator_Value,
	DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_Active,
	DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_Id,
	DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_ExecuteOnce,
	DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_InitSleepTime,
	DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_ExecuteSleepTime,
	DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_DebugConditions,
	DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_Message,
	DebugPacket_t2F4EBBB1B3C10A4B3B3920095C1268966F437B16_CustomAttributesCacheGenerator_DebugBreak,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_graphyMode,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_enableOnStartup,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_keepAlive,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_background,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_backgroundColor,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_enableHotkeys,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleModeKeyCode,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleModeCtrl,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleModeAlt,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleActiveKeyCode,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleActiveCtrl,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_toggleActiveAlt,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_graphModulePosition,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_fpsModuleState,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_goodFpsColor,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_goodFpsThreshold,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_cautionFpsColor,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_cautionFpsThreshold,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_criticalFpsColor,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_fpsGraphResolution,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_fpsTextUpdateRate,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_ramModuleState,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_allocatedRamColor,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_reservedRamColor,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_monoRamColor,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_ramGraphResolution,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_ramTextUpdateRate,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioModuleState,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_findAudioListenerInCameraIfNull,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioListener,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioGraphColor,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioGraphResolution,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_audioTextUpdateRate,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_FFTWindow,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_spectrumSize,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_advancedModulePosition,
	GraphyManager_tAF6C71AB2ADF6DE814E2B774ABE994BE834D1CFE_CustomAttributesCacheGenerator_m_advancedModuleState,
	G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_m_imageAllocated,
	G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_m_imageReserved,
	G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_m_imageMono,
	G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_ShaderFull,
	G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_ShaderLight,
	G_RamGraph_t3272B4B62C46164EF6F2F6AA606E81AD07B6C365_CustomAttributesCacheGenerator_m_isInitialized,
	G_RamManager_t07242459948656696E848995CF558C53831842B0_CustomAttributesCacheGenerator_m_ramGraphGameObject,
	G_RamManager_t07242459948656696E848995CF558C53831842B0_CustomAttributesCacheGenerator_m_backgroundImages,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_U3CAllocatedRamU3Ek__BackingField,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_U3CReservedRamU3Ek__BackingField,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_U3CMonoRamU3Ek__BackingField,
	G_RamText_t46613B7722D8B1167B4021041850E78BEC93FE58_CustomAttributesCacheGenerator_m_allocatedSystemMemorySizeText,
	G_RamText_t46613B7722D8B1167B4021041850E78BEC93FE58_CustomAttributesCacheGenerator_m_reservedSystemMemorySizeText,
	G_RamText_t46613B7722D8B1167B4021041850E78BEC93FE58_CustomAttributesCacheGenerator_m_monoSystemMemorySizeText,
	G_FpsGraph_tED66E24F7660C3DD1D74F6D907863DA74C157656_CustomAttributesCacheGenerator_m_imageGraph,
	G_FpsGraph_tED66E24F7660C3DD1D74F6D907863DA74C157656_CustomAttributesCacheGenerator_ShaderFull,
	G_FpsGraph_tED66E24F7660C3DD1D74F6D907863DA74C157656_CustomAttributesCacheGenerator_ShaderLight,
	G_FpsGraph_tED66E24F7660C3DD1D74F6D907863DA74C157656_CustomAttributesCacheGenerator_m_isInitialized,
	G_FpsManager_tF8EB51658D0262F5E29A636254353D7892AD3DF6_CustomAttributesCacheGenerator_m_fpsGraphGameObject,
	G_FpsManager_tF8EB51658D0262F5E29A636254353D7892AD3DF6_CustomAttributesCacheGenerator_m_nonBasicTextGameObjects,
	G_FpsManager_tF8EB51658D0262F5E29A636254353D7892AD3DF6_CustomAttributesCacheGenerator_m_backgroundImages,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_U3CCurrentFPSU3Ek__BackingField,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_U3CAverageFPSU3Ek__BackingField,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_U3COnePercentFPSU3Ek__BackingField,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_U3CZero1PercentFpsU3Ek__BackingField,
	G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_fpsText,
	G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_msText,
	G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_avgFpsText,
	G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_onePercentFpsText,
	G_FpsText_tE914562BEE543B3B0F693A045D7A807A327CB412_CustomAttributesCacheGenerator_m_zero1PercentFpsText,
	G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_m_imageGraph,
	G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_m_imageGraphHighestValues,
	G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_ShaderFull,
	G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_ShaderLight,
	G_AudioGraph_tF609D8DCD19983DD548FC62252F4E49184AED660_CustomAttributesCacheGenerator_m_isInitialized,
	G_AudioManager_tF5D269D6C53806CE60A170A00CF4BE86FB4C5DF4_CustomAttributesCacheGenerator_m_audioGraphGameObject,
	G_AudioManager_tF5D269D6C53806CE60A170A00CF4BE86FB4C5DF4_CustomAttributesCacheGenerator_m_audioDbText,
	G_AudioManager_tF5D269D6C53806CE60A170A00CF4BE86FB4C5DF4_CustomAttributesCacheGenerator_m_backgroundImages,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_U3CSpectrumU3Ek__BackingField,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_U3CSpectrumHighestValuesU3Ek__BackingField,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_U3CMaxDBU3Ek__BackingField,
	G_AudioText_tBA9889BDF9A871EE5BB41407D8693EE07F4D455F_CustomAttributesCacheGenerator_m_DBText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_backgroundImages,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_graphicsDeviceVersionText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_processorTypeText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_operatingSystemText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_systemMemoryText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_graphicsDeviceNameText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_graphicsMemorySizeText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_screenResolutionText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_gameWindowResolutionText,
	G_AdvancedData_t1767AE7DD845BCD372F2C6D2D0F8D085F291824A_CustomAttributesCacheGenerator_m_updateRate,
	G_ExtensionMethods_t514F2AAEC2CA279AFB02ADCCD6FCE62C8A6F9BB2_CustomAttributesCacheGenerator_G_ExtensionMethods_SetAllActive_m740554533AED27EC64F0439395BD897283608E5F,
	G_ExtensionMethods_t514F2AAEC2CA279AFB02ADCCD6FCE62C8A6F9BB2_CustomAttributesCacheGenerator_G_ExtensionMethods_SetOneActive_m40E8E8E2AE3B8A0D8B3F7281E64DB5CDF6EC016A,
	G_ExtensionMethods_t514F2AAEC2CA279AFB02ADCCD6FCE62C8A6F9BB2_CustomAttributesCacheGenerator_G_ExtensionMethods_SetAllActive_m78251C3DD68036E73824FAEF16539F0E73AEEEDA,
	G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToStringNonAlloc_m6E7D0D449F0D4EB24187A3178F12B5D4284A91CB,
	G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToStringNonAlloc_m89C2603EBBD9EC83C4CEBAF874537C35238DFC3A,
	G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToInt_m6D717748F87EF7503B5F3C06A4A84CB8AC7471D4,
	G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToFloat_m7C957F93071C08069E8E0F4F8EBB9823761207E8,
	G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_ToIndex_m6B180B3AA98C5A4B65DF411F827CA38DFD049944,
	G_FloatString_t1D88DD2A9F42FB6E3E4E8E56E18B5AD403A1542C_CustomAttributesCacheGenerator_G_FloatString_FromIndex_m6235C6407B3AF762E16B249C3633957872914F01,
	G_IntString_tD6194CCCB96DCFA615A3C7CF00097201C44FAF29_CustomAttributesCacheGenerator_G_IntString_ToStringNonAlloc_mB69FAC0025B7536C3E872FC58D22052DB4C7D64D,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_get_AllocatedRam_m14ECD8A19A64862D86707825015C8A7C020048A2,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_set_AllocatedRam_m0BD86D202FE34E8597DC69933E02FA3D4AC4E444,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_get_ReservedRam_m5D057881AA9B5772D9232EA150FE6C41751F6A3A,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_set_ReservedRam_m7A11099549C70040E2D611DFD8E06F495016F560,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_get_MonoRam_m3A4142CA689A9C613A390E428B1186D1FE758970,
	G_RamMonitor_t38A0FE42F7D7E6CA163449033893156C3EBFE986_CustomAttributesCacheGenerator_G_RamMonitor_set_MonoRam_m357A63B2ABEB23EB152B3AE99C5CAB939F2D3010,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_get_CurrentFPS_m2C29E6EF7F120F87728554463F169EDE25B6BEE2,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_set_CurrentFPS_mDC48A7424E7B2DD31DC17C0AFEE0F4567C4F0D54,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_get_AverageFPS_m09ED7DC4DEA54264F91CA5A788354FBCEAC20E7E,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_set_AverageFPS_mFDA07EE6C7435AE2453F54AF03530AE1FE3F0E6A,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_get_OnePercentFPS_m2E4DFC5026D062598674FB6F06574C07E02CA23D,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_set_OnePercentFPS_m77414B84DAAF03AA75F3D109682B950ABBEF7D5B,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_get_Zero1PercentFps_mFEE6516FBA763B916A5BCE55A0A6FDE78BF38627,
	G_FpsMonitor_t30CCA72A063C4A4CB111ACE74C29AAE53AC774C6_CustomAttributesCacheGenerator_G_FpsMonitor_set_Zero1PercentFps_m1A670BE6F8B745E5091D4FE43D6694B8679F76B7,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_get_Spectrum_m063D4250EAAAB6817B34A57ADB2383494CFCF5C0,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_set_Spectrum_mBD23A0BB1DDAEE7460496ABA7C74F117C5B5AD68,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_get_SpectrumHighestValues_m7BFFA96DCF1E9D22E0EC7095F683FB7C10BCF92C,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_set_SpectrumHighestValues_m4442B7A4A794C01224CCBCBD43FFBC50E2C7C89C,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_get_MaxDB_mBDA8AC1FD40F5EEBD53DFA5F0CBC6D5AFA85410C,
	G_AudioMonitor_t02484C8F7430591F4B103462E42EDCD4E7A329D3_CustomAttributesCacheGenerator_G_AudioMonitor_set_MaxDB_mABC091CC2AA5C53F9AFE03892F2323F8FE7B54B5,
	Tayx_Graphy_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
