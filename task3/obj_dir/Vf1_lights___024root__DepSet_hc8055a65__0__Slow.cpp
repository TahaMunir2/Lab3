// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_lights.h for the primary calling header

#include "Vf1_lights__pch.h"
#include "Vf1_lights__Syms.h"
#include "Vf1_lights___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_lights___024root___dump_triggers__stl(Vf1_lights___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vf1_lights___024root___eval_triggers__stl(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_triggers__stl\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vf1_lights___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
