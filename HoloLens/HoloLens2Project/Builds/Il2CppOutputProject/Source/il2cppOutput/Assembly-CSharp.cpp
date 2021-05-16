#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// ConnectionManager
struct ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B;
// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2;
// Microsoft.MixedReality.Toolkit.UI.InteractableStates
struct InteractableStates_t62EA4B8A1B44EB25F34716E4FC7A34EB7897DCB3;
// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2
struct PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC;
// Microsoft.MixedReality.Toolkit.UI.State
struct State_tD177A963DC404A708C9B4431B937DB963847687A;
// Microsoft.MixedReality.Toolkit.UI.States
struct States_tFA0FE2D9A6BFAFE6A8F965F874DD9FB6E7A5C4FF;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t54F68FC2F7C268CA67090069816699D6427B1711;
// Newtonsoft.Json.Linq.JArray
struct JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB;
// Newtonsoft.Json.Linq.JObject
struct JObject_t786AF07B1009334856B0362BBC48EEF68C81C585;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tAC5DCFB03C7879ED6FCFD74977E76474C918200F;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D;
// Newtonsoft.Json.Linq.JToken
struct JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344;
// ObjectManager
struct ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3>
struct Dictionary_2_t6448EA67440DBED7376D116BCECFBEE95894CF0D;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t7C70494EAEF0E4A6227A6636B06BF3041E51AF96;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t1157AD59C6BB1DF0B843C59A83BC711129BDEEA6;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct List_1_t47ED1548A91CB4495B742C73804988140B390720;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct List_1_t1D85FAC23664CA6C578EB17F99C8F7FF3F9C8114;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IInteractableHandler>
struct List_1_tC2DEB33E5EF6658E2193D2E30C3932FF27A498BE;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableEvent>
struct List_1_tFA3D2B83ED8148D6D771B82BF268758F13B12060;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableProfileItem>
struct List_1_t0106181D041F2651BD0BC15853748FFF3196686E;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>
struct List_1_t4B25EBE9A9FA628E0E12367359E79FB5CB6C0E4C;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t8246A737A04C195F9611E6FB0168F6F4025F7CBF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Tuple`2<System.Int32,Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>>
struct List_1_tC80BE7B6F6583021B37CB483DF0BCEA76E80D929;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.Queue`1<UnityEngine.Pose>
struct Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Net.Sockets.TcpClient
struct TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Pose[]
struct PoseU5BU5D_tE5BA230703E26522423FC8A2D447B9CC4B011205;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.InputField
struct InputField_t533609195B110760BCFF00B746C87D81969CB005;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1157AD59C6BB1DF0B843C59A83BC711129BDEEA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072;
IL2CPP_EXTERN_C String_t* _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA;
IL2CPP_EXTERN_C String_t* _stringLiteral3B8A21EBCCFB8004363582A2DF92B397295452C2;
IL2CPP_EXTERN_C String_t* _stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635;
IL2CPP_EXTERN_C String_t* _stringLiteral75F317B95D3D08E172369A0DD6382A99556B9028;
IL2CPP_EXTERN_C String_t* _stringLiteral90BE16585DA21A822A011B262DB668A8CCF504D0;
IL2CPP_EXTERN_C String_t* _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A;
IL2CPP_EXTERN_C String_t* _stringLiteralACAF322543550089B1720048F5A4417F32F381A1;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF024FE4AB0FECE4091DE044C58C9AE4233383A;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9;
IL2CPP_EXTERN_C String_t* _stringLiteralD27CAFE12DDA89F63D7AA47D5A6A43B20BEA7891;
IL2CPP_EXTERN_C String_t* _stringLiteralF3A929B3364B471A481F4F7CDA0B4559ECDE9ABA;
IL2CPP_EXTERN_C String_t* _stringLiteralFAD1BB1DE52AE35EC79F10C99312577F85BD668A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisJsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6_m9EEFBEE37E17EEF40A0AB8DAE0A803D26CC83D79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManager_ReceiveData_m0DF0E1C8E7B1B7C10D506650A5E9F93EE17C9623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInteractable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_m52E0E8A351D3E27DA867094B49988BD354F27E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC_m57FCF0AD7641D61D5E299DC83988A1B40F74D086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA226186F582A45B372C89C0594298EFA733DFA87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mB6A3B107470221EFD1237EB4A45409E144856FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m361583E4417902C98D4128B4A973C29F0D4A60B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m5D1C52F1D70E95408154F84AA5939A8B359DAB52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ConnectionManager_ConnectToServer_m1949C1862CA7CDA47BF65EA1E7B7BA60DA0E351C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionManager_ReceiveData_m0DF0E1C8E7B1B7C10D506650A5E9F93EE17C9623_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionManager_SendToServer_m28AE53A5279CE2DE7AD72086417A807F97D90137_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionManager_SetObjectManager_m2631394ACD73DF34C5336D255A962F04A726CC62AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionManager_SetObjectManager_m2631394ACD73DF34C5336D255A962F04A726CC62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectionManager__ctor_m71BEA83FDDC059908021D7F990001EE29E372C53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectManager_PlacedToGlobal_mAA7F947CA506D3E6822AC3BEFD6AD4053FC723F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectManager_ResetGlobalObjects_m214CCA769B1A918E3A658D223DF22BBBE4F22AD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectManager_ResetPlacedObjects_m1894973CE2560A0A1E69BA18677AF70BF788DF97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectManager_SpawnCubeButton_m8B13D051DA580AEF38571524A03DB3CF411C7B2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectManager_SpawnObject_m3C1D844C38D3EC4D0CF72992E9FB84C2A2309800_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectManager_Start_mE7E93FDD0593041E2406179C69196DC56E2ADCB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectManager_Update_m824CC6C3BBF195441C257A4A24308D51D74285F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectManager__ctor_m2C2A09DA962AF487DBB62C6CFDFF46BF1F82D6E7_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct JsonConverterU5BU5D_t54F68FC2F7C268CA67090069816699D6427B1711;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// Newtonsoft.Json.JsonConverter
struct  JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken
struct  JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____parent_0)); }
	inline JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * get__parent_0() const { return ____parent_0; }
	inline JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____previous_1)); }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * get__previous_1() const { return ____previous_1; }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____next_2)); }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * get__next_2() const { return ____next_2; }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___StringTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___GuidTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___TimeSpanTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___UriTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___CharTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___DateTimeTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___BytesTypes_12;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_6() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___StringTypes_6)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_StringTypes_6() const { return ___StringTypes_6; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_StringTypes_6() { return &___StringTypes_6; }
	inline void set_StringTypes_6(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___StringTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_7() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___GuidTypes_7)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_GuidTypes_7() const { return ___GuidTypes_7; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_GuidTypes_7() { return &___GuidTypes_7; }
	inline void set_GuidTypes_7(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___GuidTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_8() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___TimeSpanTypes_8)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_TimeSpanTypes_8() const { return ___TimeSpanTypes_8; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_TimeSpanTypes_8() { return &___TimeSpanTypes_8; }
	inline void set_TimeSpanTypes_8(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___TimeSpanTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_9() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___UriTypes_9)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_UriTypes_9() const { return ___UriTypes_9; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_UriTypes_9() { return &___UriTypes_9; }
	inline void set_UriTypes_9(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___UriTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_10() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___CharTypes_10)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_CharTypes_10() const { return ___CharTypes_10; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_CharTypes_10() { return &___CharTypes_10; }
	inline void set_CharTypes_10(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___CharTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_11() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___DateTimeTypes_11)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_DateTimeTypes_11() const { return ___DateTimeTypes_11; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_DateTimeTypes_11() { return &___DateTimeTypes_11; }
	inline void set_DateTimeTypes_11(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___DateTimeTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_12() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___BytesTypes_12)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_BytesTypes_12() const { return ___BytesTypes_12; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_BytesTypes_12() { return &___BytesTypes_12; }
	inline void set_BytesTypes_12(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___BytesTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_12), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.Pose>
struct  Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	PoseU5BU5D_tE5BA230703E26522423FC8A2D447B9CC4B011205* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1, ____array_0)); }
	inline PoseU5BU5D_tE5BA230703E26522423FC8A2D447B9CC4B011205* get__array_0() const { return ____array_0; }
	inline PoseU5BU5D_tE5BA230703E26522423FC8A2D447B9CC4B011205** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(PoseU5BU5D_tE5BA230703E26522423FC8A2D447B9CC4B011205* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Newtonsoft.Json.Linq.JContainer
struct  JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB  : public JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88 * ____listChanged_13;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;

public:
	inline static int32_t get_offset_of__listChanged_13() { return static_cast<int32_t>(offsetof(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB, ____listChanged_13)); }
	inline ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88 * get__listChanged_13() const { return ____listChanged_13; }
	inline ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88 ** get_address_of__listChanged_13() { return &____listChanged_13; }
	inline void set__listChanged_13(ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88 * value)
	{
		____listChanged_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_13), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_14), (void*)value);
	}

	inline static int32_t get_offset_of__busy_15() { return static_cast<int32_t>(offsetof(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB, ____busy_15)); }
	inline bool get__busy_15() const { return ____busy_15; }
	inline bool* get_address_of__busy_15() { return &____busy_15; }
	inline void set__busy_15(bool value)
	{
		____busy_15 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameObject>
struct  Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___list_0)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_list_0() const { return ___list_0; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___current_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_current_3() const { return ___current_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PressableButton_SpaceMode
struct  SpaceMode_t1B6CDA06EDC4A1D3226A4C66176F02BD657DA860 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PressableButton_SpaceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpaceMode_t1B6CDA06EDC4A1D3226A4C66176F02BD657DA860, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tE7ED1B123C90BB4C1B3FA2FE3FAB9CEE1CA048D6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tE7ED1B123C90BB4C1B3FA2FE3FAB9CEE1CA048D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct  Formatting_tB318308F245B2BF136DFEFB2DDF54F7574396AD1 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tB318308F245B2BF136DFEFB2DDF54F7574396AD1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JArray
struct  JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11  : public JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t8246A737A04C195F9611E6FB0168F6F4025F7CBF * ____values_16;

public:
	inline static int32_t get_offset_of__values_16() { return static_cast<int32_t>(offsetof(JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11, ____values_16)); }
	inline List_1_t8246A737A04C195F9611E6FB0168F6F4025F7CBF * get__values_16() const { return ____values_16; }
	inline List_1_t8246A737A04C195F9611E6FB0168F6F4025F7CBF ** get_address_of__values_16() { return &____values_16; }
	inline void set__values_16(List_1_t8246A737A04C195F9611E6FB0168F6F4025F7CBF * value)
	{
		____values_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_16), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject
struct  JObject_t786AF07B1009334856B0362BBC48EEF68C81C585  : public JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D * ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * ___PropertyChanged_17;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3 * ___PropertyChanging_18;

public:
	inline static int32_t get_offset_of__properties_16() { return static_cast<int32_t>(offsetof(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585, ____properties_16)); }
	inline JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D * get__properties_16() const { return ____properties_16; }
	inline JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D ** get_address_of__properties_16() { return &____properties_16; }
	inline void set__properties_16(JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D * value)
	{
		____properties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_16), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_17() { return static_cast<int32_t>(offsetof(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585, ___PropertyChanged_17)); }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * get_PropertyChanged_17() const { return ___PropertyChanged_17; }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 ** get_address_of_PropertyChanged_17() { return &___PropertyChanged_17; }
	inline void set_PropertyChanged_17(PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * value)
	{
		___PropertyChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_18() { return static_cast<int32_t>(offsetof(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585, ___PropertyChanging_18)); }
	inline PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3 * get_PropertyChanging_18() const { return ___PropertyChanging_18; }
	inline PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3 ** get_address_of_PropertyChanging_18() { return &___PropertyChanging_18; }
	inline void set_PropertyChanging_18(PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3 * value)
	{
		___PropertyChanging_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_18), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty
struct  JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A  : public JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB
{
public:
	// Newtonsoft.Json.Linq.JProperty_JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_tAC5DCFB03C7879ED6FCFD74977E76474C918200F * ____content_16;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_17;

public:
	inline static int32_t get_offset_of__content_16() { return static_cast<int32_t>(offsetof(JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A, ____content_16)); }
	inline JPropertyList_tAC5DCFB03C7879ED6FCFD74977E76474C918200F * get__content_16() const { return ____content_16; }
	inline JPropertyList_tAC5DCFB03C7879ED6FCFD74977E76474C918200F ** get_address_of__content_16() { return &____content_16; }
	inline void set__content_16(JPropertyList_tAC5DCFB03C7879ED6FCFD74977E76474C918200F * value)
	{
		____content_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_16), (void*)value);
	}

	inline static int32_t get_offset_of__name_17() { return static_cast<int32_t>(offsetof(JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A, ____name_17)); }
	inline String_t* get__name_17() const { return ____name_17; }
	inline String_t** get_address_of__name_17() { return &____name_17; }
	inline void set__name_17(String_t* value)
	{
		____name_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_17), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.NetworkStream
struct  NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_StreamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_8;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_12;

public:
	inline static int32_t get_offset_of_m_StreamSocket_5() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_StreamSocket_5)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_StreamSocket_5() const { return ___m_StreamSocket_5; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_StreamSocket_5() { return &___m_StreamSocket_5; }
	inline void set_m_StreamSocket_5(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_StreamSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Readable_6)); }
	inline bool get_m_Readable_6() const { return ___m_Readable_6; }
	inline bool* get_address_of_m_Readable_6() { return &___m_Readable_6; }
	inline void set_m_Readable_6(bool value)
	{
		___m_Readable_6 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_7() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_Writeable_7)); }
	inline bool get_m_Writeable_7() const { return ___m_Writeable_7; }
	inline bool* get_address_of_m_Writeable_7() { return &___m_Writeable_7; }
	inline void set_m_Writeable_7(bool value)
	{
		___m_Writeable_7 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_8() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_OwnsSocket_8)); }
	inline bool get_m_OwnsSocket_8() const { return ___m_OwnsSocket_8; }
	inline bool* get_address_of_m_OwnsSocket_8() { return &___m_OwnsSocket_8; }
	inline void set_m_OwnsSocket_8(bool value)
	{
		___m_OwnsSocket_8 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_9() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CloseTimeout_9)); }
	inline int32_t get_m_CloseTimeout_9() const { return ___m_CloseTimeout_9; }
	inline int32_t* get_address_of_m_CloseTimeout_9() { return &___m_CloseTimeout_9; }
	inline void set_m_CloseTimeout_9(int32_t value)
	{
		___m_CloseTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_10() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CleanedUp_10)); }
	inline bool get_m_CleanedUp_10() const { return ___m_CleanedUp_10; }
	inline bool* get_address_of_m_CleanedUp_10() { return &___m_CleanedUp_10; }
	inline void set_m_CleanedUp_10(bool value)
	{
		___m_CleanedUp_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentReadTimeout_11)); }
	inline int32_t get_m_CurrentReadTimeout_11() const { return ___m_CurrentReadTimeout_11; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_11() { return &___m_CurrentReadTimeout_11; }
	inline void set_m_CurrentReadTimeout_11(int32_t value)
	{
		___m_CurrentReadTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_12() { return static_cast<int32_t>(offsetof(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA, ___m_CurrentWriteTimeout_12)); }
	inline int32_t get_m_CurrentWriteTimeout_12() const { return ___m_CurrentWriteTimeout_12; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_12() { return &___m_CurrentWriteTimeout_12; }
	inline void set_m_CurrentWriteTimeout_12(int32_t value)
	{
		___m_CurrentWriteTimeout_12 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 
{
public:
	// T System.Nullable`1::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203, ___value_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_0() const { return ___value_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.InputField_CharacterValidation
struct  CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E 
{
public:
	// System.Int32 UnityEngine.UI.InputField_CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_ContentType
struct  ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048 
{
public:
	// System.Int32 UnityEngine.UI.InputField_ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_InputType
struct  InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A 
{
public:
	// System.Int32 UnityEngine.UI.InputField_InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_LineType
struct  LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6 
{
public:
	// System.Int32 UnityEngine.UI.InputField_LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Net.Sockets.TcpClient
struct  TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_ClientSocket_0)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_DataStream_2)); }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.Threading.ThreadStart
struct  ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// ConnectionManager
struct  ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String ConnectionManager::ipAddress
	String_t* ___ipAddress_4;
	// System.Int32 ConnectionManager::port
	int32_t ___port_5;
	// UnityEngine.UI.InputField ConnectionManager::ipInputField
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___ipInputField_6;
	// UnityEngine.UI.InputField ConnectionManager::portInputField
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___portInputField_7;
	// UnityEngine.GameObject ConnectionManager::sendToServerButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sendToServerButton_8;
	// System.Threading.Thread ConnectionManager::receiveThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___receiveThread_10;

public:
	inline static int32_t get_offset_of_ipAddress_4() { return static_cast<int32_t>(offsetof(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B, ___ipAddress_4)); }
	inline String_t* get_ipAddress_4() const { return ___ipAddress_4; }
	inline String_t** get_address_of_ipAddress_4() { return &___ipAddress_4; }
	inline void set_ipAddress_4(String_t* value)
	{
		___ipAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ipAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_ipInputField_6() { return static_cast<int32_t>(offsetof(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B, ___ipInputField_6)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_ipInputField_6() const { return ___ipInputField_6; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_ipInputField_6() { return &___ipInputField_6; }
	inline void set_ipInputField_6(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___ipInputField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ipInputField_6), (void*)value);
	}

	inline static int32_t get_offset_of_portInputField_7() { return static_cast<int32_t>(offsetof(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B, ___portInputField_7)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_portInputField_7() const { return ___portInputField_7; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_portInputField_7() { return &___portInputField_7; }
	inline void set_portInputField_7(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___portInputField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portInputField_7), (void*)value);
	}

	inline static int32_t get_offset_of_sendToServerButton_8() { return static_cast<int32_t>(offsetof(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B, ___sendToServerButton_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sendToServerButton_8() const { return ___sendToServerButton_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sendToServerButton_8() { return &___sendToServerButton_8; }
	inline void set_sendToServerButton_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sendToServerButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendToServerButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_receiveThread_10() { return static_cast<int32_t>(offsetof(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B, ___receiveThread_10)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_receiveThread_10() const { return ___receiveThread_10; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_receiveThread_10() { return &___receiveThread_10; }
	inline void set_receiveThread_10(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___receiveThread_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveThread_10), (void*)value);
	}
};

struct ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields
{
public:
	// System.Net.Sockets.TcpClient ConnectionManager::tcpClient
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ___tcpClient_9;
	// ObjectManager ConnectionManager::objectManager
	ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * ___objectManager_11;

public:
	inline static int32_t get_offset_of_tcpClient_9() { return static_cast<int32_t>(offsetof(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields, ___tcpClient_9)); }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * get_tcpClient_9() const { return ___tcpClient_9; }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB ** get_address_of_tcpClient_9() { return &___tcpClient_9; }
	inline void set_tcpClient_9(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * value)
	{
		___tcpClient_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpClient_9), (void*)value);
	}

	inline static int32_t get_offset_of_objectManager_11() { return static_cast<int32_t>(offsetof(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields, ___objectManager_11)); }
	inline ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * get_objectManager_11() const { return ___objectManager_11; }
	inline ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 ** get_address_of_objectManager_11() { return &___objectManager_11; }
	inline void set_objectManager_11(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * value)
	{
		___objectManager_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectManager_11), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Interactable
struct  Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.UI.Interactable::focusingPointers
	List_1_t1D85FAC23664CA6C578EB17F99C8F7FF3F9C8114 * ___focusingPointers_4;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.UI.Interactable::pressingInputSources
	HashSet_1_t7C70494EAEF0E4A6227A6636B06BF3041E51AF96 * ___pressingInputSources_5;
	// Microsoft.MixedReality.Toolkit.UI.States Microsoft.MixedReality.Toolkit.UI.Interactable::states
	States_tFA0FE2D9A6BFAFE6A8F965F874DD9FB6E7A5C4FF * ___states_6;
	// Microsoft.MixedReality.Toolkit.UI.InteractableStates Microsoft.MixedReality.Toolkit.UI.Interactable::<StateManager>k__BackingField
	InteractableStates_t62EA4B8A1B44EB25F34716E4FC7A34EB7897DCB3 * ___U3CStateManagerU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.UI.Interactable::<InputAction>k__BackingField
	MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  ___U3CInputActionU3Ek__BackingField_8;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::InputActionId
	int32_t ___InputActionId_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::isGlobal
	bool ___isGlobal_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::Dimensions
	int32_t ___Dimensions_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::dimensionIndex
	int32_t ___dimensionIndex_12;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::startDimensionIndex
	int32_t ___startDimensionIndex_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::CanSelect
	bool ___CanSelect_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::CanDeselect
	bool ___CanDeselect_15;
	// System.String Microsoft.MixedReality.Toolkit.UI.Interactable::VoiceCommand
	String_t* ___VoiceCommand_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::voiceRequiresFocus
	bool ___voiceRequiresFocus_17;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableProfileItem> Microsoft.MixedReality.Toolkit.UI.Interactable::profiles
	List_1_t0106181D041F2651BD0BC15853748FFF3196686E * ___profiles_18;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.Interactable::OnClick
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnClick_19;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableEvent> Microsoft.MixedReality.Toolkit.UI.Interactable::Events
	List_1_tFA3D2B83ED8148D6D771B82BF268758F13B12060 * ___Events_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::resetOnDestroy
	bool ___resetOnDestroy_21;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase> Microsoft.MixedReality.Toolkit.UI.Interactable::activeThemes
	List_1_t4B25EBE9A9FA628E0E12367359E79FB5CB6C0E4C * ___activeThemes_22;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Int32,Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>> Microsoft.MixedReality.Toolkit.UI.Interactable::allThemeDimensionPairs
	List_1_tC80BE7B6F6583021B37CB483DF0BCEA76E80D929 * ___allThemeDimensionPairs_23;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::<ClickCount>k__BackingField
	int32_t ___U3CClickCountU3Ek__BackingField_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::enabledOnStart
	bool ___enabledOnStart_25;
	// Microsoft.MixedReality.Toolkit.UI.State Microsoft.MixedReality.Toolkit.UI.Interactable::lastState
	State_tD177A963DC404A708C9B4431B937DB963847687A * ___lastState_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::forceUpdate
	bool ___forceUpdate_27;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::rollOffTime
	float ___rollOffTime_28;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::rollOffTimer
	float ___rollOffTimer_29;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IInteractableHandler> Microsoft.MixedReality.Toolkit.UI.Interactable::handlers
	List_1_tC2DEB33E5EF6658E2193D2E30C3932FF27A498BE * ___handlers_30;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::clickTime
	float ___clickTime_31;
	// UnityEngine.Coroutine Microsoft.MixedReality.Toolkit.UI.Interactable::clickValidTimer
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___clickValidTimer_32;
	// UnityEngine.Coroutine Microsoft.MixedReality.Toolkit.UI.Interactable::globalTimer
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___globalTimer_34;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.Interactable::dragStartPosition
	Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  ___dragStartPosition_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::isInitialized
	bool ___isInitialized_39;

public:
	inline static int32_t get_offset_of_focusingPointers_4() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___focusingPointers_4)); }
	inline List_1_t1D85FAC23664CA6C578EB17F99C8F7FF3F9C8114 * get_focusingPointers_4() const { return ___focusingPointers_4; }
	inline List_1_t1D85FAC23664CA6C578EB17F99C8F7FF3F9C8114 ** get_address_of_focusingPointers_4() { return &___focusingPointers_4; }
	inline void set_focusingPointers_4(List_1_t1D85FAC23664CA6C578EB17F99C8F7FF3F9C8114 * value)
	{
		___focusingPointers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusingPointers_4), (void*)value);
	}

	inline static int32_t get_offset_of_pressingInputSources_5() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___pressingInputSources_5)); }
	inline HashSet_1_t7C70494EAEF0E4A6227A6636B06BF3041E51AF96 * get_pressingInputSources_5() const { return ___pressingInputSources_5; }
	inline HashSet_1_t7C70494EAEF0E4A6227A6636B06BF3041E51AF96 ** get_address_of_pressingInputSources_5() { return &___pressingInputSources_5; }
	inline void set_pressingInputSources_5(HashSet_1_t7C70494EAEF0E4A6227A6636B06BF3041E51AF96 * value)
	{
		___pressingInputSources_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressingInputSources_5), (void*)value);
	}

	inline static int32_t get_offset_of_states_6() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___states_6)); }
	inline States_tFA0FE2D9A6BFAFE6A8F965F874DD9FB6E7A5C4FF * get_states_6() const { return ___states_6; }
	inline States_tFA0FE2D9A6BFAFE6A8F965F874DD9FB6E7A5C4FF ** get_address_of_states_6() { return &___states_6; }
	inline void set_states_6(States_tFA0FE2D9A6BFAFE6A8F965F874DD9FB6E7A5C4FF * value)
	{
		___states_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateManagerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___U3CStateManagerU3Ek__BackingField_7)); }
	inline InteractableStates_t62EA4B8A1B44EB25F34716E4FC7A34EB7897DCB3 * get_U3CStateManagerU3Ek__BackingField_7() const { return ___U3CStateManagerU3Ek__BackingField_7; }
	inline InteractableStates_t62EA4B8A1B44EB25F34716E4FC7A34EB7897DCB3 ** get_address_of_U3CStateManagerU3Ek__BackingField_7() { return &___U3CStateManagerU3Ek__BackingField_7; }
	inline void set_U3CStateManagerU3Ek__BackingField_7(InteractableStates_t62EA4B8A1B44EB25F34716E4FC7A34EB7897DCB3 * value)
	{
		___U3CStateManagerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateManagerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___U3CInputActionU3Ek__BackingField_8)); }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  get_U3CInputActionU3Ek__BackingField_8() const { return ___U3CInputActionU3Ek__BackingField_8; }
	inline MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970 * get_address_of_U3CInputActionU3Ek__BackingField_8() { return &___U3CInputActionU3Ek__BackingField_8; }
	inline void set_U3CInputActionU3Ek__BackingField_8(MixedRealityInputAction_t21FA9287AC97D00262CA87C0AEF9F92E67203970  value)
	{
		___U3CInputActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInputActionU3Ek__BackingField_8))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_InputActionId_9() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___InputActionId_9)); }
	inline int32_t get_InputActionId_9() const { return ___InputActionId_9; }
	inline int32_t* get_address_of_InputActionId_9() { return &___InputActionId_9; }
	inline void set_InputActionId_9(int32_t value)
	{
		___InputActionId_9 = value;
	}

	inline static int32_t get_offset_of_isGlobal_10() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___isGlobal_10)); }
	inline bool get_isGlobal_10() const { return ___isGlobal_10; }
	inline bool* get_address_of_isGlobal_10() { return &___isGlobal_10; }
	inline void set_isGlobal_10(bool value)
	{
		___isGlobal_10 = value;
	}

	inline static int32_t get_offset_of_Dimensions_11() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___Dimensions_11)); }
	inline int32_t get_Dimensions_11() const { return ___Dimensions_11; }
	inline int32_t* get_address_of_Dimensions_11() { return &___Dimensions_11; }
	inline void set_Dimensions_11(int32_t value)
	{
		___Dimensions_11 = value;
	}

	inline static int32_t get_offset_of_dimensionIndex_12() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___dimensionIndex_12)); }
	inline int32_t get_dimensionIndex_12() const { return ___dimensionIndex_12; }
	inline int32_t* get_address_of_dimensionIndex_12() { return &___dimensionIndex_12; }
	inline void set_dimensionIndex_12(int32_t value)
	{
		___dimensionIndex_12 = value;
	}

	inline static int32_t get_offset_of_startDimensionIndex_13() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___startDimensionIndex_13)); }
	inline int32_t get_startDimensionIndex_13() const { return ___startDimensionIndex_13; }
	inline int32_t* get_address_of_startDimensionIndex_13() { return &___startDimensionIndex_13; }
	inline void set_startDimensionIndex_13(int32_t value)
	{
		___startDimensionIndex_13 = value;
	}

	inline static int32_t get_offset_of_CanSelect_14() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___CanSelect_14)); }
	inline bool get_CanSelect_14() const { return ___CanSelect_14; }
	inline bool* get_address_of_CanSelect_14() { return &___CanSelect_14; }
	inline void set_CanSelect_14(bool value)
	{
		___CanSelect_14 = value;
	}

	inline static int32_t get_offset_of_CanDeselect_15() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___CanDeselect_15)); }
	inline bool get_CanDeselect_15() const { return ___CanDeselect_15; }
	inline bool* get_address_of_CanDeselect_15() { return &___CanDeselect_15; }
	inline void set_CanDeselect_15(bool value)
	{
		___CanDeselect_15 = value;
	}

	inline static int32_t get_offset_of_VoiceCommand_16() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___VoiceCommand_16)); }
	inline String_t* get_VoiceCommand_16() const { return ___VoiceCommand_16; }
	inline String_t** get_address_of_VoiceCommand_16() { return &___VoiceCommand_16; }
	inline void set_VoiceCommand_16(String_t* value)
	{
		___VoiceCommand_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VoiceCommand_16), (void*)value);
	}

	inline static int32_t get_offset_of_voiceRequiresFocus_17() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___voiceRequiresFocus_17)); }
	inline bool get_voiceRequiresFocus_17() const { return ___voiceRequiresFocus_17; }
	inline bool* get_address_of_voiceRequiresFocus_17() { return &___voiceRequiresFocus_17; }
	inline void set_voiceRequiresFocus_17(bool value)
	{
		___voiceRequiresFocus_17 = value;
	}

	inline static int32_t get_offset_of_profiles_18() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___profiles_18)); }
	inline List_1_t0106181D041F2651BD0BC15853748FFF3196686E * get_profiles_18() const { return ___profiles_18; }
	inline List_1_t0106181D041F2651BD0BC15853748FFF3196686E ** get_address_of_profiles_18() { return &___profiles_18; }
	inline void set_profiles_18(List_1_t0106181D041F2651BD0BC15853748FFF3196686E * value)
	{
		___profiles_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profiles_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnClick_19() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___OnClick_19)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnClick_19() const { return ___OnClick_19; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnClick_19() { return &___OnClick_19; }
	inline void set_OnClick_19(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnClick_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClick_19), (void*)value);
	}

	inline static int32_t get_offset_of_Events_20() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___Events_20)); }
	inline List_1_tFA3D2B83ED8148D6D771B82BF268758F13B12060 * get_Events_20() const { return ___Events_20; }
	inline List_1_tFA3D2B83ED8148D6D771B82BF268758F13B12060 ** get_address_of_Events_20() { return &___Events_20; }
	inline void set_Events_20(List_1_tFA3D2B83ED8148D6D771B82BF268758F13B12060 * value)
	{
		___Events_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Events_20), (void*)value);
	}

	inline static int32_t get_offset_of_resetOnDestroy_21() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___resetOnDestroy_21)); }
	inline bool get_resetOnDestroy_21() const { return ___resetOnDestroy_21; }
	inline bool* get_address_of_resetOnDestroy_21() { return &___resetOnDestroy_21; }
	inline void set_resetOnDestroy_21(bool value)
	{
		___resetOnDestroy_21 = value;
	}

	inline static int32_t get_offset_of_activeThemes_22() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___activeThemes_22)); }
	inline List_1_t4B25EBE9A9FA628E0E12367359E79FB5CB6C0E4C * get_activeThemes_22() const { return ___activeThemes_22; }
	inline List_1_t4B25EBE9A9FA628E0E12367359E79FB5CB6C0E4C ** get_address_of_activeThemes_22() { return &___activeThemes_22; }
	inline void set_activeThemes_22(List_1_t4B25EBE9A9FA628E0E12367359E79FB5CB6C0E4C * value)
	{
		___activeThemes_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeThemes_22), (void*)value);
	}

	inline static int32_t get_offset_of_allThemeDimensionPairs_23() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___allThemeDimensionPairs_23)); }
	inline List_1_tC80BE7B6F6583021B37CB483DF0BCEA76E80D929 * get_allThemeDimensionPairs_23() const { return ___allThemeDimensionPairs_23; }
	inline List_1_tC80BE7B6F6583021B37CB483DF0BCEA76E80D929 ** get_address_of_allThemeDimensionPairs_23() { return &___allThemeDimensionPairs_23; }
	inline void set_allThemeDimensionPairs_23(List_1_tC80BE7B6F6583021B37CB483DF0BCEA76E80D929 * value)
	{
		___allThemeDimensionPairs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allThemeDimensionPairs_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClickCountU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___U3CClickCountU3Ek__BackingField_24)); }
	inline int32_t get_U3CClickCountU3Ek__BackingField_24() const { return ___U3CClickCountU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CClickCountU3Ek__BackingField_24() { return &___U3CClickCountU3Ek__BackingField_24; }
	inline void set_U3CClickCountU3Ek__BackingField_24(int32_t value)
	{
		___U3CClickCountU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_enabledOnStart_25() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___enabledOnStart_25)); }
	inline bool get_enabledOnStart_25() const { return ___enabledOnStart_25; }
	inline bool* get_address_of_enabledOnStart_25() { return &___enabledOnStart_25; }
	inline void set_enabledOnStart_25(bool value)
	{
		___enabledOnStart_25 = value;
	}

	inline static int32_t get_offset_of_lastState_26() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___lastState_26)); }
	inline State_tD177A963DC404A708C9B4431B937DB963847687A * get_lastState_26() const { return ___lastState_26; }
	inline State_tD177A963DC404A708C9B4431B937DB963847687A ** get_address_of_lastState_26() { return &___lastState_26; }
	inline void set_lastState_26(State_tD177A963DC404A708C9B4431B937DB963847687A * value)
	{
		___lastState_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastState_26), (void*)value);
	}

	inline static int32_t get_offset_of_forceUpdate_27() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___forceUpdate_27)); }
	inline bool get_forceUpdate_27() const { return ___forceUpdate_27; }
	inline bool* get_address_of_forceUpdate_27() { return &___forceUpdate_27; }
	inline void set_forceUpdate_27(bool value)
	{
		___forceUpdate_27 = value;
	}

	inline static int32_t get_offset_of_rollOffTime_28() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___rollOffTime_28)); }
	inline float get_rollOffTime_28() const { return ___rollOffTime_28; }
	inline float* get_address_of_rollOffTime_28() { return &___rollOffTime_28; }
	inline void set_rollOffTime_28(float value)
	{
		___rollOffTime_28 = value;
	}

	inline static int32_t get_offset_of_rollOffTimer_29() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___rollOffTimer_29)); }
	inline float get_rollOffTimer_29() const { return ___rollOffTimer_29; }
	inline float* get_address_of_rollOffTimer_29() { return &___rollOffTimer_29; }
	inline void set_rollOffTimer_29(float value)
	{
		___rollOffTimer_29 = value;
	}

	inline static int32_t get_offset_of_handlers_30() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___handlers_30)); }
	inline List_1_tC2DEB33E5EF6658E2193D2E30C3932FF27A498BE * get_handlers_30() const { return ___handlers_30; }
	inline List_1_tC2DEB33E5EF6658E2193D2E30C3932FF27A498BE ** get_address_of_handlers_30() { return &___handlers_30; }
	inline void set_handlers_30(List_1_tC2DEB33E5EF6658E2193D2E30C3932FF27A498BE * value)
	{
		___handlers_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_30), (void*)value);
	}

	inline static int32_t get_offset_of_clickTime_31() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___clickTime_31)); }
	inline float get_clickTime_31() const { return ___clickTime_31; }
	inline float* get_address_of_clickTime_31() { return &___clickTime_31; }
	inline void set_clickTime_31(float value)
	{
		___clickTime_31 = value;
	}

	inline static int32_t get_offset_of_clickValidTimer_32() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___clickValidTimer_32)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_clickValidTimer_32() const { return ___clickValidTimer_32; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_clickValidTimer_32() { return &___clickValidTimer_32; }
	inline void set_clickValidTimer_32(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___clickValidTimer_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickValidTimer_32), (void*)value);
	}

	inline static int32_t get_offset_of_globalTimer_34() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___globalTimer_34)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_globalTimer_34() const { return ___globalTimer_34; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_globalTimer_34() { return &___globalTimer_34; }
	inline void set_globalTimer_34(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___globalTimer_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalTimer_34), (void*)value);
	}

	inline static int32_t get_offset_of_dragStartPosition_35() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___dragStartPosition_35)); }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  get_dragStartPosition_35() const { return ___dragStartPosition_35; }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * get_address_of_dragStartPosition_35() { return &___dragStartPosition_35; }
	inline void set_dragStartPosition_35(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  value)
	{
		___dragStartPosition_35 = value;
	}

	inline static int32_t get_offset_of_isInitialized_39() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2, ___isInitialized_39)); }
	inline bool get_isInitialized_39() const { return ___isInitialized_39; }
	inline bool* get_address_of_isInitialized_39() { return &___isInitialized_39; }
	inline void set_isInitialized_39(bool value)
	{
		___isInitialized_39 = value;
	}
};

struct Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_StaticFields
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdVector2
	float ___gestureStartThresholdVector2_36;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdVector3
	float ___gestureStartThresholdVector3_37;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdMixedRealityPose
	float ___gestureStartThresholdMixedRealityPose_38;

public:
	inline static int32_t get_offset_of_gestureStartThresholdVector2_36() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_StaticFields, ___gestureStartThresholdVector2_36)); }
	inline float get_gestureStartThresholdVector2_36() const { return ___gestureStartThresholdVector2_36; }
	inline float* get_address_of_gestureStartThresholdVector2_36() { return &___gestureStartThresholdVector2_36; }
	inline void set_gestureStartThresholdVector2_36(float value)
	{
		___gestureStartThresholdVector2_36 = value;
	}

	inline static int32_t get_offset_of_gestureStartThresholdVector3_37() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_StaticFields, ___gestureStartThresholdVector3_37)); }
	inline float get_gestureStartThresholdVector3_37() const { return ___gestureStartThresholdVector3_37; }
	inline float* get_address_of_gestureStartThresholdVector3_37() { return &___gestureStartThresholdVector3_37; }
	inline void set_gestureStartThresholdVector3_37(float value)
	{
		___gestureStartThresholdVector3_37 = value;
	}

	inline static int32_t get_offset_of_gestureStartThresholdMixedRealityPose_38() { return static_cast<int32_t>(offsetof(Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_StaticFields, ___gestureStartThresholdMixedRealityPose_38)); }
	inline float get_gestureStartThresholdMixedRealityPose_38() const { return ___gestureStartThresholdMixedRealityPose_38; }
	inline float* get_address_of_gestureStartThresholdMixedRealityPose_38() { return &___gestureStartThresholdMixedRealityPose_38; }
	inline void set_gestureStartThresholdMixedRealityPose_38(float value)
	{
		___gestureStartThresholdMixedRealityPose_38 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PressableButton
struct  PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButton::hasStarted
	bool ___hasStarted_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PressableButton::movingButtonVisuals
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___movingButtonVisuals_6;
	// Microsoft.MixedReality.Toolkit.UI.PressableButton_SpaceMode Microsoft.MixedReality.Toolkit.UI.PressableButton::distanceSpaceMode
	int32_t ___distanceSpaceMode_7;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButton::startPushDistance
	float ___startPushDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButton::maxPushDistance
	float ___maxPushDistance_9;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButton::pressDistance
	float ___pressDistance_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButton::releaseDistanceDelta
	float ___releaseDistanceDelta_11;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButton::returnSpeed
	float ___returnSpeed_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButton::releaseOnTouchEnd
	bool ___releaseOnTouchEnd_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButton::enforceFrontPush
	bool ___enforceFrontPush_14;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.PressableButton::TouchBegin
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___TouchBegin_15;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.PressableButton::TouchEnd
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___TouchEnd_16;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.PressableButton::ButtonPressed
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___ButtonPressed_17;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.PressableButton::ButtonReleased
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___ButtonReleased_18;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.PressableButton::touchPoints
	Dictionary_2_t6448EA67440DBED7376D116BCECFBEE95894CF0D * ___touchPoints_20;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.UI.PressableButton::currentInputSources
	List_1_t47ED1548A91CB4495B742C73804988140B390720 * ___currentInputSources_21;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButton::currentPushDistance
	float ___currentPushDistance_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButton::isTouching
	bool ___isTouching_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButton::<IsPressing>k__BackingField
	bool ___U3CIsPressingU3Ek__BackingField_24;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PressableButton::movingVisualsInitialLocalPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___movingVisualsInitialLocalPosition_25;

public:
	inline static int32_t get_offset_of_hasStarted_5() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___hasStarted_5)); }
	inline bool get_hasStarted_5() const { return ___hasStarted_5; }
	inline bool* get_address_of_hasStarted_5() { return &___hasStarted_5; }
	inline void set_hasStarted_5(bool value)
	{
		___hasStarted_5 = value;
	}

	inline static int32_t get_offset_of_movingButtonVisuals_6() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___movingButtonVisuals_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_movingButtonVisuals_6() const { return ___movingButtonVisuals_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_movingButtonVisuals_6() { return &___movingButtonVisuals_6; }
	inline void set_movingButtonVisuals_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___movingButtonVisuals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movingButtonVisuals_6), (void*)value);
	}

	inline static int32_t get_offset_of_distanceSpaceMode_7() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___distanceSpaceMode_7)); }
	inline int32_t get_distanceSpaceMode_7() const { return ___distanceSpaceMode_7; }
	inline int32_t* get_address_of_distanceSpaceMode_7() { return &___distanceSpaceMode_7; }
	inline void set_distanceSpaceMode_7(int32_t value)
	{
		___distanceSpaceMode_7 = value;
	}

	inline static int32_t get_offset_of_startPushDistance_8() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___startPushDistance_8)); }
	inline float get_startPushDistance_8() const { return ___startPushDistance_8; }
	inline float* get_address_of_startPushDistance_8() { return &___startPushDistance_8; }
	inline void set_startPushDistance_8(float value)
	{
		___startPushDistance_8 = value;
	}

	inline static int32_t get_offset_of_maxPushDistance_9() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___maxPushDistance_9)); }
	inline float get_maxPushDistance_9() const { return ___maxPushDistance_9; }
	inline float* get_address_of_maxPushDistance_9() { return &___maxPushDistance_9; }
	inline void set_maxPushDistance_9(float value)
	{
		___maxPushDistance_9 = value;
	}

	inline static int32_t get_offset_of_pressDistance_10() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___pressDistance_10)); }
	inline float get_pressDistance_10() const { return ___pressDistance_10; }
	inline float* get_address_of_pressDistance_10() { return &___pressDistance_10; }
	inline void set_pressDistance_10(float value)
	{
		___pressDistance_10 = value;
	}

	inline static int32_t get_offset_of_releaseDistanceDelta_11() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___releaseDistanceDelta_11)); }
	inline float get_releaseDistanceDelta_11() const { return ___releaseDistanceDelta_11; }
	inline float* get_address_of_releaseDistanceDelta_11() { return &___releaseDistanceDelta_11; }
	inline void set_releaseDistanceDelta_11(float value)
	{
		___releaseDistanceDelta_11 = value;
	}

	inline static int32_t get_offset_of_returnSpeed_12() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___returnSpeed_12)); }
	inline float get_returnSpeed_12() const { return ___returnSpeed_12; }
	inline float* get_address_of_returnSpeed_12() { return &___returnSpeed_12; }
	inline void set_returnSpeed_12(float value)
	{
		___returnSpeed_12 = value;
	}

	inline static int32_t get_offset_of_releaseOnTouchEnd_13() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___releaseOnTouchEnd_13)); }
	inline bool get_releaseOnTouchEnd_13() const { return ___releaseOnTouchEnd_13; }
	inline bool* get_address_of_releaseOnTouchEnd_13() { return &___releaseOnTouchEnd_13; }
	inline void set_releaseOnTouchEnd_13(bool value)
	{
		___releaseOnTouchEnd_13 = value;
	}

	inline static int32_t get_offset_of_enforceFrontPush_14() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___enforceFrontPush_14)); }
	inline bool get_enforceFrontPush_14() const { return ___enforceFrontPush_14; }
	inline bool* get_address_of_enforceFrontPush_14() { return &___enforceFrontPush_14; }
	inline void set_enforceFrontPush_14(bool value)
	{
		___enforceFrontPush_14 = value;
	}

	inline static int32_t get_offset_of_TouchBegin_15() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___TouchBegin_15)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_TouchBegin_15() const { return ___TouchBegin_15; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_TouchBegin_15() { return &___TouchBegin_15; }
	inline void set_TouchBegin_15(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___TouchBegin_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchBegin_15), (void*)value);
	}

	inline static int32_t get_offset_of_TouchEnd_16() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___TouchEnd_16)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_TouchEnd_16() const { return ___TouchEnd_16; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_TouchEnd_16() { return &___TouchEnd_16; }
	inline void set_TouchEnd_16(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___TouchEnd_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchEnd_16), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonPressed_17() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___ButtonPressed_17)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_ButtonPressed_17() const { return ___ButtonPressed_17; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_ButtonPressed_17() { return &___ButtonPressed_17; }
	inline void set_ButtonPressed_17(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___ButtonPressed_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonPressed_17), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonReleased_18() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___ButtonReleased_18)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_ButtonReleased_18() const { return ___ButtonReleased_18; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_ButtonReleased_18() { return &___ButtonReleased_18; }
	inline void set_ButtonReleased_18(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___ButtonReleased_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonReleased_18), (void*)value);
	}

	inline static int32_t get_offset_of_touchPoints_20() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___touchPoints_20)); }
	inline Dictionary_2_t6448EA67440DBED7376D116BCECFBEE95894CF0D * get_touchPoints_20() const { return ___touchPoints_20; }
	inline Dictionary_2_t6448EA67440DBED7376D116BCECFBEE95894CF0D ** get_address_of_touchPoints_20() { return &___touchPoints_20; }
	inline void set_touchPoints_20(Dictionary_2_t6448EA67440DBED7376D116BCECFBEE95894CF0D * value)
	{
		___touchPoints_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchPoints_20), (void*)value);
	}

	inline static int32_t get_offset_of_currentInputSources_21() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___currentInputSources_21)); }
	inline List_1_t47ED1548A91CB4495B742C73804988140B390720 * get_currentInputSources_21() const { return ___currentInputSources_21; }
	inline List_1_t47ED1548A91CB4495B742C73804988140B390720 ** get_address_of_currentInputSources_21() { return &___currentInputSources_21; }
	inline void set_currentInputSources_21(List_1_t47ED1548A91CB4495B742C73804988140B390720 * value)
	{
		___currentInputSources_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInputSources_21), (void*)value);
	}

	inline static int32_t get_offset_of_currentPushDistance_22() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___currentPushDistance_22)); }
	inline float get_currentPushDistance_22() const { return ___currentPushDistance_22; }
	inline float* get_address_of_currentPushDistance_22() { return &___currentPushDistance_22; }
	inline void set_currentPushDistance_22(float value)
	{
		___currentPushDistance_22 = value;
	}

	inline static int32_t get_offset_of_isTouching_23() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___isTouching_23)); }
	inline bool get_isTouching_23() const { return ___isTouching_23; }
	inline bool* get_address_of_isTouching_23() { return &___isTouching_23; }
	inline void set_isTouching_23(bool value)
	{
		___isTouching_23 = value;
	}

	inline static int32_t get_offset_of_U3CIsPressingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___U3CIsPressingU3Ek__BackingField_24)); }
	inline bool get_U3CIsPressingU3Ek__BackingField_24() const { return ___U3CIsPressingU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CIsPressingU3Ek__BackingField_24() { return &___U3CIsPressingU3Ek__BackingField_24; }
	inline void set_U3CIsPressingU3Ek__BackingField_24(bool value)
	{
		___U3CIsPressingU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_movingVisualsInitialLocalPosition_25() { return static_cast<int32_t>(offsetof(PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162, ___movingVisualsInitialLocalPosition_25)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_movingVisualsInitialLocalPosition_25() const { return ___movingVisualsInitialLocalPosition_25; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_movingVisualsInitialLocalPosition_25() { return &___movingVisualsInitialLocalPosition_25; }
	inline void set_movingVisualsInitialLocalPosition_25(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___movingVisualsInitialLocalPosition_25 = value;
	}
};


// ObjectManager
struct  ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject ObjectManager::gameObjectToPlace
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObjectToPlace_4;
	// UnityEngine.GameObject ObjectManager::gameObjectGlobal
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObjectGlobal_5;
	// UnityEngine.GameObject ObjectManager::placedCubePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___placedCubePrefab_6;
	// UnityEngine.GameObject ObjectManager::globalCubePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___globalCubePrefab_7;
	// UnityEngine.GameObject ObjectManager::jointObjectPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___jointObjectPrefab_8;
	// UnityEngine.GameObject ObjectManager::getCubeButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___getCubeButton_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectManager::placedGameObjectsList
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___placedGameObjectsList_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectManager::globalObjectsList
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___globalObjectsList_11;
	// System.Collections.Generic.Queue`1<UnityEngine.Pose> ObjectManager::receivedGlobalObjects
	Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * ___receivedGlobalObjects_12;
	// System.Collections.Generic.Queue`1<UnityEngine.Pose> ObjectManager::receivedJointObjects
	Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * ___receivedJointObjects_13;
	// System.Int32 ObjectManager::maxNumberOfPlacedCubes
	int32_t ___maxNumberOfPlacedCubes_14;

public:
	inline static int32_t get_offset_of_gameObjectToPlace_4() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___gameObjectToPlace_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameObjectToPlace_4() const { return ___gameObjectToPlace_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameObjectToPlace_4() { return &___gameObjectToPlace_4; }
	inline void set_gameObjectToPlace_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameObjectToPlace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObjectToPlace_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameObjectGlobal_5() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___gameObjectGlobal_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameObjectGlobal_5() const { return ___gameObjectGlobal_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameObjectGlobal_5() { return &___gameObjectGlobal_5; }
	inline void set_gameObjectGlobal_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameObjectGlobal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObjectGlobal_5), (void*)value);
	}

	inline static int32_t get_offset_of_placedCubePrefab_6() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___placedCubePrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_placedCubePrefab_6() const { return ___placedCubePrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_placedCubePrefab_6() { return &___placedCubePrefab_6; }
	inline void set_placedCubePrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___placedCubePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placedCubePrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_globalCubePrefab_7() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___globalCubePrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_globalCubePrefab_7() const { return ___globalCubePrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_globalCubePrefab_7() { return &___globalCubePrefab_7; }
	inline void set_globalCubePrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___globalCubePrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalCubePrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_jointObjectPrefab_8() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___jointObjectPrefab_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_jointObjectPrefab_8() const { return ___jointObjectPrefab_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_jointObjectPrefab_8() { return &___jointObjectPrefab_8; }
	inline void set_jointObjectPrefab_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___jointObjectPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointObjectPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_getCubeButton_9() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___getCubeButton_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_getCubeButton_9() const { return ___getCubeButton_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_getCubeButton_9() { return &___getCubeButton_9; }
	inline void set_getCubeButton_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___getCubeButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getCubeButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_placedGameObjectsList_10() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___placedGameObjectsList_10)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_placedGameObjectsList_10() const { return ___placedGameObjectsList_10; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_placedGameObjectsList_10() { return &___placedGameObjectsList_10; }
	inline void set_placedGameObjectsList_10(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___placedGameObjectsList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placedGameObjectsList_10), (void*)value);
	}

	inline static int32_t get_offset_of_globalObjectsList_11() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___globalObjectsList_11)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_globalObjectsList_11() const { return ___globalObjectsList_11; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_globalObjectsList_11() { return &___globalObjectsList_11; }
	inline void set_globalObjectsList_11(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___globalObjectsList_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalObjectsList_11), (void*)value);
	}

	inline static int32_t get_offset_of_receivedGlobalObjects_12() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___receivedGlobalObjects_12)); }
	inline Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * get_receivedGlobalObjects_12() const { return ___receivedGlobalObjects_12; }
	inline Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 ** get_address_of_receivedGlobalObjects_12() { return &___receivedGlobalObjects_12; }
	inline void set_receivedGlobalObjects_12(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * value)
	{
		___receivedGlobalObjects_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receivedGlobalObjects_12), (void*)value);
	}

	inline static int32_t get_offset_of_receivedJointObjects_13() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___receivedJointObjects_13)); }
	inline Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * get_receivedJointObjects_13() const { return ___receivedJointObjects_13; }
	inline Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 ** get_address_of_receivedJointObjects_13() { return &___receivedJointObjects_13; }
	inline void set_receivedJointObjects_13(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * value)
	{
		___receivedJointObjects_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receivedJointObjects_13), (void*)value);
	}

	inline static int32_t get_offset_of_maxNumberOfPlacedCubes_14() { return static_cast<int32_t>(offsetof(ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856, ___maxNumberOfPlacedCubes_14)); }
	inline int32_t get_maxNumberOfPlacedCubes_14() const { return ___maxNumberOfPlacedCubes_14; }
	inline int32_t* get_address_of_maxNumberOfPlacedCubes_14() { return &___maxNumberOfPlacedCubes_14; }
	inline void set_maxNumberOfPlacedCubes_14(int32_t value)
	{
		___maxNumberOfPlacedCubes_14 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2
struct  PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC  : public PressableButton_t575E52C962EF55B5F6721A2E85232B80FC4E9162
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::movingButtonIconText
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___movingButtonIconText_26;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::compressableButtonVisuals
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___compressableButtonVisuals_27;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::minCompressPercentage
	float ___minCompressPercentage_28;
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::highlightPlate
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___highlightPlate_29;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::highlightPlateAnimationTime
	float ___highlightPlateAnimationTime_30;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::initialCompressableButtonVisualsLocalScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___initialCompressableButtonVisualsLocalScale_31;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::fluentLightIntensityID
	int32_t ___fluentLightIntensityID_32;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::targetFluentLightIntensity
	float ___targetFluentLightIntensity_33;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::properties
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties_34;
	// UnityEngine.Coroutine Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2::highlightPlateAnimationRoutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___highlightPlateAnimationRoutine_35;

public:
	inline static int32_t get_offset_of_movingButtonIconText_26() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___movingButtonIconText_26)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_movingButtonIconText_26() const { return ___movingButtonIconText_26; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_movingButtonIconText_26() { return &___movingButtonIconText_26; }
	inline void set_movingButtonIconText_26(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___movingButtonIconText_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movingButtonIconText_26), (void*)value);
	}

	inline static int32_t get_offset_of_compressableButtonVisuals_27() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___compressableButtonVisuals_27)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_compressableButtonVisuals_27() const { return ___compressableButtonVisuals_27; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_compressableButtonVisuals_27() { return &___compressableButtonVisuals_27; }
	inline void set_compressableButtonVisuals_27(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___compressableButtonVisuals_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compressableButtonVisuals_27), (void*)value);
	}

	inline static int32_t get_offset_of_minCompressPercentage_28() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___minCompressPercentage_28)); }
	inline float get_minCompressPercentage_28() const { return ___minCompressPercentage_28; }
	inline float* get_address_of_minCompressPercentage_28() { return &___minCompressPercentage_28; }
	inline void set_minCompressPercentage_28(float value)
	{
		___minCompressPercentage_28 = value;
	}

	inline static int32_t get_offset_of_highlightPlate_29() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___highlightPlate_29)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_highlightPlate_29() const { return ___highlightPlate_29; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_highlightPlate_29() { return &___highlightPlate_29; }
	inline void set_highlightPlate_29(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___highlightPlate_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highlightPlate_29), (void*)value);
	}

	inline static int32_t get_offset_of_highlightPlateAnimationTime_30() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___highlightPlateAnimationTime_30)); }
	inline float get_highlightPlateAnimationTime_30() const { return ___highlightPlateAnimationTime_30; }
	inline float* get_address_of_highlightPlateAnimationTime_30() { return &___highlightPlateAnimationTime_30; }
	inline void set_highlightPlateAnimationTime_30(float value)
	{
		___highlightPlateAnimationTime_30 = value;
	}

	inline static int32_t get_offset_of_initialCompressableButtonVisualsLocalScale_31() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___initialCompressableButtonVisualsLocalScale_31)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_initialCompressableButtonVisualsLocalScale_31() const { return ___initialCompressableButtonVisualsLocalScale_31; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_initialCompressableButtonVisualsLocalScale_31() { return &___initialCompressableButtonVisualsLocalScale_31; }
	inline void set_initialCompressableButtonVisualsLocalScale_31(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___initialCompressableButtonVisualsLocalScale_31 = value;
	}

	inline static int32_t get_offset_of_fluentLightIntensityID_32() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___fluentLightIntensityID_32)); }
	inline int32_t get_fluentLightIntensityID_32() const { return ___fluentLightIntensityID_32; }
	inline int32_t* get_address_of_fluentLightIntensityID_32() { return &___fluentLightIntensityID_32; }
	inline void set_fluentLightIntensityID_32(int32_t value)
	{
		___fluentLightIntensityID_32 = value;
	}

	inline static int32_t get_offset_of_targetFluentLightIntensity_33() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___targetFluentLightIntensity_33)); }
	inline float get_targetFluentLightIntensity_33() const { return ___targetFluentLightIntensity_33; }
	inline float* get_address_of_targetFluentLightIntensity_33() { return &___targetFluentLightIntensity_33; }
	inline void set_targetFluentLightIntensity_33(float value)
	{
		___targetFluentLightIntensity_33 = value;
	}

	inline static int32_t get_offset_of_properties_34() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___properties_34)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_properties_34() const { return ___properties_34; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_properties_34() { return &___properties_34; }
	inline void set_properties_34(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___properties_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_34), (void*)value);
	}

	inline static int32_t get_offset_of_highlightPlateAnimationRoutine_35() { return static_cast<int32_t>(offsetof(PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC, ___highlightPlateAnimationRoutine_35)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_highlightPlateAnimationRoutine_35() const { return ___highlightPlateAnimationRoutine_35; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_highlightPlateAnimationRoutine_35() { return &___highlightPlateAnimationRoutine_35; }
	inline void set_highlightPlateAnimationRoutine_35(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___highlightPlateAnimationRoutine_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highlightPlateAnimationRoutine_35), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
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
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
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

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.InputField
struct  InputField_t533609195B110760BCFF00B746C87D81969CB005  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField_ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField_InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField_LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField_CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField_SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField_OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField_OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_43;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___caretRectTrans_44;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_CursorVerts_45;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_InputTextCache_46;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CachedInputRenderer_47;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_48;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_49;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_50;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_51;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_52;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_53;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_BlinkCoroutine_57;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_58;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DragCoroutine_61;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_62;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_63;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_64;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * ___m_WaitForSecondsRealtime_65;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_66;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ProcessingEvent_68;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TextComponent_22)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Placeholder_23)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnEndEdit_32)); }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretColor_35)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_SelectionColor_37)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_42() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretPosition_42)); }
	inline int32_t get_m_CaretPosition_42() const { return ___m_CaretPosition_42; }
	inline int32_t* get_address_of_m_CaretPosition_42() { return &___m_CaretPosition_42; }
	inline void set_m_CaretPosition_42(int32_t value)
	{
		___m_CaretPosition_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_43() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretSelectPosition_43)); }
	inline int32_t get_m_CaretSelectPosition_43() const { return ___m_CaretSelectPosition_43; }
	inline int32_t* get_address_of_m_CaretSelectPosition_43() { return &___m_CaretSelectPosition_43; }
	inline void set_m_CaretSelectPosition_43(int32_t value)
	{
		___m_CaretSelectPosition_43 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_44() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___caretRectTrans_44)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_caretRectTrans_44() const { return ___caretRectTrans_44; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_caretRectTrans_44() { return &___caretRectTrans_44; }
	inline void set_caretRectTrans_44(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___caretRectTrans_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_45() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CursorVerts_45)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_CursorVerts_45() const { return ___m_CursorVerts_45; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_CursorVerts_45() { return &___m_CursorVerts_45; }
	inline void set_m_CursorVerts_45(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_CursorVerts_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_46() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputTextCache_46)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_InputTextCache_46() const { return ___m_InputTextCache_46; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_InputTextCache_46() { return &___m_InputTextCache_46; }
	inline void set_m_InputTextCache_46(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_InputTextCache_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_47() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CachedInputRenderer_47)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CachedInputRenderer_47() const { return ___m_CachedInputRenderer_47; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CachedInputRenderer_47() { return &___m_CachedInputRenderer_47; }
	inline void set_m_CachedInputRenderer_47(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CachedInputRenderer_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_48() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_PreventFontCallback_48)); }
	inline bool get_m_PreventFontCallback_48() const { return ___m_PreventFontCallback_48; }
	inline bool* get_address_of_m_PreventFontCallback_48() { return &___m_PreventFontCallback_48; }
	inline void set_m_PreventFontCallback_48(bool value)
	{
		___m_PreventFontCallback_48 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_49() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Mesh_49)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_49() const { return ___m_Mesh_49; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_49() { return &___m_Mesh_49; }
	inline void set_m_Mesh_49(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_50() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AllowInput_50)); }
	inline bool get_m_AllowInput_50() const { return ___m_AllowInput_50; }
	inline bool* get_address_of_m_AllowInput_50() { return &___m_AllowInput_50; }
	inline void set_m_AllowInput_50(bool value)
	{
		___m_AllowInput_50 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_51() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ShouldActivateNextUpdate_51)); }
	inline bool get_m_ShouldActivateNextUpdate_51() const { return ___m_ShouldActivateNextUpdate_51; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_51() { return &___m_ShouldActivateNextUpdate_51; }
	inline void set_m_ShouldActivateNextUpdate_51(bool value)
	{
		___m_ShouldActivateNextUpdate_51 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_52() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_UpdateDrag_52)); }
	inline bool get_m_UpdateDrag_52() const { return ___m_UpdateDrag_52; }
	inline bool* get_address_of_m_UpdateDrag_52() { return &___m_UpdateDrag_52; }
	inline void set_m_UpdateDrag_52(bool value)
	{
		___m_UpdateDrag_52 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_53() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragPositionOutOfBounds_53)); }
	inline bool get_m_DragPositionOutOfBounds_53() const { return ___m_DragPositionOutOfBounds_53; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_53() { return &___m_DragPositionOutOfBounds_53; }
	inline void set_m_DragPositionOutOfBounds_53(bool value)
	{
		___m_DragPositionOutOfBounds_53 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_56() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretVisible_56)); }
	inline bool get_m_CaretVisible_56() const { return ___m_CaretVisible_56; }
	inline bool* get_address_of_m_CaretVisible_56() { return &___m_CaretVisible_56; }
	inline void set_m_CaretVisible_56(bool value)
	{
		___m_CaretVisible_56 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkCoroutine_57)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_BlinkCoroutine_57() const { return ___m_BlinkCoroutine_57; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_BlinkCoroutine_57() { return &___m_BlinkCoroutine_57; }
	inline void set_m_BlinkCoroutine_57(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_BlinkCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_57), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_58() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkStartTime_58)); }
	inline float get_m_BlinkStartTime_58() const { return ___m_BlinkStartTime_58; }
	inline float* get_address_of_m_BlinkStartTime_58() { return &___m_BlinkStartTime_58; }
	inline void set_m_BlinkStartTime_58(float value)
	{
		___m_BlinkStartTime_58 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_59() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawStart_59)); }
	inline int32_t get_m_DrawStart_59() const { return ___m_DrawStart_59; }
	inline int32_t* get_address_of_m_DrawStart_59() { return &___m_DrawStart_59; }
	inline void set_m_DrawStart_59(int32_t value)
	{
		___m_DrawStart_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_60() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawEnd_60)); }
	inline int32_t get_m_DrawEnd_60() const { return ___m_DrawEnd_60; }
	inline int32_t* get_address_of_m_DrawEnd_60() { return &___m_DrawEnd_60; }
	inline void set_m_DrawEnd_60(int32_t value)
	{
		___m_DrawEnd_60 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_61() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragCoroutine_61)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DragCoroutine_61() const { return ___m_DragCoroutine_61; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DragCoroutine_61() { return &___m_DragCoroutine_61; }
	inline void set_m_DragCoroutine_61(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DragCoroutine_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_62() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OriginalText_62)); }
	inline String_t* get_m_OriginalText_62() const { return ___m_OriginalText_62; }
	inline String_t** get_address_of_m_OriginalText_62() { return &___m_OriginalText_62; }
	inline void set_m_OriginalText_62(String_t* value)
	{
		___m_OriginalText_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_63() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WasCanceled_63)); }
	inline bool get_m_WasCanceled_63() const { return ___m_WasCanceled_63; }
	inline bool* get_address_of_m_WasCanceled_63() { return &___m_WasCanceled_63; }
	inline void set_m_WasCanceled_63(bool value)
	{
		___m_WasCanceled_63 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_64() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HasDoneFocusTransition_64)); }
	inline bool get_m_HasDoneFocusTransition_64() const { return ___m_HasDoneFocusTransition_64; }
	inline bool* get_address_of_m_HasDoneFocusTransition_64() { return &___m_HasDoneFocusTransition_64; }
	inline void set_m_HasDoneFocusTransition_64(bool value)
	{
		___m_HasDoneFocusTransition_64 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_65() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WaitForSecondsRealtime_65)); }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * get_m_WaitForSecondsRealtime_65() const { return ___m_WaitForSecondsRealtime_65; }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 ** get_address_of_m_WaitForSecondsRealtime_65() { return &___m_WaitForSecondsRealtime_65; }
	inline void set_m_WaitForSecondsRealtime_65(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * value)
	{
		___m_WaitForSecondsRealtime_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_66() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TouchKeyboardAllowsInPlaceEditing_66)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_66() const { return ___m_TouchKeyboardAllowsInPlaceEditing_66; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_66() { return &___m_TouchKeyboardAllowsInPlaceEditing_66; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_66(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_66 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_68() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ProcessingEvent_68)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ProcessingEvent_68() const { return ___m_ProcessingEvent_68; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ProcessingEvent_68() { return &___m_ProcessingEvent_68; }
	inline void set_m_ProcessingEvent_68(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ProcessingEvent_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_68), (void*)value);
	}
};

struct InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t54F68FC2F7C268CA67090069816699D6427B1711  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6 * m_Items[1];

public:
	inline JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Pose>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_gshared_inline (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.Pose>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Queue_1_Dequeue_mB6A3B107470221EFD1237EB4A45409E144856FF9_gshared (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Pose>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m361583E4417902C98D4128B4A973C29F0D4A60B0_gshared (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Pose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5D1C52F1D70E95408154F84AA5939A8B359DAB52_gshared (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, const RuntimeMethod* method);

// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* InputField_get_text_mBF8B0DCF4E3CDBB06DA69715A7DD8F9E56775E79_inline (InputField_t533609195B110760BCFF00B746C87D81969CB005 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectManager::GetPlacedObjects()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ObjectManager_GetPlacedObjects_mC5593144091C6677364D754A4B8753CC144E23D6_inline (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m382DE021C6D65A50DEDB857185AFA68AFD478580 (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JArray__ctor_m3570E7F1C6D74FB906455C852E381FAFF4AD7C30 (JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_inline (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * JToken_op_Implicit_mCF7167D080BBBD884398067C66330717F88B5317 (float ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::Add(System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097 (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * __this, String_t* ___propertyName0, JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ___value1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JProperty__ctor_mCE3B92840B1F6ABC5DE9FFB370E41F4CBEBE3187 (JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A * __this, String_t* ___name0, RuntimeObject * ___content1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JArray::Add(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JArray_Add_mA2C08CEF9C9AB92FE4C5FB2636E8B6C89BD5B0EE (JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * __this, JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969 (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812 (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !!0[] System.Array::Empty<Newtonsoft.Json.JsonConverter>()
inline JsonConverterU5BU5D_t54F68FC2F7C268CA67090069816699D6427B1711* Array_Empty_TisJsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6_m9EEFBEE37E17EEF40A0AB8DAE0A803D26CC83D79_inline (const RuntimeMethod* method)
{
	return ((  JsonConverterU5BU5D_t54F68FC2F7C268CA67090069816699D6427B1711* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.String Newtonsoft.Json.Linq.JToken::ToString(Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonConverter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JToken_ToString_m3A871D6DAB011B6DE2C341D310E8E864942EC063 (JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * __this, int32_t ___formatting0, JsonConverterU5BU5D_t54F68FC2F7C268CA67090069816699D6427B1711* ___converters1, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void ObjectManager::PlacedToGlobal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_PlacedToGlobal_mAA7F947CA506D3E6822AC3BEFD6AD4053FC723F7 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * JObject_Parse_m72731D41454339812151322E2462053FAE75DB69 (String_t* ___json0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562 (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JArray_GetEnumerator_m9793014C1FCC8F46E34CB3AC3E86C2D4809B22E2 (JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * __this, const RuntimeMethod* method);
// System.Single Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JToken_op_Explicit_mC119E725EA53C059F35A94258F2A06800F1CEEB0 (JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void ObjectManager::SpawnObject(UnityEngine.Vector3,UnityEngine.Quaternion,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_SpawnObject_m3C1D844C38D3EC4D0CF72992E9FB84C2A2309800 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, String_t* ___type2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_mD569033FA4BC38793AE3FA7725A2C42E2700CC2F (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * __this, String_t* ___hostname0, int32_t ___port1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.Interactable>()
inline Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2 * GameObject_GetComponent_TisInteractable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_m52E0E8A351D3E27DA867094B49988BD354F27E56 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2>()
inline PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC * GameObject_GetComponent_TisPressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC_m57FCF0AD7641D61D5E299DC83988A1B40F74D086 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5 (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void ConnectionManager::SetObjectManager(ObjectManager)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ConnectionManager_SetObjectManager_m2631394ACD73DF34C5336D255A962F04A726CC62_inline (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * ___ObjectManager0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Pose>::get_Count()
inline int32_t Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_inline (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 *, const RuntimeMethod*))Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Pose>::Dequeue()
inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Queue_1_Dequeue_mB6A3B107470221EFD1237EB4A45409E144856FF9 (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, const RuntimeMethod* method)
{
	return ((  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  (*) (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 *, const RuntimeMethod*))Queue_1_Dequeue_mB6A3B107470221EFD1237EB4A45409E144856FF9_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_inline (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_mA226186F582A45B372C89C0594298EFA733DFA87 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m4F1AE399EDC70FBE803FCA8A37166AE2D5ED5235 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Pose>::Enqueue(!0)
inline void Queue_1_Enqueue_m361583E4417902C98D4128B4A973C29F0D4A60B0 (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 *, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*))Queue_1_Enqueue_m361583E4417902C98D4128B4A973C29F0D4A60B0_gshared)(__this, ___item0, method);
}
// System.Void ObjectManager::ResetPlacedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_ResetPlacedObjects_m1894973CE2560A0A1E69BA18677AF70BF788DF97 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Pose>::.ctor()
inline void Queue_1__ctor_m5D1C52F1D70E95408154F84AA5939A8B359DAB52 (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 *, const RuntimeMethod*))Queue_1__ctor_m5D1C52F1D70E95408154F84AA5939A8B359DAB52_gshared)(__this, method);
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
// System.Void ConnectionManager::SetObjectManager(ObjectManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManager_SetObjectManager_m2631394ACD73DF34C5336D255A962F04A726CC62 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * ___ObjectManager0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionManager_SetObjectManager_m2631394ACD73DF34C5336D255A962F04A726CC62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectManager = ObjectManager;
		ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * L_0 = ___ObjectManager0;
		((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->set_objectManager_11(L_0);
		// }
		return;
	}
}
// System.Void ConnectionManager::SetIPAddressInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManager_SetIPAddressInput_m77B947D0575497E92E4506CDF8711C4F512A1FCB (ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B * __this, const RuntimeMethod* method)
{
	{
		// ipAddress = ipInputField.text;
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_0 = __this->get_ipInputField_6();
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_mBF8B0DCF4E3CDBB06DA69715A7DD8F9E56775E79_inline(L_0, /*hidden argument*/NULL);
		__this->set_ipAddress_4(L_1);
		// }
		return;
	}
}
// System.Void ConnectionManager::SetPortInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManager_SetPortInput_m5EBAD525A56636744039A9035CBD5105FF3A28EC (ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B * __this, const RuntimeMethod* method)
{
	{
		// port = Int32.Parse(portInputField.text);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_0 = __this->get_portInputField_7();
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_mBF8B0DCF4E3CDBB06DA69715A7DD8F9E56775E79_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_1, /*hidden argument*/NULL);
		__this->set_port_5(L_2);
		// }
		return;
	}
}
// System.Void ConnectionManager::SendToServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManager_SendToServer_m28AE53A5279CE2DE7AD72086417A807F97D90137 (ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionManager_SendToServer_m28AE53A5279CE2DE7AD72086417A807F97D90137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * V_0 = NULL;
	JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * V_1 = NULL;
	String_t* V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * V_6 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_7;
	memset((&V_7), 0, sizeof(V_7));
	JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * V_8 = NULL;
	JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<GameObject> placedObjects = objectManager.GetPlacedObjects();
		ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * L_0 = ((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->get_objectManager_11();
		NullCheck(L_0);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_1 = ObjectManager_GetPlacedObjects_mC5593144091C6677364D754A4B8753CC144E23D6_inline(L_0, /*hidden argument*/NULL);
		// JObject jsonObject = new JObject();
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_2 = (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)il2cpp_codegen_object_new(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var);
		JObject__ctor_m382DE021C6D65A50DEDB857185AFA68AFD478580(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// JArray jsonArray = new JArray();
		JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * L_3 = (JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 *)il2cpp_codegen_object_new(JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11_il2cpp_TypeInfo_var);
		JArray__ctor_m3570E7F1C6D74FB906455C852E381FAFF4AD7C30(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		// foreach (GameObject go in placedObjects)
		NullCheck(L_1);
		Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  L_4 = List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B(L_1, /*hidden argument*/List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var);
		V_4 = L_4;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012d;
		}

IL_0022:
		{
			// foreach (GameObject go in placedObjects)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_inline((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var);
			// Vector3 position = go.transform.position;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = L_5;
			NullCheck(L_6);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
			V_5 = L_8;
			// JObject jPosition = new JObject();
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_9 = (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)il2cpp_codegen_object_new(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var);
			JObject__ctor_m382DE021C6D65A50DEDB857185AFA68AFD478580(L_9, /*hidden argument*/NULL);
			V_6 = L_9;
			// jPosition.Add("x", position.x);
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_10 = V_6;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_5;
			float L_12 = L_11.get_x_2();
			IL2CPP_RUNTIME_CLASS_INIT(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_il2cpp_TypeInfo_var);
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_13 = JToken_op_Implicit_mCF7167D080BBBD884398067C66330717F88B5317(L_12, /*hidden argument*/NULL);
			NullCheck(L_10);
			JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097(L_10, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072, L_13, /*hidden argument*/NULL);
			// jPosition.Add("y", position.y);
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_14 = V_6;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_5;
			float L_16 = L_15.get_y_3();
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_17 = JToken_op_Implicit_mCF7167D080BBBD884398067C66330717F88B5317(L_16, /*hidden argument*/NULL);
			NullCheck(L_14);
			JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097(L_14, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A, L_17, /*hidden argument*/NULL);
			// jPosition.Add("z", position.z);
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_18 = V_6;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_5;
			float L_20 = L_19.get_z_4();
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_21 = JToken_op_Implicit_mCF7167D080BBBD884398067C66330717F88B5317(L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097(L_18, _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA, L_21, /*hidden argument*/NULL);
			// Quaternion rotation = go.transform.rotation;
			NullCheck(L_6);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
			NullCheck(L_22);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_22, /*hidden argument*/NULL);
			V_7 = L_23;
			// JObject jRotation = new JObject();
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_24 = (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)il2cpp_codegen_object_new(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var);
			JObject__ctor_m382DE021C6D65A50DEDB857185AFA68AFD478580(L_24, /*hidden argument*/NULL);
			V_8 = L_24;
			// jRotation.Add("x", rotation.x);
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_25 = V_8;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = V_7;
			float L_27 = L_26.get_x_0();
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_28 = JToken_op_Implicit_mCF7167D080BBBD884398067C66330717F88B5317(L_27, /*hidden argument*/NULL);
			NullCheck(L_25);
			JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097(L_25, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072, L_28, /*hidden argument*/NULL);
			// jRotation.Add("y", rotation.y);
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_29 = V_8;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = V_7;
			float L_31 = L_30.get_y_1();
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_32 = JToken_op_Implicit_mCF7167D080BBBD884398067C66330717F88B5317(L_31, /*hidden argument*/NULL);
			NullCheck(L_29);
			JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097(L_29, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A, L_32, /*hidden argument*/NULL);
			// jRotation.Add("z", rotation.z);
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_33 = V_8;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = V_7;
			float L_35 = L_34.get_z_2();
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_36 = JToken_op_Implicit_mCF7167D080BBBD884398067C66330717F88B5317(L_35, /*hidden argument*/NULL);
			NullCheck(L_33);
			JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097(L_33, _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA, L_36, /*hidden argument*/NULL);
			// jRotation.Add("w", rotation.w);
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_37 = V_8;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38 = V_7;
			float L_39 = L_38.get_w_3();
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_40 = JToken_op_Implicit_mCF7167D080BBBD884398067C66330717F88B5317(L_39, /*hidden argument*/NULL);
			NullCheck(L_37);
			JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097(L_37, _stringLiteralAFF024FE4AB0FECE4091DE044C58C9AE4233383A, L_40, /*hidden argument*/NULL);
			// JObject jCoordinate = new JObject();
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_41 = (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)il2cpp_codegen_object_new(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var);
			JObject__ctor_m382DE021C6D65A50DEDB857185AFA68AFD478580(L_41, /*hidden argument*/NULL);
			V_9 = L_41;
			// jCoordinate.Add(new JProperty("position", jPosition));
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_42 = V_9;
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_43 = V_6;
			JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A * L_44 = (JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A *)il2cpp_codegen_object_new(JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A_il2cpp_TypeInfo_var);
			JProperty__ctor_mCE3B92840B1F6ABC5DE9FFB370E41F4CBEBE3187(L_44, _stringLiteral90BE16585DA21A822A011B262DB668A8CCF504D0, L_43, /*hidden argument*/NULL);
			NullCheck(L_42);
			VirtActionInvoker1< RuntimeObject * >::Invoke(59 /* System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object) */, L_42, L_44);
			// jCoordinate.Add(new JProperty("rotation", jRotation));
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_45 = V_9;
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_46 = V_8;
			JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A * L_47 = (JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A *)il2cpp_codegen_object_new(JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A_il2cpp_TypeInfo_var);
			JProperty__ctor_mCE3B92840B1F6ABC5DE9FFB370E41F4CBEBE3187(L_47, _stringLiteralACAF322543550089B1720048F5A4417F32F381A1, L_46, /*hidden argument*/NULL);
			NullCheck(L_45);
			VirtActionInvoker1< RuntimeObject * >::Invoke(59 /* System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object) */, L_45, L_47);
			// jsonArray.Add(jCoordinate);
			JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * L_48 = V_1;
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_49 = V_9;
			NullCheck(L_48);
			JArray_Add_mA2C08CEF9C9AB92FE4C5FB2636E8B6C89BD5B0EE(L_48, L_49, /*hidden argument*/NULL);
		}

IL_012d:
		{
			// foreach (GameObject go in placedObjects)
			bool L_50 = Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_0022;
			}
		}

IL_0139:
		{
			IL2CPP_LEAVE(0x149, FINALLY_013b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013b;
	}

FINALLY_013b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(315)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(315)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x149, IL_0149)
	}

IL_0149:
	{
		// jsonObject.Add(new JProperty("type", "default"));
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_51 = V_0;
		JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A * L_52 = (JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A *)il2cpp_codegen_object_new(JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A_il2cpp_TypeInfo_var);
		JProperty__ctor_mCE3B92840B1F6ABC5DE9FFB370E41F4CBEBE3187(L_52, _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9, _stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< RuntimeObject * >::Invoke(59 /* System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object) */, L_51, L_52);
		// jsonObject.Add(new JProperty("device", "hololens"));
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_53 = V_0;
		JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A * L_54 = (JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A *)il2cpp_codegen_object_new(JProperty_t127765B5AB6D281C5B77FAF5A4F26BB33C89398A_il2cpp_TypeInfo_var);
		JProperty__ctor_mCE3B92840B1F6ABC5DE9FFB370E41F4CBEBE3187(L_54, _stringLiteralF3A929B3364B471A481F4F7CDA0B4559ECDE9ABA, _stringLiteral3B8A21EBCCFB8004363582A2DF92B397295452C2, /*hidden argument*/NULL);
		NullCheck(L_53);
		VirtActionInvoker1< RuntimeObject * >::Invoke(59 /* System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object) */, L_53, L_54);
		// jsonObject.Add("coordinates", jsonArray);
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_55 = V_0;
		JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * L_56 = V_1;
		NullCheck(L_55);
		JObject_Add_m2D74A2FC4E5BF02F4A2B72D686C6E1F5F845E097(L_55, _stringLiteralD27CAFE12DDA89F63D7AA47D5A6A43B20BEA7891, L_56, /*hidden argument*/NULL);
		// string stringToSend = jsonObject.ToString(Formatting.None);
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_57 = V_0;
		JsonConverterU5BU5D_t54F68FC2F7C268CA67090069816699D6427B1711* L_58 = Array_Empty_TisJsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6_m9EEFBEE37E17EEF40A0AB8DAE0A803D26CC83D79_inline(/*hidden argument*/Array_Empty_TisJsonConverter_t61C31ABA417A4314A2582BF0404CE41267A61BE6_m9EEFBEE37E17EEF40A0AB8DAE0A803D26CC83D79_RuntimeMethod_var);
		NullCheck(L_57);
		String_t* L_59 = JToken_ToString_m3A871D6DAB011B6DE2C341D310E8E864942EC063(L_57, 0, L_58, /*hidden argument*/NULL);
		V_2 = L_59;
		// NetworkStream stream = tcpClient.GetStream();
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_60 = ((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->get_tcpClient_9();
		NullCheck(L_60);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_61 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_60, /*hidden argument*/NULL);
		// byte[] dataToSend = Encoding.UTF8.GetBytes(stringToSend);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_62 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_63 = V_2;
		NullCheck(L_62);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_64 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_62, L_63);
		V_3 = L_64;
		// stream.Write(dataToSend, 0, dataToSend.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_65 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_66 = V_3;
		NullCheck(L_66);
		NullCheck(L_61);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_61, L_65, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length)))));
		// objectManager.PlacedToGlobal();
		ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * L_67 = ((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->get_objectManager_11();
		NullCheck(L_67);
		ObjectManager_PlacedToGlobal_mAA7F947CA506D3E6822AC3BEFD6AD4053FC723F7(L_67, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ConnectionManager::ReceiveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManager_ReceiveData_m0DF0E1C8E7B1B7C10D506650A5E9F93EE17C9623 (ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionManager_ReceiveData_m0DF0E1C8E7B1B7C10D506650A5E9F93EE17C9623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * V_6 = NULL;
	JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * V_7 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Byte[] receivedData = new Byte[1024];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
	}

IL_000b:
	{
		// using (NetworkStream stream = tcpClient.GetStream())
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_1 = ((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->get_tcpClient_9();
		NullCheck(L_1);
		NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_2 = TcpClient_GetStream_m882B17757A177B57BF6F88BBC450280DDF3FB02B(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014e;
		}

IL_001b:
		{
			// var incomingData = new byte[length];
			int32_t L_3 = V_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_3);
			V_3 = L_4;
			// Array.Copy(receivedData, 0, incomingData, 0, length);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_3;
			int32_t L_7 = V_2;
			Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_5, 0, (RuntimeArray *)(RuntimeArray *)L_6, 0, L_7, /*hidden argument*/NULL);
			// string message = Encoding.UTF8.GetString(incomingData);
			Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_8 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_3;
			NullCheck(L_8);
			String_t* L_10 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_8, L_9);
			// JObject jo = JObject.Parse(message);
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_11 = JObject_Parse_m72731D41454339812151322E2462053FAE75DB69(L_10, /*hidden argument*/NULL);
			// string type = jo["type"].ToString();
			JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_12 = L_11;
			NullCheck(L_12);
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_13 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_12, _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9, /*hidden argument*/NULL);
			NullCheck(L_13);
			String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
			V_4 = L_14;
			// JArray ja = jo["coordinates"] as JArray;
			NullCheck(L_12);
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_15 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_12, _stringLiteralD27CAFE12DDA89F63D7AA47D5A6A43B20BEA7891, /*hidden argument*/NULL);
			// foreach (JObject o in ja)
			NullCheck(((JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 *)IsInstClass((RuntimeObject*)L_15, JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11_il2cpp_TypeInfo_var)));
			RuntimeObject* L_16 = JArray_GetEnumerator_m9793014C1FCC8F46E34CB3AC3E86C2D4809B22E2(((JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 *)IsInstClass((RuntimeObject*)L_15, JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_5 = L_16;
		}

IL_0064:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0134;
			}

IL_0069:
			{
				// foreach (JObject o in ja)
				RuntimeObject* L_17 = V_5;
				NullCheck(L_17);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_18 = InterfaceFuncInvoker0< JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t1157AD59C6BB1DF0B843C59A83BC711129BDEEA6_il2cpp_TypeInfo_var, L_17);
				// JObject jPosition = o["position"] as JObject;
				JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_19 = ((JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)CastclassClass((RuntimeObject*)L_18, JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var));
				NullCheck(L_19);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_20 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_19, _stringLiteral90BE16585DA21A822A011B262DB668A8CCF504D0, /*hidden argument*/NULL);
				V_6 = ((JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)IsInstClass((RuntimeObject*)L_20, JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var));
				// JObject jRotation = o["rotation"] as JObject;
				NullCheck(L_19);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_21 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_19, _stringLiteralACAF322543550089B1720048F5A4417F32F381A1, /*hidden argument*/NULL);
				V_7 = ((JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)IsInstClass((RuntimeObject*)L_21, JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var));
				// Vector3 position = new Vector3((float)jPosition["x"], (float)jPosition["y"], (float)jPosition["z"]);
				JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_22 = V_6;
				NullCheck(L_22);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_23 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_22, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_il2cpp_TypeInfo_var);
				float L_24 = JToken_op_Explicit_mC119E725EA53C059F35A94258F2A06800F1CEEB0(L_23, /*hidden argument*/NULL);
				JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_25 = V_6;
				NullCheck(L_25);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_26 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_25, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A, /*hidden argument*/NULL);
				float L_27 = JToken_op_Explicit_mC119E725EA53C059F35A94258F2A06800F1CEEB0(L_26, /*hidden argument*/NULL);
				JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_28 = V_6;
				NullCheck(L_28);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_29 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_28, _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA, /*hidden argument*/NULL);
				float L_30 = JToken_op_Explicit_mC119E725EA53C059F35A94258F2A06800F1CEEB0(L_29, /*hidden argument*/NULL);
				Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), (((float)((float)L_24))), (((float)((float)L_27))), (((float)((float)L_30))), /*hidden argument*/NULL);
				// Quaternion rotation = new Quaternion((float)jRotation["x"], (float)jRotation["y"], (float)jRotation["z"], (float)jRotation["w"]);
				JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_31 = V_7;
				NullCheck(L_31);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_32 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_31, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072, /*hidden argument*/NULL);
				float L_33 = JToken_op_Explicit_mC119E725EA53C059F35A94258F2A06800F1CEEB0(L_32, /*hidden argument*/NULL);
				JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_34 = V_7;
				NullCheck(L_34);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_35 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_34, _stringLiteral95CB0BFD2977C761298D9624E4B4D4C72A39974A, /*hidden argument*/NULL);
				float L_36 = JToken_op_Explicit_mC119E725EA53C059F35A94258F2A06800F1CEEB0(L_35, /*hidden argument*/NULL);
				JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_37 = V_7;
				NullCheck(L_37);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_38 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_37, _stringLiteral395DF8F7C51F007019CB30201C49E884B46B92FA, /*hidden argument*/NULL);
				float L_39 = JToken_op_Explicit_mC119E725EA53C059F35A94258F2A06800F1CEEB0(L_38, /*hidden argument*/NULL);
				JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_40 = V_7;
				NullCheck(L_40);
				JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_41 = JObject_get_Item_mC074227DAAFC7662D28AA557B11B040AEB75B562(L_40, _stringLiteralAFF024FE4AB0FECE4091DE044C58C9AE4233383A, /*hidden argument*/NULL);
				float L_42 = JToken_op_Explicit_mC119E725EA53C059F35A94258F2A06800F1CEEB0(L_41, /*hidden argument*/NULL);
				Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_9), (((float)((float)L_33))), (((float)((float)L_36))), (((float)((float)L_39))), (((float)((float)L_42))), /*hidden argument*/NULL);
				// objectManager.SpawnObject(position, rotation, type);
				ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * L_43 = ((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->get_objectManager_11();
				Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_8;
				Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = V_9;
				String_t* L_46 = V_4;
				NullCheck(L_43);
				ObjectManager_SpawnObject_m3C1D844C38D3EC4D0CF72992E9FB84C2A2309800(L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
			}

IL_0134:
			{
				// foreach (JObject o in ja)
				RuntimeObject* L_47 = V_5;
				NullCheck(L_47);
				bool L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_47);
				if (L_48)
				{
					goto IL_0069;
				}
			}

IL_0140:
			{
				IL2CPP_LEAVE(0x14E, FINALLY_0142);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0142;
		}

FINALLY_0142:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_49 = V_5;
				if (!L_49)
				{
					goto IL_014d;
				}
			}

IL_0146:
			{
				RuntimeObject* L_50 = V_5;
				NullCheck(L_50);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_50);
			}

IL_014d:
			{
				IL2CPP_END_FINALLY(322)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(322)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x14E, IL_014e)
		}

IL_014e:
		{
			// while ((length = stream.Read(receivedData, 0, receivedData.Length)) != 0)
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_51 = V_1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_52 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_53 = V_0;
			NullCheck(L_53);
			NullCheck(L_51);
			int32_t L_54 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_51, L_52, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))));
			int32_t L_55 = L_54;
			V_2 = L_55;
			if (L_55)
			{
				goto IL_001b;
			}
		}

IL_0160:
		{
			// }
			IL2CPP_LEAVE(0xB, FINALLY_0165);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0165;
	}

FINALLY_0165:
	{ // begin finally (depth: 1)
		{
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_56 = V_1;
			if (!L_56)
			{
				goto IL_016e;
			}
		}

IL_0168:
		{
			NetworkStream_t362D0CD0C74C2F5CBD02905C9422E4240872ADCA * L_57 = V_1;
			NullCheck(L_57);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_57);
		}

IL_016e:
		{
			IL2CPP_END_FINALLY(357)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(357)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB, IL_000b)
	}
	// Dead block : IL_016f: ret
}
// System.Void ConnectionManager::ConnectToServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManager_ConnectToServer_m1949C1862CA7CDA47BF65EA1E7B7BA60DA0E351C (ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionManager_ConnectToServer_m1949C1862CA7CDA47BF65EA1E7B7BA60DA0E351C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tcpClient = new TcpClient(ipAddress, port);
		String_t* L_0 = __this->get_ipAddress_4();
		int32_t L_1 = __this->get_port_5();
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_2 = (TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB *)il2cpp_codegen_object_new(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB_il2cpp_TypeInfo_var);
		TcpClient__ctor_mD569033FA4BC38793AE3FA7725A2C42E2700CC2F(L_2, L_0, L_1, /*hidden argument*/NULL);
		((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->set_tcpClient_9(L_2);
		// if (tcpClient is null)
		TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * L_3 = ((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->get_tcpClient_9();
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// sendToServerButton.GetComponent<Interactable>().enabled = true;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_sendToServerButton_8();
		NullCheck(L_4);
		Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2 * L_5 = GameObject_GetComponent_TisInteractable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_m52E0E8A351D3E27DA867094B49988BD354F27E56(L_4, /*hidden argument*/GameObject_GetComponent_TisInteractable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_m52E0E8A351D3E27DA867094B49988BD354F27E56_RuntimeMethod_var);
		NullCheck(L_5);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, (bool)1, /*hidden argument*/NULL);
		// sendToServerButton.GetComponent<PressableButtonHoloLens2>().enabled = true;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_sendToServerButton_8();
		NullCheck(L_6);
		PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC * L_7 = GameObject_GetComponent_TisPressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC_m57FCF0AD7641D61D5E299DC83988A1B40F74D086(L_6, /*hidden argument*/GameObject_GetComponent_TisPressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC_m57FCF0AD7641D61D5E299DC83988A1B40F74D086_RuntimeMethod_var);
		NullCheck(L_7);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_7, (bool)1, /*hidden argument*/NULL);
		// this.receiveThread = new Thread(new ThreadStart(this.ReceiveData));
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_8 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_8, __this, (intptr_t)((intptr_t)ConnectionManager_ReceiveData_m0DF0E1C8E7B1B7C10D506650A5E9F93EE17C9623_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_9 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_9, L_8, /*hidden argument*/NULL);
		__this->set_receiveThread_10(L_9);
		// this.receiveThread.IsBackground = true;
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_10 = __this->get_receiveThread_10();
		NullCheck(L_10);
		Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_10, (bool)1, /*hidden argument*/NULL);
		// this.receiveThread.Start();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_11 = __this->get_receiveThread_10();
		NullCheck(L_11);
		Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ConnectionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManager__ctor_m71BEA83FDDC059908021D7F990001EE29E372C53 (ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionManager__ctor_m71BEA83FDDC059908021D7F990001EE29E372C53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string ipAddress = "192.168.0.100";
		__this->set_ipAddress_4(_stringLiteral75F317B95D3D08E172369A0DD6382A99556B9028);
		// private int port = 9051;
		__this->set_port_5(((int32_t)9051));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ObjectManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_Start_mE7E93FDD0593041E2406179C69196DC56E2ADCB9 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectManager_Start_mE7E93FDD0593041E2406179C69196DC56E2ADCB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObjectToPlace = Instantiate(placedCubePrefab, new Vector3(0, 0, 1), new Quaternion(0, 0, 0, 1));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_placedCubePrefab_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_2), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		__this->set_gameObjectToPlace_4(L_3);
		// placedGameObjectsList.Add(gameObjectToPlace);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_4 = __this->get_placedGameObjectsList_10();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_gameObjectToPlace_4();
		NullCheck(L_4);
		List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_4, L_5, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
		// ConnectionManager.SetObjectManager(this);
		ConnectionManager_SetObjectManager_m2631394ACD73DF34C5336D255A962F04A726CC62_inline(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_Update_m824CC6C3BBF195441C257A4A24308D51D74285F8 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectManager_Update_m824CC6C3BBF195441C257A4A24308D51D74285F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (receivedJointObjects.Count != 0)
		Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * L_0 = __this->get_receivedJointObjects_13();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_inline(L_0, /*hidden argument*/Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// Pose p = receivedJointObjects.Dequeue();
		Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * L_2 = __this->get_receivedJointObjects_13();
		NullCheck(L_2);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_3 = Queue_1_Dequeue_mB6A3B107470221EFD1237EB4A45409E144856FF9(L_2, /*hidden argument*/Queue_1_Dequeue_mB6A3B107470221EFD1237EB4A45409E144856FF9_RuntimeMethod_var);
		V_0 = L_3;
		// gameObjectGlobal = Instantiate(jointObjectPrefab, p.position, p.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_jointObjectPrefab_8();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = L_5.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = L_7.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_4, L_6, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		__this->set_gameObjectGlobal_5(L_9);
		// globalObjectsList.Add(gameObjectGlobal);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_10 = __this->get_globalObjectsList_11();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_gameObjectGlobal_5();
		NullCheck(L_10);
		List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_10, L_11, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
	}

IL_0047:
	{
		// if (receivedGlobalObjects.Count != 0)
		Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * L_12 = __this->get_receivedGlobalObjects_12();
		NullCheck(L_12);
		int32_t L_13 = Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_inline(L_12, /*hidden argument*/Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		// Pose p = receivedGlobalObjects.Dequeue();
		Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * L_14 = __this->get_receivedGlobalObjects_12();
		NullCheck(L_14);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_15 = Queue_1_Dequeue_mB6A3B107470221EFD1237EB4A45409E144856FF9(L_14, /*hidden argument*/Queue_1_Dequeue_mB6A3B107470221EFD1237EB4A45409E144856FF9_RuntimeMethod_var);
		V_1 = L_15;
		// gameObjectGlobal = Instantiate(globalCubePrefab, p.position, p.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_globalCubePrefab_7();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_17 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = L_17.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_19 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = L_19.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_16, L_18, L_20, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		__this->set_gameObjectGlobal_5(L_21);
		// globalObjectsList.Add(gameObjectGlobal);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_22 = __this->get_globalObjectsList_11();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = __this->get_gameObjectGlobal_5();
		NullCheck(L_22);
		List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_22, L_23, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void ObjectManager::SpawnCubeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_SpawnCubeButton_m8B13D051DA580AEF38571524A03DB3CF411C7B2B (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectManager_SpawnCubeButton_m8B13D051DA580AEF38571524A03DB3CF411C7B2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObjectToPlace = Instantiate(placedCubePrefab, new Vector3(0, 0, 1), new Quaternion(0,0,0,1));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_placedCubePrefab_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_2), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		__this->set_gameObjectToPlace_4(L_3);
		// placedGameObjectsList.Add(gameObjectToPlace);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_4 = __this->get_placedGameObjectsList_10();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_gameObjectToPlace_4();
		NullCheck(L_4);
		List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_4, L_5, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
		// if (placedGameObjectsList.Count == maxNumberOfPlacedCubes)
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_6 = __this->get_placedGameObjectsList_10();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_inline(L_6, /*hidden argument*/List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_RuntimeMethod_var);
		int32_t L_8 = __this->get_maxNumberOfPlacedCubes_14();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0084;
		}
	}
	{
		// getCubeButton.GetComponent<Interactable>().IsEnabled = false;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_getCubeButton_9();
		NullCheck(L_9);
		Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2 * L_10 = GameObject_GetComponent_TisInteractable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_m52E0E8A351D3E27DA867094B49988BD354F27E56(L_9, /*hidden argument*/GameObject_GetComponent_TisInteractable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_m52E0E8A351D3E27DA867094B49988BD354F27E56_RuntimeMethod_var);
		NullCheck(L_10);
		VirtActionInvoker1< bool >::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.UI.Interactable::set_IsEnabled(System.Boolean) */, L_10, (bool)0);
		// getCubeButton.GetComponent<PressableButtonHoloLens2>().enabled = false;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_getCubeButton_9();
		NullCheck(L_11);
		PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC * L_12 = GameObject_GetComponent_TisPressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC_m57FCF0AD7641D61D5E299DC83988A1B40F74D086(L_11, /*hidden argument*/GameObject_GetComponent_TisPressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC_m57FCF0AD7641D61D5E299DC83988A1B40F74D086_RuntimeMethod_var);
		NullCheck(L_12);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_12, (bool)0, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ObjectManager::ResetPlacedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_ResetPlacedObjects_m1894973CE2560A0A1E69BA18677AF70BF788DF97 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectManager_ResetPlacedObjects_m1894973CE2560A0A1E69BA18677AF70BF788DF97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (GameObject gameObject in placedGameObjectsList)
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = __this->get_placedGameObjectsList_10();
		NullCheck(L_0);
		Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  L_1 = List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B(L_0, /*hidden argument*/List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000e:
		{
			// foreach (GameObject gameObject in placedGameObjectsList)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_inline((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var);
			// Destroy(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		}

IL_001a:
		{
			// foreach (GameObject gameObject in placedGameObjectsList)
			bool L_3 = Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// placedGameObjectsList.Clear();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_4 = __this->get_placedGameObjectsList_10();
		NullCheck(L_4);
		List_1_Clear_mA226186F582A45B372C89C0594298EFA733DFA87(L_4, /*hidden argument*/List_1_Clear_mA226186F582A45B372C89C0594298EFA733DFA87_RuntimeMethod_var);
		// getCubeButton.GetComponent<Interactable>().IsEnabled = true;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_getCubeButton_9();
		NullCheck(L_5);
		Interactable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2 * L_6 = GameObject_GetComponent_TisInteractable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_m52E0E8A351D3E27DA867094B49988BD354F27E56(L_5, /*hidden argument*/GameObject_GetComponent_TisInteractable_tBD08E2FCD550ED1C36870EA7251ABDE8C25E02E2_m52E0E8A351D3E27DA867094B49988BD354F27E56_RuntimeMethod_var);
		NullCheck(L_6);
		VirtActionInvoker1< bool >::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.UI.Interactable::set_IsEnabled(System.Boolean) */, L_6, (bool)1);
		// getCubeButton.GetComponent<PressableButtonHoloLens2>().enabled = true;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_getCubeButton_9();
		NullCheck(L_7);
		PressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC * L_8 = GameObject_GetComponent_TisPressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC_m57FCF0AD7641D61D5E299DC83988A1B40F74D086(L_7, /*hidden argument*/GameObject_GetComponent_TisPressableButtonHoloLens2_tA040BCAD3AF9C04C4288616C1C136F9A42849FDC_m57FCF0AD7641D61D5E299DC83988A1B40F74D086_RuntimeMethod_var);
		NullCheck(L_8);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectManager::ResetGlobalObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_ResetGlobalObjects_m214CCA769B1A918E3A658D223DF22BBBE4F22AD4 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectManager_ResetGlobalObjects_m214CCA769B1A918E3A658D223DF22BBBE4F22AD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (GameObject gameObject in globalObjectsList)
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = __this->get_globalObjectsList_11();
		NullCheck(L_0);
		Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  L_1 = List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B(L_0, /*hidden argument*/List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000e:
		{
			// foreach (GameObject gameObject in globalObjectsList)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_inline((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var);
			// Destroy(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		}

IL_001a:
		{
			// foreach (GameObject gameObject in globalObjectsList)
			bool L_3 = Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// globalObjectsList.Clear();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_4 = __this->get_globalObjectsList_11();
		NullCheck(L_4);
		List_1_Clear_mA226186F582A45B372C89C0594298EFA733DFA87(L_4, /*hidden argument*/List_1_Clear_mA226186F582A45B372C89C0594298EFA733DFA87_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObjectManager::SpawnObject(UnityEngine.Vector3,UnityEngine.Quaternion,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_SpawnObject_m3C1D844C38D3EC4D0CF72992E9FB84C2A2309800 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, String_t* ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectManager_SpawnObject_m3C1D844C38D3EC4D0CF72992E9FB84C2A2309800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(type == "joints")
		String_t* L_0 = ___type2;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteralFAD1BB1DE52AE35EC79F10C99312577F85BD668A, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// receivedJointObjects.Enqueue(new Pose(position, rotation));
		Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * L_2 = __this->get_receivedJointObjects_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Pose__ctor_m4F1AE399EDC70FBE803FCA8A37166AE2D5ED5235((&L_5), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Queue_1_Enqueue_m361583E4417902C98D4128B4A973C29F0D4A60B0(L_2, L_5, /*hidden argument*/Queue_1_Enqueue_m361583E4417902C98D4128B4A973C29F0D4A60B0_RuntimeMethod_var);
		// }
		return;
	}

IL_0020:
	{
		// receivedGlobalObjects.Enqueue(new Pose(position, rotation));
		Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * L_6 = __this->get_receivedGlobalObjects_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = ___rotation1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Pose__ctor_m4F1AE399EDC70FBE803FCA8A37166AE2D5ED5235((&L_9), L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Queue_1_Enqueue_m361583E4417902C98D4128B4A973C29F0D4A60B0(L_6, L_9, /*hidden argument*/Queue_1_Enqueue_m361583E4417902C98D4128B4A973C29F0D4A60B0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObjectManager::PlacedToGlobal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_PlacedToGlobal_mAA7F947CA506D3E6822AC3BEFD6AD4053FC723F7 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectManager_PlacedToGlobal_mAA7F947CA506D3E6822AC3BEFD6AD4053FC723F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (GameObject gameObject in placedGameObjectsList)
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = __this->get_placedGameObjectsList_10();
		NullCheck(L_0);
		Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  L_1 = List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B(L_0, /*hidden argument*/List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_000e:
		{
			// foreach (GameObject gameObject in placedGameObjectsList)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_inline((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var);
			// Vector3 position = gameObject.transform.position;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2;
			NullCheck(L_3);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			// Quaternion rotation = gameObject.transform.rotation;
			NullCheck(L_3);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
			NullCheck(L_6);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			// GameObject globalObject = Instantiate(globalCubePrefab, position, rotation);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_globalCubePrefab_7();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_1;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_8, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
			V_3 = L_11;
			// globalObjectsList.Add(globalObject);
			List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_12 = __this->get_globalObjectsList_11();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = V_3;
			NullCheck(L_12);
			List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_12, L_13, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
		}

IL_0046:
		{
			// foreach (GameObject gameObject in placedGameObjectsList)
			bool L_14 = Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_000e;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		// ResetPlacedObjects();
		ObjectManager_ResetPlacedObjects_m1894973CE2560A0A1E69BA18677AF70BF788DF97(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectManager::GetPlacedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ObjectManager_GetPlacedObjects_mC5593144091C6677364D754A4B8753CC144E23D6 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	{
		// return placedGameObjectsList;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = __this->get_placedGameObjectsList_10();
		return L_0;
	}
}
// System.Void ObjectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager__ctor_m2C2A09DA962AF487DBB62C6CFDFF46BF1F82D6E7 (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectManager__ctor_m2C2A09DA962AF487DBB62C6CFDFF46BF1F82D6E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> placedGameObjectsList = new List<GameObject>();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)il2cpp_codegen_object_new(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var);
		List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60(L_0, /*hidden argument*/List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var);
		__this->set_placedGameObjectsList_10(L_0);
		// private List<GameObject> globalObjectsList = new List<GameObject>();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_1 = (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)il2cpp_codegen_object_new(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var);
		List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60(L_1, /*hidden argument*/List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var);
		__this->set_globalObjectsList_11(L_1);
		// private Queue<Pose> receivedGlobalObjects = new Queue<Pose>();
		Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * L_2 = (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 *)il2cpp_codegen_object_new(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1_il2cpp_TypeInfo_var);
		Queue_1__ctor_m5D1C52F1D70E95408154F84AA5939A8B359DAB52(L_2, /*hidden argument*/Queue_1__ctor_m5D1C52F1D70E95408154F84AA5939A8B359DAB52_RuntimeMethod_var);
		__this->set_receivedGlobalObjects_12(L_2);
		// private Queue<Pose> receivedJointObjects = new Queue<Pose>();
		Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * L_3 = (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 *)il2cpp_codegen_object_new(Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1_il2cpp_TypeInfo_var);
		Queue_1__ctor_m5D1C52F1D70E95408154F84AA5939A8B359DAB52(L_3, /*hidden argument*/Queue_1__ctor_m5D1C52F1D70E95408154F84AA5939A8B359DAB52_RuntimeMethod_var);
		__this->set_receivedJointObjects_13(L_3);
		// private int maxNumberOfPlacedCubes = 3;
		__this->set_maxNumberOfPlacedCubes_14(3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* InputField_get_text_mBF8B0DCF4E3CDBB06DA69715A7DD8F9E56775E79_inline (InputField_t533609195B110760BCFF00B746C87D81969CB005 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ObjectManager_GetPlacedObjects_mC5593144091C6677364D754A4B8753CC144E23D6_inline (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * __this, const RuntimeMethod* method)
{
	{
		// return placedGameObjectsList;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = __this->get_placedGameObjectsList_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ConnectionManager_SetObjectManager_m2631394ACD73DF34C5336D255A962F04A726CC62_inline (ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * ___ObjectManager0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionManager_SetObjectManager_m2631394ACD73DF34C5336D255A962F04A726CC62AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectManager = ObjectManager;
		ObjectManager_tD5499918F70D8157AF8E27E20DBF6B94894F8856 * L_0 = ___ObjectManager0;
		((ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionManager_tC891048BEAA20435976705EB0D8CDE959667E78B_il2cpp_TypeInfo_var))->set_objectManager_11(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mDC6D1B2CC4B7A37199499EF1FE86C570E8F2641A_gshared_inline (Queue_1_tCF734CD152046397B7C53D4B59CB628A82625DB1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
