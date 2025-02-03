#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1Invoker;
template <typename T1>
struct GenericVirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker;
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass15_0_tF3DE4597DAB46FC77262CD86CA482BD7E8C21C4D;
struct Dictionary_2_t3D5C4496A22EAD3D8DD55DCDFBB4F4E9BE8311FF;
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
struct Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE;
struct Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
struct Dictionary_2_t709D7105D5569BDBF0FF382194083253754F55F9;
struct Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t5E33341CA2B10BFFBBF57D6EF2CC598C88A51C97;
struct Func_1_t22BD7B5F8DB687330688484631E4670ADE9A7C9D;
struct Func_1_t072CADF8B1FAE104EFB7233AABB82B833DE5EEBA;
struct Func_1_tDDB7896D4A271F8D526A55B1B50800F31A40D6CB;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E;
struct Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277;
struct Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782;
struct Func_2_tCF3029BCCA647C1B54318B688881E1742A230E8C;
struct Func_2_tE299C631F0CB2E8E61444D749D446C27349C90B8;
struct Func_2_tFB5F2454526EA057FC21D7028A8B1EADDF2F531F;
struct Func_2_tE15970F2C68502F5A28DDFA80B3B0BAAFCF75021;
struct Func_2_tB98BB93B60A3562C54694B9F37AEBD38DE206A9C;
struct Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B;
struct Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B;
struct Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38;
struct Func_2_tAF4123F8D69F1A665BBB864E1C97131C05AEBBEB;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4;
struct Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E;
struct Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302;
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56;
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39;
struct GraphConnectionCollection_3_t1C36521556B52560AC338813684582FE4226703C;
struct GraphConnectionCollection_3_tFD3C8D61A881447B28DC931418DAA45AD99856F6;
struct GraphConnectionCollection_3_tCB3C722EBCB7366D0FCFD32ED000A4A8AFD2C624;
struct GraphElementCollection_1_t747DBE349EF6196F21B8B0817448722E5570D25A;
struct GraphElementCollection_1_t0165568BAE7EF8D2CD1E954F9F5CB8527EDEC824;
struct GraphElementCollection_1_t0859C1F4FC4ACB504F67C57B43AA9DA2F9A3130D;
struct GraphElement_1_t3220EDD6251B31FC22A192EC12682C1D8B28F16D;
struct GraphElement_1_tE61715904D5A9E5C8385EAF991CC1F874C244DC4;
struct GraphNest_2_t809972B852D228243FC0FF238384E13D4D3924F5;
struct HashSet_1_t015F1F38EE02675ACF63C72E1E1D832249BB06DA;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
struct ICollection_1_tAEF1C056C36E7D5FEA74D8B3050426267827D51F;
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IConnectionCollection_3_t3FEDE29075183F9ACBC556BA0F14BF8852E55CD8;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerator_1_t79B912CBA712D5F76599837CD1604BEED0829411;
struct IEnumerator_1_tB22FCD08D591B657979BC015772EF132DF8E4A74;
struct IEnumerator_1_t000A232CAF2DD4044B9AFBD8982ECD3FB93809DC;
struct IEnumerator_1_tE972D340F536B04FCEE79D5799CA3F036A83451E;
struct IEnumerator_1_t90BCA6A7B2801D6A60BF1AFFCCA677FFF22E4CDA;
struct IEnumerator_1_t2377C9795E783537986D4DF143A60101983C004E;
struct IEnumerator_1_tB7E64F4FC8645D70280298B262EEF209F1759BD8;
struct IEnumerator_1_tA50BA3A8477F7D3879301E45E86A18629E2CBF24;
struct IEnumerator_1_t263960A184041232517E683304777E3C59B8D290;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_tCB40CA97216A7275134FFB53EA1B7D8DC815E139;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t50A28A1F22BD3B4BD222D8B65520CF6BB8A8AE29;
struct IList_1_t311EFF3B321589A14DAE708AD51B9BF47F025EB8;
struct IList_1_t9D41323B910C0BD2D04A6EF5DB4357FECB8F8BA3;
struct IList_1_t6D08EA7FA01BDF3C06E5BAAE0BFA0F62C86BD338;
struct IList_1_tB81C98CCFC4C70060D8C4A7773A2E018B7705389;
struct IList_1_tEBC9CEC655A21BEAC057F73381FE6A0F3284AB01;
struct IList_1_tA1FB96BE2D8769A6CDD2F97D4562826980E36BED;
struct IList_1_t1D3509F1CD03CA00870C78A5694C3D684F7810D2;
struct IList_1_tFE2112C69F0B9C04D713EA1C40EFA14A01A0F401;
struct IList_1_t86AFC7A7084B3EA7879BC8B218962E00870D15CB;
struct IUnitPortCollection_1_t3F6779B00496B9FD84FEF2783F509958D57F354E;
struct IUnitPortCollection_1_t867A0E5526AAABA203704CD692FBEA4174C71C05;
struct IUnitPortCollection_1_t3839C272AE6727AE9A1BAC110A75614EBFE42B31;
struct IUnitPortCollection_1_t0F2047F1654080ECEB25DFDFAE47ED18B2E4C0F7;
struct IUnitPortCollection_1_t3B86C97EE8F1E1DB05CEFB161850DF05862EAFD4;
struct IUnitPortCollection_1_tA11C7DC2E90483113DB83CE13759F647978FFF63;
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
struct KeyCollection_tEABD67A1D63DC9133517ECDE9A2639CFEFB27D32;
struct KeyCollection_tF66D8C01F2A58C937006A6F100099A98BB1E109D;
struct KeyCollection_tE05D97FC719DBF8AE145C12661715EF4BA847567;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_tF8B8CB3D8291FEFE18BE6AF5E7C63F8CC805E927;
struct List_1_t8C4312F3ADCC9FE951B7F383E05AA92C40D0951A;
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
struct List_1_tFB017FF74A70C14565C3663C5799D92B320950C1;
struct List_1_t056D9AC5338CF96ED3F74CA39BE11B353CA899BA;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tDC7181A78C61D35CB334474CAE5A06272DB455A1;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Machine_2_t0DF3117A586606B0E97DCE8C3B3F7BDBA95308F2;
struct ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07;
struct ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69;
struct ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7;
struct ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135;
struct ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4;
struct ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12;
struct ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172;
struct ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466;
struct ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441;
struct Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E;
struct Recursion_1_t632A80B6927629F1D1D512356EBE5B5B284539FE;
struct Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01;
struct ReferenceEqualityComparer_1_tB94EA6450E5631356E6774AA042421D2D03337D3;
struct ReferenceEqualityComparer_1_t536C34AE6882F85CCE33D21260923C931AA495F3;
struct ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111;
struct ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79;
struct Round_2_t397B39112EA05C65325D782638740DB2F16F43BF;
struct Round_2_t14318F333BF7B2D1D2D40CCB6BFECE9942A73D57;
struct Round_2_t58979B67652AC3F90DA6A96A359510671EB026A0;
struct Round_2_t5C9DC81D6E0B508497AAC495DCB1C382FFDE38D3;
struct Round_2_t820BF381B9CAFE160AEA76942059E9736C42ACA9;
struct SByteEnumEqualityComparer_1_tBC7CE1B84BD3FA9E95F67907B755637B3F1464AF;
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2;
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912;
struct SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403;
struct SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545;
struct SelectUnit_1_t01C80770361B3C8DD3B0E9163CB38D6D5CEA2162;
struct SerializedPropertyProvider_1_t8C4C6D0BE3CEE408B4A68A267D0F36496299CF0F;
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7;
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1;
struct SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438;
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF;
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027;
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921;
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D;
struct ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30;
struct ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6;
struct ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A;
struct ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E;
struct UnexpectedEnumValueException_1_tEB12426BA22CC680DB6541E69E2198E8B18A7CB1;
struct UnexpectedEnumValueException_1_t097E6091054C78AA7EC04EE81CB92DAFE6582D3A;
struct UnexpectedEnumValueException_1_t2A2AF757DFA8157AC8C203107878B653957DDE10;
struct UnexpectedEnumValueException_1_tBD61262DADAF5DC32360A6DA383FD78902765A5C;
struct UnexpectedEnumValueException_1_t9F5986D23EC39566589DD5FAED80D4A5A70F64D7;
struct UnitPortDefinitionCollection_1_t665553142D4490579611ED610240743C22D899F8;
struct UnitPortDefinitionCollection_1_t198398673C495F7DB8AC3CE26E9DC0B8907E628C;
struct UnitPortDefinitionCollection_1_tED71DF94B48CE1756D3168910761094E5E2CC628;
struct UnitPortDefinitionCollection_1_t0F8E18D70B3C28BCFF0C4A883CC718FF7CE65347;
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86;
struct ValueCollection_tAEFE102F745FDAFA1F48846DC4B284DBEC740321;
struct ValueCollection_t09388557A76C67A5826B2502D326ED02B7D9E050;
struct ValueCollection_tB4E1AF56CC01288A0CEBAEC41FA401A48C74F55D;
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
struct EntryU5BU5D_tB60F07F971BF7857C1182C13174518E876376EFB;
struct EntryU5BU5D_t957A01A589BC16F5F52CE105A79B69946778FDBA;
struct EntryU5BU5D_t6174044DA338007092495A9EFE8E15FDF52920FA;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_tDAC8DF1E6C3844B86FE08982061BD166F7E38D3D;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_tDA630329061CE4DC9623F05A816D1A029F212349;
struct KeyValuePair_2U5BU5D_t2F28C61DB4E95D58EB2955489218D8F09B9EBCEB;
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98;
struct RecursionNodeU5BU5D_tE8C7A8AABAF8F5AC0DAADA2E1AD752503F3A62A9;
struct RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299;
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A;
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811;
struct UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235;
struct AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC;
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3;
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct ControlInput_t1AD434958538C865F55A62C66B9C24DA82AD31FE;
struct ControlOutput_t478B71A736EFBCE24B532F0279A9E701C9CDD8B9;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC;
struct Exception_t;
struct FieldInfo_t;
struct Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582;
struct FlowGraph_tF9E42FECF535CD5BAB10F75672B5BCE285627A45;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9;
struct GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IGraphData_t378AD2F35789C5EE31649C40C32F060B47E7A484;
struct IGraphNester_t51537569FA6937F8DCBA83364C357DCBD0C02E09;
struct IGraphParent_t08913CB8AED9F8C99F89ADDFF257E8B5EAEA1E18;
struct IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9;
struct IUnit_tDD8B7D0F06EA3DB55DEBE4DF3CC85F4A63FBB98E;
struct IUnitPort_t57EEC6D0F0CF09E5D6B071A1C3AD68EB8FEEF1CE;
struct IUnitValuePort_t066179230A251E8FFC4D9091EE2D9B4B95F649A9;
struct Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998;
struct InvalidImplementationException_t0ED7E88DE48F87CA15C0BC04F7B63DFEEF7EF9D6;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MergedGraphElementCollection_t617900BF35465F630BAAC77AA6EAAD375D42BA4C;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct PropertyInfo_t;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SingletonAttribute_t4EBE08E147FC39CAF915B5E6AFCACDEAD99FAD5F;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct StackOverflowException_t938C753F2BB15F526FD564CCF52061BBE5BC97C9;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7;
struct Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191;
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
struct ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392;
struct ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B;
struct VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct AreaNode_tB9A4250EFEA8C60BEDFFDA3E78F20EA6DE77DA7D;

IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeUtility_t14A9C7DAB6353AC908A00B9F59A0CDB23CE85F8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB98BB93B60A3562C54694B9F37AEBD38DE206A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE299C631F0CB2E8E61444D749D446C27349C90B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyedCollection_2_t5570527A51C54ADD715B0E7EED5F5542028D1C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidImplementationException_t0ED7E88DE48F87CA15C0BC04F7B63DFEEF7EF9D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Recursion_t4487949FCBFA02E2BBA6C26F7A149BCDDB6F065F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackOverflowException_t938C753F2BB15F526FD564CCF52061BBE5BC97C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t7D4E5C8ED9EB64D83C953F50E76AEE333EA0366A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02CFF818D48E2FAE5C7461047B8C5744F2B794B2;
IL2CPP_EXTERN_C String_t* _stringLiteral0C62B0CD04F69180F4F854D431F5FB332BEFE071;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral206FC58578ED6F72637466E4446F633BDE596F17;
IL2CPP_EXTERN_C String_t* _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D;
IL2CPP_EXTERN_C String_t* _stringLiteral319F65386BCC15014873A067DE94604EDF043AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral323F01A77A2FCF4FEFE948C12EF724C5AA3F18BE;
IL2CPP_EXTERN_C String_t* _stringLiteral358A3678217D3CE720F0C294149170B975E33338;
IL2CPP_EXTERN_C String_t* _stringLiteral39AC845F8CE68568547CB31B88D7C2C4D885FFFE;
IL2CPP_EXTERN_C String_t* _stringLiteral4A667C49AA367BEAC2C09CF577CC18EFBB9CBC42;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEEB8D75A2FD285E0FC86F7E4104FA3A7AA777D;
IL2CPP_EXTERN_C String_t* _stringLiteral524550C6C905CF9652740A6CFE444CF3F875E850;
IL2CPP_EXTERN_C String_t* _stringLiteral53B3A25F935DEACB24F88A8A0D535C78754D25F3;
IL2CPP_EXTERN_C String_t* _stringLiteral5CB57593E8A1F6516DE3E62C8DC038BB183E0D30;
IL2CPP_EXTERN_C String_t* _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED3FA1D9A31290D1F7E5136B1A2417689E610A1;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral71443AC7CF5CC108984A138188DE915E32441BB2;
IL2CPP_EXTERN_C String_t* _stringLiteral8A365F945D49EDC2410E65911735B551EDBD2C5D;
IL2CPP_EXTERN_C String_t* _stringLiteral9272ABAC1235FC3AFC6D37FF0A56A062AE44366A;
IL2CPP_EXTERN_C String_t* _stringLiteral9C38DD13F3FF7FA0F15D4DFE9535546F96676807;
IL2CPP_EXTERN_C String_t* _stringLiteralA4DBDC92F78354373EE9C1F1A6D0E09886AF46BF;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A4CE64191D3B9CB6C36C70B89DAA112111A456;
IL2CPP_EXTERN_C String_t* _stringLiteralE4C5E002486E661AFA600312F35B0DF470E97364;
IL2CPP_EXTERN_C String_t* _stringLiteralEB05ADCD5B9004686DE674F3D8A23DDC5C25C624;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C String_t* _stringLiteralF41EA067B79CDE6B256BFB5755F74B4E82E1D21B;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3D8AA640506C698FF3BA2199D62734CF178275;
IL2CPP_EXTERN_C const RuntimeMethod* AttributeUtility_GetAttribute_TisSingletonAttribute_t4EBE08E147FC39CAF915B5E6AFCACDEAD99FAD5F_m08BE7AC5C240141ADC2EDBC68DA72BC77DE7091F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphElement_1_get_graph_m854D04434240C328A8D726D991A89A7CDAA9116B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unit_ValueInput_TisRuntimeObject_m122343074F8193EFCD173C88278671A117E7DF71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unit_ValueOutput_TisRuntimeObject_mD877C5842A48B848E188C41FB2427E7EBBE5DD79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299;
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A;
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811;
struct UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235;
struct AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC;
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3;
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t6BAB024E98B475B1609E32F565CE4B12ED920BB4  : public RuntimeObject
{
};
struct U3CU3Ec_t82B73A48D3F6B8B76A80B0DD2C9C877B4467FE27  : public RuntimeObject
{
};
struct U3CU3Ec_t70E8BC87EE3233F0E30D52C453616140113F0281  : public RuntimeObject
{
};
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* ____keys;
	ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB60F07F971BF7857C1182C13174518E876376EFB* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tEABD67A1D63DC9133517ECDE9A2639CFEFB27D32* ____keys;
	ValueCollection_tAEFE102F745FDAFA1F48846DC4B284DBEC740321* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t709D7105D5569BDBF0FF382194083253754F55F9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t957A01A589BC16F5F52CE105A79B69946778FDBA* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF66D8C01F2A58C937006A6F100099A98BB1E109D* ____keys;
	ValueCollection_t09388557A76C67A5826B2502D326ED02B7D9E050* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6174044DA338007092495A9EFE8E15FDF52920FA* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE05D97FC719DBF8AE145C12661715EF4BA847567* ____keys;
	ValueCollection_tB4E1AF56CC01288A0CEBAEC41FA401A48C74F55D* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD  : public RuntimeObject
{
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t5E33341CA2B10BFFBBF57D6EF2CC598C88A51C97  : public RuntimeObject
{
};
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tF8B8CB3D8291FEFE18BE6AF5E7C63F8CC805E927  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t8C4312F3ADCC9FE951B7F383E05AA92C40D0951A  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_tDAC8DF1E6C3844B86FE08982061BD166F7E38D3D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tFB017FF74A70C14565C3663C5799D92B320950C1  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_tDA630329061CE4DC9623F05A816D1A029F212349* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t056D9AC5338CF96ED3F74CA39BE11B353CA899BA  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t2F28C61DB4E95D58EB2955489218D8F09B9EBCEB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E  : public RuntimeObject
{
	Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* ___traversedOrder;
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___traversedCount;
	bool ___disposed;
	int32_t ___maxDepth;
};
struct Recursion_1_t632A80B6927629F1D1D512356EBE5B5B284539FE  : public RuntimeObject
{
	Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* ___traversedOrder;
	Dictionary_2_t709D7105D5569BDBF0FF382194083253754F55F9* ___traversedCount;
	bool ___disposed;
	int32_t ___maxDepth;
};
struct Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D  : public RuntimeObject
{
	Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* ___traversedOrder;
	Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* ___traversedCount;
	bool ___disposed;
	int32_t ___maxDepth;
};
struct RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01 : public RuntimeObject {};
struct ReferenceEqualityComparer_1_tB94EA6450E5631356E6774AA042421D2D03337D3  : public RuntimeObject
{
};
struct ReferenceEqualityComparer_1_t536C34AE6882F85CCE33D21260923C931AA495F3  : public RuntimeObject
{
};
struct SceneSingleton_1_tDCF3CC08AB4736C263A670458E97AED046817BB3  : public RuntimeObject
{
};
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Singleton_1_t9D5C66D8E509ABC5761B9D3E2AA44978F85385FA  : public RuntimeObject
{
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E  : public RuntimeObject
{
	RecursionNodeU5BU5D_tE8C7A8AABAF8F5AC0DAADA2E1AD752503F3A62A9* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct UnitPort_3_t5D4915F350030D5D193DB8ABE809742B4E0A3816  : public RuntimeObject
{
	RuntimeObject* ___U3CunitU3Ek__BackingField;
	String_t* ___U3CkeyU3Ek__BackingField;
};
struct UnitPort_3_t0F0D7E0DAEC017C7CF07420E3F9BF8EA1BF4CA88  : public RuntimeObject
{
	RuntimeObject* ___U3CunitU3Ek__BackingField;
	String_t* ___U3CkeyU3Ek__BackingField;
};
struct UnitPort_3_t3120713700769DD514D6ED9ACFD105D4B583C09E  : public RuntimeObject
{
	RuntimeObject* ___U3CunitU3Ek__BackingField;
	String_t* ___U3CkeyU3Ek__BackingField;
};
struct UnitPort_3_t3BDB6AF6AAF9927A0C940F08CFD19E645813CFB0  : public RuntimeObject
{
	RuntimeObject* ___U3CunitU3Ek__BackingField;
	String_t* ___U3CkeyU3Ek__BackingField;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
};
struct EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC  : public RuntimeObject
{
	String_t* ___paramName;
};
struct Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582  : public RuntimeObject
{
	GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* ___U3CstackU3Ek__BackingField;
	Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* ___recursion;
	Dictionary_2_t3D5C4496A22EAD3D8DD55DCDFBB4F4E9BE8311FF* ___locals;
	VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405* ___variables;
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___loops;
	HashSet_1_t015F1F38EE02675ACF63C72E1E1D832249BB06DA* ___preservedStacks;
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___U3CcoroutineRunnerU3Ek__BackingField;
	RuntimeObject* ___activeCoroutinesRegistry;
	bool ___coroutineStopRequested;
	bool ___U3CisCoroutineU3Ek__BackingField;
	RuntimeObject* ___coroutineEnumerator;
	bool ___U3CisPredictionU3Ek__BackingField;
	bool ___disposed;
	int32_t ___loopIdentifier;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7  : public RuntimeObject
{
	int32_t ___U3CmaxAtlasSizeU3Ek__BackingField;
	int32_t ___U3CmaxImageWidthU3Ek__BackingField;
	int32_t ___U3CmaxImageHeightU3Ek__BackingField;
	int32_t ___U3CvirtualWidthU3Ek__BackingField;
	int32_t ___U3CvirtualHeightU3Ek__BackingField;
	int32_t ___U3CphysicalWidthU3Ek__BackingField;
	int32_t ___U3CphysicalHeightU3Ek__BackingField;
	AreaNode_tB9A4250EFEA8C60BEDFFDA3E78F20EA6DE77DA7D* ___m_FirstUnpartitionedArea;
	RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376* ___m_OpenRows;
	int32_t ___m_1SidePadding;
	int32_t ___m_2SidePadding;
	bool ___U3CdisposedU3Ek__BackingField;
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
struct EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tDFFFBC3DE226601169C7AA65F751CA3DCD35D511 
{
	int32_t ___key;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___value;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t7033AA84B3E6621568FBD9C4EF8CDD459902DE0A 
{
	RuntimeObject* ___key;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_tF0DA233B2843A061616EDE4B7F3ACD1DC9DBF46D;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	RuntimeObject* ___m_Info;
	bool ___m_IsStructContainerType;
	GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* ___m_GetStructValueAction;
	SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* ___m_SetStructValueAction;
	GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* ___m_GetClassValueAction;
	SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* ___m_SetClassValueAction;
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1 : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3 {};
struct SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0 
{
	void* ____buffer;
};
struct SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08 
{
	void* ____buffer;
};
struct Slot_t800F93067761C83B99A7CADFB19275EE7BDB97FA 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppChar ___value;
};
struct Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___value;
};
struct Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E 
{
	int32_t ___hashCode;
	RuntimeObject* ___value;
	int32_t ___next;
};
struct Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 
{
	RuntimeObject* ___Item;
	int32_t ___SequenceNumber;
};
struct Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___value;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
typedef Il2CppFullySharedGenericStruct Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B;
typedef Il2CppFullySharedGenericStruct Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9;
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct ControlInput_t1AD434958538C865F55A62C66B9C24DA82AD31FE  : public UnitPort_3_t0F0D7E0DAEC017C7CF07420E3F9BF8EA1BF4CA88
{
	Func_2_tE299C631F0CB2E8E61444D749D446C27349C90B8* ___action;
	Func_2_tFB5F2454526EA057FC21D7028A8B1EADDF2F531F* ___coroutineAction;
};
struct ControlOutput_t478B71A736EFBCE24B532F0279A9E701C9CDD8B9  : public UnitPort_3_t5D4915F350030D5D193DB8ABE809742B4E0A3816
{
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
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF 
{
	FieldInfo_t* ___m_FieldInfo;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshaled_pinvoke
{
	FieldInfo_t* ___m_FieldInfo;
	char* ___U3CNameU3Ek__BackingField;
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshaled_com
{
	FieldInfo_t* ___m_FieldInfo;
	Il2CppChar* ___U3CNameU3Ek__BackingField;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MethodBase_t  : public MemberInfo_t
{
};
#pragma pack(push, tp, 1)
struct PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 
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
					char ___Head_OffsetPadding[128];
					int32_t ___Head;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Head_OffsetPadding_forAlignmentOnly[128];
					int32_t ___Head_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Tail_OffsetPadding[256];
					int32_t ___Tail;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Tail_OffsetPadding_forAlignmentOnly[256];
					int32_t ___Tail_forAlignmentOnly;
				};
			};
		};
		uint8_t PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8__padding[384];
	};
};
#pragma pack(pop, tp)
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 
{
	PropertyInfo_t* ___m_PropertyInfo;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshaled_pinvoke
{
	PropertyInfo_t* ___m_PropertyInfo;
	char* ___U3CNameU3Ek__BackingField;
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshaled_com
{
	PropertyInfo_t* ___m_PropertyInfo;
	Il2CppChar* ___U3CNameU3Ek__BackingField;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Recursion_t4487949FCBFA02E2BBA6C26F7A149BCDDB6F065F  : public Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E
{
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	int32_t ___m_Handle;
};
struct SerializationData_tAD0F0CD307CB8C9EE08550F3DC6E296FDECE399A 
{
	String_t* ____json;
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ____objectReferences;
};
struct SerializationData_tAD0F0CD307CB8C9EE08550F3DC6E296FDECE399A_marshaled_pinvoke
{
	char* ____json;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke* ____objectReferences;
};
struct SerializationData_tAD0F0CD307CB8C9EE08550F3DC6E296FDECE399A_marshaled_com
{
	Il2CppChar* ____json;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com** ____objectReferences;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	int32_t ____count;
};
struct TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 
{
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDelay;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDuration;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___transitionProperty;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___transitionTimingFunction;
};
struct TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshaled_pinvoke
{
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDelay;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDuration;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___transitionProperty;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___transitionTimingFunction;
};
struct TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshaled_com
{
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDelay;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDuration;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___transitionProperty;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___transitionTimingFunction;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392  : public UnitPort_3_t3BDB6AF6AAF9927A0C940F08CFD19E645813CFB0
{
	Type_t* ___U3CtypeU3Ek__BackingField;
	bool ___U3CnullMeansSelfU3Ek__BackingField;
	bool ___U3CallowsNullU3Ek__BackingField;
};
struct ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B  : public UnitPort_3_t3120713700769DD514D6ED9ACFD105D4B583C09E
{
	Func_2_tB98BB93B60A3562C54694B9F37AEBD38DE206A9C* ___getValue;
	Func_2_tCF3029BCCA647C1B54318B688881E1742A230E8C* ___canPredictValue;
	Type_t* ___U3CtypeU3Ek__BackingField;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 
{
	RuntimeObject* ___U3CportU3Ek__BackingField;
	RuntimeObject* ___U3CcontextU3Ek__BackingField;
};
struct RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707_marshaled_pinvoke
{
	RuntimeObject* ___U3CportU3Ek__BackingField;
	RuntimeObject* ___U3CcontextU3Ek__BackingField;
};
struct RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707_marshaled_com
{
	RuntimeObject* ___U3CportU3Ek__BackingField;
	RuntimeObject* ___U3CcontextU3Ek__BackingField;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 
{
	String_t* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_pinvoke
{
	char* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___insertionPointId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 
{
	String_t* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_pinvoke
{
	char* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_com
{
	Il2CppChar* ___slotName;
	int32_t ___assetId;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	String_t* ___alias;
	String_t* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias;
	char* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias;
	Il2CppChar* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_pinvoke
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_com
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 
{
	Type_t* ___Type;
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___Members;
	bool ___IsConstructorPublic;
};
struct AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440_marshaled_pinvoke
{
	Type_t* ___Type;
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___Members;
	int32_t ___IsConstructorPublic;
};
struct AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440_marshaled_com
{
	Type_t* ___Type;
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___Members;
	int32_t ___IsConstructorPublic;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D 
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	String_t* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_pinvoke
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	char* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_com
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	Il2CppChar* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct U3CU3Ec__DisplayClass15_0_tF3DE4597DAB46FC77262CD86CA482BD7E8C21C4D  : public RuntimeObject
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	intptr_t ____value;
};
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Enumerator_tBEDE8DF331B6CF1206ACDA23DC810942B1102025 
{
	List_1_tF8B8CB3D8291FEFE18BE6AF5E7C63F8CC805E927* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current;
};
struct Enumerator_tC1E13105BF4A24AE5E3EF19979905637C855609D 
{
	List_1_t8C4312F3ADCC9FE951B7F383E05AA92C40D0951A* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_tDFFFBC3DE226601169C7AA65F751CA3DCD35D511 ____current;
};
struct Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 
{
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current;
};
struct Enumerator_t8F17F3ADCA290C139110B9170F2C9DF139F37FCD 
{
	List_1_tFB017FF74A70C14565C3663C5799D92B320950C1* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_t7033AA84B3E6621568FBD9C4EF8CDD459902DE0A ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tE8B288D2C70AB7C9FB5527FBB73C479ABA17C1B3;
struct GraphElement_1_t3220EDD6251B31FC22A192EC12682C1D8B28F16D  : public RuntimeObject
{
	Guid_t ___U3CguidU3Ek__BackingField;
	FlowGraph_tF9E42FECF535CD5BAB10F75672B5BCE285627A45* ___U3CgraphU3Ek__BackingField;
};
struct GraphElement_1_tE61715904D5A9E5C8385EAF991CC1F874C244DC4  : public RuntimeObject
{
	Guid_t ___U3CguidU3Ek__BackingField;
	RuntimeObject* ___U3CgraphU3Ek__BackingField;
};
struct KeyValuePair_2_tBFAB770FA49BCEF848BB60B09BAE28CE29CD3A6B 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key;
	RuntimeObject* ___value;
};
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 ___value;
};
struct Rounding_t4CCB44160525DA34B85E098AF21812406255250A 
{
	int32_t ___value__;
};
struct Rounding_t6C197D0482C9520CBE957B173E1B590ADDB8B0B5 
{
	int32_t ___value__;
};
struct Rounding_t2DC2F1B58B3E2159244ECB587C247037A5C6D740 
{
	int32_t ___value__;
};
struct Rounding_t7936EA558773D7E0A67BCFADF8094DAD22D393F9 
{
	int32_t ___value__;
};
struct Rounding_tE092E99E19C07558E7FF2C0E0667749D0306E0C0 
{
	int32_t ___value__;
};
struct SByteEnumEqualityComparer_1_tBC7CE1B84BD3FA9E95F67907B755637B3F1464AF  : public EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A
{
};
struct ScrollDirection_t2B85192C548DF2415424520603AF1AE1556CA0AE 
{
	int32_t ___value__;
};
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2  : public RuntimeObject
{
	SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____nextSegment;
};
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912  : public RuntimeObject
{
	SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____nextSegment;
};
struct ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6  : public EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A
{
};
struct SliderKey_t43E96838E1E854487D7A7516094E7659C6054D1C 
{
	int32_t ___value__;
};
struct SliderKey_t6D2D477078D3F87B046A5089EC099225FE23C471 
{
	int32_t ___value__;
};
struct SliderKey_t50E90577048B339A992940C01D208901E524828B 
{
	int32_t ___value__;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct Align_t293AAB5F8D4239F304F48DA84CAAB4071C78902C 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
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
struct DisplayStyle_t87BEDA2F78F764785ED41FC5E622ECB0091B2459 
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct FilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34 
{
	int32_t ___value__;
};
struct FlexDirection_t0B086E97C9B1B8F1D94B51CBEAE6564B2A7C15DC 
{
	int32_t ___value__;
};
struct FontStyle_tDD46734FA9BCB99FB315CD7CAD1137EE536136D1 
{
	int32_t ___value__;
};
struct Graph_tD3F160E11AE372F4006562E44A04A934679A72CA  : public RuntimeObject
{
	List_1_tDC7181A78C61D35CB334474CAE5A06272DB455A1* ____elements;
	MergedGraphElementCollection_t617900BF35465F630BAAC77AA6EAAD375D42BA4C* ___U3CelementsU3Ek__BackingField;
	String_t* ___U3CtitleU3Ek__BackingField;
	String_t* ___U3CsummaryU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpanU3Ek__BackingField;
	float ___U3CzoomU3Ek__BackingField;
	bool ___prewarmed;
};
struct GraphSource_t8C1348A60D5A56AED66854349F7831A81EA0FF49 
{
	int32_t ___value__;
};
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	int32_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Justify_t91B96D47B47940372289EFCB244DDB5F1F7BD057 
{
	int32_t ___value__;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct OverflowClipBox_t216E14FDAB321AF2B7F0DB6E22760D7724BDAA83 
{
	int32_t ___value__;
};
struct OverflowInternal_t6A74561363466CCB7905A65D3E5E24887AE0F11F 
{
	int32_t ___value__;
};
struct Position_t066B59B8657DAFCFBEDDAE8CBCE96E88796E1319 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	int32_t ___value__;
};
struct TextOverflow_tF5F972A9B8C1DF48FD3E878216CE6B4F94B94ADA 
{
	int32_t ___value__;
};
struct TextOverflowPosition_tB30616AE6E61CCEF425E41C8CD5110EC2547DF02 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct Visibility_t1AEE2D871B126DD95D6F1D3B36EC92FE0D489F47 
{
	int32_t ___value__;
};
struct WhiteSpace_t05265AA4B0C087FAE778422383EA36AF84EDCDD2 
{
	int32_t ___value__;
};
struct Wrap_tDDCA30F27EC4967717380ECCC67C0818EFA8BC53 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct Enumerator_t5607BBEFCAB332AD30DE70DD94F4AA2DB1730FE7 
{
	Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tBFAB770FA49BCEF848BB60B09BAE28CE29CD3A6B ____current;
	int32_t ____getEnumeratorRetType;
};
struct GraphNest_2_t809972B852D228243FC0FF238384E13D4D3924F5  : public RuntimeObject
{
	RuntimeObject* ___U3CnesterU3Ek__BackingField;
	int32_t ____source;
	RuntimeObject* ____macro;
	RuntimeObject* ____embed;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___beforeGraphChange;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterGraphChange;
};
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
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
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct UnexpectedEnumValueException_1_tEB12426BA22CC680DB6541E69E2198E8B18A7CB1  : public Exception_t
{
	int32_t ___U3CValueU3Ek__BackingField;
};
struct UnexpectedEnumValueException_1_t097E6091054C78AA7EC04EE81CB92DAFE6582D3A  : public Exception_t
{
	int32_t ___U3CValueU3Ek__BackingField;
};
struct UnexpectedEnumValueException_1_t2A2AF757DFA8157AC8C203107878B653957DDE10  : public Exception_t
{
	int32_t ___U3CValueU3Ek__BackingField;
};
struct UnexpectedEnumValueException_1_tBD61262DADAF5DC32360A6DA383FD78902765A5C  : public Exception_t
{
	int32_t ___U3CValueU3Ek__BackingField;
};
struct UnexpectedEnumValueException_1_t544C99BFB3DAB938C411A2DE84EDBC4F146A3D4D  : public Exception_t
{
	int32_t ___U3CValueU3Ek__BackingField;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct FlowGraph_tF9E42FECF535CD5BAB10F75672B5BCE285627A45  : public Graph_tD3F160E11AE372F4006562E44A04A934679A72CA
{
	VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405* ___U3CvariablesU3Ek__BackingField;
	GraphElementCollection_1_t0165568BAE7EF8D2CD1E954F9F5CB8527EDEC824* ___U3CunitsU3Ek__BackingField;
	GraphConnectionCollection_3_t1C36521556B52560AC338813684582FE4226703C* ___U3CcontrolConnectionsU3Ek__BackingField;
	GraphConnectionCollection_3_tCB3C722EBCB7366D0FCFD32ED000A4A8AFD2C624* ___U3CvalueConnectionsU3Ek__BackingField;
	GraphConnectionCollection_3_tFD3C8D61A881447B28DC931418DAA45AD99856F6* ___U3CinvalidConnectionsU3Ek__BackingField;
	GraphElementCollection_1_t747DBE349EF6196F21B8B0817448722E5570D25A* ___U3CgroupsU3Ek__BackingField;
	GraphElementCollection_1_t0859C1F4FC4ACB504F67C57B43AA9DA2F9A3130D* ___U3CstickyU3Ek__BackingField;
	UnitPortDefinitionCollection_1_t665553142D4490579611ED610240743C22D899F8* ___U3CcontrolInputDefinitionsU3Ek__BackingField;
	UnitPortDefinitionCollection_1_t198398673C495F7DB8AC3CE26E9DC0B8907E628C* ___U3CcontrolOutputDefinitionsU3Ek__BackingField;
	UnitPortDefinitionCollection_1_tED71DF94B48CE1756D3168910761094E5E2CC628* ___U3CvalueInputDefinitionsU3Ek__BackingField;
	UnitPortDefinitionCollection_1_t0F8E18D70B3C28BCFF0C4A883CC718FF7CE65347* ___U3CvalueOutputDefinitionsU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onPortDefinitionsChanged;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct InvalidImplementationException_t0ED7E88DE48F87CA15C0BC04F7B63DFEEF7EF9D6  : public Exception_t
{
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___cursor;
	int32_t ___textOverflow;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityBackgroundImageTintColor;
	int32_t ___unityOverflowClipBox;
	int32_t ___unitySliceBottom;
	int32_t ___unitySliceLeft;
	int32_t ___unitySliceRight;
	float ___unitySliceScale;
	int32_t ___unitySliceTop;
	int32_t ___unityTextOverflowPosition;
};
struct RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___cursor;
	int32_t ___textOverflow;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityBackgroundImageTintColor;
	int32_t ___unityOverflowClipBox;
	int32_t ___unitySliceBottom;
	int32_t ___unitySliceLeft;
	int32_t ___unitySliceRight;
	float ___unitySliceScale;
	int32_t ___unitySliceTop;
	int32_t ___unityTextOverflowPosition;
};
struct RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___cursor;
	int32_t ___textOverflow;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityBackgroundImageTintColor;
	int32_t ___unityOverflowClipBox;
	int32_t ___unitySliceBottom;
	int32_t ___unitySliceLeft;
	int32_t ___unitySliceRight;
	float ___unitySliceScale;
	int32_t ___unitySliceTop;
	int32_t ___unityTextOverflowPosition;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SingletonAttribute_t4EBE08E147FC39CAF915B5E6AFCACDEAD99FAD5F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	bool ___U3CPersistentU3Ek__BackingField;
	bool ___U3CAutomaticU3Ek__BackingField;
	int32_t ___U3CHideFlagsU3Ek__BackingField;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191  : public GraphElement_1_t3220EDD6251B31FC22A192EC12682C1D8B28F16D
{
	bool ___U3CisDefinedU3Ek__BackingField;
	RuntimeObject* ___U3CcontrolInputsU3Ek__BackingField;
	RuntimeObject* ___U3CcontrolOutputsU3Ek__BackingField;
	RuntimeObject* ___U3CvalueInputsU3Ek__BackingField;
	RuntimeObject* ___U3CvalueOutputsU3Ek__BackingField;
	RuntimeObject* ___U3CinvalidInputsU3Ek__BackingField;
	RuntimeObject* ___U3CinvalidOutputsU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onPortsChanged;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CdefaultValuesU3Ek__BackingField;
	RuntimeObject* ___U3CrelationsU3Ek__BackingField;
	bool ___U3CisControlRootU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField;
	Exception_t* ___U3CdefinitionExceptionU3Ek__BackingField;
};
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D 
{
	String_t* ___path;
	String_t* ___typeFullName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___asset;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_pinvoke
{
	char* ___path;
	char* ___typeFullName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___asset;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_com
{
	Il2CppChar* ___path;
	Il2CppChar* ___typeFullName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___asset;
	Type_t* ___m_CachedType;
};
struct ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ___m_PropertiesList;
	Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879* ___m_PropertiesHash;
};
struct Func_1_t22BD7B5F8DB687330688484631E4670ADE9A7C9D  : public MulticastDelegate_t
{
};
struct Func_1_t072CADF8B1FAE104EFB7233AABB82B833DE5EEBA  : public MulticastDelegate_t
{
};
struct Func_1_tDDB7896D4A271F8D526A55B1B50800F31A40D6CB  : public MulticastDelegate_t
{
};
struct Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E  : public MulticastDelegate_t
{
};
struct Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277  : public MulticastDelegate_t
{
};
struct Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782  : public MulticastDelegate_t
{
};
struct Func_2_tE299C631F0CB2E8E61444D749D446C27349C90B8  : public MulticastDelegate_t
{
};
struct Func_2_tE15970F2C68502F5A28DDFA80B3B0BAAFCF75021  : public MulticastDelegate_t
{
};
struct Func_2_tB98BB93B60A3562C54694B9F37AEBD38DE206A9C  : public MulticastDelegate_t
{
};
struct Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B  : public MulticastDelegate_t
{
};
struct Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B  : public MulticastDelegate_t
{
};
struct Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38  : public MulticastDelegate_t
{
};
struct Func_2_tB5F9BE35E4AA94B462634399A29B0A00F9C45B4B  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56  : public MulticastDelegate_t
{
};
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39  : public MulticastDelegate_t
{
};
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 ___value;
};
struct Round_2_t397B39112EA05C65325D782638740DB2F16F43BF  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ___U3CroundingU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CinputU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CoutputU3Ek__BackingField;
};
struct Round_2_t14318F333BF7B2D1D2D40CCB6BFECE9942A73D57  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ___U3CroundingU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CinputU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CoutputU3Ek__BackingField;
};
struct Round_2_t58979B67652AC3F90DA6A96A359510671EB026A0  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ___U3CroundingU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CinputU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CoutputU3Ek__BackingField;
};
struct Round_2_t5C9DC81D6E0B508497AAC495DCB1C382FFDE38D3  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ___U3CroundingU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CinputU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CoutputU3Ek__BackingField;
};
struct Round_2_t820BF381B9CAFE160AEA76942059E9736C42ACA9  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ___U3CroundingU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CinputU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CoutputU3Ek__BackingField;
};
struct SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	List_1_t8C4312F3ADCC9FE951B7F383E05AA92C40D0951A* ___U3CbranchesU3Ek__BackingField;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CoptionsU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CselectorU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CdefaultU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CselectionU3Ek__BackingField;
};
struct SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	List_1_tFB017FF74A70C14565C3663C5799D92B320950C1* ___U3CbranchesU3Ek__BackingField;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___U3CoptionsU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CselectorU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CdefaultU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CselectionU3Ek__BackingField;
};
struct SelectUnit_1_t01C80770361B3C8DD3B0E9163CB38D6D5CEA2162  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	List_1_t056D9AC5338CF96ED3F74CA39BE11B353CA899BA* ___U3CbranchesU3Ek__BackingField;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___U3CoptionsU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CselectorU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CdefaultU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CselectionU3Ek__BackingField;
};
struct SerializedPropertyProvider_1_t8C4C6D0BE3CEE408B4A68A267D0F36496299CF0F : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A {};
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7  : public MulticastDelegate_t
{
};
struct SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	ControlInput_t1AD434958538C865F55A62C66B9C24DA82AD31FE* ___U3CenterU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CtargetU3Ek__BackingField;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___U3CgraphInputU3Ek__BackingField;
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CgraphOutputU3Ek__BackingField;
	ControlOutput_t478B71A736EFBCE24B532F0279A9E701C9CDD8B9* ___U3CexitU3Ek__BackingField;
};
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* ___m_Property;
};
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027  : public MulticastDelegate_t
{
};
struct ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___m_Texels;
};
struct ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___m_Texels;
};
struct ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Texels;
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___fontSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___textShadow;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___unityFont;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___unityFontDefinition;
	int32_t ___unityFontStyleAndWeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___unityParagraphSpacing;
	int32_t ___unityTextAlign;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityTextOutlineColor;
	float ___unityTextOutlineWidth;
	int32_t ___visibility;
	int32_t ___whiteSpace;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing;
};
struct InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshaled_pinvoke
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___fontSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___textShadow;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___unityFont;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___unityFontDefinition;
	int32_t ___unityFontStyleAndWeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___unityParagraphSpacing;
	int32_t ___unityTextAlign;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityTextOutlineColor;
	float ___unityTextOutlineWidth;
	int32_t ___visibility;
	int32_t ___whiteSpace;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing;
};
struct InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshaled_com
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___fontSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___textShadow;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___unityFont;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___unityFontDefinition;
	int32_t ___unityFontStyleAndWeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___unityParagraphSpacing;
	int32_t ___unityTextAlign;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityTextOutlineColor;
	float ___unityTextOutlineWidth;
	int32_t ___visibility;
	int32_t ___whiteSpace;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 
{
	int32_t ___alignContent;
	int32_t ___alignItems;
	int32_t ___alignSelf;
	float ___borderBottomWidth;
	float ___borderLeftWidth;
	float ___borderRightWidth;
	float ___borderTopWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___bottom;
	int32_t ___display;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___flexBasis;
	int32_t ___flexDirection;
	float ___flexGrow;
	float ___flexShrink;
	int32_t ___flexWrap;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___height;
	int32_t ___justifyContent;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___left;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___marginBottom;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___marginLeft;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___marginRight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___marginTop;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___maxHeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___maxWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___minHeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___minWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paddingBottom;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paddingLeft;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paddingRight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paddingTop;
	int32_t ___position;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___right;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___top;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StackOverflowException_t938C753F2BB15F526FD564CCF52061BBE5BC97C9  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 
{
	int32_t ___index;
	String_t* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	bool ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_pinvoke
{
	int32_t ___index;
	char* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	int32_t ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_com
{
	int32_t ___index;
	Il2CppChar* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	int32_t ___visible;
};
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 ___value;
};
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 ___value;
};
struct ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79  : public ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___rotate;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___scale;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___translate;
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___rotate;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___scale;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___translate;
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___rotate;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___scale;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___translate;
};
struct VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___backgroundImage;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionX;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionY;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___backgroundRepeat;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___backgroundSize;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderBottomColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomRightRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderLeftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderRightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderTopColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopRightRadius;
	float ___opacity;
	int32_t ___overflow;
};
struct VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshaled_pinvoke
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___backgroundImage;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionX;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionY;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___backgroundRepeat;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___backgroundSize;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderBottomColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomRightRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderLeftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderRightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderTopColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopRightRadius;
	float ___opacity;
	int32_t ___overflow;
};
struct VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshaled_com
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___backgroundImage;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionX;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionY;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___backgroundRepeat;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___backgroundSize;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderBottomColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomRightRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderLeftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderRightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderTopColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopRightRadius;
	float ___opacity;
	int32_t ___overflow;
};
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 ___value;
};
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B ___value;
};
struct LudiqBehaviour_tD812A8ADB12C4B8102339E0CD9313998E95BB58F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	SerializationData_tAD0F0CD307CB8C9EE08550F3DC6E296FDECE399A ____data;
};
struct Machine_2_t0DF3117A586606B0E97DCE8C3B3F7BDBA95308F2  : public LudiqBehaviour_tD812A8ADB12C4B8102339E0CD9313998E95BB58F
{
	GraphNest_2_t809972B852D228243FC0FF238384E13D4D3924F5* ___U3CnestU3Ek__BackingField;
	bool ____alive;
	bool ____enabled;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___threadSafeGameObject;
	bool ___isReferenceCached;
	GraphReference_t721C982B418EEAA6BE9FA2BFB6A047A8E9362DA9* ____reference;
	RuntimeObject* ___U3CgraphDataU3Ek__BackingField;
};
struct U3CU3Ec_t6BAB024E98B475B1609E32F565CE4B12ED920BB4_StaticFields
{
	U3CU3Ec_t6BAB024E98B475B1609E32F565CE4B12ED920BB4* ___U3CU3E9;
	Func_1_t22BD7B5F8DB687330688484631E4670ADE9A7C9D* ___U3CU3E9__13_0;
};
struct U3CU3Ec_t82B73A48D3F6B8B76A80B0DD2C9C877B4467FE27_StaticFields
{
	U3CU3Ec_t82B73A48D3F6B8B76A80B0DD2C9C877B4467FE27* ___U3CU3E9;
	Func_1_t072CADF8B1FAE104EFB7233AABB82B833DE5EEBA* ___U3CU3E9__13_0;
};
struct U3CU3Ec_t70E8BC87EE3233F0E30D52C453616140113F0281_StaticFields
{
	U3CU3Ec_t70E8BC87EE3233F0E30D52C453616140113F0281* ___U3CU3E9;
	Func_1_tDDB7896D4A271F8D526A55B1B50800F31A40D6CB* ___U3CU3E9__13_0;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___Value;
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Value;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t5E33341CA2B10BFFBBF57D6EF2CC598C88A51C97_StaticFields
{
	EqualityComparer_1_t5E33341CA2B10BFFBBF57D6EF2CC598C88A51C97* ___defaultComparer;
};
struct List_1_tF8B8CB3D8291FEFE18BE6AF5E7C63F8CC805E927_StaticFields
{
	KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___s_emptyArray;
};
struct List_1_t8C4312F3ADCC9FE951B7F383E05AA92C40D0951A_StaticFields
{
	KeyValuePair_2U5BU5D_tDAC8DF1E6C3844B86FE08982061BD166F7E38D3D* ___s_emptyArray;
};
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray;
};
struct List_1_tFB017FF74A70C14565C3663C5799D92B320950C1_StaticFields
{
	KeyValuePair_2U5BU5D_tDA630329061CE4DC9623F05A816D1A029F212349* ___s_emptyArray;
};
struct List_1_t056D9AC5338CF96ED3F74CA39BE11B353CA899BA_StaticFields
{
	KeyValuePair_2U5BU5D_t2F28C61DB4E95D58EB2955489218D8F09B9EBCEB* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01_StaticFields
{
	uint32_t ___m_NextId;
};
struct ReferenceEqualityComparer_1_tB94EA6450E5631356E6774AA042421D2D03337D3_StaticFields
{
	ReferenceEqualityComparer_1_tB94EA6450E5631356E6774AA042421D2D03337D3* ___Instance;
};
struct ReferenceEqualityComparer_1_t536C34AE6882F85CCE33D21260923C931AA495F3_StaticFields
{
	ReferenceEqualityComparer_1_t536C34AE6882F85CCE33D21260923C931AA495F3* ___Instance;
};
struct SceneSingleton_1_tDCF3CC08AB4736C263A670458E97AED046817BB3_StaticFields
{
	Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* ___instances;
	SingletonAttribute_t4EBE08E147FC39CAF915B5E6AFCACDEAD99FAD5F* ___attribute;
};
struct Singleton_1_t9D5C66D8E509ABC5761B9D3E2AA44978F85385FA_StaticFields
{
	SingletonAttribute_t4EBE08E147FC39CAF915B5E6AFCACDEAD99FAD5F* ___attribute;
	RuntimeObject* ____lock;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___awoken;
	RuntimeObject* ____instance;
};
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields
{
	int32_t ___s_TextureCounter;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerCopyTexture;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerGetTextureData;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerUpdateTexture;
};
struct Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582_StaticFields
{
	Func_2_tAF4123F8D69F1A665BBB864E1C97131C05AEBBEB* ___U3CisInspectedBindingU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTryAllocate;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Recursion_t4487949FCBFA02E2BBA6C26F7A149BCDDB6F065F_StaticFields
{
	int32_t ___U3CdefaultMaxDepthU3Ek__BackingField;
	bool ___U3CsafeModeU3Ek__BackingField;
};
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	int32_t ___SpinCountforSpinBeforeWait;
};
struct ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_StaticFields
{
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___typesWithDefaultValues;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_StaticFields
{
	RuntimeObject* ___comparer;
};
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9_StaticFields
{
	uint32_t ___m_NextId;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD_StaticFields
{
	uint32_t ___m_NextId;
};
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44_StaticFields
{
	uint32_t ___m_NextId;
};
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1_StaticFields
{
	uint32_t ___m_NextId;
};
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D_StaticFields
{
	uint32_t ___m_NextId;
};
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A_StaticFields
{
	uint32_t ___m_NextId;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577  : public RuntimeArray
{
	ALIGN_FIELD (8) WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 m_Items[1];

	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F  : public RuntimeArray
{
	ALIGN_FIELD (8) AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D m_Items[1];

	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___typeFullName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CachedType), (void*)NULL);
		#endif
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___typeFullName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CachedType), (void*)NULL);
		#endif
	}
};
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 m_Items[1];

	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
};
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 m_Items[1];

	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___slotName), (void*)NULL);
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___slotName), (void*)NULL);
	}
};
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811  : public RuntimeArray
{
	ALIGN_FIELD (8) UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 m_Items[1];

	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alias), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alias), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
	}
};
struct UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235  : public RuntimeArray
{
	ALIGN_FIELD (8) UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 m_Items[1];

	inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uxmlObjectAssets), (void*)NULL);
	}
	inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uxmlObjectAssets), (void*)NULL);
	}
};
struct AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC  : public RuntimeArray
{
	ALIGN_FIELD (8) AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 m_Items[1];

	inline AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Type), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Members), (void*)NULL);
		#endif
	}
	inline AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Type), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Members), (void*)NULL);
		#endif
	}
};
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3  : public RuntimeArray
{
	ALIGN_FIELD (8) InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D m_Items[1];

	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____instruction), (void*)NULL);
		#endif
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____instruction), (void*)NULL);
		#endif
	}
};
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290  : public RuntimeArray
{
	ALIGN_FIELD (8) ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 m_Items[1];

	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 m_Items[1];

	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item), (void*)NULL);
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item), (void*)NULL);
	}
};
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
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
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E m_Items[1];

	inline Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 m_Items[1];

	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m409F5776BEB430BE72273C433CC1850CD93700A7_gshared (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m297F49BCB3FD33C8DE274BA917FFF7B708758DB7_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF174A6917D3D93C8D7910C91080D253891A1AC5_gshared (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC7204EA734A903659BFE12EFC2FD358391419441_gshared (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55_gshared (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809_gshared (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2_gshared (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC_gshared (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93_gshared (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF_gshared (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F_gshared (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97_gshared (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3_gshared (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B_gshared (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2_gshared (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED_gshared (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0AA9B6DB319984D7F9AA4CC7138CDB80E424D3C6_gshared (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m04ABB1ED0A413A55AB9A00490105D95B41E2F252_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m35084514816674485EF1C8F4FB92A40576C4111D_gshared (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3CE33D219D6B877C1335E0409FD371669274678C_gshared (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCA2EE72377AB6EC0E4641B1D12026B5333268CE_gshared (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5C117EA0A998E2211CD0904DFCA1A117CB6D4B29_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m675B455613C954C02AFAF1510FA04B3FC256E279_gshared (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m47E0AD9DAF851871758572465D8585553D7FBAA7_gshared (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m283266AC4D77DC2424BDBD9CB125A1A61AB55E1C_gshared (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD7979063F69DBCBBA075F88868B40DE92ED347FC_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7535255C244884FCE69E71A597A10D82C38A21AB_gshared (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m07CEF5EB192EFDA22EC079165EEE0F82A03E5FD7_gshared (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m846BBCDAF292EDF97639079163217B870C8B7F34_gshared (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDE9FDB572391C1609456BCFE39FB16EC3C212BDC_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05552C315FF241DC8DDB119DB7C93171E9108B0F_gshared (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m59742E76F1286DB6A4EFD9F6E85133BDDAFDC9E9_gshared (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recursion_1_TryEnter_mF2BBD1C4750FACEBABF51E0174069875F6300C40_gshared (Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPool_1_Free_m788384E2D8174E5C4B2166C05C18D4FBA11200A0_gshared (RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m931E25EF2557C3A386E4B9DC8D8212B7D9D3F5AE_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E* Recursion_1_New_mFFB56DD16C25FD090430B16E12C4ED8073EBEBD8_gshared (int32_t ___0_maxDepth, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GenericPool_1_New_mB5D7E162276F87758C5448AC13EFD031FD51AC44_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_constructor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD987F464B2FDA7B3C78AB2929B4095F09B1B2E05_gshared (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m980410AE0355D660B35CA1D5786AEA289D386547_gshared (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recursion_1_TryEnter_m18269A90108CF863A69FAF2C30B43F6324F4C9F0_gshared (Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCDDD8FE3E6454C0B951E8FE2D56514D04AA7BABC_gshared (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m228C376F1864AF763CDCBC49B38AB70F7D171A69_gshared (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m209AFE45419CDB6BC4DABB7B8CFA75E17314DCD8_gshared (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m41726B2689C5EFF874AC0FFA3E076487FAE9A415_gshared (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39E29E84A82B2C6BFCDDBE3DFD5CD7AC7C7054A2_gshared (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD5800CB869948F0EBF72EF01C56A649663EA1D8_gshared_inline (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 Stack_1_Peek_m5B4F74AC7D87057EF9783A6B430DA2460F9D022C_gshared (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5E33341CA2B10BFFBBF57D6EF2CC598C88A51C97* EqualityComparer_1_get_Default_m7D57F1ABED6EB06B33222C807A94116C5752A9E9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 Stack_1_Pop_m67E3247C01331CA47BE91B33D6CB7653AB20E5EF_gshared (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF00713F2242C29F3016BEBCDA62201094FE2C4A8_gshared (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mEBF470B734FBAD9326FC470C435618D83B356DC7_gshared (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mE77D6D29AA047FF03D3E940F5D075623361A5ACF_gshared (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* Recursion_1_New_m52C9C3DC8168098217A5DD5BB5EC2D707396DA75_gshared (int32_t ___0_maxDepth, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m75A25F45B52ACD9C78C95BA16FB57B0E42B2EB71_gshared (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m0496B511120C1FDD72C23E87815BB99452CE70A1_gshared (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m37FD751AF74BCAB27B7058BE04C6BF0727E6FC4F_gshared (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m2AF5DD75CF4372209217BD191D8CA90C5DA04B32_gshared (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m4D632ECA38BDAE33DDDD2C1825353CE37AB6BE1D_gshared (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_mA7222FFA782F7443B91F8398ADEFE7B94B45C704_gshared (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReferenceEqualityComparer_1_GetHashCode_m5B868C33FDEBD9DCBDBDD738BF00A34BD89C5253_gshared (RuntimeObject* ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceEqualityComparer_1__ctor_m59FC5C8DDFB3CBA989B8E5F6954396F4FC3957BD_gshared (ReferenceEqualityComparer_1_tB94EA6450E5631356E6774AA042421D2D03337D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9F0B97F549B9042F55DC0B012EB48FEAF457E7A_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Round_2_set_input_m86BAF39BB89D935705FD6A4CBF1BB4019AB92290_gshared_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF3BA238FEB27E202F7187E645E9ACEF68DD28E9_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_tE15970F2C68502F5A28DDFA80B3B0BAAFCF75021* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Round_2_set_output_m02DD2822B1A3F5C4EEDB65B01B451B9CB9A2A9ED_gshared_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Round_2_get_input_mE60818DD02B7B1430F2309563F401225B3CEB36A_gshared_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Round_2_get_output_m1CD63C3984988580512AC801B224E7745D352E3B_gshared_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Round_2_get_rounding_mB758C83C6106F4BEE660F605806F782323FE235B_gshared_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Flow_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFAA42FEC56C0636578AC3386C19FE39A6F0B04CF_gshared (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnexpectedEnumValueException_1__ctor_m8323477225F696295F492B2FB8E57AA261ECB3E9_gshared (UnexpectedEnumValueException_1_t9F5986D23EC39566589DD5FAED80D4A5A70F64D7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0877E413FE8575749A23CBFCAD13260041E97C0B_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Round_2_set_input_mB2BB8601873ABC0E76D1BAFD62A598CDD26C6339_gshared_inline (Round_2_t14318F333BF7B2D1D2D40CCB6BFECE9942A73D57* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB8352E429272D346070147A942612E0C937BD03B_gshared (Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m361C2B6CE866543DFB652A1889EF7DAE569F5BC7_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Round_2_set_output_mF6A8885019E204F2B080EC58EBAE0E327BBAD1B7_gshared_inline (Round_2_t14318F333BF7B2D1D2D40CCB6BFECE9942A73D57* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Round_2_get_input_m3FBEBE697994EB23BB4BDDFF7AEEA75B531C587F_gshared_inline (Round_2_t14318F333BF7B2D1D2D40CCB6BFECE9942A73D57* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Round_2_get_output_mE0CDF22EAC339BB4FCA72A28D99705BBB76B009B_gshared_inline (Round_2_t14318F333BF7B2D1D2D40CCB6BFECE9942A73D57* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Round_2_get_rounding_m66180C674530F5A7036443681A8271FBA301115C_gshared_inline (Round_2_t14318F333BF7B2D1D2D40CCB6BFECE9942A73D57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Flow_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m045E887DCCC284FDEB1CAE038AB1BB8EDDEE4376_gshared (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m11D07BA8F84C8D2F28768162D0F87DAA3702EDA4_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Round_2_set_input_mAAB5879A03D8BDF69E66570849AA73F3EBC43C26_gshared_inline (Round_2_t58979B67652AC3F90DA6A96A359510671EB026A0* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m55582D0AF64DBB8F297B71E8B68F40E374CE1910_gshared (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m249BF749883366BD04F81E63FFE3308F6DD314BC_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Round_2_set_output_mC4589ED6A315D2268B372B8360A5791827E56AF2_gshared_inline (Round_2_t58979B67652AC3F90DA6A96A359510671EB026A0* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Round_2_get_input_m22BB7C5CDC1CA6F0FB206BEEE356BF46892EFA2E_gshared_inline (Round_2_t58979B67652AC3F90DA6A96A359510671EB026A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Round_2_get_output_mF3524149323E9D8BE23CFA89FE37F4E1EF6FA871_gshared_inline (Round_2_t58979B67652AC3F90DA6A96A359510671EB026A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Round_2_get_rounding_m74A62D833F12E794C11D2B64F4597F0A7C215D5B_gshared_inline (Round_2_t58979B67652AC3F90DA6A96A359510671EB026A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Flow_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA592D2C65EF035471B5EBFF72D1CCE8990108EA3_gshared (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC3910E66632BEE8D1B5EAD09B38482CC2DDD1FB1_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Round_2_set_input_mE83D4EFB2E2C84F70A9EDF7B9C7173BBF6ADB67F_gshared_inline (Round_2_t5C9DC81D6E0B508497AAC495DCB1C382FFDE38D3* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mBE75211545C5D3C820BEA11B595AB466F6D45FE4_gshared (Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDC032021FB403D399A4A305BADCB1AB15C5B994_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Round_2_set_output_m50653863347A3B4EF34E22E93E16D8E2B0EAB6A4_gshared_inline (Round_2_t5C9DC81D6E0B508497AAC495DCB1C382FFDE38D3* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Round_2_get_input_m2C0723FEFCDD30B77600DFAEFD5A4C3F0294C4D3_gshared_inline (Round_2_t5C9DC81D6E0B508497AAC495DCB1C382FFDE38D3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Round_2_get_output_m112FCC5348DAE821A047FFE577ADEC564D09E602_gshared_inline (Round_2_t5C9DC81D6E0B508497AAC495DCB1C382FFDE38D3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Round_2_get_rounding_mE9FB7DD15B6B7B6B979B6680CB5FA46AD5E54B90_gshared_inline (Round_2_t5C9DC81D6E0B508497AAC495DCB1C382FFDE38D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Flow_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2DC64597C1E60BFF073DCEF83A4180BE7BF6EED2_gshared (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1274D1874D6C2D18CA282A64D7F77564518D885E_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeUtility_GetAttribute_TisRuntimeObject_m3FD7C404C6E0DF5E949BC87256B48EA8865AF9DD_gshared (MemberInfo_t* ___0_element, bool ___1_inherit, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSingleton_1_EnsureSceneValid_mDCC8C0385FB67835B0059F7A37672982B5C2DEF1_gshared (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m58FDD9D37B71CF72436120819302D436B848645E_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* SceneSingleton_1_FindInstances_mB530C86225ED58A0A5259E3525FA7C391D12F119_gshared (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m8282D82C9A692E1FAF66F8D3A495FC70A9505D1E_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneSingleton_1_FindOrCreateInstance_mC4E7BC19738923FA2B124F1A5A88A301C9A88DA7_gshared (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m09B1A16C0EB941683EC13E3B088B78657D544D62_gshared (U3CU3Ec__DisplayClass15_0_tF3DE4597DAB46FC77262CD86CA482BD7E8C21C4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* SceneSingleton_1_FindObjectsOfType_m264353F9788643ED32BE0DD81D58CF35983CE9CC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneSingleton_1_get_automatic_m8358678091F85AE751173C3434B0CD663A8F05D9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneSingleton_1_get_persistent_m962C49FB0739BB0984F31A2869BCFB562E29F9A8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneSingleton_1_get_name_m7C00825D3F3CF187CE93973CEE2A284B8E795FE5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneSingleton_1_get_hideFlags_mFAFCD549F783610C1F1DA42FC15F875C0E3525C2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnsureThat_IsNotNull_TisRuntimeObject_m609E619BEADC6A63A12D5BFF2B15CCB0A4E28F4B_gshared (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m259444494CC09AED56BD19FE56AC664129D7E273_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5607BBEFCAB332AD30DE70DD94F4AA2DB1730FE7 Dictionary_2_GetEnumerator_mA56D0C86C273DEF4086981C2B3CCF1CD0FF8CD7F_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9642645766F2A1E1F9FDE0581DF359850680BFEA_gshared (Enumerator_t5607BBEFCAB332AD30DE70DD94F4AA2DB1730FE7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tBFAB770FA49BCEF848BB60B09BAE28CE29CD3A6B Enumerator_get_Current_m534996AA326445FC15B08DE010EB23A25C5BD558_gshared_inline (Enumerator_t5607BBEFCAB332AD30DE70DD94F4AA2DB1730FE7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4BF40F348304C3961D289B5A1A30A6354FF422B3_gshared_inline (KeyValuePair_2_tBFAB770FA49BCEF848BB60B09BAE28CE29CD3A6B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 KeyValuePair_2_get_Key_mE8C537C1004E34AD43E36A9C32D3821F6482DF92_gshared_inline (KeyValuePair_2_tBFAB770FA49BCEF848BB60B09BAE28CE29CD3A6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1182CE68A6DEBA63C01C1B8C8F1D63AC454BFE23_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCB3A33DEA56A2A3260F5769AD79C0F1E7B4873D8_gshared (Enumerator_t5607BBEFCAB332AD30DE70DD94F4AA2DB1730FE7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* SelectUnit_1_get_options_mD3A0C5D7CFE62BAF31A139B366052E4213B5B6D5_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisRuntimeObject_mD877C5842A48B848E188C41FB2427E7EBBE5DD79_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_tB98BB93B60A3562C54694B9F37AEBD38DE206A9C* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectUnit_1_set_selection_mF14D0F2CA2E5273239C4BDDF32014CCAE89A8B79_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m71F781D77E686C198811BD36C20C0507B2632FA6_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectUnit_1_set_selector_m31275329E1D94D24E454F145B095EF94A9140179_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* SelectUnit_1_get_selector_m7377E832F961FF3F69F43EE42BAAD4AED4B7B55A_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* SelectUnit_1_get_selection_mA3679751A6D6906EC7DE3BD9D631B4A40BC5DC63_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDB4FF9C30C087B30A303A46DBAF3969B5B30B7E0_gshared (List_1_tF8B8CB3D8291FEFE18BE6AF5E7C63F8CC805E927* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectUnit_1_set_branches_mFD47FB783F99726FD3C1EA3C5831D51984394165_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, List_1_t8C4312F3ADCC9FE951B7F383E05AA92C40D0951A* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisRuntimeObject_m122343074F8193EFCD173C88278671A117E7DF71_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8C4312F3ADCC9FE951B7F383E05AA92C40D0951A* SelectUnit_1_get_branches_m35FA4F474D5357AC17BE06C736115B357B236478_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B_gshared (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m213826E630D2B8F29912FF0DA9E4A84DCBE496E1_gshared_inline (List_1_tF8B8CB3D8291FEFE18BE6AF5E7C63F8CC805E927* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectUnit_1_set_default_m29937F78D15D8C7A168107378393029EFBD418B3_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* SelectUnit_1_get_default_m44C01338206F48404034D87DC23399F7391B5650_gshared_inline (SelectUnit_1_tE7D8C126964B13B309A710624BA341EDA61F8403* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flow_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3A5084EDD3F31A532C0D277ECD50400F695575FE_gshared (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBEDE8DF331B6CF1206ACDA23DC810942B1102025 List_1_GetEnumerator_mB46532ECAAF8E9770F7EE45CA74C0029D9A6E277_gshared (List_1_tF8B8CB3D8291FEFE18BE6AF5E7C63F8CC805E927* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2D62DC26681DB5563714055B508C547FB2477C6C_gshared (Enumerator_tBEDE8DF331B6CF1206ACDA23DC810942B1102025* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_mC091860CD3E6D25DF9592200C1335FE72D13696B_gshared_inline (Enumerator_tBEDE8DF331B6CF1206ACDA23DC810942B1102025* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6D357D5F222966ED0A930D0B4BB9BB34C36D51DA_gshared (Enumerator_tBEDE8DF331B6CF1206ACDA23DC810942B1102025* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GraphElement_1_get_graph_mF018362F083AD86A9E71A2501520AA5666D4F4E4_gshared_inline (GraphElement_1_tE61715904D5A9E5C8385EAF991CC1F874C244DC4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* SelectUnit_1_get_options_m1DC45D9CFF32E746F2F075C72F39D211A7D3E906_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectUnit_1_set_selection_m5F3619AA277F0D29D0F22B72E6EB70ADC1504F03_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectUnit_1_set_selector_m1C9ABA0F9FE79687B765104BC31F22818DD9349D_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* SelectUnit_1_get_selector_mC2F3C8A13E8A3DD12CA357455E772FFDA352586F_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* SelectUnit_1_get_selection_m73BBA9E92E43F55E05BD77743BBB21B7DD1EE664_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectUnit_1_set_branches_mA56B0AD85E565242F3F05CD79DDC444E35F72018_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, List_1_tFB017FF74A70C14565C3663C5799D92B320950C1* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFB017FF74A70C14565C3663C5799D92B320950C1* SelectUnit_1_get_branches_m848ACF933B0506D258C0FC65135EC0F4A055C57F_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectUnit_1_set_default_m3FAB6F255F5A69AA8F45B7A207D02012E73F5E1F_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* SelectUnit_1_get_default_m1BE504271F513C536C6B6829951A96723989EE97_gshared_inline (SelectUnit_1_t704AA9A47D4E833F10E366550A119A60C8533545* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Flow_GetValue_TisRuntimeObject_m8BF2132D13BAB97B4780EC2F8852F19EDF8CDDC4_gshared (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m15BC821D90EEF37AE31290902208CC60804BC19E_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetGraph_3_set_enter_m31B2D4110908803336AA017AFB56DFEDE0B99C5B_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, ControlInput_t1AD434958538C865F55A62C66B9C24DA82AD31FE* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SetGraph_3_get_targetType_m307217C5EE59A6DAED9E21FA47AFDD8B48055394_gshared (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetGraph_3_set_target_mA1C5387A731AC030E9AABC33D9BD3C250A2B3C2E_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* SetGraph_3_get_target_m1ACACE32662A56E3DFED0A49820D313E396CD900_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisRuntimeObject_mCE791C307ACBF90709C6013A540104F6FB0A1110_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, RuntimeObject* ___1_default, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetGraph_3_set_graphInput_mA6F924FB7DEE9BF30709407AFFF064F612563E97_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisRuntimeObject_mD512E6E92372FB88500D21640EAA0F24A3468C51_gshared (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetGraph_3_set_graphOutput_m92E0AB1B91D5C262B5D90C251E7BB5B131A539FF_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetGraph_3_set_exit_m6626A5267802109C084CF60A98A0E7F812C17732_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, ControlOutput_t478B71A736EFBCE24B532F0279A9E701C9CDD8B9* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* SetGraph_3_get_graphInput_m4A91DEB0D0337F7C2B0D2989620C49BAC2329CE3_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlInput_t1AD434958538C865F55A62C66B9C24DA82AD31FE* SetGraph_3_get_enter_m50B614D0B4411675C85D0246874F22DDB4C0B844_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* SetGraph_3_get_graphOutput_m9E2D58F1FF152C58101195BDC46CA28D2BE9517D_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlOutput_t478B71A736EFBCE24B532F0279A9E701C9CDD8B9* SetGraph_3_get_exit_m84A4B9A3B99170FFAF6EDF595B8EEF92FE623477_gshared_inline (SetGraph_3_t4299738FF0290D69F2FEC93C461371322131D438* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphNest_2_t809972B852D228243FC0FF238384E13D4D3924F5* Machine_2_get_nest_m7A54084EE3A99A9D38C1DCF996F0B26D1074886A_gshared_inline (Machine_2_t0DF3117A586606B0E97DCE8C3B3F7BDBA95308F2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphNest_2_SwitchToMacro_m58A087AA0350B84DB38A42CAA1598C49A6BC8552_gshared (GraphNest_2_t809972B852D228243FC0FF238384E13D4D3924F5* __this, RuntimeObject* ___0_macro, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m0D913EFD47DC863BE45C62690FAA7384426488F5_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, bool ___1_add, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m65081DB1D2FE097D384414C9BBCD303E9A90725D_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_m412FA20937FDCB14C2E2B845F49F08B867C44BF2_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_gshared_inline (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_gshared_inline (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4_gshared (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m3A11FECC9241A3AC0AA5E2242F108FB2F8D6CA0A_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_gshared_inline (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Func_2_Invoke_mDB0D63C6DA4FC8F4E65D1E67A762FB549B728597_gshared_inline (Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_m7346CD0CF2BF6F40780481549130C59DCDEFFDB6_gshared (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared_inline (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_gshared (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Singleton_1_FindInstances_mDDE00FCA2A8D20E0B2B10BB968E7F86CB07FED1A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_Instantiate_m8C777CE5F0A3D48D5DE573DE888CBF70C4BF4E7E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Singleton_1_FindObjectsOfType_m97B76A02306374B62770BCB30B8F4B9C5D2572B3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Singleton_1_get_automatic_mDF032AA18D82048B55C872E1569612706C42DC2E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Singleton_1_get_name_mEDAA4269978D3FC85B6E754A2B79AAD86A8B70F3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Singleton_1_get_hideFlags_mDF2740835AA044DA4ACFD1B78A54CB61F2537B7C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1_Awake_mFC95A78A6B19EC166070DADD80E1B1088404A180_gshared (RuntimeObject* ___0_instance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Singleton_1_get_persistent_m891D943FAD58DF3749C1093E431A1BDC8595CD50_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t5E33341CA2B10BFFBBF57D6EF2CC598C88A51C97* EqualityComparer_1_CreateComparer_mCA4B0210286FB6F6E4EFD840FBE86C5A79396791_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m6CA1828198D1D38C084F50F09CCBA711A73D079A_gshared (List_1_tF8B8CB3D8291FEFE18BE6AF5E7C63F8CC805E927* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m330F95E804F8B07533050A58D1118F10D3A45484_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_m409F5776BEB430BE72273C433CC1850CD93700A7 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m409F5776BEB430BE72273C433CC1850CD93700A7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool ReadOnlyCollection_1_IsCompatibleObject_m297F49BCB3FD33C8DE274BA917FFF7B708758DB7 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m297F49BCB3FD33C8DE274BA917FFF7B708758DB7_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_mDF174A6917D3D93C8D7910C91080D253891A1AC5 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))ReadOnlyCollection_1_Contains_mDF174A6917D3D93C8D7910C91080D253891A1AC5_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mC7204EA734A903659BFE12EFC2FD358391419441 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mC7204EA734A903659BFE12EFC2FD358391419441_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m0AA9B6DB319984D7F9AA4CC7138CDB80E424D3C6 (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m0AA9B6DB319984D7F9AA4CC7138CDB80E424D3C6_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m04ABB1ED0A413A55AB9A00490105D95B41E2F252 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m04ABB1ED0A413A55AB9A00490105D95B41E2F252_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m35084514816674485EF1C8F4FB92A40576C4111D (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m35084514816674485EF1C8F4FB92A40576C4111D_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m3CE33D219D6B877C1335E0409FD371669274678C (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t727280FC8D25F8D93D4D96A67918E245A3727B12*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m3CE33D219D6B877C1335E0409FD371669274678C_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_mBCA2EE72377AB6EC0E4641B1D12026B5333268CE (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mBCA2EE72377AB6EC0E4641B1D12026B5333268CE_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m5C117EA0A998E2211CD0904DFCA1A117CB6D4B29 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m5C117EA0A998E2211CD0904DFCA1A117CB6D4B29_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m675B455613C954C02AFAF1510FA04B3FC256E279 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172*, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m675B455613C954C02AFAF1510FA04B3FC256E279_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m47E0AD9DAF851871758572465D8585553D7FBAA7 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172*, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m47E0AD9DAF851871758572465D8585553D7FBAA7_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m283266AC4D77DC2424BDBD9CB125A1A61AB55E1C (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m283266AC4D77DC2424BDBD9CB125A1A61AB55E1C_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_mD7979063F69DBCBBA075F88868B40DE92ED347FC (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mD7979063F69DBCBBA075F88868B40DE92ED347FC_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m7535255C244884FCE69E71A597A10D82C38A21AB (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m7535255C244884FCE69E71A597A10D82C38A21AB_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m07CEF5EB192EFDA22EC079165EEE0F82A03E5FD7 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m07CEF5EB192EFDA22EC079165EEE0F82A03E5FD7_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m846BBCDAF292EDF97639079163217B870C8B7F34 (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m846BBCDAF292EDF97639079163217B870C8B7F34_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_mDE9FDB572391C1609456BCFE39FB16EC3C212BDC (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mDE9FDB572391C1609456BCFE39FB16EC3C212BDC_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m05552C315FF241DC8DDB119DB7C93171E9108B0F (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m05552C315FF241DC8DDB119DB7C93171E9108B0F_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m59742E76F1286DB6A4EFD9F6E85133BDDAFDC9E9 (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t4303A45A12D5DE04F42BBF76A787E3EBBB192441*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m59742E76F1286DB6A4EFD9F6E85133BDDAFDC9E9_gshared)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, uint8_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppChar*, Il2CppChar*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (const RuntimeMethod*))Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, int32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, const RuntimeMethod*))Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42 (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint16_t*, uint16_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, uint16_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline (const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (const RuntimeMethod*))Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, const RuntimeMethod*))Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint32_t*, uint32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (const RuntimeMethod*))Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_gshared_inline)(__this, ___0_array, method);
}
inline void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4 (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
inline bool Recursion_1_TryEnter_mF2BBD1C4750FACEBABF51E0174069875F6300C40 (Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	return ((  bool (*) (Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E*, RuntimeObject*, const RuntimeMethod*))Recursion_1_TryEnter_mF2BBD1C4750FACEBABF51E0174069875F6300C40_gshared)(__this, ___0_o, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackOverflowException__ctor_m4B351957B6BFB2C99B9F014F04FCEA33021613C7 (StackOverflowException_t938C753F2BB15F526FD564CCF52061BBE5BC97C9* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778 (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
inline int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4 (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778 (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
inline bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared)(__this, ___0_key, method);
}
inline void GenericPool_1_Free_mA243BCB200E8AEF41581D7E7EC369A23F3F03AC3 (Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E*, const RuntimeMethod*))GenericPool_1_Free_m788384E2D8174E5C4B2166C05C18D4FBA11200A0_gshared)(___0_item, method);
}
inline void Dictionary_2_Clear_m931E25EF2557C3A386E4B9DC8D8212B7D9D3F5AE (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))Dictionary_2_Clear_m931E25EF2557C3A386E4B9DC8D8212B7D9D3F5AE_gshared)(__this, method);
}
inline void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85 (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Recursion_get_defaultMaxDepth_mC8933442B49FF3E0AFB3DB531B77D423C6EE72B7_inline (const RuntimeMethod* method) ;
inline Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E* Recursion_1_New_mFFB56DD16C25FD090430B16E12C4ED8073EBEBD8 (int32_t ___0_maxDepth, const RuntimeMethod* method)
{
	return ((  Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E* (*) (int32_t, const RuntimeMethod*))Recursion_1_New_mFFB56DD16C25FD090430B16E12C4ED8073EBEBD8_gshared)(___0_maxDepth, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recursion_get_safeMode_mF3F1EDB6847A653A15261E67F7B660CB005C9011_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void Func_1__ctor_m5AFB3794277F6F340E21CB648A69FCDF8E38D3A8 (Func_1_t22BD7B5F8DB687330688484631E4670ADE9A7C9D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t22BD7B5F8DB687330688484631E4670ADE9A7C9D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
inline Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E* GenericPool_1_New_m29A1B503576EC2B8FF46452884CE087D9A2C59A7 (Func_1_t22BD7B5F8DB687330688484631E4670ADE9A7C9D* ___0_constructor, const RuntimeMethod* method)
{
	return ((  Recursion_1_tE673536A745AAEA6CBBB1EA24E930FC0B3C4B88E* (*) (Func_1_t22BD7B5F8DB687330688484631E4670ADE9A7C9D*, const RuntimeMethod*))GenericPool_1_New_mB5D7E162276F87758C5448AC13EFD031FD51AC44_gshared)(___0_constructor, method);
}
inline void Stack_1__ctor_mD987F464B2FDA7B3C78AB2929B4095F09B1B2E05 (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E*, const RuntimeMethod*))Stack_1__ctor_mD987F464B2FDA7B3C78AB2929B4095F09B1B2E05_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m980410AE0355D660B35CA1D5786AEA289D386547 (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8*, const RuntimeMethod*))Dictionary_2__ctor_m980410AE0355D660B35CA1D5786AEA289D386547_gshared)(__this, method);
}
inline bool Recursion_1_TryEnter_m18269A90108CF863A69FAF2C30B43F6324F4C9F0 (Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_o, const RuntimeMethod* method)
{
	return ((  bool (*) (Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D*, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707, const RuntimeMethod*))Recursion_1_TryEnter_m18269A90108CF863A69FAF2C30B43F6324F4C9F0_gshared)(__this, ___0_o, method);
}
inline bool Dictionary_2_TryGetValue_mCDDD8FE3E6454C0B951E8FE2D56514D04AA7BABC (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8*, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mCDDD8FE3E6454C0B951E8FE2D56514D04AA7BABC_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Stack_1_Push_m228C376F1864AF763CDCBC49B38AB70F7D171A69 (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E*, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707, const RuntimeMethod*))Stack_1_Push_m228C376F1864AF763CDCBC49B38AB70F7D171A69_gshared)(__this, ___0_item, method);
}
inline int32_t Dictionary_2_get_Item_m209AFE45419CDB6BC4DABB7B8CFA75E17314DCD8 (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8*, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707, const RuntimeMethod*))Dictionary_2_get_Item_m209AFE45419CDB6BC4DABB7B8CFA75E17314DCD8_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2_set_Item_m41726B2689C5EFF874AC0FFA3E076487FAE9A415 (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8*, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m41726B2689C5EFF874AC0FFA3E076487FAE9A415_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_Add_m39E29E84A82B2C6BFCDDBE3DFD5CD7AC7C7054A2 (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8*, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707, int32_t, const RuntimeMethod*))Dictionary_2_Add_m39E29E84A82B2C6BFCDDBE3DFD5CD7AC7C7054A2_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t Stack_1_get_Count_mFD5800CB869948F0EBF72EF01C56A649663EA1D8_inline (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E*, const RuntimeMethod*))Stack_1_get_Count_mFD5800CB869948F0EBF72EF01C56A649663EA1D8_gshared_inline)(__this, method);
}
inline RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 Stack_1_Peek_m5B4F74AC7D87057EF9783A6B430DA2460F9D022C (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method)
{
	return ((  RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 (*) (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E*, const RuntimeMethod*))Stack_1_Peek_m5B4F74AC7D87057EF9783A6B430DA2460F9D022C_gshared)(__this, method);
}
inline EqualityComparer_1_t5E33341CA2B10BFFBBF57D6EF2CC598C88A51C97* EqualityComparer_1_get_Default_m7D57F1ABED6EB06B33222C807A94116C5752A9E9_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t5E33341CA2B10BFFBBF57D6EF2CC598C88A51C97* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D57F1ABED6EB06B33222C807A94116C5752A9E9_gshared_inline)(method);
}
inline RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 Stack_1_Pop_m67E3247C01331CA47BE91B33D6CB7653AB20E5EF (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method)
{
	return ((  RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 (*) (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E*, const RuntimeMethod*))Stack_1_Pop_m67E3247C01331CA47BE91B33D6CB7653AB20E5EF_gshared)(__this, method);
}
inline bool Dictionary_2_Remove_mF00713F2242C29F3016BEBCDA62201094FE2C4A8 (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8*, RecursionNode_t0C46AE9F2D87E73EC9D98C4251B9AFFC0B1E7707, const RuntimeMethod*))Dictionary_2_Remove_mF00713F2242C29F3016BEBCDA62201094FE2C4A8_gshared)(__this, ___0_key, method);
}
inline void GenericPool_1_Free_m70476831E548450EB9AD3DEA5E6FB075221CD88D (Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D*, const RuntimeMethod*))GenericPool_1_Free_m788384E2D8174E5C4B2166C05C18D4FBA11200A0_gshared)(___0_item, method);
}
inline void Dictionary_2_Clear_mEBF470B734FBAD9326FC470C435618D83B356DC7 (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2B4B132ADBF2C918D6C7A801292DA33453A9CCB8*, const RuntimeMethod*))Dictionary_2_Clear_mEBF470B734FBAD9326FC470C435618D83B356DC7_gshared)(__this, method);
}
inline void Stack_1_Clear_mE77D6D29AA047FF03D3E940F5D075623361A5ACF (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCFA963B40799F3A2D0A5C6587717E85C7ACC796E*, const RuntimeMethod*))Stack_1_Clear_mE77D6D29AA047FF03D3E940F5D075623361A5ACF_gshared)(__this, method);
}
inline Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* Recursion_1_New_m52C9C3DC8168098217A5DD5BB5EC2D707396DA75 (int32_t ___0_maxDepth, const RuntimeMethod* method)
{
	return ((  Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* (*) (int32_t, const RuntimeMethod*))Recursion_1_New_m52C9C3DC8168098217A5DD5BB5EC2D707396DA75_gshared)(___0_maxDepth, method);
}
inline void Func_1__ctor_m2E1C30418A6FEDB0614051809D20346D1E552E7D (Func_1_tDDB7896D4A271F8D526A55B1B50800F31A40D6CB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tDDB7896D4A271F8D526A55B1B50800F31A40D6CB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
inline Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* GenericPool_1_New_m1B338E7926149E478D0BC682EF7A032C58982242 (Func_1_tDDB7896D4A271F8D526A55B1B50800F31A40D6CB* ___0_constructor, const RuntimeMethod* method)
{
	return ((  Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* (*) (Func_1_tDDB7896D4A271F8D526A55B1B50800F31A40D6CB*, const RuntimeMethod*))GenericPool_1_New_mB5D7E162276F87758C5448AC13EFD031FD51AC44_gshared)(___0_constructor, method);
}
inline void RefCounted__ctor_m75A25F45B52ACD9C78C95BA16FB57B0E42B2EB71 (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44*, const RuntimeMethod*))RefCounted__ctor_m75A25F45B52ACD9C78C95BA16FB57B0E42B2EB71_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 InheritedData_Copy_m0EABC6E355A3778EBE1EBBC888F0A33D4A3CC12E (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m0496B511120C1FDD72C23E87815BB99452CE70A1 (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1*, const RuntimeMethod*))RefCounted__ctor_m0496B511120C1FDD72C23E87815BB99452CE70A1_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 LayoutData_Copy_m43CB8791B4A3BEDD9E8184D6E868008688E9EC31 (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m37FD751AF74BCAB27B7058BE04C6BF0727E6FC4F (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD*, const RuntimeMethod*))RefCounted__ctor_m37FD751AF74BCAB27B7058BE04C6BF0727E6FC4F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 RareData_Copy_m704FCCC82A27DD5034CFB2E88E94D1C27582E29E (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m2AF5DD75CF4372209217BD191D8CA90C5DA04B32 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D*, const RuntimeMethod*))RefCounted__ctor_m2AF5DD75CF4372209217BD191D8CA90C5DA04B32_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 TransformData_Copy_m1C72DA746E9EDA30EF3A0B6B582ADE0D1F1CC1E1 (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m4D632ECA38BDAE33DDDD2C1825353CE37AB6BE1D (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9*, const RuntimeMethod*))RefCounted__ctor_m4D632ECA38BDAE33DDDD2C1825353CE37AB6BE1D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 TransitionData_Copy_m6AECD90470D754363F0DCB00918CB167788DC51B (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_mA7222FFA782F7443B91F8398ADEFE7B94B45C704 (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A*, const RuntimeMethod*))RefCounted__ctor_mA7222FFA782F7443B91F8398ADEFE7B94B45C704_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B VisualData_Copy_m4672E40E37CE425C9991B5FC11EE9EEF32CD1A0F (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* __this, const RuntimeMethod* method) ;
inline int32_t ReferenceEqualityComparer_1_GetHashCode_m5B868C33FDEBD9DCBDBDD738BF00A34BD89C5253 (RuntimeObject* ___0_a, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))ReferenceEqualityComparer_1_GetHashCode_m5B868C33FDEBD9DCBDBDD738BF00A34BD89C5253_gshared)(___0_a, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
inline void ReferenceEqualityComparer_1__ctor_m59FC5C8DDFB3CBA989B8E5F6954396F4FC3957BD (ReferenceEqualityComparer_1_tB94EA6450E5631356E6774AA042421D2D03337D3* __this, const RuntimeMethod* method)
{
	((  void (*) (ReferenceEqualityComparer_1_tB94EA6450E5631356E6774AA042421D2D03337D3*, const RuntimeMethod*))ReferenceEqualityComparer_1__ctor_m59FC5C8DDFB3CBA989B8E5F6954396F4FC3957BD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4 (Type_t* ___0_type, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
inline ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9F0B97F549B9042F55DC0B012EB48FEAF457E7A (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* (*) (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191*, String_t*, const RuntimeMethod*))Unit_ValueInput_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9F0B97F549B9042F55DC0B012EB48FEAF457E7A_gshared)(__this, ___0_key, method);
}
inline void Round_2_set_input_m86BAF39BB89D935705FD6A4CBF1BB4019AB92290_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF*, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392*, const RuntimeMethod*))Round_2_set_input_m86BAF39BB89D935705FD6A4CBF1BB4019AB92290_gshared_inline)(__this, ___0_value, method);
}
inline void Func_2__ctor_m9D829CC4E84EC5A62F0E18B2C8E596B4BDDDE71E (Func_2_tE15970F2C68502F5A28DDFA80B3B0BAAFCF75021* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE15970F2C68502F5A28DDFA80B3B0BAAFCF75021*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___0_object, ___1_method, method);
}
inline ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF3BA238FEB27E202F7187E645E9ACEF68DD28E9 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_tE15970F2C68502F5A28DDFA80B3B0BAAFCF75021* ___1_getValue, const RuntimeMethod* method)
{
	return ((  ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* (*) (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191*, String_t*, Func_2_tE15970F2C68502F5A28DDFA80B3B0BAAFCF75021*, const RuntimeMethod*))Unit_ValueOutput_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF3BA238FEB27E202F7187E645E9ACEF68DD28E9_gshared)(__this, ___0_key, ___1_getValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ValueOutput_Predictable_mA0C2A0B9760C00B077ECDC644F1AE839A6EA1736 (ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* __this, const RuntimeMethod* method) ;
inline void Round_2_set_output_m02DD2822B1A3F5C4EEDB65B01B451B9CB9A2A9ED_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF*, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B*, const RuntimeMethod*))Round_2_set_output_m02DD2822B1A3F5C4EEDB65B01B451B9CB9A2A9ED_gshared_inline)(__this, ___0_value, method);
}
inline ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Round_2_get_input_mE60818DD02B7B1430F2309563F401225B3CEB36A_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, const RuntimeMethod* method)
{
	return ((  ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* (*) (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF*, const RuntimeMethod*))Round_2_get_input_mE60818DD02B7B1430F2309563F401225B3CEB36A_gshared_inline)(__this, method);
}
inline ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Round_2_get_output_m1CD63C3984988580512AC801B224E7745D352E3B_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, const RuntimeMethod* method)
{
	return ((  ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* (*) (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF*, const RuntimeMethod*))Round_2_get_output_m1CD63C3984988580512AC801B224E7745D352E3B_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_Requirement_m51C96EBEF949FC801D26BA8AF75D305C6494D809 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_source, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___1_destination, const RuntimeMethod* method) ;
inline int32_t Round_2_get_rounding_mB758C83C6106F4BEE660F605806F782323FE235B_inline (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Round_2_t397B39112EA05C65325D782638740DB2F16F43BF*, const RuntimeMethod*))Round_2_get_rounding_mB758C83C6106F4BEE660F605806F782323FE235B_gshared_inline)(__this, method);
}
inline float Flow_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFAA42FEC56C0636578AC3386C19FE39A6F0B04CF (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method)
{
	return ((  float (*) (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582*, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392*, const RuntimeMethod*))Flow_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFAA42FEC56C0636578AC3386C19FE39A6F0B04CF_gshared)(__this, ___0_input, method);
}
inline void UnexpectedEnumValueException_1__ctor_mBCBF86176D66063FB271453FA40E5237E389489B (UnexpectedEnumValueException_1_tEB12426BA22CC680DB6541E69E2198E8B18A7CB1* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnexpectedEnumValueException_1_tEB12426BA22CC680DB6541E69E2198E8B18A7CB1*, int32_t, const RuntimeMethod*))UnexpectedEnumValueException_1__ctor_m8323477225F696295F492B2FB8E57AA261ECB3E9_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit__ctor_m7C07A3A00D7777361F4B86B45F40073D1A65D8B2 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, const RuntimeMethod* method) ;
inline ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* Unit_ValueInput_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0877E413FE8575749A23CBFCAD13260041E97C0B (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* (*) (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191*, String_t*, const RuntimeMethod*))Unit_ValueInput_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0877E413FE8575749A23CBFCAD13260041E97C0B_gshared)(__this, ___0_key, method);
}
inline void Round_2_set_input_mB2BB8601873ABC0E76D1BAFD62A598CDD26C6339_inline (Round_2_t14318F333BF7B2D1D2D40CCB6BFECE9942A73D57* __this, ValueInput_t2F9A