// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vf1_lights__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vf1_lights::Vf1_lights(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vf1_lights__Syms(contextp(), _vcname__, this)}
    , rst{vlSymsp->TOP.rst}
    , clk{vlSymsp->TOP.clk}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vf1_lights::Vf1_lights(const char* _vcname__)
    : Vf1_lights(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vf1_lights::~Vf1_lights() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vf1_lights___024root___eval_debug_assertions(Vf1_lights___024root* vlSelf);
#endif  // VL_DEBUG
void Vf1_lights___024root___eval_static(Vf1_lights___024root* vlSelf);
void Vf1_lights___024root___eval_initial(Vf1_lights___024root* vlSelf);
void Vf1_lights___024root___eval_settle(Vf1_lights___024root* vlSelf);
void Vf1_lights___024root___eval(Vf1_lights___024root* vlSelf);

void Vf1_lights::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vf1_lights::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vf1_lights___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vf1_lights___024root___eval_static(&(vlSymsp->TOP));
        Vf1_lights___024root___eval_initial(&(vlSymsp->TOP));
        Vf1_lights___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vf1_lights___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vf1_lights::eventsPending() { return false; }

uint64_t Vf1_lights::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vf1_lights::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vf1_lights___024root___eval_final(Vf1_lights___024root* vlSelf);

VL_ATTR_COLD void Vf1_lights::final() {
    Vf1_lights___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vf1_lights::hierName() const { return vlSymsp->name(); }
const char* Vf1_lights::modelName() const { return "Vf1_lights"; }
unsigned Vf1_lights::threads() const { return 1; }
void Vf1_lights::prepareClone() const { contextp()->prepareClone(); }
void Vf1_lights::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vf1_lights::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vf1_lights___024root__trace_decl_types(VerilatedVcd* tracep);

void Vf1_lights___024root__trace_init_top(Vf1_lights___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vf1_lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_lights___024root*>(voidSelf);
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vf1_lights___024root__trace_decl_types(tracep);
    Vf1_lights___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vf1_lights___024root__trace_register(Vf1_lights___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vf1_lights::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vf1_lights::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vf1_lights___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
