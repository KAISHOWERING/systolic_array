// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp8[5];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->top__DOT____Vcellinp__i1__w_en_i));
            tracep->chgBit(oldp+1,(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi));
            tracep->chgCData(oldp+2,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__cnt_n),4);
            tracep->chgCData(oldp+3,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__cnt_n),4);
            tracep->chgCData(oldp+4,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__cnt_n),4);
            tracep->chgCData(oldp+5,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__cnt_n),4);
            tracep->chgCData(oldp+6,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__cnt_n),4);
            tracep->chgCData(oldp+7,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__cnt_n),4);
            tracep->chgCData(oldp+8,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__cnt_n),4);
            tracep->chgCData(oldp+9,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__cnt_n),4);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgSData(oldp+10,(vlTOPp->top__DOT__i1__DOT__start_v),9);
            tracep->chgBit(oldp+11,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__start_v))));
            tracep->chgBit(oldp+12,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__start_v) 
                                           >> 1U))));
            tracep->chgBit(oldp+13,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__start_v) 
                                           >> 2U))));
            tracep->chgBit(oldp+14,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__start_v) 
                                           >> 3U))));
            tracep->chgBit(oldp+15,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__start_v) 
                                           >> 4U))));
            tracep->chgBit(oldp+16,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__start_v) 
                                           >> 5U))));
            tracep->chgBit(oldp+17,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__start_v) 
                                           >> 6U))));
            tracep->chgBit(oldp+18,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__start_v) 
                                           >> 7U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            __Vtemp8[0U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U];
            __Vtemp8[1U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U];
            __Vtemp8[2U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U];
            __Vtemp8[3U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U];
            __Vtemp8[4U] = (0xffffffU & vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU]);
            tracep->chgWData(oldp+19,(__Vtemp8),152);
            tracep->chgCData(oldp+24,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U])),8);
            tracep->chgCData(oldp+25,(vlTOPp->top__DOT__cnt_24_r),6);
            tracep->chgWData(oldp+26,(vlTOPp->top__DOT__rdata),160);
            tracep->chgWData(oldp+31,(vlTOPp->top__DOT__i1__DOT__pe_mac),1368);
            tracep->chgWData(oldp+74,(vlTOPp->top__DOT__i1__DOT__pe_mac_v),72);
            tracep->chgWData(oldp+77,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+80,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+81,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+84,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+85,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+88,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+89,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+92,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+93,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+96,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+97,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+100,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+101,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+104,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+105,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+108,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v),9);
            tracep->chgCData(oldp+109,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+110,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+111,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+112,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+113,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+114,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0U])),19);
            tracep->chgBit(oldp+115,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U])));
            tracep->chgCData(oldp+116,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+117,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+118,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+119,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+120,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+121,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+122,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+123,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+124,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 1U))));
            tracep->chgCData(oldp+125,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+126,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+127,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+128,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+129,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+130,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+131,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+132,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+133,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+134,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+135,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+136,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+137,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+138,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+139,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+140,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+141,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+142,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+143,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+144,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+145,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+146,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+147,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+148,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+149,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+150,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+151,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+152,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+153,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+154,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+155,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+156,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+157,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+158,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+159,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+160,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+161,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+162,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+163,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+164,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+165,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+166,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+167,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+168,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+169,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+170,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+171,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+172,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+173,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+174,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+175,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+176,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+177,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          << 0x1bU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                            >> 5U)))),19);
            tracep->chgBit(oldp+178,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+179,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+180,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+181,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+182,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+183,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+184,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+185,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+186,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+187,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+188,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+189,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          << 8U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                          >> 0x18U)))),19);
            tracep->chgBit(oldp+190,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+191,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+192,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+193,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+194,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+195,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+196,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+197,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+198,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                          << 0x15U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                            >> 0xbU)))),19);
            tracep->chgBit(oldp+199,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+200,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+201,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+202,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+203,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+204,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+205,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+206,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+207,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                          << 2U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          >> 0x1eU)))),19);
            tracep->chgBit(oldp+208,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+209,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+210,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+211,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+212,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+213,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+214,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+215,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+216,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                          << 0xfU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                            >> 0x11U)))),19);
            tracep->chgBit(oldp+217,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+218,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+219,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+220,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+221,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+222,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+223,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+224,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+225,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          << 0x1cU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                            >> 4U)))),19);
            tracep->chgBit(oldp+226,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+227,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+228,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+229,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+230,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+231,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+232,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+233,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+234,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          << 9U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                          >> 0x17U)))),19);
            tracep->chgBit(oldp+235,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+236,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+237,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+238,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+239,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+240,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+241,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+242,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+243,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                          << 0x16U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                            >> 0xaU)))),19);
            tracep->chgBit(oldp+244,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+245,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+246,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+247,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+248,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+249,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+250,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+251,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+252,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                          << 3U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          >> 0x1dU)))),19);
            tracep->chgBit(oldp+253,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+254,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+255,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+256,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+257,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+258,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+259,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+260,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+261,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+262,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+263,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+264,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                          << 0x10U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                            >> 0x10U)))),19);
            tracep->chgBit(oldp+265,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+266,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+267,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+268,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+269,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+270,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+271,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+272,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+273,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          << 0x1dU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                            >> 3U)))),19);
            tracep->chgBit(oldp+274,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+275,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+276,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+277,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+278,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+279,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+280,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+281,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+282,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          << 0xaU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                            >> 0x16U)))),19);
            tracep->chgBit(oldp+283,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+284,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+285,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+286,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+287,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+288,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+289,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+290,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+291,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                          << 0x17U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                            >> 9U)))),19);
            tracep->chgBit(oldp+292,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+293,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+294,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+295,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+296,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+297,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+298,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+299,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+300,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                          << 4U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          >> 0x1cU)))),19);
            tracep->chgBit(oldp+301,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+302,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+303,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+304,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+305,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+306,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+307,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+308,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+309,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                          << 0x11U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                            >> 0xfU)))),19);
            tracep->chgBit(oldp+310,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+311,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+312,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+313,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+314,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+315,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+316,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+317,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+318,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          << 0x1eU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                            >> 2U)))),19);
            tracep->chgBit(oldp+319,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+320,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+321,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+322,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+323,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+324,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+325,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+326,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+327,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          << 0xbU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                            >> 0x15U)))),19);
            tracep->chgBit(oldp+328,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+329,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+330,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+331,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+332,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+333,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+334,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+335,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+336,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+337,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+338,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+339,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                          << 0x18U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                            >> 8U)))),19);
            tracep->chgBit(oldp+340,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+341,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+342,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+343,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+344,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+345,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+346,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+347,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+348,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                          << 5U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          >> 0x1bU)))),19);
            tracep->chgBit(oldp+349,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+350,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+351,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+352,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+353,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+354,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+355,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+356,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+357,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                          << 0x12U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                            >> 0xeU)))),19);
            tracep->chgBit(oldp+358,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+359,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+360,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+361,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+362,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+363,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+364,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+365,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+366,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          << 0x1fU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                            >> 1U)))),19);
            tracep->chgBit(oldp+367,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+368,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+369,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+370,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+371,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+372,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+373,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+374,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+375,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          << 0xcU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                            >> 0x14U)))),19);
            tracep->chgBit(oldp+376,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+377,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+378,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+379,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+380,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+381,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+382,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+383,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+384,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                          << 0x19U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                            >> 7U)))),19);
            tracep->chgBit(oldp+385,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+386,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+387,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+388,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+389,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+390,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+391,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+392,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+393,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                          << 6U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          >> 0x1aU)))),19);
            tracep->chgBit(oldp+394,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+395,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+396,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+397,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+398,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+399,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+400,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+401,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+402,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U] 
                                          << 0x13U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                            >> 0xdU)))),19);
            tracep->chgBit(oldp+403,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1fU))));
            tracep->chgCData(oldp+404,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+405,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+406,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+407,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+408,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+409,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+410,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+411,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+412,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+413,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+414,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U])),19);
            tracep->chgBit(oldp+415,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U])));
            tracep->chgCData(oldp+416,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+417,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+418,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+419,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+420,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+421,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+422,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+423,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+424,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+425,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+426,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+427,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+428,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+429,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+430,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+431,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+432,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+433,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+434,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+435,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+436,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+437,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+438,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+439,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+440,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+441,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+442,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+443,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+444,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+445,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+446,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+447,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+448,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+449,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+450,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+451,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+452,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+453,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+454,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+455,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+456,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+457,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+458,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+459,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+460,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+461,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+462,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+463,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+464,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+465,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+466,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+467,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+468,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+469,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+470,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+471,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+472,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+473,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+474,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+475,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+476,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+477,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          << 0x1bU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                            >> 5U)))),19);
            tracep->chgBit(oldp+478,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+479,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+480,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+481,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+482,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+483,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+484,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+485,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+486,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+487,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+488,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+489,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          << 8U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                          >> 0x18U)))),19);
            tracep->chgBit(oldp+490,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+491,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+492,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+493,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+494,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+495,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+496,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+497,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+498,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                          << 0x15U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                            >> 0xbU)))),19);
            tracep->chgBit(oldp+499,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+500,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+501,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+502,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+503,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+504,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+505,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+506,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+507,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                          << 2U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          >> 0x1eU)))),19);
            tracep->chgBit(oldp+508,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+509,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+510,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+511,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+512,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+513,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+514,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+515,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+516,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                          << 0xfU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                            >> 0x11U)))),19);
            tracep->chgBit(oldp+517,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+518,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+519,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+520,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+521,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+522,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+523,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+524,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+525,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          << 0x1cU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                            >> 4U)))),19);
            tracep->chgBit(oldp+526,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+527,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+528,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+529,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+530,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+531,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+532,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+533,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+534,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          << 9U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                          >> 0x17U)))),19);
            tracep->chgBit(oldp+535,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+536,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+537,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+538,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+539,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+540,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+541,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+542,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+543,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                          << 0x16U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                            >> 0xaU)))),19);
            tracep->chgBit(oldp+544,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+545,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+546,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+547,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+548,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+549,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+550,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+551,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+552,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                          << 3U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          >> 0x1dU)))),19);
            tracep->chgBit(oldp+553,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+554,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+555,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+556,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+557,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+558,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+559,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+560,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+561,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+562,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+563,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+564,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                          << 0x10U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                            >> 0x10U)))),19);
            tracep->chgBit(oldp+565,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+566,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+567,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+568,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+569,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+570,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+571,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+572,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+573,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          << 0x1dU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                            >> 3U)))),19);
            tracep->chgBit(oldp+574,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+575,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+576,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+577,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+578,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+579,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+580,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+581,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+582,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          << 0xaU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                            >> 0x16U)))),19);
            tracep->chgBit(oldp+583,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+584,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+585,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+586,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+587,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+588,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+589,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+590,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+591,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                          << 0x17U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                            >> 9U)))),19);
            tracep->chgBit(oldp+592,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+593,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+594,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+595,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+596,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+597,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+598,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+599,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+600,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                          << 4U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          >> 0x1cU)))),19);
            tracep->chgBit(oldp+601,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+602,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+603,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+604,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+605,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+606,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+607,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+608,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+609,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                          << 0x11U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                            >> 0xfU)))),19);
            tracep->chgBit(oldp+610,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+611,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+612,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+613,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+614,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+615,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+616,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+617,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+618,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          << 0x1eU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                            >> 2U)))),19);
            tracep->chgBit(oldp+619,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+620,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+621,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+622,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+623,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+624,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+625,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+626,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+627,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          << 0xbU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                            >> 0x15U)))),19);
            tracep->chgBit(oldp+628,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+629,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+630,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+631,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+632,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+633,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+634,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+635,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+636,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+637,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+638,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+639,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                          << 0x18U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                            >> 8U)))),19);
            tracep->chgBit(oldp+640,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+641,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+642,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+643,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+644,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+645,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+646,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+647,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+648,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                          << 5U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          >> 0x1bU)))),19);
            tracep->chgBit(oldp+649,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+650,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+651,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+652,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+653,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+654,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+655,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+656,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+657,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                          << 0x12U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                            >> 0xeU)))),19);
            tracep->chgBit(oldp+658,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+659,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+660,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+661,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+662,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+663,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+664,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+665,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+666,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          << 0x1fU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                            >> 1U)))),19);
            tracep->chgBit(oldp+667,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+668,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+669,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+670,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+671,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+672,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+673,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+674,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+675,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          << 0xcU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                            >> 0x14U)))),19);
            tracep->chgBit(oldp+676,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+677,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+678,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+679,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+680,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+681,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+682,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+683,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+684,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                          << 0x19U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                            >> 7U)))),19);
            tracep->chgBit(oldp+685,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+686,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+687,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+688,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+689,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+690,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+691,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+692,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+693,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                          << 6U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          >> 0x1aU)))),19);
            tracep->chgBit(oldp+694,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+695,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+696,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+697,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+698,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+699,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+700,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+701,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+702,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U] 
                                          << 0x13U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                            >> 0xdU)))),19);
            tracep->chgBit(oldp+703,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1fU))));
            tracep->chgCData(oldp+704,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+705,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+706,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+707,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+708,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgIData(oldp+709,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U])),19);
            tracep->chgBit(oldp+710,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U])));
            tracep->chgIData(oldp+711,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__0__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+712,(vlTOPp->top__DOT__o_buf_gen__BRA__0__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+713,(vlTOPp->top__DOT__o_buf_gen__BRA__0__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+718,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+719,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 1U))));
            tracep->chgIData(oldp+720,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__1__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+721,(vlTOPp->top__DOT__o_buf_gen__BRA__1__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+722,(vlTOPp->top__DOT__o_buf_gen__BRA__1__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+727,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+728,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 2U))));
            tracep->chgIData(oldp+729,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__2__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+730,(vlTOPp->top__DOT__o_buf_gen__BRA__2__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+731,(vlTOPp->top__DOT__o_buf_gen__BRA__2__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+736,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+737,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+738,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__3__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+739,(vlTOPp->top__DOT__o_buf_gen__BRA__3__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+740,(vlTOPp->top__DOT__o_buf_gen__BRA__3__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+745,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+746,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 4U))));
            tracep->chgIData(oldp+747,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__4__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+748,(vlTOPp->top__DOT__o_buf_gen__BRA__4__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+749,(vlTOPp->top__DOT__o_buf_gen__BRA__4__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+754,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+755,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 5U))));
            tracep->chgIData(oldp+756,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__5__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+757,(vlTOPp->top__DOT__o_buf_gen__BRA__5__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+758,(vlTOPp->top__DOT__o_buf_gen__BRA__5__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+763,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+764,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 6U))));
            tracep->chgIData(oldp+765,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__6__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+766,(vlTOPp->top__DOT__o_buf_gen__BRA__6__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+767,(vlTOPp->top__DOT__o_buf_gen__BRA__6__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+772,((0x7ffffU & 
                                        (vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU] 
                                         >> 5U))),19);
            tracep->chgBit(oldp+773,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 7U))));
            tracep->chgIData(oldp+774,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__7__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+775,(vlTOPp->top__DOT__o_buf_gen__BRA__7__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+776,(vlTOPp->top__DOT__o_buf_gen__BRA__7__KET____DOT__obuf__DOT__data_r),160);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+781,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+783,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+785,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+787,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+789,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+791,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+793,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+795,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__data_r),64);
        }
        tracep->chgBit(oldp+797,(vlTOPp->clk_i));
        tracep->chgBit(oldp+798,(vlTOPp->rst_i));
        tracep->chgCData(oldp+799,(vlTOPp->addr_i),8);
        tracep->chgIData(oldp+800,(vlTOPp->data_i),32);
        tracep->chgBit(oldp+801,(vlTOPp->wr_vi));
        tracep->chgIData(oldp+802,(vlTOPp->data_o),20);
        tracep->chgCData(oldp+803,(vlTOPp->top__DOT__addr_76_r),2);
        tracep->chgCData(oldp+804,((0xffU & vlTOPp->data_i)),8);
        tracep->chgCData(oldp+805,((0x3fU & (IData)(vlTOPp->addr_i))),6);
        tracep->chgBit(oldp+806,(((3U == (3U & ((IData)(vlTOPp->addr_i) 
                                                >> 6U))) 
                                  & (IData)(vlTOPp->wr_vi))));
        tracep->chgCData(oldp+807,((7U & (IData)(vlTOPp->addr_i))),3);
        tracep->chgBit(oldp+808,(((0U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+809,(((0U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+810,(((1U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+811,(((2U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+812,(((3U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+813,(((4U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+814,(((5U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+815,(((6U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+816,(((7U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+817,(((1U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+818,(((8U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+819,(((9U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+820,(((0xaU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+821,(((0xbU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+822,(((0xcU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+823,(((0xdU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+824,(((0xeU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+825,(((0xfU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+826,(((2U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+827,(((0x10U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+828,(((0x11U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+829,(((0x12U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+830,(((0x13U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+831,(((0x14U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+832,(((0x15U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+833,(((0x16U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+834,(((0x17U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+835,(((3U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+836,(((0x18U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+837,(((0x19U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+838,(((0x1aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+839,(((0x1bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+840,(((0x1cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+841,(((0x1dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+842,(((0x1eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+843,(((0x1fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+844,(((4U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+845,(((0x20U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+846,(((0x21U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+847,(((0x22U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+848,(((0x23U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+849,(((0x24U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+850,(((0x25U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+851,(((0x26U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+852,(((0x27U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+853,(((5U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+854,(((0x28U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+855,(((0x29U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+856,(((0x2aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+857,(((0x2bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+858,(((0x2cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+859,(((0x2dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+860,(((0x2eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+861,(((0x2fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+862,(((6U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+863,(((0x30U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+864,(((0x31U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+865,(((0x32U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+866,(((0x33U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+867,(((0x34U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+868,(((0x35U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+869,(((0x36U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+870,(((0x37U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+871,(((7U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+872,(((0x38U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+873,(((0x39U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+874,(((0x3aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+875,(((0x3bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+876,(((0x3cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+877,(((0x3dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+878,(((0x3eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+879,(((0x3fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgCData(oldp+880,((7U & (IData)(vlTOPp->addr_i))),3);
        tracep->chgIData(oldp+881,((0x7ffffU & vlTOPp->data_i)),19);
        tracep->chgBit(oldp+882,(((2U == (3U & ((IData)(vlTOPp->addr_i) 
                                                >> 6U))) 
                                  & (IData)(vlTOPp->wr_vi))));
    }
}

void Vtop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
