// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_lights.h for the primary calling header

#include "Vf1_lights__pch.h"
#include "Vf1_lights___024root.h"

VL_ATTR_COLD void Vf1_lights___024root___eval_static(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_static\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vf1_lights___024root___eval_initial(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_initial\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vf1_lights___024root___eval_final(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_final\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_lights___024root___dump_triggers__stl(Vf1_lights___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vf1_lights___024root___eval_phase__stl(Vf1_lights___024root* vlSelf);

VL_ATTR_COLD void Vf1_lights___024root___eval_settle(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_settle\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vf1_lights___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("f1_lights.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vf1_lights___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_lights___024root___dump_triggers__stl(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___dump_triggers__stl\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vf1_lights___024root___stl_sequent__TOP__0(Vf1_lights___024root* vlSelf);

VL_ATTR_COLD void Vf1_lights___024root___eval_stl(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_stl\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vf1_lights___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vf1_lights___024root___stl_sequent__TOP__0(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___stl_sequent__TOP__0\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h0dff6736_0_7 = (((0U 
                                                  == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state) 
                                                 | (1U 
                                                    == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) 
                                                | (((2U 
                                                     == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state) 
                                                    | (3U 
                                                       == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) 
                                                   | ((4U 
                                                       == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state) 
                                                      | ((5U 
                                                          == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state) 
                                                         | ((6U 
                                                             == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state) 
                                                            | (7U 
                                                               == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state))))));
    if (vlSelfRef.__VdfgRegularize_h0dff6736_0_7) {
        if ((0U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) {
            vlSelfRef.data_out = 0U;
            vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 1U;
        } else if ((1U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) {
            vlSelfRef.data_out = 1U;
            vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 2U;
        } else if ((2U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) {
            vlSelfRef.data_out = 3U;
            vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 3U;
        } else if ((3U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) {
            vlSelfRef.data_out = 7U;
            vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 4U;
        } else if ((4U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) {
            vlSelfRef.data_out = 0xfU;
            vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 5U;
        } else if ((5U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) {
            vlSelfRef.data_out = 0x1fU;
            vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 6U;
        } else if ((6U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)) {
            vlSelfRef.data_out = 0x3fU;
            vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 7U;
        } else {
            vlSelfRef.data_out = 0x7fU;
            vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 8U;
        }
    } else {
        vlSelfRef.data_out = ((8U == vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state)
                               ? 0xffU : 0U);
        vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vf1_lights___024root___eval_triggers__stl(Vf1_lights___024root* vlSelf);

VL_ATTR_COLD bool Vf1_lights___024root___eval_phase__stl(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_phase__stl\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vf1_lights___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vf1_lights___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_lights___024root___dump_triggers__act(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___dump_triggers__act\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_lights___024root___dump_triggers__nba(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___dump_triggers__nba\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vf1_lights___024root___ctor_var_reset(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___ctor_var_reset\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->N = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17427324969254097257ull);
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11675680895196038875ull);
    vlSelf->f1_lights__DOT__flash = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15996774471147752669ull);
    vlSelf->f1_lights__DOT__clktick__DOT__count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9398630774394931430ull);
    vlSelf->f1_lights__DOT__f1_fsm__DOT__current_state = 0;
    vlSelf->f1_lights__DOT__f1_fsm__DOT__next_state = 0;
    vlSelf->__VdfgRegularize_h0dff6736_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13757576729270509971ull);
    vlSelf->__Vdly__f1_lights__DOT__clktick__DOT__count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14983022007434248640ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3495601893105415319ull);
}
