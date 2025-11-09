// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_lights.h for the primary calling header

#ifndef VERILATED_VF1_LIGHTS___024ROOT_H_
#define VERILATED_VF1_LIGHTS___024ROOT_H_  // guard

#include "verilated.h"


class Vf1_lights__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vf1_lights___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rst,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ f1_lights__DOT__flash;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_7;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(N,15,0);
    SData/*15:0*/ f1_lights__DOT__clktick__DOT__count;
    SData/*15:0*/ __Vdly__f1_lights__DOT__clktick__DOT__count;
    IData/*31:0*/ f1_lights__DOT__f1_fsm__DOT__current_state;
    IData/*31:0*/ f1_lights__DOT__f1_fsm__DOT__next_state;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vf1_lights__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_lights___024root(Vf1_lights__Syms* symsp, const char* v__name);
    ~Vf1_lights___024root();
    VL_UNCOPYABLE(Vf1_lights___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
