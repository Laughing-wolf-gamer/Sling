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

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_tDFDEC884936A4BFB3ED41935F9313D9685C1FECA;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_tE42BF6F9F192AF9FBBFC7AAFAD78FD847A450B0C;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>
struct ICollection_1_t739DAF6F607907211FD5C6513CDE5C3E3C7DBBF2;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>
struct IEnumerable_1_tD514615CC1047D4721507B4869A16AF9C4EFE949;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct IList_1_tE4CFFC2288046BA2BE7987C5C138A889A1F36E96;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_tEF25210307D69880128385FA00E5F12705EBC2E6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t1BBEA3237CF711106984E540A30F8394337C053D;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>
struct UnityEvent_2_tF23955AE112F5CF21B7E033919934B47B725D230;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Purchasing.IAPButton[]
struct IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B;
// UnityEngine.Purchasing.IAPListener[]
struct IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t1B7B3D30C9A9AC4EEB093DD12C9D93E5DCB5F4B2;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062;
// UnityEngine.Purchasing.ProductCatalogItem[]
struct ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3;
// UnityEngine.Purchasing.ProductCatalogPayout[]
struct ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Purchasing.StoreID[]
struct StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Purchasing.CodelessIAPStoreListener
struct CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.Purchasing.IAPButton
struct IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90;
// UnityEngine.Purchasing.IAPListener
struct IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE;
// UnityEngine.Purchasing.IAppleExtensions
struct IAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Purchasing.IDs
struct IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_tFD47F15B6FCCD46BE6E88D2112B30EC88061B8DC;
// UnityEngine.Purchasing.IGooglePlayStoreExtensions
struct IGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// UnityEngine.Purchasing.IMicrosoftExtensions
struct IMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t82BBF516CDF9E0AF2FF8488ED0CFA71F1207C783;
// UnityEngine.Purchasing.IProductCatalogImpl
struct IProductCatalogImpl_t7876721BCEA94CDBAF0FBCBCC249E6D5AA2898D6;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t55347A5ACE1DB3892EEB13D922FD591E238B75E1;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t1F474F8488BDF1F1D3B8C907E7648E4829B2A597;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t7F8439B516FC2268F81CE246954C55F8DC6E40F8;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t13D28A8F0959FCB6067361D7DA536E6CC8E3B506;
// Uniject.IUtil
struct IUtil_t6D8EF68B604857A8398E5FEF4F042B1CC1EDEC40;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.Purchasing.Price
struct Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4;
// UnityEngine.Purchasing.Product
struct Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E;
// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280;
// UnityEngine.Purchasing.ProductCatalogPayout
struct ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t9319A1D18BC6A8E7E35A33E66CDF88575CCB95D2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_tF1EC4885638D3E4ADFBB9AC07E3779700CA30922;
// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t403A79A0E52C07657619D8BE12B5C0F1D0E9ACA2;
// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t6EB7043260C40B14B8ABBC83B6EB448307E8BF7D;
// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t24D449603E799BDCE0854867406E1EAEE2F96640;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t739DAF6F607907211FD5C6513CDE5C3E3C7DBBF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t911D7D47D4F2EB00500565DB405F2E304235F00F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9ADC1DCE11AAF18E15390BEC2C4C39EADF579C7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBA3D9EEDF22C9848C7D9CB076B5AF0FEFBE6A307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t567DB1A2E042FAD92394D82FEB7006F92F057263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t743A35B2F34ADCD5198AF487BA3BC16AD98DCC0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAD9746F1EF306215B387033E4AC96851EBA88540_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreController_t7F8439B516FC2268F81CE246954C55F8DC6E40F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF35329A9C666A6162702EC4141FF8A8DCCD553;
IL2CPP_EXTERN_C String_t* _stringLiteral4F5969530815E6A540A3ECE75D68272FE8482067;
IL2CPP_EXTERN_C String_t* _stringLiteral537EA891070FBA82E19DC218DBB64246306F9338;
IL2CPP_EXTERN_C String_t* _stringLiteral56F1AEC2FF8B133E2CAF514BFB5AEEC1B7603B66;
IL2CPP_EXTERN_C String_t* _stringLiteral67447C652AC9BD7A3846D4B6116649F7EB15FED3;
IL2CPP_EXTERN_C String_t* _stringLiteral68BC2DE434AD588010148C07EDD3A570968E602A;
IL2CPP_EXTERN_C String_t* _stringLiteral95C26DB7F9C79787B411F513085839C1185CEE39;
IL2CPP_EXTERN_C String_t* _stringLiteral9DAAF1E37F9978FDDF8079C7917C5BE032B2F350;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E7A3FB4D90EDF8B2F2EA0B4348061782111095;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralF5A61BB4FAA639A1E99385D655E6B58C0195FB0A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisIPurchasingModule_t1F474F8488BDF1F1D3B8C907E7648E4829B2A597_m36FE9653CCA58184CE7148D88ECD1001D8506003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334_mA922A180936CB6266018E29EF8E3BCD3C0E3A1CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B_mA400D2EE5CE7107737739D073509846E01CC1B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF_m3F60C453BB12B0F4C13364AF99E251E231A7794F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF8C3D5B1DB058B86387B728723A377E7611A77B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2907B947D333A0312DDB3125FD23545F69D8B258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m596ACB6EA6F1A0B3F1448177460F3B09AD3B34CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_OnTransactionsRestored_m08F0B97450FC7D268785C75F7C8702CAA9CE78A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_PurchaseProduct_m7F7B9863F00A2123374050AA0274E47794529819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_Restore_mDA71B0A7DCDE1BE85F8DDF8398F211E252C016FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m27C285EE987F0CB92A4B33234C2DBE5F2DC0D6B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m40D9B64FF80A06C313A333C361607D40A17FFC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA60F35DC0C1DCE6CA65669EDC51C2C73AC96523F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6AD30323367C08BD06795521D02DA886575FC529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m6A61CA4CF23C2BFA2E3B91E8F1AEFADE0E923D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF4674A982E169267ADF012C06E9EA88DDB8F3E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mEB6AF74F82E61C121D695DCD59BD2FCE52F03918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0066DC5C7B9DADA1721568BFC63754E8159B10AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA3A0B5FB39833035DCD293DB9565832BF5211A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFB9A6325C3027861C4B09B75A7BE20799A583731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m7BB47D3C80BFBB957990FFE852B5825A089B7B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m748FCC3A7504604A5104F237756C09BDE8793497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IPurchasingModuleU5BU5D_t1B7B3D30C9A9AC4EEB093DD12C9D93E5DCB5F4B2;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t99A743EA829E4B2EB3D44B47DEBE4DB56559CDB4 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793, ____items_1)); }
	inline IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B* get__items_1() const { return ____items_1; }
	inline IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793_StaticFields, ____emptyArray_5)); }
	inline IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IAPButtonU5BU5D_tDF41A080B039D4EE8C3A98DCBFFC350D4F3DAC2B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87, ____items_1)); }
	inline IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327* get__items_1() const { return ____items_1; }
	inline IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87_StaticFields, ____emptyArray_5)); }
	inline IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IAPListenerU5BU5D_tBB17CA555E9579723806AA0C3D1503A8A73F4327* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5, ____items_1)); }
	inline PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* get__items_1() const { return ____items_1; }
	inline PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5_StaticFields, ____emptyArray_5)); }
	inline PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7, ____items_1)); }
	inline ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3* get__items_1() const { return ____items_1; }
	inline ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7_StaticFields, ____emptyArray_5)); }
	inline ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductCatalogItemU5BU5D_t43DD5138EDEC6D4B5E8E58CBD4F2E669EFDA7BA3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t1BBEA3237CF711106984E540A30F8394337C053D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1BBEA3237CF711106984E540A30F8394337C053D, ____items_1)); }
	inline ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6* get__items_1() const { return ____items_1; }
	inline ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1BBEA3237CF711106984E540A30F8394337C053D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1BBEA3237CF711106984E540A30F8394337C053D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1BBEA3237CF711106984E540A30F8394337C053D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1BBEA3237CF711106984E540A30F8394337C053D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1BBEA3237CF711106984E540A30F8394337C053D_StaticFields, ____emptyArray_5)); }
	inline ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductCatalogPayoutU5BU5D_tFA4E17D7D0F77CCACDB7F247B8DE35C29B08DDE6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5, ____items_1)); }
	inline StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5* get__items_1() const { return ____items_1; }
	inline StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5_StaticFields, ____emptyArray_5)); }
	inline StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StoreIDU5BU5D_t718E8E85427A5DF7E31831C65A9C8630C608E0E5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;

public:
	inline static int32_t get_offset_of_m_Binder_0() { return static_cast<int32_t>(offsetof(AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04, ___m_Binder_0)); }
	inline RuntimeObject* get_m_Binder_0() const { return ___m_Binder_0; }
	inline RuntimeObject** get_address_of_m_Binder_0() { return &___m_Binder_0; }
	inline void set_m_Binder_0(RuntimeObject* value)
	{
		___m_Binder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Binder_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Purchasing.CodelessIAPStoreListener
struct CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton> UnityEngine.Purchasing.CodelessIAPStoreListener::activeButtons
	List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * ___activeButtons_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener> UnityEngine.Purchasing.CodelessIAPStoreListener::activeListeners
	List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * ___activeListeners_2;
	// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::controller
	RuntimeObject* ___controller_4;
	// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::extensions
	RuntimeObject* ___extensions_5;
	// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.CodelessIAPStoreListener::m_Builder
	ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * ___m_Builder_6;
	// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.CodelessIAPStoreListener::catalog
	ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * ___catalog_7;

public:
	inline static int32_t get_offset_of_activeButtons_1() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E, ___activeButtons_1)); }
	inline List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * get_activeButtons_1() const { return ___activeButtons_1; }
	inline List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 ** get_address_of_activeButtons_1() { return &___activeButtons_1; }
	inline void set_activeButtons_1(List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * value)
	{
		___activeButtons_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeButtons_1), (void*)value);
	}

	inline static int32_t get_offset_of_activeListeners_2() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E, ___activeListeners_2)); }
	inline List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * get_activeListeners_2() const { return ___activeListeners_2; }
	inline List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 ** get_address_of_activeListeners_2() { return &___activeListeners_2; }
	inline void set_activeListeners_2(List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * value)
	{
		___activeListeners_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeListeners_2), (void*)value);
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E, ___controller_4)); }
	inline RuntimeObject* get_controller_4() const { return ___controller_4; }
	inline RuntimeObject** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(RuntimeObject* value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_5() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E, ___extensions_5)); }
	inline RuntimeObject* get_extensions_5() const { return ___extensions_5; }
	inline RuntimeObject** get_address_of_extensions_5() { return &___extensions_5; }
	inline void set_extensions_5(RuntimeObject* value)
	{
		___extensions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Builder_6() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E, ___m_Builder_6)); }
	inline ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * get_m_Builder_6() const { return ___m_Builder_6; }
	inline ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A ** get_address_of_m_Builder_6() { return &___m_Builder_6; }
	inline void set_m_Builder_6(ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * value)
	{
		___m_Builder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Builder_6), (void*)value);
	}

	inline static int32_t get_offset_of_catalog_7() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E, ___catalog_7)); }
	inline ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * get_catalog_7() const { return ___catalog_7; }
	inline ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B ** get_address_of_catalog_7() { return &___catalog_7; }
	inline void set_catalog_7(ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * value)
	{
		___catalog_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catalog_7), (void*)value);
	}
};

struct CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields
{
public:
	// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::instance
	CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * ___instance_0;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::unityPurchasingInitialized
	bool ___unityPurchasingInitialized_3;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::initializationComplete
	bool ___initializationComplete_8;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields, ___instance_0)); }
	inline CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * get_instance_0() const { return ___instance_0; }
	inline CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_unityPurchasingInitialized_3() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields, ___unityPurchasingInitialized_3)); }
	inline bool get_unityPurchasingInitialized_3() const { return ___unityPurchasingInitialized_3; }
	inline bool* get_address_of_unityPurchasingInitialized_3() { return &___unityPurchasingInitialized_3; }
	inline void set_unityPurchasingInitialized_3(bool value)
	{
		___unityPurchasingInitialized_3 = value;
	}

	inline static int32_t get_offset_of_initializationComplete_8() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields, ___initializationComplete_8)); }
	inline bool get_initializationComplete_8() const { return ___initializationComplete_8; }
	inline bool* get_address_of_initializationComplete_8() { return &___initializationComplete_8; }
	inline void set_initializationComplete_8(bool value)
	{
		___initializationComplete_8 = value;
	}
};


// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::m_Factory
	PurchasingFactory_t9319A1D18BC6A8E7E35A33E66CDF88575CCB95D2 * ___m_Factory_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::m_Products
	HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * ___m_Products_1;
	// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::<useCatalogProvider>k__BackingField
	bool ___U3CuseCatalogProviderU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Factory_0() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A, ___m_Factory_0)); }
	inline PurchasingFactory_t9319A1D18BC6A8E7E35A33E66CDF88575CCB95D2 * get_m_Factory_0() const { return ___m_Factory_0; }
	inline PurchasingFactory_t9319A1D18BC6A8E7E35A33E66CDF88575CCB95D2 ** get_address_of_m_Factory_0() { return &___m_Factory_0; }
	inline void set_m_Factory_0(PurchasingFactory_t9319A1D18BC6A8E7E35A33E66CDF88575CCB95D2 * value)
	{
		___m_Factory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Factory_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Products_1() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A, ___m_Products_1)); }
	inline HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * get_m_Products_1() const { return ___m_Products_1; }
	inline HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 ** get_address_of_m_Products_1() { return &___m_Products_1; }
	inline void set_m_Products_1(HashSet_1_t00A61FC12AB18B4C1D249E381790DAEE518920B1 * value)
	{
		___m_Products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Products_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A, ___U3CuseCatalogProviderU3Ek__BackingField_2)); }
	inline bool get_U3CuseCatalogProviderU3Ek__BackingField_2() const { return ___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return &___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline void set_U3CuseCatalogProviderU3Ek__BackingField_2(bool value)
	{
		___U3CuseCatalogProviderU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.Purchasing.IAPConfigurationHelper
struct IAPConfigurationHelper_tB9D970FB281DA94BA61C5346449BFB0B5E5619B1  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.IDs
struct IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.IDs::m_Dic
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___m_Dic_0;

public:
	inline static int32_t get_offset_of_m_Dic_0() { return static_cast<int32_t>(offsetof(IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F, ___m_Dic_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_m_Dic_0() const { return ___m_Dic_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_m_Dic_0() { return &___m_Dic_0; }
	inline void set_m_Dic_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___m_Dic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dic_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Product
struct Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CavailableToPurchaseU3Ek__BackingField_2)); }
	inline bool get_U3CavailableToPurchaseU3Ek__BackingField_2() const { return ___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return &___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline void set_U3CavailableToPurchaseU3Ek__BackingField_2(bool value)
	{
		___U3CavailableToPurchaseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CtransactionIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_3() const { return ___U3CtransactionIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_3() { return &___U3CtransactionIDU3Ek__BackingField_3; }
	inline void set_U3CtransactionIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E, ___U3CreceiptU3Ek__BackingField_4)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_4() const { return ___U3CreceiptU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_4() { return &___U3CreceiptU3Ek__BackingField_4; }
	inline void set_U3CreceiptU3Ek__BackingField_4(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Purchasing.ProductCatalog::enableCodelessAutoInitialization
	bool ___enableCodelessAutoInitialization_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::products
	List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7 * ___products_2;

public:
	inline static int32_t get_offset_of_enableCodelessAutoInitialization_1() { return static_cast<int32_t>(offsetof(ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B, ___enableCodelessAutoInitialization_1)); }
	inline bool get_enableCodelessAutoInitialization_1() const { return ___enableCodelessAutoInitialization_1; }
	inline bool* get_address_of_enableCodelessAutoInitialization_1() { return &___enableCodelessAutoInitialization_1; }
	inline void set_enableCodelessAutoInitialization_1(bool value)
	{
		___enableCodelessAutoInitialization_1 = value;
	}

	inline static int32_t get_offset_of_products_2() { return static_cast<int32_t>(offsetof(ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B, ___products_2)); }
	inline List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7 * get_products_2() const { return ___products_2; }
	inline List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7 ** get_address_of_products_2() { return &___products_2; }
	inline void set_products_2(List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7 * value)
	{
		___products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_2), (void*)value);
	}
};

struct ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B_StaticFields
{
public:
	// UnityEngine.Purchasing.IProductCatalogImpl UnityEngine.Purchasing.ProductCatalog::instance
	RuntimeObject* ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogPayout
struct ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::t
	String_t* ___t_0;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::st
	String_t* ___st_1;
	// System.Double UnityEngine.Purchasing.ProductCatalogPayout::q
	double ___q_2;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::d
	String_t* ___d_3;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5, ___t_0)); }
	inline String_t* get_t_0() const { return ___t_0; }
	inline String_t** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(String_t* value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_st_1() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5, ___st_1)); }
	inline String_t* get_st_1() const { return ___st_1; }
	inline String_t** get_address_of_st_1() { return &___st_1; }
	inline void set_st_1(String_t* value)
	{
		___st_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___st_1), (void*)value);
	}

	inline static int32_t get_offset_of_q_2() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5, ___q_2)); }
	inline double get_q_2() const { return ___q_2; }
	inline double* get_address_of_q_2() { return &___q_2; }
	inline void set_q_2(double value)
	{
		___q_2 = value;
	}

	inline static int32_t get_offset_of_d_3() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5, ___d_3)); }
	inline String_t* get_d_3() const { return ___d_3; }
	inline String_t** get_address_of_d_3() { return &___d_3; }
	inline void set_d_3(String_t* value)
	{
		___d_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_IdToProduct
	Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3 * ___m_IdToProduct_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_StoreSpecificIdToProduct
	Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3 * ___m_StoreSpecificIdToProduct_1;
	// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::m_Products
	ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* ___m_Products_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_ProductSet
	HashSet_1_tDFDEC884936A4BFB3ED41935F9313D9685C1FECA * ___m_ProductSet_3;

public:
	inline static int32_t get_offset_of_m_IdToProduct_0() { return static_cast<int32_t>(offsetof(ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C, ___m_IdToProduct_0)); }
	inline Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3 * get_m_IdToProduct_0() const { return ___m_IdToProduct_0; }
	inline Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3 ** get_address_of_m_IdToProduct_0() { return &___m_IdToProduct_0; }
	inline void set_m_IdToProduct_0(Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3 * value)
	{
		___m_IdToProduct_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IdToProduct_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreSpecificIdToProduct_1() { return static_cast<int32_t>(offsetof(ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C, ___m_StoreSpecificIdToProduct_1)); }
	inline Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3 * get_m_StoreSpecificIdToProduct_1() const { return ___m_StoreSpecificIdToProduct_1; }
	inline Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3 ** get_address_of_m_StoreSpecificIdToProduct_1() { return &___m_StoreSpecificIdToProduct_1; }
	inline void set_m_StoreSpecificIdToProduct_1(Dictionary_2_tE1D69E9CA40947B3D70DD9DD5D07C3B20FA874E3 * value)
	{
		___m_StoreSpecificIdToProduct_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreSpecificIdToProduct_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Products_2() { return static_cast<int32_t>(offsetof(ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C, ___m_Products_2)); }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* get_m_Products_2() const { return ___m_Products_2; }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062** get_address_of_m_Products_2() { return &___m_Products_2; }
	inline void set_m_Products_2(ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* value)
	{
		___m_Products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Products_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProductSet_3() { return static_cast<int32_t>(offsetof(ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C, ___m_ProductSet_3)); }
	inline HashSet_1_tDFDEC884936A4BFB3ED41935F9313D9685C1FECA * get_m_ProductSet_3() const { return ___m_ProductSet_3; }
	inline HashSet_1_tDFDEC884936A4BFB3ED41935F9313D9685C1FECA ** get_address_of_m_ProductSet_3() { return &___m_ProductSet_3; }
	inline void set_m_ProductSet_3(HashSet_1_tDFDEC884936A4BFB3ED41935F9313D9685C1FECA * value)
	{
		___m_ProductSet_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProductSet_3), (void*)value);
	}
};


// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::<purchasedProduct>k__BackingField
	Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___U3CpurchasedProductU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CpurchasedProductU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114, ___U3CpurchasedProductU3Ek__BackingField_0)); }
	inline Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * get_U3CpurchasedProductU3Ek__BackingField_0() const { return ___U3CpurchasedProductU3Ek__BackingField_0; }
	inline Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E ** get_address_of_U3CpurchasedProductU3Ek__BackingField_0() { return &___U3CpurchasedProductU3Ek__BackingField_0; }
	inline void set_U3CpurchasedProductU3Ek__BackingField_0(Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * value)
	{
		___U3CpurchasedProductU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpurchasedProductU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Purchasing.StoreID
struct StoreID_t846585F80BCCA8C558E1205DD51DD2786A0A83F6  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StoreID::store
	String_t* ___store_0;
	// System.String UnityEngine.Purchasing.StoreID::id
	String_t* ___id_1;

public:
	inline static int32_t get_offset_of_store_0() { return static_cast<int32_t>(offsetof(StoreID_t846585F80BCCA8C558E1205DD51DD2786A0A83F6, ___store_0)); }
	inline String_t* get_store_0() const { return ___store_0; }
	inline String_t** get_address_of_store_0() { return &___store_0; }
	inline void set_store_0(String_t* value)
	{
		___store_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StoreID_t846585F80BCCA8C558E1205DD51DD2786A0A83F6, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>
struct Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA39C50B77995D8482AA696E62991C05E92318873, ___list_0)); }
	inline List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * get_list_0() const { return ___list_0; }
	inline List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA39C50B77995D8482AA696E62991C05E92318873, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA39C50B77995D8482AA696E62991C05E92318873, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA39C50B77995D8482AA696E62991C05E92318873, ___current_3)); }
	inline IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * get_current_3() const { return ___current_3; }
	inline IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>
struct Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4, ___list_0)); }
	inline List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * get_list_0() const { return ___list_0; }
	inline List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4, ___current_3)); }
	inline IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * get_current_3() const { return ___current_3; }
	inline IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.Purchasing.AppStore
struct AppStore_t0DC87570FC5B5AA50F2B2BFF4860C452BE702904 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppStore::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppStore_t0DC87570FC5B5AA50F2B2BFF4860C452BE702904, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// UnityEngine.Purchasing.FakeStoreUIMode
struct FakeStoreUIMode_tE679DB350441225A22E631E8E8ADBB8B6C74C2F8 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_tE679DB350441225A22E631E8E8ADBB8B6C74C2F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.InitializationFailureReason
struct InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Purchasing.PayoutType
struct PayoutType_t3BDB7DF467106E1DB002687204312C9CEC25EAF0 
{
public:
	// System.Int32 UnityEngine.Purchasing.PayoutType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PayoutType_t3BDB7DF467106E1DB002687204312C9CEC25EAF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___U3ClocalizedPriceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02, ___U3ClocalizedPriceStringU3Ek__BackingField_0)); }
	inline String_t* get_U3ClocalizedPriceStringU3Ek__BackingField_0() const { return ___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return &___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline void set_U3ClocalizedPriceStringU3Ek__BackingField_0(String_t* value)
	{
		___U3ClocalizedPriceStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedPriceStringU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02, ___U3ClocalizedTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3ClocalizedTitleU3Ek__BackingField_1() const { return ___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClocalizedTitleU3Ek__BackingField_1() { return &___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline void set_U3ClocalizedTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3ClocalizedTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedTitleU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02, ___U3ClocalizedDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3ClocalizedDescriptionU3Ek__BackingField_2() const { return ___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return &___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline void set_U3ClocalizedDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3ClocalizedDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedDescriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02, ___U3CisoCurrencyCodeU3Ek__BackingField_3)); }
	inline String_t* get_U3CisoCurrencyCodeU3Ek__BackingField_3() const { return ___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return &___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline void set_U3CisoCurrencyCodeU3Ek__BackingField_3(String_t* value)
	{
		___U3CisoCurrencyCodeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisoCurrencyCodeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02, ___U3ClocalizedPriceU3Ek__BackingField_4)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_U3ClocalizedPriceU3Ek__BackingField_4() const { return ___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_U3ClocalizedPriceU3Ek__BackingField_4() { return &___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline void set_U3ClocalizedPriceU3Ek__BackingField_4(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___U3ClocalizedPriceU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Purchasing.ProductType
struct ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseProcessingResult
struct PurchaseProcessingResult_t7359C9B8C72BD6C2B38698E38AABD666E2DAE4CC 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseProcessingResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseProcessingResult_t7359C9B8C72BD6C2B38698E38AABD666E2DAE4CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.Purchasing.IAPButton/ButtonType
struct ButtonType_t1BA6BC8572DB1E4372141E38585AE346A9B83555 
{
public:
	// System.Int32 UnityEngine.Purchasing.IAPButton/ButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonType_t1BA6BC8572DB1E4372141E38585AE346A9B83555, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_tF1EC4885638D3E4ADFBB9AC07E3779700CA30922  : public UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F
{
public:

public:
};


// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t403A79A0E52C07657619D8BE12B5C0F1D0E9ACA2  : public UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044
{
public:

public:
};


// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t6EB7043260C40B14B8ABBC83B6EB448307E8BF7D  : public UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F
{
public:

public:
};


// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t24D449603E799BDCE0854867406E1EAEE2F96640  : public UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PayoutType UnityEngine.Purchasing.PayoutDefinition::m_Type
	int32_t ___m_Type_0;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Subtype
	String_t* ___m_Subtype_1;
	// System.Double UnityEngine.Purchasing.PayoutDefinition::m_Quantity
	double ___m_Quantity_2;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Data
	String_t* ___m_Data_3;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_Subtype_1() { return static_cast<int32_t>(offsetof(PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D, ___m_Subtype_1)); }
	inline String_t* get_m_Subtype_1() const { return ___m_Subtype_1; }
	inline String_t** get_address_of_m_Subtype_1() { return &___m_Subtype_1; }
	inline void set_m_Subtype_1(String_t* value)
	{
		___m_Subtype_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Subtype_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Quantity_2() { return static_cast<int32_t>(offsetof(PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D, ___m_Quantity_2)); }
	inline double get_m_Quantity_2() const { return ___m_Quantity_2; }
	inline double* get_address_of_m_Quantity_2() { return &___m_Quantity_2; }
	inline void set_m_Quantity_2(double value)
	{
		___m_Quantity_2 = value;
	}

	inline static int32_t get_offset_of_m_Data_3() { return static_cast<int32_t>(offsetof(PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D, ___m_Data_3)); }
	inline String_t* get_m_Data_3() const { return ___m_Data_3; }
	inline String_t** get_address_of_m_Data_3() { return &___m_Data_3; }
	inline void set_m_Data_3(String_t* value)
	{
		___m_Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8 * ___defaultDescription_3;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * ___googlePrice_4;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_tEF25210307D69880128385FA00E5F12705EBC2E6 * ___descriptions_5;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::udpPrice
	Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * ___udpPrice_6;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_t1BBEA3237CF711106984E540A30F8394337C053D * ___payouts_7;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___storeIDs_2)); }
	inline List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeIDs_2), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___defaultDescription_3)); }
	inline LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8 * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8 ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_t084306637A67ABEF5D8FDA53F200729CCE4C5DE8 * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_googlePrice_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___googlePrice_4)); }
	inline Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * get_googlePrice_4() const { return ___googlePrice_4; }
	inline Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 ** get_address_of_googlePrice_4() { return &___googlePrice_4; }
	inline void set_googlePrice_4(Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * value)
	{
		___googlePrice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePrice_4), (void*)value);
	}

	inline static int32_t get_offset_of_descriptions_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___descriptions_5)); }
	inline List_1_tEF25210307D69880128385FA00E5F12705EBC2E6 * get_descriptions_5() const { return ___descriptions_5; }
	inline List_1_tEF25210307D69880128385FA00E5F12705EBC2E6 ** get_address_of_descriptions_5() { return &___descriptions_5; }
	inline void set_descriptions_5(List_1_tEF25210307D69880128385FA00E5F12705EBC2E6 * value)
	{
		___descriptions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptions_5), (void*)value);
	}

	inline static int32_t get_offset_of_udpPrice_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___udpPrice_6)); }
	inline Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * get_udpPrice_6() const { return ___udpPrice_6; }
	inline Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 ** get_address_of_udpPrice_6() { return &___udpPrice_6; }
	inline void set_udpPrice_6(Price_t835C5FA25FC499E8D35900CFDE3CB59C0E0B79A4 * value)
	{
		___udpPrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udpPrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_payouts_7() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280, ___payouts_7)); }
	inline List_1_t1BBEA3237CF711106984E540A30F8394337C053D * get_payouts_7() const { return ___payouts_7; }
	inline List_1_t1BBEA3237CF711106984E540A30F8394337C053D ** get_address_of_payouts_7() { return &___payouts_7; }
	inline void set_payouts_7(List_1_t1BBEA3237CF711106984E540A30F8394337C053D * value)
	{
		___payouts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payouts_7), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___m_Payouts_4)); }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6  : public AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04
{
public:
	// System.String UnityEngine.Purchasing.StandardPurchasingModule::k_Version
	String_t* ___k_Version_1;
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::m_AppStorePlatform
	int32_t ___m_AppStorePlatform_2;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_3;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_4;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_6;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_7;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * ___U3CstoreInstanceU3Ek__BackingField_8;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_11;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * ___windowsStore_12;

public:
	inline static int32_t get_offset_of_k_Version_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___k_Version_1)); }
	inline String_t* get_k_Version_1() const { return ___k_Version_1; }
	inline String_t** get_address_of_k_Version_1() { return &___k_Version_1; }
	inline void set_k_Version_1(String_t* value)
	{
		___k_Version_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Version_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AppStorePlatform_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_AppStorePlatform_2)); }
	inline int32_t get_m_AppStorePlatform_2() const { return ___m_AppStorePlatform_2; }
	inline int32_t* get_address_of_m_AppStorePlatform_2() { return &___m_AppStorePlatform_2; }
	inline void set_m_AppStorePlatform_2(int32_t value)
	{
		___m_AppStorePlatform_2 = value;
	}

	inline static int32_t get_offset_of_m_NativeStoreProvider_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_NativeStoreProvider_3)); }
	inline RuntimeObject* get_m_NativeStoreProvider_3() const { return ___m_NativeStoreProvider_3; }
	inline RuntimeObject** get_address_of_m_NativeStoreProvider_3() { return &___m_NativeStoreProvider_3; }
	inline void set_m_NativeStoreProvider_3(RuntimeObject* value)
	{
		___m_NativeStoreProvider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeStoreProvider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_RuntimePlatform_4)); }
	inline int32_t get_m_RuntimePlatform_4() const { return ___m_RuntimePlatform_4; }
	inline int32_t* get_address_of_m_RuntimePlatform_4() { return &___m_RuntimePlatform_4; }
	inline void set_m_RuntimePlatform_4(int32_t value)
	{
		___m_RuntimePlatform_4 = value;
	}

	inline static int32_t get_offset_of_U3CutilU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CutilU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CutilU3Ek__BackingField_6() const { return ___U3CutilU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CutilU3Ek__BackingField_6() { return &___U3CutilU3Ek__BackingField_6; }
	inline void set_U3CutilU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CutilU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CutilU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloggerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CloggerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CloggerU3Ek__BackingField_7() const { return ___U3CloggerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CloggerU3Ek__BackingField_7() { return &___U3CloggerU3Ek__BackingField_7; }
	inline void set_U3CloggerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CloggerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloggerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreInstanceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CstoreInstanceU3Ek__BackingField_8)); }
	inline StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * get_U3CstoreInstanceU3Ek__BackingField_8() const { return ___U3CstoreInstanceU3Ek__BackingField_8; }
	inline StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA ** get_address_of_U3CstoreInstanceU3Ek__BackingField_8() { return &___U3CstoreInstanceU3Ek__BackingField_8; }
	inline void set_U3CstoreInstanceU3Ek__BackingField_8(StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * value)
	{
		___U3CstoreInstanceU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreInstanceU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CuseFakeStoreUIModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_10() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_10() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_10; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CuseFakeStoreAlwaysU3Ek__BackingField_11)); }
	inline bool get_U3CuseFakeStoreAlwaysU3Ek__BackingField_11() const { return ___U3CuseFakeStoreAlwaysU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_11() { return &___U3CuseFakeStoreAlwaysU3Ek__BackingField_11; }
	inline void set_U3CuseFakeStoreAlwaysU3Ek__BackingField_11(bool value)
	{
		___U3CuseFakeStoreAlwaysU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_windowsStore_12() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___windowsStore_12)); }
	inline WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * get_windowsStore_12() const { return ___windowsStore_12; }
	inline WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 ** get_address_of_windowsStore_12() { return &___windowsStore_12; }
	inline void set_windowsStore_12(WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * value)
	{
		___windowsStore_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsStore_12), (void*)value);
	}
};

struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___ModuleInstance_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * ___AndroidStoreNameMap_9;

public:
	inline static int32_t get_offset_of_ModuleInstance_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields, ___ModuleInstance_5)); }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * get_ModuleInstance_5() const { return ___ModuleInstance_5; }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 ** get_address_of_ModuleInstance_5() { return &___ModuleInstance_5; }
	inline void set_ModuleInstance_5(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * value)
	{
		___ModuleInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModuleInstance_5), (void*)value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields, ___AndroidStoreNameMap_9)); }
	inline Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * get_AndroidStoreNameMap_9() const { return ___AndroidStoreNameMap_9; }
	inline Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 ** get_address_of_AndroidStoreNameMap_9() { return &___AndroidStoreNameMap_9; }
	inline void set_AndroidStoreNameMap_9(Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * value)
	{
		___AndroidStoreNameMap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AndroidStoreNameMap_9), (void*)value);
	}
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Purchasing.IAPButton
struct IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityEngine.Purchasing.IAPButton::productId
	String_t* ___productId_4;
	// UnityEngine.Purchasing.IAPButton/ButtonType UnityEngine.Purchasing.IAPButton::buttonType
	int32_t ___buttonType_5;
	// System.Boolean UnityEngine.Purchasing.IAPButton::consumePurchase
	bool ___consumePurchase_6;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPButton::onPurchaseComplete
	OnPurchaseCompletedEvent_tF1EC4885638D3E4ADFBB9AC07E3779700CA30922 * ___onPurchaseComplete_7;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPButton::onPurchaseFailed
	OnPurchaseFailedEvent_t403A79A0E52C07657619D8BE12B5C0F1D0E9ACA2 * ___onPurchaseFailed_8;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::titleText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___titleText_9;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::descriptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___descriptionText_10;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::priceText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___priceText_11;

public:
	inline static int32_t get_offset_of_productId_4() { return static_cast<int32_t>(offsetof(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90, ___productId_4)); }
	inline String_t* get_productId_4() const { return ___productId_4; }
	inline String_t** get_address_of_productId_4() { return &___productId_4; }
	inline void set_productId_4(String_t* value)
	{
		___productId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productId_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonType_5() { return static_cast<int32_t>(offsetof(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90, ___buttonType_5)); }
	inline int32_t get_buttonType_5() const { return ___buttonType_5; }
	inline int32_t* get_address_of_buttonType_5() { return &___buttonType_5; }
	inline void set_buttonType_5(int32_t value)
	{
		___buttonType_5 = value;
	}

	inline static int32_t get_offset_of_consumePurchase_6() { return static_cast<int32_t>(offsetof(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90, ___consumePurchase_6)); }
	inline bool get_consumePurchase_6() const { return ___consumePurchase_6; }
	inline bool* get_address_of_consumePurchase_6() { return &___consumePurchase_6; }
	inline void set_consumePurchase_6(bool value)
	{
		___consumePurchase_6 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_7() { return static_cast<int32_t>(offsetof(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90, ___onPurchaseComplete_7)); }
	inline OnPurchaseCompletedEvent_tF1EC4885638D3E4ADFBB9AC07E3779700CA30922 * get_onPurchaseComplete_7() const { return ___onPurchaseComplete_7; }
	inline OnPurchaseCompletedEvent_tF1EC4885638D3E4ADFBB9AC07E3779700CA30922 ** get_address_of_onPurchaseComplete_7() { return &___onPurchaseComplete_7; }
	inline void set_onPurchaseComplete_7(OnPurchaseCompletedEvent_tF1EC4885638D3E4ADFBB9AC07E3779700CA30922 * value)
	{
		___onPurchaseComplete_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseComplete_7), (void*)value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_8() { return static_cast<int32_t>(offsetof(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90, ___onPurchaseFailed_8)); }
	inline OnPurchaseFailedEvent_t403A79A0E52C07657619D8BE12B5C0F1D0E9ACA2 * get_onPurchaseFailed_8() const { return ___onPurchaseFailed_8; }
	inline OnPurchaseFailedEvent_t403A79A0E52C07657619D8BE12B5C0F1D0E9ACA2 ** get_address_of_onPurchaseFailed_8() { return &___onPurchaseFailed_8; }
	inline void set_onPurchaseFailed_8(OnPurchaseFailedEvent_t403A79A0E52C07657619D8BE12B5C0F1D0E9ACA2 * value)
	{
		___onPurchaseFailed_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseFailed_8), (void*)value);
	}

	inline static int32_t get_offset_of_titleText_9() { return static_cast<int32_t>(offsetof(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90, ___titleText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_titleText_9() const { return ___titleText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_titleText_9() { return &___titleText_9; }
	inline void set_titleText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___titleText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleText_9), (void*)value);
	}

	inline static int32_t get_offset_of_descriptionText_10() { return static_cast<int32_t>(offsetof(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90, ___descriptionText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_descriptionText_10() const { return ___descriptionText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_descriptionText_10() { return &___descriptionText_10; }
	inline void set_descriptionText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___descriptionText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionText_10), (void*)value);
	}

	inline static int32_t get_offset_of_priceText_11() { return static_cast<int32_t>(offsetof(IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90, ___priceText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_priceText_11() const { return ___priceText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_priceText_11() { return &___priceText_11; }
	inline void set_priceText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___priceText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___priceText_11), (void*)value);
	}
};


// UnityEngine.Purchasing.IAPListener
struct IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.Purchasing.IAPListener::consumePurchase
	bool ___consumePurchase_4;
	// System.Boolean UnityEngine.Purchasing.IAPListener::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPListener::onPurchaseComplete
	OnPurchaseCompletedEvent_t6EB7043260C40B14B8ABBC83B6EB448307E8BF7D * ___onPurchaseComplete_6;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPListener::onPurchaseFailed
	OnPurchaseFailedEvent_t24D449603E799BDCE0854867406E1EAEE2F96640 * ___onPurchaseFailed_7;

public:
	inline static int32_t get_offset_of_consumePurchase_4() { return static_cast<int32_t>(offsetof(IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE, ___consumePurchase_4)); }
	inline bool get_consumePurchase_4() const { return ___consumePurchase_4; }
	inline bool* get_address_of_consumePurchase_4() { return &___consumePurchase_4; }
	inline void set_consumePurchase_4(bool value)
	{
		___consumePurchase_4 = value;
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_5() { return static_cast<int32_t>(offsetof(IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE, ___dontDestroyOnLoad_5)); }
	inline bool get_dontDestroyOnLoad_5() const { return ___dontDestroyOnLoad_5; }
	inline bool* get_address_of_dontDestroyOnLoad_5() { return &___dontDestroyOnLoad_5; }
	inline void set_dontDestroyOnLoad_5(bool value)
	{
		___dontDestroyOnLoad_5 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_6() { return static_cast<int32_t>(offsetof(IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE, ___onPurchaseComplete_6)); }
	inline OnPurchaseCompletedEvent_t6EB7043260C40B14B8ABBC83B6EB448307E8BF7D * get_onPurchaseComplete_6() const { return ___onPurchaseComplete_6; }
	inline OnPurchaseCompletedEvent_t6EB7043260C40B14B8ABBC83B6EB448307E8BF7D ** get_address_of_onPurchaseComplete_6() { return &___onPurchaseComplete_6; }
	inline void set_onPurchaseComplete_6(OnPurchaseCompletedEvent_t6EB7043260C40B14B8ABBC83B6EB448307E8BF7D * value)
	{
		___onPurchaseComplete_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseComplete_6), (void*)value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_7() { return static_cast<int32_t>(offsetof(IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE, ___onPurchaseFailed_7)); }
	inline OnPurchaseFailedEvent_t24D449603E799BDCE0854867406E1EAEE2F96640 * get_onPurchaseFailed_7() const { return ___onPurchaseFailed_7; }
	inline OnPurchaseFailedEvent_t24D449603E799BDCE0854867406E1EAEE2F96640 ** get_address_of_onPurchaseFailed_7() { return &___onPurchaseFailed_7; }
	inline void set_onPurchaseFailed_7(OnPurchaseFailedEvent_t24D449603E799BDCE0854867406E1EAEE2F96640 * value)
	{
		___onPurchaseFailed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPurchaseFailed_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t1B7B3D30C9A9AC4EEB093DD12C9D93E5DCB5F4B2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D * m_Items[1];

public:
	inline PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// T UnityEngine.Purchasing.CodelessIAPStoreListener::GetStoreExtensions<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CodelessIAPStoreListener_GetStoreExtensions_TisRuntimeObject_m0FC8016FB107802219484077B855370E1396938A_gshared (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mB0DA790FA6633A3F932858C48880732C03DCA602_gshared (UnityEvent_2_tF23955AE112F5CF21B7E033919934B47B725D230 * __this, RuntimeObject * ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m721453CC5F87AE63498BE16CE9AED969E69A1735_gshared (UnityEvent_2_tF23955AE112F5CF21B7E033919934B47B725D230 * __this, const RuntimeMethod* method);

// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * ProductCatalog_LoadDefaultCatalog_m329957BEA6EDFBB4B64336935323C0E6C0FE6E53 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.ProductCatalog::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductCatalog_IsEmpty_mD53AB77DC2EA6CBC6A112521AAA47029A3BD1694 (ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_mF89EB09FAD5CD1B6BAB3D8FDA1BB5BD5DFBD0722 (const RuntimeMethod* method);
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * StandardPurchasingModule_Instance_m2BA4C83D0EF5EDE5BE1028211A96E1A9DF3F4754 (const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardPurchasingModule_set_useFakeStoreUIMode_mFBE70255783EEBD2DAB7EDE8BF3554E0CFFC223B_inline (StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.Purchasing.Extension.IPurchasingModule>()
inline IPurchasingModuleU5BU5D_t1B7B3D30C9A9AC4EEB093DD12C9D93E5DCB5F4B2* Array_Empty_TisIPurchasingModule_t1F474F8488BDF1F1D3B8C907E7648E4829B2A597_m36FE9653CCA58184CE7148D88ECD1001D8506003_inline (const RuntimeMethod* method)
{
	return ((  IPurchasingModuleU5BU5D_t1B7B3D30C9A9AC4EEB093DD12C9D93E5DCB5F4B2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * ConfigurationBuilder_Instance_m8A8AC35B507C6934A818FCDB5DF6BE15952FEEB1 (RuntimeObject* ___first0, IPurchasingModuleU5BU5D_t1B7B3D30C9A9AC4EEB093DD12C9D93E5DCB5F4B2* ___rest1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPConfigurationHelper_PopulateConfigurationBuilder_m37F5AC65E2DC6F4D698C956887EB8AC68CA898FB (ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A ** ___builder0, ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * ___catalog1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasing_Initialize_m8C668B4F6A75B63D6E149178AC6862826BEAB013 (RuntimeObject* ___listener0, ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * ___builder1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::.ctor()
inline void List_1__ctor_mA3A0B5FB39833035DCD293DB9565832BF5211A86 (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::.ctor()
inline void List_1__ctor_mFB9A6325C3027861C4B09B75A7BE20799A583731 (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener__ctor_m973F4C3F08A36636C20214688A232F4F4637135F (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializePurchasing_mD8BA48DD040B4EC3DB3A7FFE0B428262599EE79C (const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allProducts_mD727440FEEE16700A7F9F009908C3B099215FF86_inline (ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ProductCollection_WithID_m9289AB6693C11C0D15F0222506D1A2BC6F49F940 (ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C * __this, String_t* ___id0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Add(!0)
inline void List_1_Add_m40D9B64FF80A06C313A333C361607D40A17FFC65 (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * __this, IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 *, IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Remove(!0)
inline bool List_1_Remove_mF4674A982E169267ADF012C06E9EA88DDB8F3E53 (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * __this, IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 *, IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Add(!0)
inline void List_1_Add_mA60F35DC0C1DCE6CA65669EDC51C2C73AC96523F (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * __this, IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 *, IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Remove(!0)
inline bool List_1_Remove_m6A61CA4CF23C2BFA2E3B91E8F1AEFADE0E923D1D (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * __this, IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 *, IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::GetEnumerator()
inline Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  (*) (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::get_Current()
inline IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_inline (Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 * __this, const RuntimeMethod* method)
{
	return ((  IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * (*) (Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnPurchaseFailed_mEBD06C75BD88132D8B186B79B594C82363E6838E (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___product0, int32_t ___reason1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::MoveNext()
inline bool Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1 (Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::Dispose()
inline void Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57 (Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_UpdateText_mE2153F46669B456617E3A6A7891D9FA26D71A014 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * PurchaseEventArgs_get_purchasedProduct_m82395AF6B8EB5A4747C638287821893F2D31D355_inline (PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPButton_ProcessPurchase_mA5F16C63432F52E62C899689A3FF805E465AAA40 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * ___e0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::GetEnumerator()
inline Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4  List_1_GetEnumerator_m6AD30323367C08BD06795521D02DA886575FC529 (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4  (*) (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::get_Current()
inline IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * Enumerator_get_Current_m596ACB6EA6F1A0B3F1448177460F3B09AD3B34CD_inline (Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 * __this, const RuntimeMethod* method)
{
	return ((  IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * (*) (Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPListener_ProcessPurchase_m44CBA46A9B0BEC65D034F5510558C648437D5470 (IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * __this, PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * ___e0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::MoveNext()
inline bool Enumerator_MoveNext_m2907B947D333A0312DDB3125FD23545F69D8B258 (Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::Dispose()
inline void Enumerator_Dispose_mF8C3D5B1DB058B86387B728723A377E7611A77B4 (Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnPurchaseFailed_mCF5AEDCCBE0BC0A4F76A2581E020EB8D6D592302 (IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___product0, int32_t ___reason1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_HasProductInCatalog_m35D30DA0AD1443310E65E9F7A1087F4280C00E94 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, String_t* ___productID0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddButton_m140D2007D26BB245A72191189741DBA5EAEDA0C9 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveButton_m28EE53BD6448E1E15E6DD477501C9A416B3EF62A (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitiatePurchase_m7D2FEE9DE889D4A4F230A2CE5282EF25DD33FF43 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, String_t* ___productID0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// T UnityEngine.Purchasing.CodelessIAPStoreListener::GetStoreExtensions<UnityEngine.Purchasing.IMicrosoftExtensions>()
inline RuntimeObject* CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF_m3F60C453BB12B0F4C13364AF99E251E231A7794F (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E *, const RuntimeMethod*))CodelessIAPStoreListener_GetStoreExtensions_TisRuntimeObject_m0FC8016FB107802219484077B855370E1396938A_gshared)(__this, method);
}
// T UnityEngine.Purchasing.CodelessIAPStoreListener::GetStoreExtensions<UnityEngine.Purchasing.IAppleExtensions>()
inline RuntimeObject* CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334_mA922A180936CB6266018E29EF8E3BCD3C0E3A1CB (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E *, const RuntimeMethod*))CodelessIAPStoreListener_GetStoreExtensions_TisRuntimeObject_m0FC8016FB107802219484077B855370E1396938A_gshared)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::get_appStore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardPurchasingModule_get_appStore_mB5C4E46501781A902541B486FEDEDEDF03B58562_inline (StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * __this, const RuntimeMethod* method);
// T UnityEngine.Purchasing.CodelessIAPStoreListener::GetStoreExtensions<UnityEngine.Purchasing.IGooglePlayStoreExtensions>()
inline RuntimeObject* CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B_mA400D2EE5CE7107737739D073509846E01CC1B8D (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E *, const RuntimeMethod*))CodelessIAPStoreListener_GetStoreExtensions_TisRuntimeObject_m0FC8016FB107802219484077B855370E1396938A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::Invoke(!0)
inline void UnityEvent_1_Invoke_m7BB47D3C80BFBB957990FFE852B5825A089B7B17 (UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F *, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m748FCC3A7504604A5104F237756C09BDE8793497 (UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044 * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044 *, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E *, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_mB0DA790FA6633A3F932858C48880732C03DCA602_gshared)(__this, ___arg00, ___arg11, method);
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * CodelessIAPStoreListener_GetProduct_m44939479961A10762F41022E5626B2A80E01F2E5 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, String_t* ___productID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * Product_get_metadata_m36970AF9A9B1A716E3E1FDDF3B7A3A4C2287F8AE_inline (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_m2DCBF60B7674A4E25E4D14D00EC66F40C0157D31_inline (ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_mB3B820DBB41F1EEC2B9E2C9B588CDC7050818FDF_inline (ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_mA5D6DDFDCF8F4B157E3AC23559650C89ED863914_inline (ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allValidProducts_m815818EBCE967511ACFBF617952B69A39499F962 (ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * __this, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::get_allStoreIDs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_allStoreIDs_m0C51593FA2BEB3106E886BDBCB4E5BCD5B510095_inline (ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IDs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDs__ctor_m9856C9FF3C72DFDE34C1C46C7E468DF9323A0C5B (IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDs_Add_m972BBBE31D93F3C86C507FC3DE1F6C174106E43E (IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F * __this, String_t* ___id0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___stores1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::.ctor()
inline void List_1__ctor_m0066DC5C7B9DADA1721568BFC63754E8159B10AC (List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::get_Payouts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_Payouts_m542A43F5D7334FB95D1E5F7043A44795EDE97391_inline (ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_typeString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_typeString_mEBA408E6E68913C0081D6405F1F6CF3B0183E693_inline (ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_subtype()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_subtype_m5132F643B01EF328F636172EF1A9675CECE09148_inline (ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Purchasing.ProductCatalogPayout::get_quantity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ProductCatalogPayout_get_quantity_m4071F3FEA343A53AE27C882AB9FA0F7BC3C925A8_inline (ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_data_m65D9225DE5A901FCE28D7B90A31C135B5CEC2F65_inline (ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.String,System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayoutDefinition__ctor_m9580A22A9122E5D25F1BECCF1C65C3EF2EFCC691 (PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D * __this, String_t* ___typeString0, String_t* ___subtype1, double ___quantity2, String_t* ___data3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::Add(!0)
inline void List_1_Add_m27C285EE987F0CB92A4B33234C2DBE5F2DC0D6B7 (List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * __this, PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 *, PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::ToArray()
inline PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* List_1_ToArray_mEB6AF74F82E61C121D695DCD59BD2FCE52F03918 (List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * __this, const RuntimeMethod* method)
{
	return ((  PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* (*) (List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * ConfigurationBuilder_AddProduct_mE4D41230A1FBEC3B58B9E44EAE220DDE6A4665F8 (ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * __this, String_t* ___id0, int32_t ___type1, IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F * ___storeIDs2, RuntimeObject* ___payouts3, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddListener_m9108773D1FB930C9A7A2618298D999F63D8483CA (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * ___listener0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveListener_mBA908956A4D92E277AE2C8220F530BDCFE7E952B (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * ___listener0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::.ctor()
inline void UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E (UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA6668456656FBB984102402A5F73001EC9FA440F *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor()
inline void UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423 (UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t586922AD2E4E99F987BC8DCFABA349819F1B9044 *, const RuntimeMethod*))UnityEvent_2__ctor_m721453CC5F87AE63498BE16CE9AED969E69A1735_gshared)(__this, method);
}
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
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializeCodelessPurchasingOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_mCE7F821DA53C51FF5E2DA0F7B2B665D6AFFA2AD6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * V_0 = NULL;
	{
		// ProductCatalog catalog = ProductCatalog.LoadDefaultCatalog();
		ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * L_0;
		L_0 = ProductCatalog_LoadDefaultCatalog_m329957BEA6EDFBB4B64336935323C0E6C0FE6E53(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (catalog.enableCodelessAutoInitialization && !catalog.IsEmpty() && instance == null)
		ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = L_1->get_enableCodelessAutoInitialization_1();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = ProductCatalog_IsEmpty_mD53AB77DC2EA6CBC6A112521AAA47029A3BD1694(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_5 = ((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// CreateCodelessIAPStoreListenerInstance();
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_mF89EB09FAD5CD1B6BAB3D8FDA1BB5BD5DFBD0722(/*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializePurchasing_mD8BA48DD040B4EC3DB3A7FFE0B428262599EE79C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisIPurchasingModule_t1F474F8488BDF1F1D3B8C907E7648E4829B2A597_m36FE9653CCA58184CE7148D88ECD1001D8506003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * V_0 = NULL;
	{
		// StandardPurchasingModule module = StandardPurchasingModule.Instance();
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * L_0;
		L_0 = StandardPurchasingModule_Instance_m2BA4C83D0EF5EDE5BE1028211A96E1A9DF3F4754(/*hidden argument*/NULL);
		// module.useFakeStoreUIMode = FakeStoreUIMode.StandardUser;
		StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * L_1 = L_0;
		NullCheck(L_1);
		StandardPurchasingModule_set_useFakeStoreUIMode_mFBE70255783EEBD2DAB7EDE8BF3554E0CFFC223B_inline(L_1, 1, /*hidden argument*/NULL);
		// ConfigurationBuilder builder = ConfigurationBuilder.Instance(module);
		IPurchasingModuleU5BU5D_t1B7B3D30C9A9AC4EEB093DD12C9D93E5DCB5F4B2* L_2;
		L_2 = Array_Empty_TisIPurchasingModule_t1F474F8488BDF1F1D3B8C907E7648E4829B2A597_m36FE9653CCA58184CE7148D88ECD1001D8506003_inline(/*hidden argument*/Array_Empty_TisIPurchasingModule_t1F474F8488BDF1F1D3B8C907E7648E4829B2A597_m36FE9653CCA58184CE7148D88ECD1001D8506003_RuntimeMethod_var);
		ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * L_3;
		L_3 = ConfigurationBuilder_Instance_m8A8AC35B507C6934A818FCDB5DF6BE15952FEEB1(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// IAPConfigurationHelper.PopulateConfigurationBuilder(ref builder, instance.catalog);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_4 = ((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->get_instance_0();
		NullCheck(L_4);
		ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * L_5 = L_4->get_catalog_7();
		IAPConfigurationHelper_PopulateConfigurationBuilder_m37F5AC65E2DC6F4D698C956887EB8AC68CA898FB((ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A **)(&V_0), L_5, /*hidden argument*/NULL);
		// instance.m_Builder = builder;
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_6 = ((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->get_instance_0();
		ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * L_7 = V_0;
		NullCheck(L_6);
		L_6->set_m_Builder_6(L_7);
		// UnityPurchasing.Initialize(instance, builder);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_8 = ((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->get_instance_0();
		ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * L_9 = V_0;
		UnityPurchasing_Initialize_m8C668B4F6A75B63D6E149178AC6862826BEAB013(L_8, L_9, /*hidden argument*/NULL);
		// unityPurchasingInitialized = true;
		((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->set_unityPurchasingInitialized_3((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener__ctor_m973F4C3F08A36636C20214688A232F4F4637135F (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA3A0B5FB39833035DCD293DB9565832BF5211A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFB9A6325C3027861C4B09B75A7BE20799A583731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<IAPButton> activeButtons = new List<IAPButton>();
		List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * L_0 = (List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 *)il2cpp_codegen_object_new(List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793_il2cpp_TypeInfo_var);
		List_1__ctor_mA3A0B5FB39833035DCD293DB9565832BF5211A86(L_0, /*hidden argument*/List_1__ctor_mA3A0B5FB39833035DCD293DB9565832BF5211A86_RuntimeMethod_var);
		__this->set_activeButtons_1(L_0);
		// private List<IAPListener> activeListeners = new List<IAPListener> ();
		List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * L_1 = (List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 *)il2cpp_codegen_object_new(List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87_il2cpp_TypeInfo_var);
		List_1__ctor_mFB9A6325C3027861C4B09B75A7BE20799A583731(L_1, /*hidden argument*/List_1__ctor_mFB9A6325C3027861C4B09B75A7BE20799A583731_RuntimeMethod_var);
		__this->set_activeListeners_2(L_1);
		// private CodelessIAPStoreListener()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// catalog = ProductCatalog.LoadDefaultCatalog();
		ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * L_2;
		L_2 = ProductCatalog_LoadDefaultCatalog_m329957BEA6EDFBB4B64336935323C0E6C0FE6E53(/*hidden argument*/NULL);
		__this->set_catalog_7(L_2);
		// }
		return;
	}
}
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_0 = ((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// CreateCodelessIAPStoreListenerInstance();
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_mF89EB09FAD5CD1B6BAB3D8FDA1BB5BD5DFBD0722(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// return instance;
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_1 = ((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->get_instance_0();
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_mF89EB09FAD5CD1B6BAB3D8FDA1BB5BD5DFBD0722 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = new CodelessIAPStoreListener();
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_0 = (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E *)il2cpp_codegen_object_new(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var);
		CodelessIAPStoreListener__ctor_m973F4C3F08A36636C20214688A232F4F4637135F(L_0, /*hidden argument*/NULL);
		((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		// if (!unityPurchasingInitialized)
		bool L_1 = ((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->get_unityPurchasingInitialized_3();
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// InitializePurchasing();
		CodelessIAPStoreListener_InitializePurchasing_mD8BA48DD040B4EC3DB3A7FFE0B428262599EE79C(/*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::get_StoreController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_StoreController_mDFABACB6930713DC47A95A9E97CFC7E4089FDF0F (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, const RuntimeMethod* method)
{
	{
		// get { return controller; }
		RuntimeObject* L_0 = __this->get_controller_4();
		return L_0;
	}
}
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_HasProductInCatalog_m35D30DA0AD1443310E65E9F7A1087F4280C00E94 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t911D7D47D4F2EB00500565DB405F2E304235F00F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAD9746F1EF306215B387033E4AC96851EBA88540_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var product in catalog.allProducts)
		ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * L_0 = __this->get_catalog_7();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ProductCatalog_get_allProducts_mD727440FEEE16700A7F9F009908C3B099215FF86_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t911D7D47D4F2EB00500565DB405F2E304235F00F_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0013:
		{
			// foreach (var product in catalog.allProducts)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_4;
			L_4 = InterfaceFuncInvoker0< ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_tAD9746F1EF306215B387033E4AC96851EBA88540_il2cpp_TypeInfo_var, L_3);
			// if (product.id == productID)
			NullCheck(L_4);
			String_t* L_5 = L_4->get_id_0();
			String_t* L_6 = ___productID0;
			bool L_7;
			L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_002a;
			}
		}

IL_0026:
		{
			// return true;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x40, FINALLY_0034);
		}

IL_002a:
		{
			// foreach (var product in catalog.allProducts)
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0013;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject* L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * CodelessIAPStoreListener_GetProduct_m44939479961A10762F41022E5626B2A80E01F2E5 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreController_t7F8439B516FC2268F81CE246954C55F8DC6E40F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E7A3FB4D90EDF8B2F2EA0B4348061782111095);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (controller != null && controller.products != null && !string.IsNullOrEmpty(productID))
		RuntimeObject* L_0 = __this->get_controller_4();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_controller_4();
		NullCheck(L_1);
		ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C * L_2;
		L_2 = InterfaceFuncInvoker0< ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t7F8439B516FC2268F81CE246954C55F8DC6E40F8_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = ___productID0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return controller.products.WithID(productID);
		RuntimeObject* L_5 = __this->get_controller_4();
		NullCheck(L_5);
		ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C * L_6;
		L_6 = InterfaceFuncInvoker0< ProductCollection_t5877A1A47DA0DA2C32488E6D2DD23B77E6B6065C * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t7F8439B516FC2268F81CE246954C55F8DC6E40F8_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = ___productID0;
		NullCheck(L_6);
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_8;
		L_8 = ProductCollection_WithID_m9289AB6693C11C0D15F0222506D1A2BC6F49F940(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002f:
	{
		// Debug.LogError("CodelessIAPStoreListener attempted to get unknown product " + productID);
		String_t* L_9 = ___productID0;
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB1E7A3FB4D90EDF8B2F2EA0B4348061782111095, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_10, /*hidden argument*/NULL);
		// return null;
		return (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E *)NULL;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddButton_m140D2007D26BB245A72191189741DBA5EAEDA0C9 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m40D9B64FF80A06C313A333C361607D40A17FFC65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButtons.Add(button);
		List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * L_0 = __this->get_activeButtons_1();
		IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_1 = ___button0;
		NullCheck(L_0);
		List_1_Add_m40D9B64FF80A06C313A333C361607D40A17FFC65(L_0, L_1, /*hidden argument*/List_1_Add_m40D9B64FF80A06C313A333C361607D40A17FFC65_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveButton_m28EE53BD6448E1E15E6DD477501C9A416B3EF62A (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF4674A982E169267ADF012C06E9EA88DDB8F3E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButtons.Remove(button);
		List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * L_0 = __this->get_activeButtons_1();
		IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_1 = ___button0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mF4674A982E169267ADF012C06E9EA88DDB8F3E53(L_0, L_1, /*hidden argument*/List_1_Remove_mF4674A982E169267ADF012C06E9EA88DDB8F3E53_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddListener_m9108773D1FB930C9A7A2618298D999F63D8483CA (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA60F35DC0C1DCE6CA65669EDC51C2C73AC96523F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeListeners.Add (listener);
		List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * L_0 = __this->get_activeListeners_2();
		IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * L_1 = ___listener0;
		NullCheck(L_0);
		List_1_Add_mA60F35DC0C1DCE6CA65669EDC51C2C73AC96523F(L_0, L_1, /*hidden argument*/List_1_Add_mA60F35DC0C1DCE6CA65669EDC51C2C73AC96523F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveListener_mBA908956A4D92E277AE2C8220F530BDCFE7E952B (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6A61CA4CF23C2BFA2E3B91E8F1AEFADE0E923D1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeListeners.Remove (listener);
		List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * L_0 = __this->get_activeListeners_2();
		IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m6A61CA4CF23C2BFA2E3B91E8F1AEFADE0E923D1D(L_0, L_1, /*hidden argument*/List_1_Remove_m6A61CA4CF23C2BFA2E3B91E8F1AEFADE0E923D1D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitiatePurchase_m7D2FEE9DE889D4A4F230A2CE5282EF25DD33FF43 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreController_t7F8439B516FC2268F81CE246954C55F8DC6E40F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68BC2DE434AD588010148C07EDD3A570968E602A);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  V_0;
	memset((&V_0), 0, sizeof(V_0));
	IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (controller == null)
		RuntimeObject* L_0 = __this->get_controller_4();
		if (L_0)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("Purchase failed because Purchasing was not initialized correctly");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral68BC2DE434AD588010148C07EDD3A570968E602A, /*hidden argument*/NULL);
		// foreach (var button in activeButtons)
		List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * L_1 = __this->get_activeButtons_1();
		NullCheck(L_1);
		Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  L_2;
		L_2 = List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA(L_1, /*hidden argument*/List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0020:
		{
			// foreach (var button in activeButtons)
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_3;
			L_3 = Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_inline((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var);
			V_1 = L_3;
			// if (button.productId == productID)
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->get_productId_4();
			String_t* L_6 = ___productID0;
			bool L_7;
			L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003e;
			}
		}

IL_0036:
		{
			// button.OnPurchaseFailed(null, Purchasing.PurchaseFailureReason.PurchasingUnavailable);
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_8 = V_1;
			NullCheck(L_8);
			IAPButton_OnPurchaseFailed_mEBD06C75BD88132D8B186B79B594C82363E6838E(L_8, (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E *)NULL, 0, /*hidden argument*/NULL);
		}

IL_003e:
		{
			// foreach (var button in activeButtons)
			bool L_9;
			L_9 = Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0020;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		// return;
		return;
	}

IL_0058:
	{
		// controller.InitiatePurchase(productID);
		RuntimeObject* L_10 = __this->get_controller_4();
		String_t* L_11 = ___productID0;
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String) */, IStoreController_t7F8439B516FC2268F81CE246954C55F8DC6E40F8_il2cpp_TypeInfo_var, L_10, L_11);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnInitialized_mD23EB08FC05B67393EF529918F59803905D13E6D (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, RuntimeObject* ___controller0, RuntimeObject* ___extensions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// initializationComplete = true;
		((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->set_initializationComplete_8((bool)1);
		// this.controller = controller;
		RuntimeObject* L_0 = ___controller0;
		__this->set_controller_4(L_0);
		// this.extensions = extensions;
		RuntimeObject* L_1 = ___extensions1;
		__this->set_extensions_5(L_1);
		// foreach (var button in activeButtons)
		List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * L_2 = __this->get_activeButtons_1();
		NullCheck(L_2);
		Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  L_3;
		L_3 = List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA(L_2, /*hidden argument*/List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_0022:
		{
			// foreach (var button in activeButtons)
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_4;
			L_4 = Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_inline((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var);
			// button.UpdateText();
			NullCheck(L_4);
			IAPButton_UpdateText_mE2153F46669B456617E3A6A7891D9FA26D71A014(L_4, /*hidden argument*/NULL);
		}

IL_002e:
		{
			// foreach (var button in activeButtons)
			bool L_5;
			L_5 = Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0022;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnInitializeFailed_m412705148F2D95E6C80BD0B9627DC1DEBB981636 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67447C652AC9BD7A3846D4B6116649F7EB15FED3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(string.Format("Purchasing failed to initialize. Reason: {0}", error.ToString()));
		RuntimeObject * L_0 = Box(InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B_il2cpp_TypeInfo_var, (&___error0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___error0 = *(int32_t*)UnBox(L_0);
		String_t* L_2;
		L_2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral67447C652AC9BD7A3846D4B6116649F7EB15FED3, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.CodelessIAPStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodelessIAPStoreListener_ProcessPurchase_m5F13C13C7A6D14DED42738B67C256AF9F77CE275 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF8C3D5B1DB058B86387B728723A377E7611A77B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2907B947D333A0312DDB3125FD23545F69D8B258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m596ACB6EA6F1A0B3F1448177460F3B09AD3B34CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6AD30323367C08BD06795521D02DA886575FC529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56F1AEC2FF8B133E2CAF514BFB5AEEC1B7603B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DAAF1E37F9978FDDF8079C7917C5BE032B2F350);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  V_2;
	memset((&V_2), 0, sizeof(V_2));
	IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * V_3 = NULL;
	Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// bool consumePurchase = false;
		V_0 = (bool)0;
		// bool resultProcessed = false;
		V_1 = (bool)0;
		// foreach (IAPButton button in activeButtons)
		List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * L_0 = __this->get_activeButtons_1();
		NullCheck(L_0);
		Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  L_1;
		L_1 = List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA(L_0, /*hidden argument*/List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0012:
		{
			// foreach (IAPButton button in activeButtons)
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_2;
			L_2 = Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_inline((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var);
			V_3 = L_2;
			// if (button.productId == e.purchasedProduct.definition.id)
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_3 = V_3;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_productId_4();
			PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * L_5 = ___e0;
			NullCheck(L_5);
			Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_6;
			L_6 = PurchaseEventArgs_get_purchasedProduct_m82395AF6B8EB5A4747C638287821893F2D31D355_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_7;
			L_7 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			String_t* L_8;
			L_8 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_7, /*hidden argument*/NULL);
			bool L_9;
			L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_0037:
		{
			// result = button.ProcessPurchase(e);
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_10 = V_3;
			PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * L_11 = ___e0;
			NullCheck(L_10);
			int32_t L_12;
			L_12 = IAPButton_ProcessPurchase_mA5F16C63432F52E62C899689A3FF805E465AAA40(L_10, L_11, /*hidden argument*/NULL);
			// if (result == PurchaseProcessingResult.Complete) {
			if (L_12)
			{
				goto IL_0042;
			}
		}

IL_0040:
		{
			// consumePurchase = true;
			V_0 = (bool)1;
		}

IL_0042:
		{
			// resultProcessed = true;
			V_1 = (bool)1;
		}

IL_0044:
		{
			// foreach (IAPButton button in activeButtons)
			bool L_13;
			L_13 = Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// foreach (IAPListener listener in activeListeners)
		List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * L_14 = __this->get_activeListeners_2();
		NullCheck(L_14);
		Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4  L_15;
		L_15 = List_1_GetEnumerator_m6AD30323367C08BD06795521D02DA886575FC529(L_14, /*hidden argument*/List_1_GetEnumerator_m6AD30323367C08BD06795521D02DA886575FC529_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_006c:
		{
			// foreach (IAPListener listener in activeListeners)
			IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * L_16;
			L_16 = Enumerator_get_Current_m596ACB6EA6F1A0B3F1448177460F3B09AD3B34CD_inline((Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m596ACB6EA6F1A0B3F1448177460F3B09AD3B34CD_RuntimeMethod_var);
			// result = listener.ProcessPurchase(e);
			PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * L_17 = ___e0;
			NullCheck(L_16);
			int32_t L_18;
			L_18 = IAPListener_ProcessPurchase_m44CBA46A9B0BEC65D034F5510558C648437D5470(L_16, L_17, /*hidden argument*/NULL);
			// if (result == PurchaseProcessingResult.Complete) {
			if (L_18)
			{
				goto IL_007d;
			}
		}

IL_007b:
		{
			// consumePurchase = true;
			V_0 = (bool)1;
		}

IL_007d:
		{
			// resultProcessed = true;
			V_1 = (bool)1;
		}

IL_007f:
		{
			// foreach (IAPListener listener in activeListeners)
			bool L_19;
			L_19 = Enumerator_MoveNext_m2907B947D333A0312DDB3125FD23545F69D8B258((Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m2907B947D333A0312DDB3125FD23545F69D8B258_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_006c;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF8C3D5B1DB058B86387B728723A377E7611A77B4((Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mF8C3D5B1DB058B86387B728723A377E7611A77B4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// if (!resultProcessed) {
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_00bf;
		}
	}
	{
		// Debug.LogError("Purchase not correctly processed for product \"" +
		//                  e.purchasedProduct.definition.id +
		//                  "\". Add an active IAPButton to process this purchase, or add an IAPListener to receive any unhandled purchase events.");
		PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * L_21 = ___e0;
		NullCheck(L_21);
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_22;
		L_22 = PurchaseEventArgs_get_purchasedProduct_m82395AF6B8EB5A4747C638287821893F2D31D355_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_23;
		L_23 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_23, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral56F1AEC2FF8B133E2CAF514BFB5AEEC1B7603B66, L_24, _stringLiteral9DAAF1E37F9978FDDF8079C7917C5BE032B2F350, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_25, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_00c4;
		}
	}
	{
		return (int32_t)(1);
	}

IL_00c4:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnPurchaseFailed_m419488AB288E9A3C93F3A94A451D3BF6CF3DC618 (CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF8C3D5B1DB058B86387B728723A377E7611A77B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2907B947D333A0312DDB3125FD23545F69D8B258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m596ACB6EA6F1A0B3F1448177460F3B09AD3B34CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6AD30323367C08BD06795521D02DA886575FC529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF35329A9C666A6162702EC4141FF8A8DCCD553);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5969530815E6A540A3ECE75D68272FE8482067);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  V_1;
	memset((&V_1), 0, sizeof(V_1));
	IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * V_2 = NULL;
	Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// bool resultProcessed = false;
		V_0 = (bool)0;
		// foreach (IAPButton button in activeButtons)
		List_1_tDFEDD3CAD0E3608F56ED869DB4D70EB777D8A793 * L_0 = __this->get_activeButtons_1();
		NullCheck(L_0);
		Enumerator_tA39C50B77995D8482AA696E62991C05E92318873  L_1;
		L_1 = List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA(L_0, /*hidden argument*/List_1_GetEnumerator_m35B9F5640F6A3E66657A0CC2F4D9AA25C56F80AA_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0010:
		{
			// foreach (IAPButton button in activeButtons)
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_2;
			L_2 = Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_inline((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7FCB75B17DF22955EE885170377D0C6119FC7B63_RuntimeMethod_var);
			V_2 = L_2;
			// if (button.productId == product.definition.id)
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_3 = V_2;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_productId_4();
			Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_5 = ___product0;
			NullCheck(L_5);
			ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_6;
			L_6 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			String_t* L_7;
			L_7 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_6, /*hidden argument*/NULL);
			bool L_8;
			L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003a;
			}
		}

IL_0030:
		{
			// button.OnPurchaseFailed(product, reason);
			IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * L_9 = V_2;
			Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_10 = ___product0;
			int32_t L_11 = ___reason1;
			NullCheck(L_9);
			IAPButton_OnPurchaseFailed_mEBD06C75BD88132D8B186B79B594C82363E6838E(L_9, L_10, L_11, /*hidden argument*/NULL);
			// resultProcessed = true;
			V_0 = (bool)1;
		}

IL_003a:
		{
			// foreach (IAPButton button in activeButtons)
			bool L_12;
			L_12 = Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m786C72938D77BAC095B8A060CB86C4C5876D6BF1_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0010;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57((Enumerator_tA39C50B77995D8482AA696E62991C05E92318873 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m5500203632E68294AE31EFAFDC484BFE96EF4D57_RuntimeMethod_var);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// foreach (IAPListener listener in activeListeners)
		List_1_t7F302E2D80239615098CE4667EC223DBDEA7FE87 * L_13 = __this->get_activeListeners_2();
		NullCheck(L_13);
		Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4  L_14;
		L_14 = List_1_GetEnumerator_m6AD30323367C08BD06795521D02DA886575FC529(L_13, /*hidden argument*/List_1_GetEnumerator_m6AD30323367C08BD06795521D02DA886575FC529_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0071;
		}

IL_0061:
		{
			// foreach (IAPListener listener in activeListeners)
			IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * L_15;
			L_15 = Enumerator_get_Current_m596ACB6EA6F1A0B3F1448177460F3B09AD3B34CD_inline((Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m596ACB6EA6F1A0B3F1448177460F3B09AD3B34CD_RuntimeMethod_var);
			// listener.OnPurchaseFailed(product, reason);
			Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_16 = ___product0;
			int32_t L_17 = ___reason1;
			NullCheck(L_15);
			IAPListener_OnPurchaseFailed_mCF5AEDCCBE0BC0A4F76A2581E020EB8D6D592302(L_15, L_16, L_17, /*hidden argument*/NULL);
			// resultProcessed = true;
			V_0 = (bool)1;
		}

IL_0071:
		{
			// foreach (IAPListener listener in activeListeners)
			bool L_18;
			L_18 = Enumerator_MoveNext_m2907B947D333A0312DDB3125FD23545F69D8B258((Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2907B947D333A0312DDB3125FD23545F69D8B258_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0061;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x8A, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF8C3D5B1DB058B86387B728723A377E7611A77B4((Enumerator_t56790026161BF9C6B899E277A8E8FDEBDB6561E4 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mF8C3D5B1DB058B86387B728723A377E7611A77B4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
	}

IL_008a:
	{
		// if (!resultProcessed)
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_00ac;
		}
	}
	{
		// Debug.LogError("Failed purchase not correctly handled for product \"" + product.definition.id +
		//                   "\". Add an active IAPButton to handle this failure, or add an IAPListener to receive any unhandled purchase failures.");
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_20 = ___product0;
		NullCheck(L_20);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_21;
		L_21 = Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral4F5969530815E6A540A3ECE75D68272FE8482067, L_22, _stringLiteral1EF35329A9C666A6162702EC4141FF8A8DCCD553, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_23, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// }
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
// System.Void UnityEngine.Purchasing.IAPButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_Start_m01FDC58DD0BEFE09ABD5385C7D726552245A8688 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPButton_PurchaseProduct_m7F7B9863F00A2123374050AA0274E47794529819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPButton_Restore_mDA71B0A7DCDE1BE85F8DDF8398F211E252C016FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C26DB7F9C79787B411F513085839C1185CEE39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5A61BB4FAA639A1E99385D655E6B58C0195FB0A);
		s_Il2CppMethodInitialized = true;
	}
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_0 = NULL;
	{
		// Button button = GetComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0;
		L_0 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		V_0 = L_0;
		// if (buttonType == ButtonType.Purchase)
		int32_t L_1 = __this->get_buttonType_5();
		if (L_1)
		{
			goto IL_0072;
		}
	}
	{
		// if (button)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// button.onClick.AddListener(PurchaseProduct);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = V_0;
		NullCheck(L_4);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_5;
		L_5 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_4, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_6, __this, (intptr_t)((intptr_t)IAPButton_PurchaseProduct_m7F7B9863F00A2123374050AA0274E47794529819_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// if (string.IsNullOrEmpty(productId))
		String_t* L_7 = __this->get_productId_4();
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogError("IAPButton productId is empty");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral95C26DB7F9C79787B411F513085839C1185CEE39, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// if (!CodelessIAPStoreListener.Instance.HasProductInCatalog(productId))
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_9;
		L_9 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		String_t* L_10 = __this->get_productId_4();
		NullCheck(L_9);
		bool L_11;
		L_11 = CodelessIAPStoreListener_HasProductInCatalog_m35D30DA0AD1443310E65E9F7A1087F4280C00E94(L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_009a;
		}
	}
	{
		// Debug.LogWarning("The product catalog has no product with the ID \"" + productId + "\"");
		String_t* L_12 = __this->get_productId_4();
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralF5A61BB4FAA639A1E99385D655E6B58C0195FB0A, L_12, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0072:
	{
		// else if (buttonType == ButtonType.Restore)
		int32_t L_14 = __this->get_buttonType_5();
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		// if (button)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// button.onClick.AddListener(Restore);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = V_0;
		NullCheck(L_17);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_18;
		L_18 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_17, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_19 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_19, __this, (intptr_t)((intptr_t)IAPButton_Restore_mDA71B0A7DCDE1BE85F8DDF8398F211E252C016FB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_18, L_19, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnEnable_m92885E1F8B4458CB0D264DAA045244C00372AB82 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.AddButton(this);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_1;
		L_1 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_AddButton_m140D2007D26BB245A72191189741DBA5EAEDA0C9(L_1, __this, /*hidden argument*/NULL);
		// if (CodelessIAPStoreListener.initializationComplete) {
		bool L_2 = ((CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E_il2cpp_TypeInfo_var))->get_initializationComplete_8();
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// UpdateText();
		IAPButton_UpdateText_mE2153F46669B456617E3A6A7891D9FA26D71A014(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnDisable_m2948F4278F167A6667ED65E9894513ACD2BF2D48 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, const RuntimeMethod* method)
{
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.RemoveButton(this);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_1;
		L_1 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_RemoveButton_m28EE53BD6448E1E15E6DD477501C9A416B3EF62A(L_1, __this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::PurchaseProduct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_PurchaseProduct_m7F7B9863F00A2123374050AA0274E47794529819 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, const RuntimeMethod* method)
{
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->get_buttonType_5();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.InitiatePurchase(productId);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_1;
		L_1 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		String_t* L_2 = __this->get_productId_4();
		NullCheck(L_1);
		CodelessIAPStoreListener_InitiatePurchase_m7D2FEE9DE889D4A4F230A2CE5282EF25DD33FF43(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_Restore_mDA71B0A7DCDE1BE85F8DDF8398F211E252C016FB (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334_mA922A180936CB6266018E29EF8E3BCD3C0E3A1CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B_mA400D2EE5CE7107737739D073509846E01CC1B8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF_m3F60C453BB12B0F4C13364AF99E251E231A7794F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPButton_OnTransactionsRestored_m08F0B97450FC7D268785C75F7C8702CAA9CE78A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537EA891070FBA82E19DC218DBB64246306F9338);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (buttonType == ButtonType.Restore)
		int32_t L_0 = __this->get_buttonType_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}
	{
		// if (Application.platform == RuntimePlatform.WSAPlayerX86 ||
		//     Application.platform == RuntimePlatform.WSAPlayerX64 ||
		//     Application.platform == RuntimePlatform.WSAPlayerARM)
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)18))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)19))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3;
		L_3 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0037;
		}
	}

IL_0027:
	{
		// CodelessIAPStoreListener.Instance.GetStoreExtensions<IMicrosoftExtensions>()
		//     .RestoreTransactions();
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_4;
		L_4 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF_m3F60C453BB12B0F4C13364AF99E251E231A7794F(L_4, /*hidden argument*/CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF_m3F60C453BB12B0F4C13364AF99E251E231A7794F_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions() */, IMicrosoftExtensions_t507AA001231849597B37C88B8472CD653C4157CF_il2cpp_TypeInfo_var, L_5);
		// }
		return;
	}

IL_0037:
	{
		// else if (Application.platform == RuntimePlatform.IPhonePlayer ||
		//          Application.platform == RuntimePlatform.OSXPlayer ||
		//          Application.platform == RuntimePlatform.tvOS)
		int32_t L_6;
		L_6 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7;
		L_7 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_8;
		L_8 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_006c;
		}
	}

IL_0050:
	{
		// CodelessIAPStoreListener.Instance.GetStoreExtensions<IAppleExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_9;
		L_9 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334_mA922A180936CB6266018E29EF8E3BCD3C0E3A1CB(L_9, /*hidden argument*/CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334_mA922A180936CB6266018E29EF8E3BCD3C0E3A1CB_RuntimeMethod_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_11 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_11, __this, (intptr_t)((intptr_t)IAPButton_OnTransactionsRestored_m08F0B97450FC7D268785C75F7C8702CAA9CE78A2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IAppleExtensions_t0C12B0F283F69E4B1B4E80E2D9FD3D0A649DA334_il2cpp_TypeInfo_var, L_10, L_11);
		// }
		return;
	}

IL_006c:
	{
		// else if (Application.platform == RuntimePlatform.Android &&
		//     StandardPurchasingModule.Instance().appStore == AppStore.GooglePlay)
		int32_t L_12;
		L_12 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_009e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * L_13;
		L_13 = StandardPurchasingModule_Instance_m2BA4C83D0EF5EDE5BE1028211A96E1A9DF3F4754(/*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = StandardPurchasingModule_get_appStore_mB5C4E46501781A902541B486FEDEDEDF03B58562_inline(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_009e;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.GetStoreExtensions<IGooglePlayStoreExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_15;
		L_15 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B_mA400D2EE5CE7107737739D073509846E01CC1B8D(L_15, /*hidden argument*/CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B_mA400D2EE5CE7107737739D073509846E01CC1B8D_RuntimeMethod_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_17 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_17, __this, (intptr_t)((intptr_t)IAPButton_OnTransactionsRestored_m08F0B97450FC7D268785C75F7C8702CAA9CE78A2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IGooglePlayStoreExtensions_tE67B35A9B91D39D6E526DE294768B212F93AA67B_il2cpp_TypeInfo_var, L_16, L_17);
		// }
		return;
	}

IL_009e:
	{
		// Debug.LogWarning(Application.platform.ToString() +
		//                  " is not a supported platform for the Codeless IAP restore button");
		int32_t L_18;
		L_18 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = L_18;
		RuntimeObject * L_19 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_0 = *(int32_t*)UnBox(L_19);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_20, _stringLiteral537EA891070FBA82E19DC218DBB64246306F9338, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_21, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnTransactionsRestored(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnTransactionsRestored_m08F0B97450FC7D268785C75F7C8702CAA9CE78A2 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, bool ___success0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPButton_ProcessPurchase_mA5F16C63432F52E62C899689A3FF805E465AAA40 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m7BB47D3C80BFBB957990FFE852B5825A089B7B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPurchaseComplete.Invoke(e.purchasedProduct);
		OnPurchaseCompletedEvent_tF1EC4885638D3E4ADFBB9AC07E3779700CA30922 * L_0 = __this->get_onPurchaseComplete_7();
		PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_2;
		L_2 = PurchaseEventArgs_get_purchasedProduct_m82395AF6B8EB5A4747C638287821893F2D31D355_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_m7BB47D3C80BFBB957990FFE852B5825A089B7B17(L_0, L_2, /*hidden argument*/UnityEvent_1_Invoke_m7BB47D3C80BFBB957990FFE852B5825A089B7B17_RuntimeMethod_var);
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_3 = __this->get_consumePurchase_6();
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001b:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnPurchaseFailed_mEBD06C75BD88132D8B186B79B594C82363E6838E (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m748FCC3A7504604A5104F237756C09BDE8793497_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPurchaseFailed.Invoke(product, reason);
		OnPurchaseFailedEvent_t403A79A0E52C07657619D8BE12B5C0F1D0E9ACA2 * L_0 = __this->get_onPurchaseFailed_8();
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_1 = ___product0;
		int32_t L_2 = ___reason1;
		NullCheck(L_0);
		UnityEvent_2_Invoke_m748FCC3A7504604A5104F237756C09BDE8793497(L_0, L_1, L_2, /*hidden argument*/UnityEvent_2_Invoke_m748FCC3A7504604A5104F237756C09BDE8793497_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_UpdateText_mE2153F46669B456617E3A6A7891D9FA26D71A014 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * V_0 = NULL;
	{
		// var product = CodelessIAPStoreListener.Instance.GetProduct(productId);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_0;
		L_0 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_productId_4();
		NullCheck(L_0);
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_2;
		L_2 = CodelessIAPStoreListener_GetProduct_m44939479961A10762F41022E5626B2A80E01F2E5(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (product != null)
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0080;
		}
	}
	{
		// if (titleText != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_titleText_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// titleText.text = product.metadata.localizedTitle;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_titleText_9();
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_7 = V_0;
		NullCheck(L_7);
		ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * L_8;
		L_8 = Product_get_metadata_m36970AF9A9B1A716E3E1FDDF3B7A3A4C2287F8AE_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ProductMetadata_get_localizedTitle_m2DCBF60B7674A4E25E4D14D00EC66F40C0157D31_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
	}

IL_0038:
	{
		// if (descriptionText != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_descriptionText_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// descriptionText.text = product.metadata.localizedDescription;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_descriptionText_10();
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_13 = V_0;
		NullCheck(L_13);
		ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * L_14;
		L_14 = Product_get_metadata_m36970AF9A9B1A716E3E1FDDF3B7A3A4C2287F8AE_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = ProductMetadata_get_localizedDescription_mB3B820DBB41F1EEC2B9E2C9B588CDC7050818FDF_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
	}

IL_005c:
	{
		// if (priceText != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_priceText_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		// priceText.text = product.metadata.localizedPriceString;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_priceText_11();
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_19 = V_0;
		NullCheck(L_19);
		ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * L_20;
		L_20 = Product_get_metadata_m36970AF9A9B1A716E3E1FDDF3B7A3A4C2287F8AE_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = ProductMetadata_get_localizedPriceString_mA5D6DDFDCF8F4B157E3AC23559650C89ED863914_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton__ctor_mBCD5D0FA0EEA44FB7F465CB76FA6BC5762373A84 (IAPButton_t21413DE9F896921A64697A4A8E0F0E663E826A90 * __this, const RuntimeMethod* method)
{
	{
		// public bool consumePurchase = true;
		__this->set_consumePurchase_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPConfigurationHelper_PopulateConfigurationBuilder_m37F5AC65E2DC6F4D698C956887EB8AC68CA898FB (ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A ** ___builder0, ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t739DAF6F607907211FD5C6513CDE5C3E3C7DBBF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t911D7D47D4F2EB00500565DB405F2E304235F00F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9ADC1DCE11AAF18E15390BEC2C4C39EADF579C7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBA3D9EEDF22C9848C7D9CB076B5AF0FEFBE6A307_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t567DB1A2E042FAD92394D82FEB7006F92F057263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t743A35B2F34ADCD5198AF487BA3BC16AD98DCC0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAD9746F1EF306215B387033E4AC96851EBA88540_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m27C285EE987F0CB92A4B33234C2DBE5F2DC0D6B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mEB6AF74F82E61C121D695DCD59BD2FCE52F03918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0066DC5C7B9DADA1721568BFC63754E8159B10AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * V_1 = NULL;
	IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F * V_2 = NULL;
	List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	StoreID_t846585F80BCCA8C558E1205DD51DD2786A0A83F6 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach (var product in catalog.allValidProducts)
		ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * L_0 = ___catalog1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ProductCatalog_get_allValidProducts_m815818EBCE967511ACFBF617952B69A39499F962(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t911D7D47D4F2EB00500565DB405F2E304235F00F_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f1;
		}

IL_0011:
		{
			// foreach (var product in catalog.allValidProducts)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_4;
			L_4 = InterfaceFuncInvoker0< ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_tAD9746F1EF306215B387033E4AC96851EBA88540_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			// IDs ids = null;
			V_2 = (IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F *)NULL;
			// if (product.allStoreIDs.Count > 0)
			ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = ProductCatalogItem_get_allStoreIDs_m0C51593FA2BEB3106E886BDBCB4E5BCD5B510095_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			int32_t L_7;
			L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>::get_Count() */, ICollection_1_t739DAF6F607907211FD5C6513CDE5C3E3C7DBBF2_il2cpp_TypeInfo_var, L_6);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_007a;
			}
		}

IL_0028:
		{
			// ids = new IDs();
			IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F * L_8 = (IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F *)il2cpp_codegen_object_new(IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F_il2cpp_TypeInfo_var);
			IDs__ctor_m9856C9FF3C72DFDE34C1C46C7E468DF9323A0C5B(L_8, /*hidden argument*/NULL);
			V_2 = L_8;
			// foreach (var storeID in product.allStoreIDs)
			ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_9 = V_1;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = ProductCatalogItem_get_allStoreIDs_m0C51593FA2BEB3106E886BDBCB4E5BCD5B510095_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.StoreID>::GetEnumerator() */, IEnumerable_1_t9ADC1DCE11AAF18E15390BEC2C4C39EADF579C7C_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
		}

IL_003b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0063;
			}

IL_003d:
			{
				// foreach (var storeID in product.allStoreIDs)
				RuntimeObject* L_12 = V_4;
				NullCheck(L_12);
				StoreID_t846585F80BCCA8C558E1205DD51DD2786A0A83F6 * L_13;
				L_13 = InterfaceFuncInvoker0< StoreID_t846585F80BCCA8C558E1205DD51DD2786A0A83F6 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.StoreID>::get_Current() */, IEnumerator_1_t567DB1A2E042FAD92394D82FEB7006F92F057263_il2cpp_TypeInfo_var, L_12);
				V_5 = L_13;
				// ids.Add(storeID.id, storeID.store);
				IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F * L_14 = V_2;
				StoreID_t846585F80BCCA8C558E1205DD51DD2786A0A83F6 * L_15 = V_5;
				NullCheck(L_15);
				String_t* L_16 = L_15->get_id_1();
				StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
				StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
				StoreID_t846585F80BCCA8C558E1205DD51DD2786A0A83F6 * L_19 = V_5;
				NullCheck(L_19);
				String_t* L_20 = L_19->get_store_0();
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_20);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
				NullCheck(L_14);
				IDs_Add_m972BBBE31D93F3C86C507FC3DE1F6C174106E43E(L_14, L_16, L_18, /*hidden argument*/NULL);
			}

IL_0063:
			{
				// foreach (var storeID in product.allStoreIDs)
				RuntimeObject* L_21 = V_4;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_003d;
				}
			}

IL_006c:
			{
				IL2CPP_LEAVE(0x7A, FINALLY_006e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006e;
		}

FINALLY_006e:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_23 = V_4;
				if (!L_23)
				{
					goto IL_0079;
				}
			}

IL_0072:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_24);
			}

IL_0079:
			{
				IL2CPP_END_FINALLY(110)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(110)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x7A, IL_007a)
		}

IL_007a:
		{
			// var payoutDefinitions = new List<PayoutDefinition>();
			List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * L_25 = (List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 *)il2cpp_codegen_object_new(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5_il2cpp_TypeInfo_var);
			List_1__ctor_m0066DC5C7B9DADA1721568BFC63754E8159B10AC(L_25, /*hidden argument*/List_1__ctor_m0066DC5C7B9DADA1721568BFC63754E8159B10AC_RuntimeMethod_var);
			V_3 = L_25;
			// foreach (var payout in product.Payouts) {
			ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_26 = V_1;
			NullCheck(L_26);
			RuntimeObject* L_27;
			L_27 = ProductCatalogItem_get_Payouts_m542A43F5D7334FB95D1E5F7043A44795EDE97391_inline(L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			RuntimeObject* L_28;
			L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogPayout>::GetEnumerator() */, IEnumerable_1_tBA3D9EEDF22C9848C7D9CB076B5AF0FEFBE6A307_il2cpp_TypeInfo_var, L_27);
			V_6 = L_28;
		}

IL_008d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00bf;
			}

IL_008f:
			{
				// foreach (var payout in product.Payouts) {
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * L_30;
				L_30 = InterfaceFuncInvoker0< ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogPayout>::get_Current() */, IEnumerator_1_t743A35B2F34ADCD5198AF487BA3BC16AD98DCC0A_il2cpp_TypeInfo_var, L_29);
				V_7 = L_30;
				// payoutDefinitions.Add(new PayoutDefinition(payout.typeString, payout.subtype, payout.quantity, payout.data));
				List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * L_31 = V_3;
				ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * L_32 = V_7;
				NullCheck(L_32);
				String_t* L_33;
				L_33 = ProductCatalogPayout_get_typeString_mEBA408E6E68913C0081D6405F1F6CF3B0183E693_inline(L_32, /*hidden argument*/NULL);
				ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * L_34 = V_7;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = ProductCatalogPayout_get_subtype_m5132F643B01EF328F636172EF1A9675CECE09148_inline(L_34, /*hidden argument*/NULL);
				ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * L_36 = V_7;
				NullCheck(L_36);
				double L_37;
				L_37 = ProductCatalogPayout_get_quantity_m4071F3FEA343A53AE27C882AB9FA0F7BC3C925A8_inline(L_36, /*hidden argument*/NULL);
				ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * L_38 = V_7;
				NullCheck(L_38);
				String_t* L_39;
				L_39 = ProductCatalogPayout_get_data_m65D9225DE5A901FCE28D7B90A31C135B5CEC2F65_inline(L_38, /*hidden argument*/NULL);
				PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D * L_40 = (PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D *)il2cpp_codegen_object_new(PayoutDefinition_t1278207A8201D457938CB37160A4417CABD9694D_il2cpp_TypeInfo_var);
				PayoutDefinition__ctor_m9580A22A9122E5D25F1BECCF1C65C3EF2EFCC691(L_40, L_33, L_35, L_37, L_39, /*hidden argument*/NULL);
				NullCheck(L_31);
				List_1_Add_m27C285EE987F0CB92A4B33234C2DBE5F2DC0D6B7(L_31, L_40, /*hidden argument*/List_1_Add_m27C285EE987F0CB92A4B33234C2DBE5F2DC0D6B7_RuntimeMethod_var);
			}

IL_00bf:
			{
				// foreach (var payout in product.Payouts) {
				RuntimeObject* L_41 = V_6;
				NullCheck(L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_41);
				if (L_42)
				{
					goto IL_008f;
				}
			}

IL_00c8:
			{
				IL2CPP_LEAVE(0xD6, FINALLY_00ca);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ca;
		}

FINALLY_00ca:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_43 = V_6;
				if (!L_43)
				{
					goto IL_00d5;
				}
			}

IL_00ce:
			{
				RuntimeObject* L_44 = V_6;
				NullCheck(L_44);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_44);
			}

IL_00d5:
			{
				IL2CPP_END_FINALLY(202)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(202)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xD6, IL_00d6)
		}

IL_00d6:
		{
			// builder.AddProduct(product.id, product.type, ids, payoutDefinitions.ToArray());
			ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A ** L_45 = ___builder0;
			ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * L_46 = *((ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A **)L_45);
			ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_47 = V_1;
			NullCheck(L_47);
			String_t* L_48 = L_47->get_id_0();
			ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * L_49 = V_1;
			NullCheck(L_49);
			int32_t L_50 = L_49->get_type_1();
			IDs_t2A680151D8C1DD3B5E75B6C4DD012B9BC3293F8F * L_51 = V_2;
			List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * L_52 = V_3;
			NullCheck(L_52);
			PayoutDefinitionU5BU5D_t62683F41522EDD4C5F68F9DC67A06B4C87DAF786* L_53;
			L_53 = List_1_ToArray_mEB6AF74F82E61C121D695DCD59BD2FCE52F03918(L_52, /*hidden argument*/List_1_ToArray_mEB6AF74F82E61C121D695DCD59BD2FCE52F03918_RuntimeMethod_var);
			NullCheck(L_46);
			ConfigurationBuilder_t8C2A33B91D14FD46DA1EF4EF45CA14143260969A * L_54;
			L_54 = ConfigurationBuilder_AddProduct_mE4D41230A1FBEC3B58B9E44EAE220DDE6A4665F8(L_46, L_48, L_50, L_51, (RuntimeObject*)(RuntimeObject*)L_53, /*hidden argument*/NULL);
		}

IL_00f1:
		{
			// foreach (var product in catalog.allValidProducts)
			RuntimeObject* L_55 = V_0;
			NullCheck(L_55);
			bool L_56;
			L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_55);
			if (L_56)
			{
				goto IL_0011;
			}
		}

IL_00fc:
		{
			IL2CPP_LEAVE(0x108, FINALLY_00fe);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fe;
	}

FINALLY_00fe:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_57 = V_0;
			if (!L_57)
			{
				goto IL_0107;
			}
		}

IL_0101:
		{
			RuntimeObject* L_58 = V_0;
			NullCheck(L_58);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_58);
		}

IL_0107:
		{
			IL2CPP_END_FINALLY(254)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(254)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x108, IL_0108)
	}

IL_0108:
	{
		// }
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
// System.Void UnityEngine.Purchasing.IAPListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnEnable_mD0D3CFC226C5B3735FD93F4D5E5C24EE0249D785 (IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dontDestroyOnLoad)
		bool L_0 = __this->get_dontDestroyOnLoad_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// CodelessIAPStoreListener.Instance.AddListener(this);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_2;
		L_2 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		NullCheck(L_2);
		CodelessIAPStoreListener_AddListener_m9108773D1FB930C9A7A2618298D999F63D8483CA(L_2, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnDisable_m5BCEB5C22175822D5CB819B9A86767C96C9171AC (IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * __this, const RuntimeMethod* method)
{
	{
		// CodelessIAPStoreListener.Instance.RemoveListener(this);
		CodelessIAPStoreListener_t01F50313A6D99451356367213A5C32BD50627B2E * L_0;
		L_0 = CodelessIAPStoreListener_get_Instance_mDEE3B2A929190FBA4F61A5ED7358EB25BBE39CF5(/*hidden argument*/NULL);
		NullCheck(L_0);
		CodelessIAPStoreListener_RemoveListener_mBA908956A4D92E277AE2C8220F530BDCFE7E952B(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPListener_ProcessPurchase_m44CBA46A9B0BEC65D034F5510558C648437D5470 (IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * __this, PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m7BB47D3C80BFBB957990FFE852B5825A089B7B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPurchaseComplete.Invoke(e.purchasedProduct);
		OnPurchaseCompletedEvent_t6EB7043260C40B14B8ABBC83B6EB448307E8BF7D * L_0 = __this->get_onPurchaseComplete_6();
		PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_2;
		L_2 = PurchaseEventArgs_get_purchasedProduct_m82395AF6B8EB5A4747C638287821893F2D31D355_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_m7BB47D3C80BFBB957990FFE852B5825A089B7B17(L_0, L_2, /*hidden argument*/UnityEvent_1_Invoke_m7BB47D3C80BFBB957990FFE852B5825A089B7B17_RuntimeMethod_var);
		// return (consumePurchase) ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_3 = __this->get_consumePurchase_4();
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001b:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnPurchaseFailed_mCF5AEDCCBE0BC0A4F76A2581E020EB8D6D592302 (IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * __this, Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m748FCC3A7504604A5104F237756C09BDE8793497_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPurchaseFailed.Invoke(product, reason);
		OnPurchaseFailedEvent_t24D449603E799BDCE0854867406E1EAEE2F96640 * L_0 = __this->get_onPurchaseFailed_7();
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_1 = ___product0;
		int32_t L_2 = ___reason1;
		NullCheck(L_0);
		UnityEvent_2_Invoke_m748FCC3A7504604A5104F237756C09BDE8793497(L_0, L_1, L_2, /*hidden argument*/UnityEvent_2_Invoke_m748FCC3A7504604A5104F237756C09BDE8793497_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener__ctor_m8EA89C4471BBD3ECB89126207DE35C1BC7ED23DF (IAPListener_t256FF6915E8DFC3594795ECB771E21B29D65C7BE * __this, const RuntimeMethod* method)
{
	{
		// public bool consumePurchase = true;
		__this->set_consumePurchase_4((bool)1);
		// public bool dontDestroyOnLoad = true;
		__this->set_dontDestroyOnLoad_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_mE18EB4B402D9FD2F8BB1BE8A4749A0B2C471274D (OnPurchaseCompletedEvent_tF1EC4885638D3E4ADFBB9AC07E3779700CA30922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E(__this, /*hidden argument*/UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_m43FEDEADE21A3B98D3E75E5FDF7FE2AF2F3F0D05 (OnPurchaseFailedEvent_t403A79A0E52C07657619D8BE12B5C0F1D0E9ACA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423(__this, /*hidden argument*/UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_m524D045EDE446BA7D16A6D82D56D62B09E28E4AA (OnPurchaseCompletedEvent_t6EB7043260C40B14B8ABBC83B6EB448307E8BF7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E(__this, /*hidden argument*/UnityEvent_1__ctor_mEE8EA7C8772E245255BF0FA82A22630B4483FB6E_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_mFA74F2DB49837D0F3980D23980C0150F9E9D7ACA (OnPurchaseFailedEvent_t24D449603E799BDCE0854867406E1EAEE2F96640 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423(__this, /*hidden argument*/UnityEvent_2__ctor_mE88DAFB08477FCDA5485A3DA0A1EB5348F4F2423_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardPurchasingModule_set_useFakeStoreUIMode_mFBE70255783EEBD2DAB7EDE8BF3554E0CFFC223B_inline (StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FakeStoreUIMode useFakeStoreUIMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CuseFakeStoreUIModeU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allProducts_mD727440FEEE16700A7F9F009908C3B099215FF86_inline (ProductCatalog_t8404472FE0DDB1C0083A85CC9D2186D5B529B21B * __this, const RuntimeMethod* method)
{
	{
		// public ICollection<ProductCatalogItem> allProducts => products;
		List_1_tD976D0E84B4FCE259ADD8FFD758FF25E1DA4B1B7 * L_0 = __this->get_products_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * PurchaseEventArgs_get_purchasedProduct_m82395AF6B8EB5A4747C638287821893F2D31D355_inline (PurchaseEventArgs_tDBAC51992A265A32E79B590688327200A2545114 * __this, const RuntimeMethod* method)
{
	{
		// public Product purchasedProduct { get; private set; }
		Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * L_0 = __this->get_U3CpurchasedProductU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * Product_get_definition_m0311B165A3BC6AF59A28AE4D75A220DDFDAA7182_inline (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * __this, const RuntimeMethod* method)
{
	{
		// public ProductDefinition definition { get; private set; }
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = __this->get_U3CdefinitionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; private set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardPurchasingModule_get_appStore_mB5C4E46501781A902541B486FEDEDEDF03B58562_inline (StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * __this, const RuntimeMethod* method)
{
	{
		// return m_AppStorePlatform;
		int32_t L_0 = __this->get_m_AppStorePlatform_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * Product_get_metadata_m36970AF9A9B1A716E3E1FDDF3B7A3A4C2287F8AE_inline (Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E * __this, const RuntimeMethod* method)
{
	{
		// public ProductMetadata metadata { get; internal set; }
		ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * L_0 = __this->get_U3CmetadataU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_m2DCBF60B7674A4E25E4D14D00EC66F40C0157D31_inline (ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * __this, const RuntimeMethod* method)
{
	{
		// public string localizedTitle { get; internal set; }
		String_t* L_0 = __this->get_U3ClocalizedTitleU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_mB3B820DBB41F1EEC2B9E2C9B588CDC7050818FDF_inline (ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * __this, const RuntimeMethod* method)
{
	{
		// public string localizedDescription { get; internal set; }
		String_t* L_0 = __this->get_U3ClocalizedDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_mA5D6DDFDCF8F4B157E3AC23559650C89ED863914_inline (ProductMetadata_tAA2AADD58CE3B832532B471EA80FEE323EB9BF02 * __this, const RuntimeMethod* method)
{
	{
		// public string localizedPriceString { get; internal set; }
		String_t* L_0 = __this->get_U3ClocalizedPriceStringU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_allStoreIDs_m0C51593FA2BEB3106E886BDBCB4E5BCD5B510095_inline (ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * __this, const RuntimeMethod* method)
{
	{
		// return storeIDs;
		List_1_tC7FFAD7D8654664DECD572AB308809CAA87B7CD5 * L_0 = __this->get_storeIDs_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_Payouts_m542A43F5D7334FB95D1E5F7043A44795EDE97391_inline (ProductCatalogItem_t43F0A9F572DE7B1BF46049724A05F9C4C0111280 * __this, const RuntimeMethod* method)
{
	{
		// return payouts;
		List_1_t1BBEA3237CF711106984E540A30F8394337C053D * L_0 = __this->get_payouts_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_typeString_mEBA408E6E68913C0081D6405F1F6CF3B0183E693_inline (ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * __this, const RuntimeMethod* method)
{
	{
		// return t;
		String_t* L_0 = __this->get_t_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_subtype_m5132F643B01EF328F636172EF1A9675CECE09148_inline (ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * __this, const RuntimeMethod* method)
{
	{
		// return st;
		String_t* L_0 = __this->get_st_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ProductCatalogPayout_get_quantity_m4071F3FEA343A53AE27C882AB9FA0F7BC3C925A8_inline (ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * __this, const RuntimeMethod* method)
{
	{
		// return q;
		double L_0 = __this->get_q_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_data_m65D9225DE5A901FCE28D7B90A31C135B5CEC2F65_inline (ProductCatalogPayout_t484A9578965C13826190909387E74E5220EE06B5 * __this, const RuntimeMethod* method)
{
	{
		// return d;
		String_t* L_0 = __this->get_d_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
