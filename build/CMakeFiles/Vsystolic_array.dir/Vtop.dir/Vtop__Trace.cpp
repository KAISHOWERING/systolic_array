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
            tracep->chgCData(oldp+31,(vlTOPp->top__DOT__addr_76_r),2);
            tracep->chgWData(oldp+32,(vlTOPp->top__DOT__i1__DOT__pe_mac),1368);
            tracep->chgWData(oldp+75,(vlTOPp->top__DOT__i1__DOT__pe_mac_v),72);
            tracep->chgWData(oldp+78,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+81,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+82,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+85,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+86,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+89,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+90,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+93,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+94,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+97,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+98,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+101,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+102,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+105,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+106,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+109,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v),9);
            tracep->chgCData(oldp+110,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+111,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+112,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+113,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+114,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+115,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0U])),19);
            tracep->chgBit(oldp+116,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U])));
            tracep->chgCData(oldp+117,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+118,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+119,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+120,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+121,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+122,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+123,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+124,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+125,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 1U))));
            tracep->chgCData(oldp+126,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+127,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+128,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+129,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+130,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+131,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+132,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+133,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+134,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+135,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+136,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+137,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+138,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+139,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+140,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+141,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+142,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+143,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+144,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+145,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+146,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+147,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+148,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+149,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+150,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+151,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+152,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+153,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+154,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+155,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+156,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+157,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+158,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+159,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+160,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+161,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+162,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+163,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+164,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+165,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+166,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+167,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+168,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+169,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+170,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+171,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+172,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+173,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+174,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+175,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+176,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+177,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+178,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          << 0x1bU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                            >> 5U)))),19);
            tracep->chgBit(oldp+179,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+180,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+181,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+182,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+183,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+184,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+185,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+186,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+187,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+188,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+189,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+190,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          << 8U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                          >> 0x18U)))),19);
            tracep->chgBit(oldp+191,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+192,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+193,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+194,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+195,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+196,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+197,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+198,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+199,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                          << 0x15U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                            >> 0xbU)))),19);
            tracep->chgBit(oldp+200,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+201,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+202,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+203,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+204,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+205,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+206,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+207,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+208,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                          << 2U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          >> 0x1eU)))),19);
            tracep->chgBit(oldp+209,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+210,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+211,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+212,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+213,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+214,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+215,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+216,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+217,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                          << 0xfU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                            >> 0x11U)))),19);
            tracep->chgBit(oldp+218,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+219,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+220,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+221,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+222,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+223,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+224,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+225,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+226,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          << 0x1cU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                            >> 4U)))),19);
            tracep->chgBit(oldp+227,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+228,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+229,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+230,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+231,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+232,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+233,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+234,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+235,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          << 9U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                          >> 0x17U)))),19);
            tracep->chgBit(oldp+236,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+237,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+238,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+239,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+240,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+241,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+242,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+243,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+244,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                          << 0x16U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                            >> 0xaU)))),19);
            tracep->chgBit(oldp+245,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+246,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+247,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+248,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+249,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+250,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+251,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+252,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+253,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                          << 3U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          >> 0x1dU)))),19);
            tracep->chgBit(oldp+254,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+255,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+256,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+257,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+258,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+259,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+260,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+261,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+262,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+263,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+264,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+265,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                          << 0x10U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                            >> 0x10U)))),19);
            tracep->chgBit(oldp+266,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+267,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+268,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+269,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+270,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+271,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+272,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+273,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+274,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          << 0x1dU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                            >> 3U)))),19);
            tracep->chgBit(oldp+275,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+276,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+277,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+278,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+279,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+280,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+281,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+282,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+283,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          << 0xaU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                            >> 0x16U)))),19);
            tracep->chgBit(oldp+284,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+285,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+286,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+287,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+288,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+289,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+290,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+291,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+292,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                          << 0x17U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                            >> 9U)))),19);
            tracep->chgBit(oldp+293,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+294,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+295,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+296,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+297,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+298,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+299,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+300,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+301,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                          << 4U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          >> 0x1cU)))),19);
            tracep->chgBit(oldp+302,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+303,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+304,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+305,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+306,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+307,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+308,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+309,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+310,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                          << 0x11U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                            >> 0xfU)))),19);
            tracep->chgBit(oldp+311,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+312,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+313,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+314,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+315,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+316,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+317,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+318,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+319,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          << 0x1eU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                            >> 2U)))),19);
            tracep->chgBit(oldp+320,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+321,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+322,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+323,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+324,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+325,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+326,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+327,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+328,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          << 0xbU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                            >> 0x15U)))),19);
            tracep->chgBit(oldp+329,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+330,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+331,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+332,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+333,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+334,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+335,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+336,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+337,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+338,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+339,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+340,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                          << 0x18U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                            >> 8U)))),19);
            tracep->chgBit(oldp+341,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+342,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+343,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+344,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+345,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+346,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+347,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+348,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+349,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                          << 5U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          >> 0x1bU)))),19);
            tracep->chgBit(oldp+350,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+351,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+352,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+353,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+354,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+355,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+356,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+357,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+358,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                          << 0x12U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                            >> 0xeU)))),19);
            tracep->chgBit(oldp+359,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+360,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+361,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+362,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+363,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+364,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+365,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+366,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+367,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          << 0x1fU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                            >> 1U)))),19);
            tracep->chgBit(oldp+368,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+369,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+370,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+371,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+372,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+373,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+374,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+375,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+376,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          << 0xcU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                            >> 0x14U)))),19);
            tracep->chgBit(oldp+377,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+378,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+379,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+380,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+381,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+382,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+383,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+384,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+385,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                          << 0x19U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                            >> 7U)))),19);
            tracep->chgBit(oldp+386,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+387,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+388,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+389,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+390,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+391,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+392,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+393,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+394,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                          << 6U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          >> 0x1aU)))),19);
            tracep->chgBit(oldp+395,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+396,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+397,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+398,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+399,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+400,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+401,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+402,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+403,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U] 
                                          << 0x13U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                            >> 0xdU)))),19);
            tracep->chgBit(oldp+404,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1fU))));
            tracep->chgCData(oldp+405,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+406,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+407,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+408,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+409,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+410,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+411,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+412,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+413,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+414,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+415,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U])),19);
            tracep->chgBit(oldp+416,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U])));
            tracep->chgCData(oldp+417,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+418,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+419,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+420,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+421,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+422,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+423,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+424,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+425,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+426,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+427,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+428,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+429,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+430,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+431,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+432,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+433,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+434,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+435,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+436,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+437,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+438,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+439,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+440,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+441,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+442,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+443,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+444,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+445,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+446,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+447,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+448,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+449,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+450,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+451,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+452,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+453,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+454,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+455,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+456,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+457,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+458,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+459,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+460,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+461,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+462,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+463,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+464,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+465,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+466,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+467,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+468,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+469,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+470,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+471,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+472,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+473,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+474,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+475,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+476,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+477,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+478,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          << 0x1bU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                            >> 5U)))),19);
            tracep->chgBit(oldp+479,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+480,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+481,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+482,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+483,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+484,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+485,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+486,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+487,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+488,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+489,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+490,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          << 8U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                          >> 0x18U)))),19);
            tracep->chgBit(oldp+491,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+492,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+493,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+494,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+495,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+496,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+497,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+498,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+499,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                          << 0x15U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                            >> 0xbU)))),19);
            tracep->chgBit(oldp+500,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+501,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+502,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+503,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+504,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+505,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+506,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+507,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+508,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                          << 2U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          >> 0x1eU)))),19);
            tracep->chgBit(oldp+509,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+510,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+511,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+512,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+513,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+514,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+515,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+516,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+517,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                          << 0xfU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                            >> 0x11U)))),19);
            tracep->chgBit(oldp+518,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+519,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+520,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+521,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+522,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+523,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+524,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+525,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+526,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          << 0x1cU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                            >> 4U)))),19);
            tracep->chgBit(oldp+527,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+528,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+529,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+530,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+531,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+532,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+533,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+534,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+535,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          << 9U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                          >> 0x17U)))),19);
            tracep->chgBit(oldp+536,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+537,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+538,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+539,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+540,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+541,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+542,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+543,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+544,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                          << 0x16U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                            >> 0xaU)))),19);
            tracep->chgBit(oldp+545,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+546,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+547,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+548,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+549,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+550,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+551,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+552,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+553,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                          << 3U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          >> 0x1dU)))),19);
            tracep->chgBit(oldp+554,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+555,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+556,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+557,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+558,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+559,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+560,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+561,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+562,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+563,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+564,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+565,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                          << 0x10U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                            >> 0x10U)))),19);
            tracep->chgBit(oldp+566,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+567,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+568,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+569,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+570,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+571,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+572,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+573,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+574,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          << 0x1dU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                            >> 3U)))),19);
            tracep->chgBit(oldp+575,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+576,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+577,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+578,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+579,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+580,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+581,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+582,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+583,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          << 0xaU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                            >> 0x16U)))),19);
            tracep->chgBit(oldp+584,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+585,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+586,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+587,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+588,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+589,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+590,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+591,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+592,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                          << 0x17U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                            >> 9U)))),19);
            tracep->chgBit(oldp+593,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+594,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+595,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+596,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+597,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+598,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+599,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+600,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+601,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                          << 4U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          >> 0x1cU)))),19);
            tracep->chgBit(oldp+602,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+603,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+604,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+605,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+606,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+607,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+608,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+609,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+610,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                          << 0x11U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                            >> 0xfU)))),19);
            tracep->chgBit(oldp+611,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+612,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+613,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+614,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+615,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+616,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+617,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+618,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+619,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          << 0x1eU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                            >> 2U)))),19);
            tracep->chgBit(oldp+620,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+621,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+622,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+623,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+624,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+625,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+626,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+627,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+628,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          << 0xbU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                            >> 0x15U)))),19);
            tracep->chgBit(oldp+629,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+630,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+631,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+632,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+633,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+634,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+635,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+636,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+637,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+638,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+639,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+640,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                          << 0x18U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                            >> 8U)))),19);
            tracep->chgBit(oldp+641,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+642,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+643,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+644,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+645,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+646,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+647,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+648,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+649,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                          << 5U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          >> 0x1bU)))),19);
            tracep->chgBit(oldp+650,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+651,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+652,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+653,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+654,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+655,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+656,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+657,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+658,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                          << 0x12U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                            >> 0xeU)))),19);
            tracep->chgBit(oldp+659,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+660,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+661,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+662,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+663,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+664,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+665,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+666,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+667,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          << 0x1fU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                            >> 1U)))),19);
            tracep->chgBit(oldp+668,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+669,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+670,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+671,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+672,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+673,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+674,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+675,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+676,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          << 0xcU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                            >> 0x14U)))),19);
            tracep->chgBit(oldp+677,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+678,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+679,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+680,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+681,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+682,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+683,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+684,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+685,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                          << 0x19U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                            >> 7U)))),19);
            tracep->chgBit(oldp+686,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+687,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+688,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+689,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+690,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+691,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+692,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+693,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+694,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                          << 6U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          >> 0x1aU)))),19);
            tracep->chgBit(oldp+695,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+696,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+697,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+698,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+699,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+700,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+701,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+702,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+703,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U] 
                                          << 0x13U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                            >> 0xdU)))),19);
            tracep->chgBit(oldp+704,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1fU))));
            tracep->chgCData(oldp+705,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+706,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+707,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+708,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+709,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgIData(oldp+710,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U])),19);
            tracep->chgBit(oldp+711,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U])));
            tracep->chgIData(oldp+712,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__0__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+713,(vlTOPp->top__DOT__o_buf_gen__BRA__0__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+714,(vlTOPp->top__DOT__o_buf_gen__BRA__0__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+719,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+720,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 1U))));
            tracep->chgIData(oldp+721,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__1__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+722,(vlTOPp->top__DOT__o_buf_gen__BRA__1__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+723,(vlTOPp->top__DOT__o_buf_gen__BRA__1__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+728,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+729,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 2U))));
            tracep->chgIData(oldp+730,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__2__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+731,(vlTOPp->top__DOT__o_buf_gen__BRA__2__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+732,(vlTOPp->top__DOT__o_buf_gen__BRA__2__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+737,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+738,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+739,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__3__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+740,(vlTOPp->top__DOT__o_buf_gen__BRA__3__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+741,(vlTOPp->top__DOT__o_buf_gen__BRA__3__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+746,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+747,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 4U))));
            tracep->chgIData(oldp+748,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__4__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+749,(vlTOPp->top__DOT__o_buf_gen__BRA__4__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+750,(vlTOPp->top__DOT__o_buf_gen__BRA__4__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+755,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+756,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 5U))));
            tracep->chgIData(oldp+757,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__5__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+758,(vlTOPp->top__DOT__o_buf_gen__BRA__5__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+759,(vlTOPp->top__DOT__o_buf_gen__BRA__5__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+764,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+765,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 6U))));
            tracep->chgIData(oldp+766,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__6__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+767,(vlTOPp->top__DOT__o_buf_gen__BRA__6__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+768,(vlTOPp->top__DOT__o_buf_gen__BRA__6__KET____DOT__obuf__DOT__data_r),160);
            tracep->chgIData(oldp+773,((0x7ffffU & 
                                        (vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU] 
                                         >> 5U))),19);
            tracep->chgBit(oldp+774,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 7U))));
            tracep->chgIData(oldp+775,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__7__KET____DOT__obuf__rdata_o),20);
            tracep->chgCData(oldp+776,(vlTOPp->top__DOT__o_buf_gen__BRA__7__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+777,(vlTOPp->top__DOT__o_buf_gen__BRA__7__KET____DOT__obuf__DOT__data_r),160);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+782,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+784,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+786,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+788,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+790,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+792,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+794,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+796,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__data_r),64);
        }
        tracep->chgBit(oldp+798,(vlTOPp->clk_i));
        tracep->chgBit(oldp+799,(vlTOPp->rst_i));
        tracep->chgCData(oldp+800,(vlTOPp->addr_i),8);
        tracep->chgIData(oldp+801,(vlTOPp->data_i),32);
        tracep->chgBit(oldp+802,(vlTOPp->wr_vi));
        tracep->chgIData(oldp+803,(vlTOPp->data_o),20);
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
