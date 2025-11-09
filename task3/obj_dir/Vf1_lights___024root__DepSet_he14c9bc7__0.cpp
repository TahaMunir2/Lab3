// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_lights.h for the primary calling header

#include "Vf1_lights__pch.h"
#include "Vf1_lights___024root.h"

void Vf1_lights___024root___eval_act(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_act\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vf1_lights___024root___nba_sequent__TOP__0(Vf1_lights___024root* vlSelf);
void Vf1_lights___024root___nba_sequent__TOP__1(Vf1_lights___024root* vlSelf);
void Vf1_lights___024root___nba_sequent__TOP__2(Vf1_lights___024root* vlSelf);

void Vf1_lights___024root___eval_nba(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_nba\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vf1_lights___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vf1_lights___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vf1_lights___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vf1_lights___024root___nba_sequent__TOP__0(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___nba_sequent__TOP__0\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__f1_lights__DOT__clktick__DOT__count 
        = vlSelfRef.f1_lights__DOT__clktick__DOT__count;
}

VL_INLINE_OPT void Vf1_lights___024root___nba_sequent__TOP__1(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___nba_sequent__TOP__1\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state = 0U;
    } else if (vlSelfRef.f1_lights__DOT__flash) {
        vlSelfRef.f1_lights__DOT__f1_fsm__DOT__current_state 
            = vlSelfRef.f1_lights__DOT__f1_fsm__DOT__next_state;
    }
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

VL_INLINE_OPT void Vf1_lights___024root___nba_sequent__TOP__2(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___nba_sequent__TOP__2\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.f1_lights__DOT__flash = 0U;
        vlSelfRef.__Vdly__f1_lights__DOT__clktick__DOT__count 
            = vlSelfRef.N;
    } else if (vlSelfRef.en) {
        if ((0U == (IData)(vlSelfRef.f1_lights__DOT__clktick__DOT__count))) {
            vlSelfRef.f1_lights__DOT__flash = 1U;
            vlSelfRef.__Vdly__f1_lights__DOT__clktick__DOT__count 
                = vlSelfRef.N;
        } else {
            vlSelfRef.__Vdly__f1_lights__DOT__clktick__DOT__count 
                = (0xffffU & ((IData)(vlSelfRef.f1_lights__DOT__clktick__DOT__count) 
                              - (IData)(1U)));
            vlSelfRef.f1_lights__DOT__flash = 0U;
        }
    }
    vlSelfRef.f1_lights__DOT__clktick__DOT__count = vlSelfRef.__Vdly__f1_lights__DOT__clktick__DOT__count;
}

void Vf1_lights___024root___eval_triggers__act(Vf1_lights___024root* vlSelf);

bool Vf1_lights___024root___eval_phase__act(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_phase__act\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vf1_lights___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vf1_lights___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vf1_lights___024root___eval_phase__nba(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_phase__nba\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vf1_lights___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_lights___024root___dump_triggers__nba(Vf1_lights___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_lights___024root___dump_triggers__act(Vf1_lights___024root* vlSelf);
#endif  // VL_DEBUG

void Vf1_lights___024root___eval(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vf1_lights___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("f1_lights.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vf1_lights___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("f1_lights.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vf1_lights___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vf1_lights___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vf1_lights___024root___eval_debug_assertions(Vf1_lights___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_debug_assertions\n"); );
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
