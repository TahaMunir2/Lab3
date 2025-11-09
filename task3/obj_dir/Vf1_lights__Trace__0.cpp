// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_lights__Syms.h"


void Vf1_lights___024root__trace_chg_0_sub_0(Vf1_lights___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1_lights___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_chg_0\n"); );
    // Init
    Vf1_lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_lights___024root*>(voidSelf);
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1_lights___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1_lights___024root__trace_chg_0_sub_0(Vf1_lights___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_chg_0_sub_0\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgSData(oldp+0,(vlSelfRef.N),16);
    bufp->chgBit(oldp+1,(vlSelfRef.en));
    bufp->chgBit(oldp+2,(vlSelfRef.rst));
    bufp->chgBit(oldp+3,(vlSelfRef.clk));
    bufp->chgCData(oldp+4,(vlSelfRef.data_out),8);
    bufp->chgBit(oldp+5,(vlSelfRef.f1_lights__DOT__flash));
    bufp->chgSData(oldp+6,(vlSelfRef.f1_lights__DOT__clktick__DOT__count),16);
    bufp->chgIData(oldp+7,(vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state),32);
    bufp->chgIData(oldp+8,(((IData)(vlSelfRef.__VdfgRegularize_h0dff6736_0_7)
                             ? ((0U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)
                                 ? 1U : ((1U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)
                                          ? 2U : ((2U 
                                                   == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)
                                                       ? 7U
                                                       : 8U)))))))
                             : 0U)),32);
}

void Vf1_lights___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_cleanup\n"); );
    // Init
    Vf1_lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_lights___024root*>(voidSelf);
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
