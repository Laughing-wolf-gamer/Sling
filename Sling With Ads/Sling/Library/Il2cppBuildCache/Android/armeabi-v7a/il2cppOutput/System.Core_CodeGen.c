#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskExtensions::Unwrap(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<TResult>>)
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000003 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000004 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000005 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000006 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000007 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000009 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000000A System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000001A System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000001B System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000024 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
extern void Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415 (void);
// 0x00000025 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::RangeIterator(System.Int32,System.Int32)
extern void Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A (void);
// 0x00000026 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000027 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000002A System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000002C System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002D System.Single System.Linq.Enumerable::Min(System.Collections.Generic.IEnumerable`1<System.Single>)
extern void Enumerable_Min_mF34A8C52F05D82106B957FFEFD4AC109780D5D1E (void);
// 0x0000002E System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Single>)
extern void Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B (void);
// 0x0000002F System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Single>)
// 0x00000030 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000031 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000032 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000033 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000034 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000035 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000039 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000003A System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000003B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000003D System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004E System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000051 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000052 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000053 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000056 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000057 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000058 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000059 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000005A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000005B System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000005C System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000005D System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005E TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000060 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000061 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000062 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000063 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000064 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000065 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000066 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000067 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000068 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000069 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x0000006C System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x0000006D TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006E System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006F System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000070 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000071 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000072 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000074 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000075 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000076 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000077 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000078 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000079 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007A System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x0000007C System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x0000007D System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000007E System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007F System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000080 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000081 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000082 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000083 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000084 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000085 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000086 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000087 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000088 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000089 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008A System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000008B System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000008C System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000008D System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008E System.Void System.Linq.Enumerable/<RangeIterator>d__115::.ctor(System.Int32)
extern void U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161 (void);
// 0x0000008F System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.IDisposable.Dispose()
extern void U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40 (void);
// 0x00000090 System.Boolean System.Linq.Enumerable/<RangeIterator>d__115::MoveNext()
extern void U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE (void);
// 0x00000091 System.Int32 System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646 (void);
// 0x00000092 System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.Reset()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059 (void);
// 0x00000093 System.Object System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680 (void);
// 0x00000094 System.Collections.Generic.IEnumerator`1<System.Int32> System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94 (void);
// 0x00000095 System.Collections.IEnumerator System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerable.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B (void);
// 0x00000096 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000097 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000098 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x00000099 TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x0000009A System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009B System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000009C System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000009D System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000009E System.Void System.Linq.Set`1::Resize()
// 0x0000009F System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000A0 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000A1 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A2 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A3 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A4 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A5 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A6 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A7 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A8 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A9 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000AA System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000AB System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000AC System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AD System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000AE System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000AF System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000B0 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000B1 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000B2 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B3 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000B4 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B5 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B6 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C2 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C3 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C4 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C5 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C6 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C9 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CD System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000D1 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000D2 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000D4 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000D5 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D6 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D7 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D8 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D9 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000DA System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000DB System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[219] = 
{
	NULL,
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415,
	Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Min_mF34A8C52F05D82106B957FFEFD4AC109780D5D1E,
	Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161,
	U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40,
	U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[219] = 
{
	-1,
	4335,
	4335,
	4515,
	4515,
	4515,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3941,
	3941,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4388,
	4388,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2257,
	2718,
	2595,
	2634,
	2718,
	2649,
	2649,
	2649,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[70] = 
{
	{ 0x02000005, { 112, 4 } },
	{ 0x02000006, { 116, 9 } },
	{ 0x02000007, { 127, 7 } },
	{ 0x02000008, { 136, 10 } },
	{ 0x02000009, { 148, 11 } },
	{ 0x0200000A, { 162, 9 } },
	{ 0x0200000B, { 174, 12 } },
	{ 0x0200000C, { 189, 1 } },
	{ 0x0200000D, { 190, 2 } },
	{ 0x0200000E, { 192, 12 } },
	{ 0x0200000F, { 204, 8 } },
	{ 0x02000010, { 212, 11 } },
	{ 0x02000011, { 223, 12 } },
	{ 0x02000012, { 235, 6 } },
	{ 0x02000014, { 241, 4 } },
	{ 0x02000015, { 245, 3 } },
	{ 0x02000017, { 248, 8 } },
	{ 0x02000019, { 256, 3 } },
	{ 0x0200001A, { 261, 5 } },
	{ 0x0200001B, { 266, 7 } },
	{ 0x0200001C, { 273, 3 } },
	{ 0x0200001D, { 276, 7 } },
	{ 0x0200001E, { 283, 4 } },
	{ 0x0200001F, { 287, 34 } },
	{ 0x02000021, { 321, 2 } },
	{ 0x06000001, { 0, 1 } },
	{ 0x06000007, { 1, 10 } },
	{ 0x06000008, { 11, 10 } },
	{ 0x06000009, { 21, 5 } },
	{ 0x0600000A, { 26, 5 } },
	{ 0x0600000B, { 31, 1 } },
	{ 0x0600000C, { 32, 2 } },
	{ 0x0600000D, { 34, 1 } },
	{ 0x0600000E, { 35, 2 } },
	{ 0x0600000F, { 37, 2 } },
	{ 0x06000010, { 39, 1 } },
	{ 0x06000011, { 40, 1 } },
	{ 0x06000012, { 41, 2 } },
	{ 0x06000013, { 43, 1 } },
	{ 0x06000014, { 44, 2 } },
	{ 0x06000015, { 46, 1 } },
	{ 0x06000016, { 47, 5 } },
	{ 0x06000017, { 52, 3 } },
	{ 0x06000018, { 55, 2 } },
	{ 0x06000019, { 57, 3 } },
	{ 0x0600001A, { 60, 1 } },
	{ 0x0600001B, { 61, 7 } },
	{ 0x0600001C, { 68, 2 } },
	{ 0x0600001D, { 70, 2 } },
	{ 0x0600001E, { 72, 4 } },
	{ 0x0600001F, { 76, 3 } },
	{ 0x06000020, { 79, 3 } },
	{ 0x06000021, { 82, 4 } },
	{ 0x06000022, { 86, 3 } },
	{ 0x06000023, { 89, 3 } },
	{ 0x06000026, { 92, 1 } },
	{ 0x06000027, { 93, 3 } },
	{ 0x06000028, { 96, 3 } },
	{ 0x06000029, { 99, 2 } },
	{ 0x0600002A, { 101, 3 } },
	{ 0x0600002B, { 104, 2 } },
	{ 0x0600002C, { 106, 5 } },
	{ 0x0600002F, { 111, 1 } },
	{ 0x0600003F, { 125, 2 } },
	{ 0x06000044, { 134, 2 } },
	{ 0x06000049, { 146, 2 } },
	{ 0x0600004F, { 159, 3 } },
	{ 0x06000054, { 171, 3 } },
	{ 0x06000059, { 186, 3 } },
	{ 0x060000A3, { 259, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[323] = 
{
	{ (Il2CppRGCTXDataType)3, 19640 },
	{ (Il2CppRGCTXDataType)2, 2702 },
	{ (Il2CppRGCTXDataType)3, 8070 },
	{ (Il2CppRGCTXDataType)2, 4243 },
	{ (Il2CppRGCTXDataType)2, 3769 },
	{ (Il2CppRGCTXDataType)3, 15945 },
	{ (Il2CppRGCTXDataType)2, 2819 },
	{ (Il2CppRGCTXDataType)2, 3776 },
	{ (Il2CppRGCTXDataType)3, 16016 },
	{ (Il2CppRGCTXDataType)2, 3771 },
	{ (Il2CppRGCTXDataType)3, 15961 },
	{ (Il2CppRGCTXDataType)2, 2703 },
	{ (Il2CppRGCTXDataType)3, 8071 },
	{ (Il2CppRGCTXDataType)2, 4266 },
	{ (Il2CppRGCTXDataType)2, 3778 },
	{ (Il2CppRGCTXDataType)3, 16032 },
	{ (Il2CppRGCTXDataType)2, 2842 },
	{ (Il2CppRGCTXDataType)2, 3786 },
	{ (Il2CppRGCTXDataType)3, 16319 },
	{ (Il2CppRGCTXDataType)2, 3782 },
	{ (Il2CppRGCTXDataType)3, 16163 },
	{ (Il2CppRGCTXDataType)2, 1017 },
	{ (Il2CppRGCTXDataType)3, 228 },
	{ (Il2CppRGCTXDataType)3, 229 },
	{ (Il2CppRGCTXDataType)2, 1903 },
	{ (Il2CppRGCTXDataType)3, 6255 },
	{ (Il2CppRGCTXDataType)2, 1018 },
	{ (Il2CppRGCTXDataType)3, 246 },
	{ (Il2CppRGCTXDataType)3, 247 },
	{ (Il2CppRGCTXDataType)2, 1920 },
	{ (Il2CppRGCTXDataType)3, 6262 },
	{ (Il2CppRGCTXDataType)3, 19016 },
	{ (Il2CppRGCTXDataType)2, 1029 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)3, 19028 },
	{ (Il2CppRGCTXDataType)2, 1033 },
	{ (Il2CppRGCTXDataType)3, 442 },
	{ (Il2CppRGCTXDataType)2, 3344 },
	{ (Il2CppRGCTXDataType)3, 12648 },
	{ (Il2CppRGCTXDataType)3, 6939 },
	{ (Il2CppRGCTXDataType)3, 18955 },
	{ (Il2CppRGCTXDataType)2, 1025 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)3, 19070 },
	{ (Il2CppRGCTXDataType)2, 1035 },
	{ (Il2CppRGCTXDataType)3, 456 },
	{ (Il2CppRGCTXDataType)3, 19022 },
	{ (Il2CppRGCTXDataType)3, 5602 },
	{ (Il2CppRGCTXDataType)2, 1755 },
	{ (Il2CppRGCTXDataType)2, 2234 },
	{ (Il2CppRGCTXDataType)2, 2360 },
	{ (Il2CppRGCTXDataType)2, 2456 },
	{ (Il2CppRGCTXDataType)2, 1352 },
	{ (Il2CppRGCTXDataType)3, 1583 },
	{ (Il2CppRGCTXDataType)3, 1584 },
	{ (Il2CppRGCTXDataType)2, 2820 },
	{ (Il2CppRGCTXDataType)3, 8725 },
	{ (Il2CppRGCTXDataType)3, 6948 },
	{ (Il2CppRGCTXDataType)2, 2684 },
	{ (Il2CppRGCTXDataType)3, 19049 },
	{ (Il2CppRGCTXDataType)3, 19050 },
	{ (Il2CppRGCTXDataType)2, 1518 },
	{ (Il2CppRGCTXDataType)3, 2385 },
	{ (Il2CppRGCTXDataType)2, 2268 },
	{ (Il2CppRGCTXDataType)2, 2368 },
	{ (Il2CppRGCTXDataType)3, 6260 },
	{ (Il2CppRGCTXDataType)3, 6261 },
	{ (Il2CppRGCTXDataType)3, 2386 },
	{ (Il2CppRGCTXDataType)2, 2235 },
	{ (Il2CppRGCTXDataType)3, 18885 },
	{ (Il2CppRGCTXDataType)2, 1023 },
	{ (Il2CppRGCTXDataType)3, 344 },
	{ (Il2CppRGCTXDataType)2, 2625 },
	{ (Il2CppRGCTXDataType)2, 2123 },
	{ (Il2CppRGCTXDataType)2, 2249 },
	{ (Il2CppRGCTXDataType)2, 2363 },
	{ (Il2CppRGCTXDataType)2, 2250 },
	{ (Il2CppRGCTXDataType)2, 2364 },
	{ (Il2CppRGCTXDataType)3, 6257 },
	{ (Il2CppRGCTXDataType)2, 2251 },
	{ (Il2CppRGCTXDataType)2, 2365 },
	{ (Il2CppRGCTXDataType)3, 6258 },
	{ (Il2CppRGCTXDataType)2, 2626 },
	{ (Il2CppRGCTXDataType)2, 2124 },
	{ (Il2CppRGCTXDataType)2, 2252 },
	{ (Il2CppRGCTXDataType)2, 2366 },
	{ (Il2CppRGCTXDataType)2, 2253 },
	{ (Il2CppRGCTXDataType)2, 2367 },
	{ (Il2CppRGCTXDataType)3, 6259 },
	{ (Il2CppRGCTXDataType)2, 2624 },
	{ (Il2CppRGCTXDataType)2, 2248 },
	{ (Il2CppRGCTXDataType)2, 2362 },
	{ (Il2CppRGCTXDataType)2, 2229 },
	{ (Il2CppRGCTXDataType)2, 2230 },
	{ (Il2CppRGCTXDataType)2, 2358 },
	{ (Il2CppRGCTXDataType)3, 6254 },
	{ (Il2CppRGCTXDataType)2, 2228 },
	{ (Il2CppRGCTXDataType)2, 2357 },
	{ (Il2CppRGCTXDataType)3, 6253 },
	{ (Il2CppRGCTXDataType)2, 2122 },
	{ (Il2CppRGCTXDataType)2, 2245 },
	{ (Il2CppRGCTXDataType)2, 2246 },
	{ (Il2CppRGCTXDataType)2, 2361 },
	{ (Il2CppRGCTXDataType)3, 6256 },
	{ (Il2CppRGCTXDataType)2, 2121 },
	{ (Il2CppRGCTXDataType)3, 18942 },
	{ (Il2CppRGCTXDataType)3, 5601 },
	{ (Il2CppRGCTXDataType)2, 1754 },
	{ (Il2CppRGCTXDataType)2, 2232 },
	{ (Il2CppRGCTXDataType)2, 2359 },
	{ (Il2CppRGCTXDataType)2, 2455 },
	{ (Il2CppRGCTXDataType)3, 18983 },
	{ (Il2CppRGCTXDataType)3, 8072 },
	{ (Il2CppRGCTXDataType)3, 8074 },
	{ (Il2CppRGCTXDataType)2, 669 },
	{ (Il2CppRGCTXDataType)3, 8073 },
	{ (Il2CppRGCTXDataType)3, 8082 },
	{ (Il2CppRGCTXDataType)2, 2706 },
	{ (Il2CppRGCTXDataType)2, 3772 },
	{ (Il2CppRGCTXDataType)3, 15962 },
	{ (Il2CppRGCTXDataType)3, 8083 },
	{ (Il2CppRGCTXDataType)2, 2306 },
	{ (Il2CppRGCTXDataType)2, 2398 },
	{ (Il2CppRGCTXDataType)3, 6270 },
	{ (Il2CppRGCTXDataType)3, 18888 },
	{ (Il2CppRGCTXDataType)2, 3783 },
	{ (Il2CppRGCTXDataType)3, 16164 },
	{ (Il2CppRGCTXDataType)3, 8075 },
	{ (Il2CppRGCTXDataType)2, 2705 },
	{ (Il2CppRGCTXDataType)2, 3770 },
	{ (Il2CppRGCTXDataType)3, 15946 },
	{ (Il2CppRGCTXDataType)3, 6269 },
	{ (Il2CppRGCTXDataType)3, 8076 },
	{ (Il2CppRGCTXDataType)3, 18887 },
	{ (Il2CppRGCTXDataType)2, 3779 },
	{ (Il2CppRGCTXDataType)3, 16033 },
	{ (Il2CppRGCTXDataType)3, 8089 },
	{ (Il2CppRGCTXDataType)2, 2707 },
	{ (Il2CppRGCTXDataType)2, 3777 },
	{ (Il2CppRGCTXDataType)3, 16017 },
	{ (Il2CppRGCTXDataType)3, 8797 },
	{ (Il2CppRGCTXDataType)3, 4600 },
	{ (Il2CppRGCTXDataType)3, 6271 },
	{ (Il2CppRGCTXDataType)3, 4599 },
	{ (Il2CppRGCTXDataType)3, 8090 },
	{ (Il2CppRGCTXDataType)3, 18889 },
	{ (Il2CppRGCTXDataType)2, 3787 },
	{ (Il2CppRGCTXDataType)3, 16320 },
	{ (Il2CppRGCTXDataType)3, 8103 },
	{ (Il2CppRGCTXDataType)2, 2709 },
	{ (Il2CppRGCTXDataType)2, 3785 },
	{ (Il2CppRGCTXDataType)3, 16166 },
	{ (Il2CppRGCTXDataType)3, 8104 },
	{ (Il2CppRGCTXDataType)2, 2309 },
	{ (Il2CppRGCTXDataType)2, 2401 },
	{ (Il2CppRGCTXDataType)3, 6275 },
	{ (Il2CppRGCTXDataType)3, 6274 },
	{ (Il2CppRGCTXDataType)2, 3774 },
	{ (Il2CppRGCTXDataType)3, 15964 },
	{ (Il2CppRGCTXDataType)3, 18899 },
	{ (Il2CppRGCTXDataType)2, 3784 },
	{ (Il2CppRGCTXDataType)3, 16165 },
	{ (Il2CppRGCTXDataType)3, 8096 },
	{ (Il2CppRGCTXDataType)2, 2708 },
	{ (Il2CppRGCTXDataType)2, 3781 },
	{ (Il2CppRGCTXDataType)3, 16035 },
	{ (Il2CppRGCTXDataType)3, 6273 },
	{ (Il2CppRGCTXDataType)3, 6272 },
	{ (Il2CppRGCTXDataType)3, 8097 },
	{ (Il2CppRGCTXDataType)2, 3773 },
	{ (Il2CppRGCTXDataType)3, 15963 },
	{ (Il2CppRGCTXDataType)3, 18898 },
	{ (Il2CppRGCTXDataType)2, 3780 },
	{ (Il2CppRGCTXDataType)3, 16034 },
	{ (Il2CppRGCTXDataType)3, 8110 },
	{ (Il2CppRGCTXDataType)2, 2710 },
	{ (Il2CppRGCTXDataType)2, 3789 },
	{ (Il2CppRGCTXDataType)3, 16322 },
	{ (Il2CppRGCTXDataType)3, 8798 },
	{ (Il2CppRGCTXDataType)3, 4602 },
	{ (Il2CppRGCTXDataType)3, 6277 },
	{ (Il2CppRGCTXDataType)3, 6276 },
	{ (Il2CppRGCTXDataType)3, 4601 },
	{ (Il2CppRGCTXDataType)3, 8111 },
	{ (Il2CppRGCTXDataType)2, 3775 },
	{ (Il2CppRGCTXDataType)3, 15965 },
	{ (Il2CppRGCTXDataType)3, 18900 },
	{ (Il2CppRGCTXDataType)2, 3788 },
	{ (Il2CppRGCTXDataType)3, 16321 },
	{ (Il2CppRGCTXDataType)3, 6266 },
	{ (Il2CppRGCTXDataType)3, 6267 },
	{ (Il2CppRGCTXDataType)3, 6278 },
	{ (Il2CppRGCTXDataType)3, 389 },
	{ (Il2CppRGCTXDataType)3, 388 },
	{ (Il2CppRGCTXDataType)2, 2295 },
	{ (Il2CppRGCTXDataType)2, 2390 },
	{ (Il2CppRGCTXDataType)3, 6268 },
	{ (Il2CppRGCTXDataType)2, 2315 },
	{ (Il2CppRGCTXDataType)2, 2413 },
	{ (Il2CppRGCTXDataType)3, 391 },
	{ (Il2CppRGCTXDataType)2, 875 },
	{ (Il2CppRGCTXDataType)2, 1030 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)3, 390 },
	{ (Il2CppRGCTXDataType)3, 444 },
	{ (Il2CppRGCTXDataType)2, 2298 },
	{ (Il2CppRGCTXDataType)2, 2392 },
	{ (Il2CppRGCTXDataType)3, 446 },
	{ (Il2CppRGCTXDataType)2, 665 },
	{ (Il2CppRGCTXDataType)2, 1034 },
	{ (Il2CppRGCTXDataType)3, 443 },
	{ (Il2CppRGCTXDataType)3, 445 },
	{ (Il2CppRGCTXDataType)3, 360 },
	{ (Il2CppRGCTXDataType)2, 3477 },
	{ (Il2CppRGCTXDataType)3, 14246 },
	{ (Il2CppRGCTXDataType)2, 2292 },
	{ (Il2CppRGCTXDataType)2, 2388 },
	{ (Il2CppRGCTXDataType)3, 14247 },
	{ (Il2CppRGCTXDataType)3, 362 },
	{ (Il2CppRGCTXDataType)2, 662 },
	{ (Il2CppRGCTXDataType)2, 1026 },
	{ (Il2CppRGCTXDataType)3, 359 },
	{ (Il2CppRGCTXDataType)3, 361 },
	{ (Il2CppRGCTXDataType)3, 458 },
	{ (Il2CppRGCTXDataType)3, 459 },
	{ (Il2CppRGCTXDataType)2, 3479 },
	{ (Il2CppRGCTXDataType)3, 14248 },
	{ (Il2CppRGCTXDataType)2, 2301 },
	{ (Il2CppRGCTXDataType)2, 2394 },
	{ (Il2CppRGCTXDataType)3, 14249 },
	{ (Il2CppRGCTXDataType)3, 461 },
	{ (Il2CppRGCTXDataType)2, 667 },
	{ (Il2CppRGCTXDataType)2, 1036 },
	{ (Il2CppRGCTXDataType)3, 457 },
	{ (Il2CppRGCTXDataType)3, 460 },
	{ (Il2CppRGCTXDataType)3, 346 },
	{ (Il2CppRGCTXDataType)2, 660 },
	{ (Il2CppRGCTXDataType)3, 348 },
	{ (Il2CppRGCTXDataType)2, 1024 },
	{ (Il2CppRGCTXDataType)3, 345 },
	{ (Il2CppRGCTXDataType)3, 347 },
	{ (Il2CppRGCTXDataType)2, 943 },
	{ (Il2CppRGCTXDataType)3, 1 },
	{ (Il2CppRGCTXDataType)2, 1925 },
	{ (Il2CppRGCTXDataType)3, 6265 },
	{ (Il2CppRGCTXDataType)2, 955 },
	{ (Il2CppRGCTXDataType)3, 13 },
	{ (Il2CppRGCTXDataType)2, 955 },
	{ (Il2CppRGCTXDataType)3, 5635 },
	{ (Il2CppRGCTXDataType)2, 1769 },
	{ (Il2CppRGCTXDataType)2, 4355 },
	{ (Il2CppRGCTXDataType)3, 14243 },
	{ (Il2CppRGCTXDataType)3, 14244 },
	{ (Il2CppRGCTXDataType)2, 2471 },
	{ (Il2CppRGCTXDataType)3, 14245 },
	{ (Il2CppRGCTXDataType)2, 561 },
	{ (Il2CppRGCTXDataType)2, 1027 },
	{ (Il2CppRGCTXDataType)3, 372 },
	{ (Il2CppRGCTXDataType)3, 12635 },
	{ (Il2CppRGCTXDataType)2, 3345 },
	{ (Il2CppRGCTXDataType)3, 12649 },
	{ (Il2CppRGCTXDataType)2, 1353 },
	{ (Il2CppRGCTXDataType)3, 1585 },
	{ (Il2CppRGCTXDataType)3, 12641 },
	{ (Il2CppRGCTXDataType)3, 4574 },
	{ (Il2CppRGCTXDataType)2, 700 },
	{ (Il2CppRGCTXDataType)3, 12636 },
	{ (Il2CppRGCTXDataType)2, 3341 },
	{ (Il2CppRGCTXDataType)3, 1639 },
	{ (Il2CppRGCTXDataType)2, 1370 },
	{ (Il2CppRGCTXDataType)2, 1724 },
	{ (Il2CppRGCTXDataType)3, 4580 },
	{ (Il2CppRGCTXDataType)3, 12637 },
	{ (Il2CppRGCTXDataType)3, 4569 },
	{ (Il2CppRGCTXDataType)3, 4570 },
	{ (Il2CppRGCTXDataType)3, 4568 },
	{ (Il2CppRGCTXDataType)3, 4571 },
	{ (Il2CppRGCTXDataType)2, 1720 },
	{ (Il2CppRGCTXDataType)2, 4318 },
	{ (Il2CppRGCTXDataType)3, 6264 },
	{ (Il2CppRGCTXDataType)3, 4573 },
	{ (Il2CppRGCTXDataType)2, 2206 },
	{ (Il2CppRGCTXDataType)3, 4572 },
	{ (Il2CppRGCTXDataType)2, 2126 },
	{ (Il2CppRGCTXDataType)2, 4269 },
	{ (Il2CppRGCTXDataType)2, 2269 },
	{ (Il2CppRGCTXDataType)2, 2369 },
	{ (Il2CppRGCTXDataType)3, 5618 },
	{ (Il2CppRGCTXDataType)2, 1763 },
	{ (Il2CppRGCTXDataType)3, 6750 },
	{ (Il2CppRGCTXDataType)3, 6751 },
	{ (Il2CppRGCTXDataType)2, 2093 },
	{ (Il2CppRGCTXDataType)3, 6754 },
	{ (Il2CppRGCTXDataType)2, 2093 },
	{ (Il2CppRGCTXDataType)3, 6755 },
	{ (Il2CppRGCTXDataType)2, 2127 },
	{ (Il2CppRGCTXDataType)3, 6759 },
	{ (Il2CppRGCTXDataType)3, 6763 },
	{ (Il2CppRGCTXDataType)3, 6762 },
	{ (Il2CppRGCTXDataType)2, 4353 },
	{ (Il2CppRGCTXDataType)3, 6753 },
	{ (Il2CppRGCTXDataType)3, 6752 },
	{ (Il2CppRGCTXDataType)3, 6760 },
	{ (Il2CppRGCTXDataType)2, 2466 },
	{ (Il2CppRGCTXDataType)3, 6757 },
	{ (Il2CppRGCTXDataType)3, 19532 },
	{ (Il2CppRGCTXDataType)2, 1726 },
	{ (Il2CppRGCTXDataType)3, 4592 },
	{ (Il2CppRGCTXDataType)1, 2203 },
	{ (Il2CppRGCTXDataType)2, 4281 },
	{ (Il2CppRGCTXDataType)3, 6756 },
	{ (Il2CppRGCTXDataType)1, 4281 },
	{ (Il2CppRGCTXDataType)1, 2466 },
	{ (Il2CppRGCTXDataType)2, 4353 },
	{ (Il2CppRGCTXDataType)2, 4281 },
	{ (Il2CppRGCTXDataType)2, 2271 },
	{ (Il2CppRGCTXDataType)2, 2371 },
	{ (Il2CppRGCTXDataType)3, 6761 },
	{ (Il2CppRGCTXDataType)3, 6758 },
	{ (Il2CppRGCTXDataType)3, 6764 },
	{ (Il2CppRGCTXDataType)2, 488 },
	{ (Il2CppRGCTXDataType)3, 4603 },
	{ (Il2CppRGCTXDataType)2, 679 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	219,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	70,
	s_rgctxIndices,
	323,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
