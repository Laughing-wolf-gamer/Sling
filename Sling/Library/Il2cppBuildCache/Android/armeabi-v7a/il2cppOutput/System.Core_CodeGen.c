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
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000019 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000022 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000023 System.Single System.Linq.Enumerable::Min(System.Collections.Generic.IEnumerable`1<System.Single>)
extern void Enumerable_Min_mF34A8C52F05D82106B957FFEFD4AC109780D5D1E (void);
// 0x00000024 System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Single>)
extern void Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B (void);
// 0x00000025 System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Single>)
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000027 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002B System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002F System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000030 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000031 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000033 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000049 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004C System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004E System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000051 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000052 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000054 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005A TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005C System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005D System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005E System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000060 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000061 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000062 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000063 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000064 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000065 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000066 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000067 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000068 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000069 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x0000006A System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000006B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000006C System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000006D TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006E System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000006F System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000070 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000071 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000072 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000073 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000074 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000075 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000076 System.Void System.Linq.Set`1::Resize()
// 0x00000077 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000078 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000079 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000007A System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007C System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000007D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000080 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000081 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000082 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000083 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000084 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000085 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000086 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000087 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000088 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000089 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000008A System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008B System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000008C System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000008D System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000008E TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000090 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000094 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000097 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000098 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000099 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000009A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000009B System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000009E System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000A0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A4 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A5 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000A8 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000A9 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000AA System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AB System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[171] = 
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
static const int32_t s_InvokerIndices[171] = 
{
	-1,
	4208,
	4208,
	4381,
	4381,
	4381,
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
	4258,
	4258,
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
static const Il2CppTokenRangePair s_rgctxIndices[58] = 
{
	{ 0x02000005, { 91, 4 } },
	{ 0x02000006, { 95, 9 } },
	{ 0x02000007, { 106, 7 } },
	{ 0x02000008, { 115, 10 } },
	{ 0x02000009, { 127, 11 } },
	{ 0x0200000A, { 141, 9 } },
	{ 0x0200000B, { 153, 12 } },
	{ 0x0200000C, { 168, 1 } },
	{ 0x0200000D, { 169, 2 } },
	{ 0x0200000E, { 171, 12 } },
	{ 0x0200000F, { 183, 11 } },
	{ 0x02000010, { 194, 12 } },
	{ 0x02000012, { 206, 8 } },
	{ 0x02000014, { 214, 3 } },
	{ 0x02000015, { 219, 5 } },
	{ 0x02000016, { 224, 7 } },
	{ 0x02000017, { 231, 3 } },
	{ 0x02000018, { 234, 7 } },
	{ 0x02000019, { 241, 4 } },
	{ 0x0200001A, { 245, 21 } },
	{ 0x0200001C, { 266, 2 } },
	{ 0x06000001, { 0, 1 } },
	{ 0x06000007, { 1, 10 } },
	{ 0x06000008, { 11, 10 } },
	{ 0x06000009, { 21, 5 } },
	{ 0x0600000A, { 26, 5 } },
	{ 0x0600000B, { 31, 1 } },
	{ 0x0600000C, { 32, 2 } },
	{ 0x0600000D, { 34, 2 } },
	{ 0x0600000E, { 36, 1 } },
	{ 0x0600000F, { 37, 1 } },
	{ 0x06000010, { 38, 2 } },
	{ 0x06000011, { 40, 1 } },
	{ 0x06000012, { 41, 2 } },
	{ 0x06000013, { 43, 1 } },
	{ 0x06000014, { 44, 5 } },
	{ 0x06000015, { 49, 3 } },
	{ 0x06000016, { 52, 2 } },
	{ 0x06000017, { 54, 4 } },
	{ 0x06000018, { 58, 3 } },
	{ 0x06000019, { 61, 3 } },
	{ 0x0600001A, { 64, 4 } },
	{ 0x0600001B, { 68, 3 } },
	{ 0x0600001C, { 71, 3 } },
	{ 0x0600001D, { 74, 1 } },
	{ 0x0600001E, { 75, 3 } },
	{ 0x0600001F, { 78, 2 } },
	{ 0x06000020, { 80, 3 } },
	{ 0x06000021, { 83, 2 } },
	{ 0x06000022, { 85, 5 } },
	{ 0x06000025, { 90, 1 } },
	{ 0x06000035, { 104, 2 } },
	{ 0x0600003A, { 113, 2 } },
	{ 0x0600003F, { 125, 2 } },
	{ 0x06000045, { 138, 3 } },
	{ 0x0600004A, { 150, 3 } },
	{ 0x0600004F, { 165, 3 } },
	{ 0x0600007B, { 217, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[268] = 
{
	{ (Il2CppRGCTXDataType)3, 17950 },
	{ (Il2CppRGCTXDataType)2, 2380 },
	{ (Il2CppRGCTXDataType)3, 7410 },
	{ (Il2CppRGCTXDataType)2, 3819 },
	{ (Il2CppRGCTXDataType)2, 3358 },
	{ (Il2CppRGCTXDataType)3, 14716 },
	{ (Il2CppRGCTXDataType)2, 2494 },
	{ (Il2CppRGCTXDataType)2, 3365 },
	{ (Il2CppRGCTXDataType)3, 14765 },
	{ (Il2CppRGCTXDataType)2, 3360 },
	{ (Il2CppRGCTXDataType)3, 14725 },
	{ (Il2CppRGCTXDataType)2, 2381 },
	{ (Il2CppRGCTXDataType)3, 7411 },
	{ (Il2CppRGCTXDataType)2, 3841 },
	{ (Il2CppRGCTXDataType)2, 3367 },
	{ (Il2CppRGCTXDataType)3, 14774 },
	{ (Il2CppRGCTXDataType)2, 2514 },
	{ (Il2CppRGCTXDataType)2, 3375 },
	{ (Il2CppRGCTXDataType)3, 14908 },
	{ (Il2CppRGCTXDataType)2, 3371 },
	{ (Il2CppRGCTXDataType)3, 14835 },
	{ (Il2CppRGCTXDataType)2, 915 },
	{ (Il2CppRGCTXDataType)3, 187 },
	{ (Il2CppRGCTXDataType)3, 188 },
	{ (Il2CppRGCTXDataType)2, 1682 },
	{ (Il2CppRGCTXDataType)3, 5728 },
	{ (Il2CppRGCTXDataType)2, 916 },
	{ (Il2CppRGCTXDataType)3, 201 },
	{ (Il2CppRGCTXDataType)3, 202 },
	{ (Il2CppRGCTXDataType)2, 1694 },
	{ (Il2CppRGCTXDataType)3, 5733 },
	{ (Il2CppRGCTXDataType)3, 17408 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)3, 273 },
	{ (Il2CppRGCTXDataType)2, 2970 },
	{ (Il2CppRGCTXDataType)3, 11584 },
	{ (Il2CppRGCTXDataType)3, 6293 },
	{ (Il2CppRGCTXDataType)3, 17365 },
	{ (Il2CppRGCTXDataType)2, 921 },
	{ (Il2CppRGCTXDataType)3, 245 },
	{ (Il2CppRGCTXDataType)3, 17441 },
	{ (Il2CppRGCTXDataType)2, 929 },
	{ (Il2CppRGCTXDataType)3, 319 },
	{ (Il2CppRGCTXDataType)3, 17413 },
	{ (Il2CppRGCTXDataType)3, 5083 },
	{ (Il2CppRGCTXDataType)2, 1536 },
	{ (Il2CppRGCTXDataType)2, 1959 },
	{ (Il2CppRGCTXDataType)2, 2061 },
	{ (Il2CppRGCTXDataType)2, 2141 },
	{ (Il2CppRGCTXDataType)2, 1163 },
	{ (Il2CppRGCTXDataType)3, 1324 },
	{ (Il2CppRGCTXDataType)3, 1325 },
	{ (Il2CppRGCTXDataType)2, 2495 },
	{ (Il2CppRGCTXDataType)3, 7878 },
	{ (Il2CppRGCTXDataType)2, 2308 },
	{ (Il2CppRGCTXDataType)2, 1855 },
	{ (Il2CppRGCTXDataType)2, 1970 },
	{ (Il2CppRGCTXDataType)2, 2064 },
	{ (Il2CppRGCTXDataType)2, 1971 },
	{ (Il2CppRGCTXDataType)2, 2065 },
	{ (Il2CppRGCTXDataType)3, 5730 },
	{ (Il2CppRGCTXDataType)2, 1972 },
	{ (Il2CppRGCTXDataType)2, 2066 },
	{ (Il2CppRGCTXDataType)3, 5731 },
	{ (Il2CppRGCTXDataType)2, 2309 },
	{ (Il2CppRGCTXDataType)2, 1856 },
	{ (Il2CppRGCTXDataType)2, 1973 },
	{ (Il2CppRGCTXDataType)2, 2067 },
	{ (Il2CppRGCTXDataType)2, 1974 },
	{ (Il2CppRGCTXDataType)2, 2068 },
	{ (Il2CppRGCTXDataType)3, 5732 },
	{ (Il2CppRGCTXDataType)2, 2307 },
	{ (Il2CppRGCTXDataType)2, 1969 },
	{ (Il2CppRGCTXDataType)2, 2063 },
	{ (Il2CppRGCTXDataType)2, 1954 },
	{ (Il2CppRGCTXDataType)2, 1955 },
	{ (Il2CppRGCTXDataType)2, 2059 },
	{ (Il2CppRGCTXDataType)3, 5727 },
	{ (Il2CppRGCTXDataType)2, 1854 },
	{ (Il2CppRGCTXDataType)2, 1966 },
	{ (Il2CppRGCTXDataType)2, 1967 },
	{ (Il2CppRGCTXDataType)2, 2062 },
	{ (Il2CppRGCTXDataType)3, 5729 },
	{ (Il2CppRGCTXDataType)2, 1853 },
	{ (Il2CppRGCTXDataType)3, 17352 },
	{ (Il2CppRGCTXDataType)3, 5082 },
	{ (Il2CppRGCTXDataType)2, 1535 },
	{ (Il2CppRGCTXDataType)2, 1957 },
	{ (Il2CppRGCTXDataType)2, 2060 },
	{ (Il2CppRGCTXDataType)2, 2140 },
	{ (Il2CppRGCTXDataType)3, 17390 },
	{ (Il2CppRGCTXDataType)3, 7412 },
	{ (Il2CppRGCTXDataType)3, 7414 },
	{ (Il2CppRGCTXDataType)2, 610 },
	{ (Il2CppRGCTXDataType)3, 7413 },
	{ (Il2CppRGCTXDataType)3, 7422 },
	{ (Il2CppRGCTXDataType)2, 2384 },
	{ (Il2CppRGCTXDataType)2, 3361 },
	{ (Il2CppRGCTXDataType)3, 14726 },
	{ (Il2CppRGCTXDataType)3, 7423 },
	{ (Il2CppRGCTXDataType)2, 2019 },
	{ (Il2CppRGCTXDataType)2, 2094 },
	{ (Il2CppRGCTXDataType)3, 5740 },
	{ (Il2CppRGCTXDataType)3, 17327 },
	{ (Il2CppRGCTXDataType)2, 3372 },
	{ (Il2CppRGCTXDataType)3, 14836 },
	{ (Il2CppRGCTXDataType)3, 7415 },
	{ (Il2CppRGCTXDataType)2, 2383 },
	{ (Il2CppRGCTXDataType)2, 3359 },
	{ (Il2CppRGCTXDataType)3, 14717 },
	{ (Il2CppRGCTXDataType)3, 5739 },
	{ (Il2CppRGCTXDataType)3, 7416 },
	{ (Il2CppRGCTXDataType)3, 17326 },
	{ (Il2CppRGCTXDataType)2, 3368 },
	{ (Il2CppRGCTXDataType)3, 14775 },
	{ (Il2CppRGCTXDataType)3, 7429 },
	{ (Il2CppRGCTXDataType)2, 2385 },
	{ (Il2CppRGCTXDataType)2, 3366 },
	{ (Il2CppRGCTXDataType)3, 14766 },
	{ (Il2CppRGCTXDataType)3, 7940 },
	{ (Il2CppRGCTXDataType)3, 4218 },
	{ (Il2CppRGCTXDataType)3, 5741 },
	{ (Il2CppRGCTXDataType)3, 4217 },
	{ (Il2CppRGCTXDataType)3, 7430 },
	{ (Il2CppRGCTXDataType)3, 17328 },
	{ (Il2CppRGCTXDataType)2, 3376 },
	{ (Il2CppRGCTXDataType)3, 14909 },
	{ (Il2CppRGCTXDataType)3, 7443 },
	{ (Il2CppRGCTXDataType)2, 2387 },
	{ (Il2CppRGCTXDataType)2, 3374 },
	{ (Il2CppRGCTXDataType)3, 14838 },
	{ (Il2CppRGCTXDataType)3, 7444 },
	{ (Il2CppRGCTXDataType)2, 2022 },
	{ (Il2CppRGCTXDataType)2, 2097 },
	{ (Il2CppRGCTXDataType)3, 5745 },
	{ (Il2CppRGCTXDataType)3, 5744 },
	{ (Il2CppRGCTXDataType)2, 3363 },
	{ (Il2CppRGCTXDataType)3, 14728 },
	{ (Il2CppRGCTXDataType)3, 17336 },
	{ (Il2CppRGCTXDataType)2, 3373 },
	{ (Il2CppRGCTXDataType)3, 14837 },
	{ (Il2CppRGCTXDataType)3, 7436 },
	{ (Il2CppRGCTXDataType)2, 2386 },
	{ (Il2CppRGCTXDataType)2, 3370 },
	{ (Il2CppRGCTXDataType)3, 14777 },
	{ (Il2CppRGCTXDataType)3, 5743 },
	{ (Il2CppRGCTXDataType)3, 5742 },
	{ (Il2CppRGCTXDataType)3, 7437 },
	{ (Il2CppRGCTXDataType)2, 3362 },
	{ (Il2CppRGCTXDataType)3, 14727 },
	{ (Il2CppRGCTXDataType)3, 17335 },
	{ (Il2CppRGCTXDataType)2, 3369 },
	{ (Il2CppRGCTXDataType)3, 14776 },
	{ (Il2CppRGCTXDataType)3, 7450 },
	{ (Il2CppRGCTXDataType)2, 2388 },
	{ (Il2CppRGCTXDataType)2, 3378 },
	{ (Il2CppRGCTXDataType)3, 14911 },
	{ (Il2CppRGCTXDataType)3, 7941 },
	{ (Il2CppRGCTXDataType)3, 4220 },
	{ (Il2CppRGCTXDataType)3, 5747 },
	{ (Il2CppRGCTXDataType)3, 5746 },
	{ (Il2CppRGCTXDataType)3, 4219 },
	{ (Il2CppRGCTXDataType)3, 7451 },
	{ (Il2CppRGCTXDataType)2, 3364 },
	{ (Il2CppRGCTXDataType)3, 14729 },
	{ (Il2CppRGCTXDataType)3, 17337 },
	{ (Il2CppRGCTXDataType)2, 3377 },
	{ (Il2CppRGCTXDataType)3, 14910 },
	{ (Il2CppRGCTXDataType)3, 5736 },
	{ (Il2CppRGCTXDataType)3, 5737 },
	{ (Il2CppRGCTXDataType)3, 5748 },
	{ (Il2CppRGCTXDataType)3, 276 },
	{ (Il2CppRGCTXDataType)3, 275 },
	{ (Il2CppRGCTXDataType)2, 2011 },
	{ (Il2CppRGCTXDataType)2, 2088 },
	{ (Il2CppRGCTXDataType)3, 5738 },
	{ (Il2CppRGCTXDataType)2, 2028 },
	{ (Il2CppRGCTXDataType)2, 2108 },
	{ (Il2CppRGCTXDataType)3, 278 },
	{ (Il2CppRGCTXDataType)2, 794 },
	{ (Il2CppRGCTXDataType)2, 926 },
	{ (Il2CppRGCTXDataType)3, 274 },
	{ (Il2CppRGCTXDataType)3, 277 },
	{ (Il2CppRGCTXDataType)3, 247 },
	{ (Il2CppRGCTXDataType)2, 3073 },
	{ (Il2CppRGCTXDataType)3, 13041 },
	{ (Il2CppRGCTXDataType)2, 2008 },
	{ (Il2CppRGCTXDataType)2, 2086 },
	{ (Il2CppRGCTXDataType)3, 13042 },
	{ (Il2CppRGCTXDataType)3, 249 },
	{ (Il2CppRGCTXDataType)2, 605 },
	{ (Il2CppRGCTXDataType)2, 922 },
	{ (Il2CppRGCTXDataType)3, 246 },
	{ (Il2CppRGCTXDataType)3, 248 },
	{ (Il2CppRGCTXDataType)3, 321 },
	{ (Il2CppRGCTXDataType)3, 322 },
	{ (Il2CppRGCTXDataType)2, 3075 },
	{ (Il2CppRGCTXDataType)3, 13043 },
	{ (Il2CppRGCTXDataType)2, 2014 },
	{ (Il2CppRGCTXDataType)2, 2090 },
	{ (Il2CppRGCTXDataType)3, 13044 },
	{ (Il2CppRGCTXDataType)3, 324 },
	{ (Il2CppRGCTXDataType)2, 608 },
	{ (Il2CppRGCTXDataType)2, 930 },
	{ (Il2CppRGCTXDataType)3, 320 },
	{ (Il2CppRGCTXDataType)3, 323 },
	{ (Il2CppRGCTXDataType)3, 5116 },
	{ (Il2CppRGCTXDataType)2, 1550 },
	{ (Il2CppRGCTXDataType)2, 3929 },
	{ (Il2CppRGCTXDataType)3, 13038 },
	{ (Il2CppRGCTXDataType)3, 13039 },
	{ (Il2CppRGCTXDataType)2, 2156 },
	{ (Il2CppRGCTXDataType)3, 13040 },
	{ (Il2CppRGCTXDataType)2, 508 },
	{ (Il2CppRGCTXDataType)2, 923 },
	{ (Il2CppRGCTXDataType)3, 259 },
	{ (Il2CppRGCTXDataType)3, 11571 },
	{ (Il2CppRGCTXDataType)2, 2971 },
	{ (Il2CppRGCTXDataType)3, 11585 },
	{ (Il2CppRGCTXDataType)2, 1164 },
	{ (Il2CppRGCTXDataType)3, 1326 },
	{ (Il2CppRGCTXDataType)3, 11577 },
	{ (Il2CppRGCTXDataType)3, 4192 },
	{ (Il2CppRGCTXDataType)2, 640 },
	{ (Il2CppRGCTXDataType)3, 11572 },
	{ (Il2CppRGCTXDataType)2, 2967 },
	{ (Il2CppRGCTXDataType)3, 1380 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)2, 1508 },
	{ (Il2CppRGCTXDataType)3, 4198 },
	{ (Il2CppRGCTXDataType)3, 11573 },
	{ (Il2CppRGCTXDataType)3, 4187 },
	{ (Il2CppRGCTXDataType)3, 4188 },
	{ (Il2CppRGCTXDataType)3, 4186 },
	{ (Il2CppRGCTXDataType)3, 4189 },
	{ (Il2CppRGCTXDataType)2, 1504 },
	{ (Il2CppRGCTXDataType)2, 3892 },
	{ (Il2CppRGCTXDataType)3, 5735 },
	{ (Il2CppRGCTXDataType)3, 4191 },
	{ (Il2CppRGCTXDataType)2, 1935 },
	{ (Il2CppRGCTXDataType)3, 4190 },
	{ (Il2CppRGCTXDataType)2, 1858 },
	{ (Il2CppRGCTXDataType)2, 3844 },
	{ (Il2CppRGCTXDataType)2, 1987 },
	{ (Il2CppRGCTXDataType)2, 2069 },
	{ (Il2CppRGCTXDataType)3, 5099 },
	{ (Il2CppRGCTXDataType)2, 1544 },
	{ (Il2CppRGCTXDataType)3, 6151 },
	{ (Il2CppRGCTXDataType)3, 6152 },
	{ (Il2CppRGCTXDataType)3, 6157 },
	{ (Il2CppRGCTXDataType)2, 2151 },
	{ (Il2CppRGCTXDataType)3, 6154 },
	{ (Il2CppRGCTXDataType)3, 17842 },
	{ (Il2CppRGCTXDataType)2, 1510 },
	{ (Il2CppRGCTXDataType)3, 4210 },
	{ (Il2CppRGCTXDataType)1, 1932 },
	{ (Il2CppRGCTXDataType)2, 3856 },
	{ (Il2CppRGCTXDataType)3, 6153 },
	{ (Il2CppRGCTXDataType)1, 3856 },
	{ (Il2CppRGCTXDataType)1, 2151 },
	{ (Il2CppRGCTXDataType)2, 3927 },
	{ (Il2CppRGCTXDataType)2, 3856 },
	{ (Il2CppRGCTXDataType)3, 6158 },
	{ (Il2CppRGCTXDataType)3, 6156 },
	{ (Il2CppRGCTXDataType)3, 6155 },
	{ (Il2CppRGCTXDataType)2, 443 },
	{ (Il2CppRGCTXDataType)3, 4221 },
	{ (Il2CppRGCTXDataType)2, 620 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	171,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	58,
	s_rgctxIndices,
	268,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
