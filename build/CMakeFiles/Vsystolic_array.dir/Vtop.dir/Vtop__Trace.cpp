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
    WData/*159:0*/ __Vtemp7[5];
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
            __Vtemp7[0U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U];
            __Vtemp7[1U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U];
            __Vtemp7[2U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U];
            __Vtemp7[3U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U];
            __Vtemp7[4U] = (0xffffffU & vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU]);
            tracep->chgWData(oldp+19,(__Vtemp7),152);
            tracep->chgCData(oldp+24,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U])),8);
            tracep->chgWData(oldp+25,(vlTOPp->top__DOT__rdata),152);
            tracep->chgWData(oldp+30,(vlTOPp->top__DOT__i1__DOT__pe_mac),1368);
            tracep->chgWData(oldp+73,(vlTOPp->top__DOT__i1__DOT__pe_mac_v),72);
            tracep->chgWData(oldp+76,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+79,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+80,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+83,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+84,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+87,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+88,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+91,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+92,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+95,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+96,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+99,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+100,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+103,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+104,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x),72);
            tracep->chgSData(oldp+107,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v),9);
            tracep->chgCData(oldp+108,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+109,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+110,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+111,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+112,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+113,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0U])),19);
            tracep->chgBit(oldp+114,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U])));
            tracep->chgCData(oldp+115,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+116,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+117,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+118,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+119,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+120,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+121,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+122,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+123,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 1U))));
            tracep->chgCData(oldp+124,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+125,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+126,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+127,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+128,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+129,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+130,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+131,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+132,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+133,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+134,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+135,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+136,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+137,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+138,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+139,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+140,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[1U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+141,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+142,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+143,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+144,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+145,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+146,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+147,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+148,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+149,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+150,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+151,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+152,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+153,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+154,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+155,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+156,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+157,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+158,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[2U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+159,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+160,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+161,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+162,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+163,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+164,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+165,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+166,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+167,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[3U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+168,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+169,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+170,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+171,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+172,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+173,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+174,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+175,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+176,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          << 0x1bU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                            >> 5U)))),19);
            tracep->chgBit(oldp+177,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+178,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+179,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+180,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+181,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+182,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+183,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+184,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+185,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+186,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+187,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+188,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          << 8U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[4U] 
                                          >> 0x18U)))),19);
            tracep->chgBit(oldp+189,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+190,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+191,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+192,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+193,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+194,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+195,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+196,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+197,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                          << 0x15U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                            >> 0xbU)))),19);
            tracep->chgBit(oldp+198,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+199,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+200,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+201,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+202,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+203,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+204,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+205,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+206,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                          << 2U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[5U] 
                                          >> 0x1eU)))),19);
            tracep->chgBit(oldp+207,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+208,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+209,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+210,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+211,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+212,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+213,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+214,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+215,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                          << 0xfU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[6U] 
                                            >> 0x11U)))),19);
            tracep->chgBit(oldp+216,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+217,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+218,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+219,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+220,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+221,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+222,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+223,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+224,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          << 0x1cU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                            >> 4U)))),19);
            tracep->chgBit(oldp+225,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+226,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+227,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+228,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+229,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+230,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+231,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+232,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+233,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          << 9U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[7U] 
                                          >> 0x17U)))),19);
            tracep->chgBit(oldp+234,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+235,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+236,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+237,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+238,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+239,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+240,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+241,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+242,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                          << 0x16U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                            >> 0xaU)))),19);
            tracep->chgBit(oldp+243,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+244,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+245,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+246,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+247,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+248,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+249,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+250,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+251,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                          << 3U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[8U] 
                                          >> 0x1dU)))),19);
            tracep->chgBit(oldp+252,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+253,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+254,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+255,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+256,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+257,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+258,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+259,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+260,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+261,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+262,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+263,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                          << 0x10U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[9U] 
                                            >> 0x10U)))),19);
            tracep->chgBit(oldp+264,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+265,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+266,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+267,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+268,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+269,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+270,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+271,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+272,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          << 0x1dU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                            >> 3U)))),19);
            tracep->chgBit(oldp+273,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+274,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+275,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+276,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+277,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+278,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+279,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+280,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+281,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          << 0xaU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU] 
                                            >> 0x16U)))),19);
            tracep->chgBit(oldp+282,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+283,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+284,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+285,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+286,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+287,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+288,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+289,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+290,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                          << 0x17U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                            >> 9U)))),19);
            tracep->chgBit(oldp+291,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+292,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+293,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+294,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+295,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+296,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+297,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+298,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+299,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                          << 4U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU] 
                                          >> 0x1cU)))),19);
            tracep->chgBit(oldp+300,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+301,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+302,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+303,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+304,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+305,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+306,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+307,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+308,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                          << 0x11U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU] 
                                            >> 0xfU)))),19);
            tracep->chgBit(oldp+309,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+310,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+311,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+312,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+313,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+314,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+315,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+316,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+317,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          << 0x1eU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                            >> 2U)))),19);
            tracep->chgBit(oldp+318,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+319,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+320,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+321,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+322,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+323,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+324,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+325,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+326,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          << 0xbU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU] 
                                            >> 0x15U)))),19);
            tracep->chgBit(oldp+327,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+328,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+329,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+330,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+331,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+332,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+333,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+334,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+335,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+336,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+337,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+338,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                          << 0x18U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                            >> 8U)))),19);
            tracep->chgBit(oldp+339,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+340,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+341,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+342,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+343,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+344,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+345,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+346,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+347,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                          << 5U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU] 
                                          >> 0x1bU)))),19);
            tracep->chgBit(oldp+348,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+349,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+350,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+351,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+352,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+353,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+354,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+355,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+356,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                          << 0x12U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU] 
                                            >> 0xeU)))),19);
            tracep->chgBit(oldp+357,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+358,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+359,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+360,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+361,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+362,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+363,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+364,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+365,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          << 0x1fU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                            >> 1U)))),19);
            tracep->chgBit(oldp+366,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+367,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+368,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+369,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+370,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+371,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+372,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+373,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+374,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          << 0xcU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U] 
                                            >> 0x14U)))),19);
            tracep->chgBit(oldp+375,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+376,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+377,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+378,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+379,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+380,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+381,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+382,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+383,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                          << 0x19U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                            >> 7U)))),19);
            tracep->chgBit(oldp+384,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+385,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+386,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+387,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+388,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+389,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+390,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+391,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+392,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                          << 6U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U] 
                                          >> 0x1aU)))),19);
            tracep->chgBit(oldp+393,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+394,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+395,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+396,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+397,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+398,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+399,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+400,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+401,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U] 
                                          << 0x13U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U] 
                                            >> 0xdU)))),19);
            tracep->chgBit(oldp+402,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1fU))));
            tracep->chgCData(oldp+403,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+404,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+405,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+406,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+407,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+408,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+409,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+410,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+411,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+412,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+413,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U])),19);
            tracep->chgBit(oldp+414,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U])));
            tracep->chgCData(oldp+415,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+416,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+417,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+418,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+419,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+420,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+421,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+422,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+423,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+424,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+425,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+426,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+427,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+428,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+429,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+430,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+431,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+432,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+433,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+434,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+435,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+436,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+437,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+438,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+439,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+440,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+441,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+442,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+443,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+444,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+445,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+446,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+447,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+448,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+449,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+450,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+451,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+452,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+453,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+454,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+455,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+456,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+457,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+458,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+459,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+460,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+461,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+462,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+463,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+464,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+465,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+466,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+467,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+468,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+469,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+470,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+471,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+472,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+473,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+474,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+475,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+476,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          << 0x1bU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                            >> 5U)))),19);
            tracep->chgBit(oldp+477,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+478,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+479,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+480,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+481,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+482,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+483,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+484,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+485,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+486,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+487,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+488,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          << 8U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U] 
                                          >> 0x18U)))),19);
            tracep->chgBit(oldp+489,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+490,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+491,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+492,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+493,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+494,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+495,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+496,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+497,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                          << 0x15U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                            >> 0xbU)))),19);
            tracep->chgBit(oldp+498,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+499,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+500,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+501,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+502,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+503,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+504,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+505,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+506,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                          << 2U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U] 
                                          >> 0x1eU)))),19);
            tracep->chgBit(oldp+507,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+508,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+509,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+510,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+511,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+512,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+513,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+514,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+515,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                          << 0xfU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U] 
                                            >> 0x11U)))),19);
            tracep->chgBit(oldp+516,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+517,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+518,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+519,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+520,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+521,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+522,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+523,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+524,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          << 0x1cU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                            >> 4U)))),19);
            tracep->chgBit(oldp+525,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+526,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+527,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+528,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+529,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+530,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+531,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+532,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+533,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          << 9U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU] 
                                          >> 0x17U)))),19);
            tracep->chgBit(oldp+534,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+535,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+536,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+537,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+538,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+539,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+540,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+541,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+542,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                          << 0x16U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                            >> 0xaU)))),19);
            tracep->chgBit(oldp+543,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+544,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+545,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+546,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+547,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+548,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+549,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+550,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+551,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                          << 3U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU] 
                                          >> 0x1dU)))),19);
            tracep->chgBit(oldp+552,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+553,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+554,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+555,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+556,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+557,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+558,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+559,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+560,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+561,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+562,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+563,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                          << 0x10U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU] 
                                            >> 0x10U)))),19);
            tracep->chgBit(oldp+564,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+565,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+566,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+567,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+568,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+569,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+570,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+571,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+572,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          << 0x1dU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                            >> 3U)))),19);
            tracep->chgBit(oldp+573,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+574,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+575,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+576,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+577,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+578,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+579,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+580,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+581,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          << 0xaU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU] 
                                            >> 0x16U)))),19);
            tracep->chgBit(oldp+582,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+583,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+584,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+585,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+586,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+587,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+588,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+589,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+590,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                          << 0x17U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                            >> 9U)))),19);
            tracep->chgBit(oldp+591,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+592,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+593,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+594,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+595,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+596,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+597,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+598,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+599,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                          << 4U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU] 
                                          >> 0x1cU)))),19);
            tracep->chgBit(oldp+600,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+601,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+602,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+603,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+604,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+605,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+606,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+607,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+608,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                          << 0x11U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU] 
                                            >> 0xfU)))),19);
            tracep->chgBit(oldp+609,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+610,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+611,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+612,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+613,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+614,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+615,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+616,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+617,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          << 0x1eU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                            >> 2U)))),19);
            tracep->chgBit(oldp+618,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+619,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+620,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+621,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+622,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+623,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+624,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+625,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+626,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          << 0xbU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U] 
                                            >> 0x15U)))),19);
            tracep->chgBit(oldp+627,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+628,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+629,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+630,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+631,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+632,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+633,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__rbuf__d_o),8);
            tracep->chgBit(oldp+634,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+635,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgCData(oldp+636,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U])),8);
            tracep->chgBit(oldp+637,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+638,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                          << 0x18U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                            >> 8U)))),19);
            tracep->chgBit(oldp+639,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+640,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+641,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+642,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+643,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+644,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+645,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+646,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+647,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                          << 5U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U] 
                                          >> 0x1bU)))),19);
            tracep->chgBit(oldp+648,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+649,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+650,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+651,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+652,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+653,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+654,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+655,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+656,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                          << 0x12U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U] 
                                            >> 0xeU)))),19);
            tracep->chgBit(oldp+657,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+658,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+659,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+660,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+661,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+662,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+663,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+664,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+665,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          << 0x1fU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                            >> 1U)))),19);
            tracep->chgBit(oldp+666,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+667,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+668,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+669,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+670,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+671,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+672,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U])),8);
            tracep->chgBit(oldp+673,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+674,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          << 0xcU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U] 
                                            >> 0x14U)))),19);
            tracep->chgBit(oldp+675,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+676,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+677,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+678,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+679,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+680,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+681,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 8U)))),8);
            tracep->chgBit(oldp+682,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+683,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                          << 0x19U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                            >> 7U)))),19);
            tracep->chgBit(oldp+684,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+685,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+686,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+687,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+688,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+689,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+690,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+691,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+692,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                          << 6U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U] 
                                          >> 0x1aU)))),19);
            tracep->chgBit(oldp+693,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+694,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+695,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+696,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+697,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+698,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),8);
            tracep->chgCData(oldp+699,((0xffU & ((vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgBit(oldp+700,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+701,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U] 
                                          << 0x13U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U] 
                                            >> 0xdU)))),19);
            tracep->chgBit(oldp+702,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1fU))));
            tracep->chgCData(oldp+703,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),8);
            tracep->chgBit(oldp+704,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+705,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),19);
            tracep->chgBit(oldp+706,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgCData(oldp+707,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),8);
            tracep->chgIData(oldp+708,((0x7ffffU & 
                                        vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U])),19);
            tracep->chgBit(oldp+709,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U])));
            tracep->chgIData(oldp+710,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__0__KET____DOT__obuf__rdata_o),19);
            tracep->chgCData(oldp+711,(vlTOPp->top__DOT__o_buf_gen__BRA__0__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+712,(vlTOPp->top__DOT__o_buf_gen__BRA__0__KET____DOT__obuf__DOT__data_r),152);
            tracep->chgIData(oldp+717,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                          << 0xdU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U] 
                                            >> 0x13U)))),19);
            tracep->chgBit(oldp+718,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 1U))));
            tracep->chgIData(oldp+719,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__1__KET____DOT__obuf__rdata_o),19);
            tracep->chgCData(oldp+720,(vlTOPp->top__DOT__o_buf_gen__BRA__1__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+721,(vlTOPp->top__DOT__o_buf_gen__BRA__1__KET____DOT__obuf__DOT__data_r),152);
            tracep->chgIData(oldp+726,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          << 0x1aU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                            >> 6U)))),19);
            tracep->chgBit(oldp+727,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 2U))));
            tracep->chgIData(oldp+728,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__2__KET____DOT__obuf__rdata_o),19);
            tracep->chgCData(oldp+729,(vlTOPp->top__DOT__o_buf_gen__BRA__2__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+730,(vlTOPp->top__DOT__o_buf_gen__BRA__2__KET____DOT__obuf__DOT__data_r),152);
            tracep->chgIData(oldp+735,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          << 7U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U] 
                                          >> 0x19U)))),19);
            tracep->chgBit(oldp+736,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+737,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__3__KET____DOT__obuf__rdata_o),19);
            tracep->chgCData(oldp+738,(vlTOPp->top__DOT__o_buf_gen__BRA__3__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+739,(vlTOPp->top__DOT__o_buf_gen__BRA__3__KET____DOT__obuf__DOT__data_r),152);
            tracep->chgIData(oldp+744,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                          << 0x14U) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                            >> 0xcU)))),19);
            tracep->chgBit(oldp+745,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 4U))));
            tracep->chgIData(oldp+746,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__4__KET____DOT__obuf__rdata_o),19);
            tracep->chgCData(oldp+747,(vlTOPp->top__DOT__o_buf_gen__BRA__4__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+748,(vlTOPp->top__DOT__o_buf_gen__BRA__4__KET____DOT__obuf__DOT__data_r),152);
            tracep->chgIData(oldp+753,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                          << 1U) | 
                                         (vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U] 
                                          >> 0x1fU)))),19);
            tracep->chgBit(oldp+754,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 5U))));
            tracep->chgIData(oldp+755,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__5__KET____DOT__obuf__rdata_o),19);
            tracep->chgCData(oldp+756,(vlTOPp->top__DOT__o_buf_gen__BRA__5__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+757,(vlTOPp->top__DOT__o_buf_gen__BRA__5__KET____DOT__obuf__DOT__data_r),152);
            tracep->chgIData(oldp+762,((0x7ffffU & 
                                        ((vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU] 
                                          << 0xeU) 
                                         | (vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U] 
                                            >> 0x12U)))),19);
            tracep->chgBit(oldp+763,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 6U))));
            tracep->chgIData(oldp+764,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__6__KET____DOT__obuf__rdata_o),19);
            tracep->chgCData(oldp+765,(vlTOPp->top__DOT__o_buf_gen__BRA__6__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+766,(vlTOPp->top__DOT__o_buf_gen__BRA__6__KET____DOT__obuf__DOT__data_r),152);
            tracep->chgIData(oldp+771,((0x7ffffU & 
                                        (vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU] 
                                         >> 5U))),19);
            tracep->chgBit(oldp+772,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 7U))));
            tracep->chgIData(oldp+773,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__7__KET____DOT__obuf__rdata_o),19);
            tracep->chgCData(oldp+774,(vlTOPp->top__DOT__o_buf_gen__BRA__7__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+775,(vlTOPp->top__DOT__o_buf_gen__BRA__7__KET____DOT__obuf__DOT__data_r),152);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+780,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+782,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+784,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+786,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+788,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+790,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+792,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__data_r),64);
            tracep->chgQData(oldp+794,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__data_r),64);
        }
        tracep->chgBit(oldp+796,(vlTOPp->clk_i));
        tracep->chgBit(oldp+797,(vlTOPp->rst_i));
        tracep->chgCData(oldp+798,(vlTOPp->addr_i),8);
        tracep->chgCData(oldp+799,(vlTOPp->data_i),8);
        tracep->chgBit(oldp+800,(vlTOPp->wr_vi));
        tracep->chgIData(oldp+801,(vlTOPp->data_o),19);
        tracep->chgCData(oldp+802,((0x3fU & (IData)(vlTOPp->addr_i))),6);
        tracep->chgBit(oldp+803,(((3U == (3U & ((IData)(vlTOPp->addr_i) 
                                                >> 6U))) 
                                  & (IData)(vlTOPp->wr_vi))));
        tracep->chgCData(oldp+804,((7U & (IData)(vlTOPp->addr_i))),3);
        tracep->chgBit(oldp+805,(((0U == (0xfU & ((IData)(vlTOPp->addr_i) 
                                                  >> 2U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+806,(((0U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+807,(((1U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+808,(((2U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+809,(((3U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+810,(((4U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+811,(((5U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+812,(((6U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+813,(((7U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+814,(((1U == (0xfU & ((IData)(vlTOPp->addr_i) 
                                                  >> 2U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+815,(((8U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+816,(((9U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+817,(((0xaU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+818,(((0xbU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+819,(((0xcU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+820,(((0xdU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+821,(((0xeU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+822,(((0xfU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+823,(((2U == (0xfU & ((IData)(vlTOPp->addr_i) 
                                                  >> 2U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+824,(((0x10U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+825,(((0x11U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+826,(((0x12U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+827,(((0x13U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+828,(((0x14U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+829,(((0x15U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+830,(((0x16U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+831,(((0x17U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+832,(((3U == (0xfU & ((IData)(vlTOPp->addr_i) 
                                                  >> 2U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+833,(((0x18U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+834,(((0x19U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+835,(((0x1aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+836,(((0x1bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+837,(((0x1cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+838,(((0x1dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+839,(((0x1eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+840,(((0x1fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+841,(((4U == (0xfU & ((IData)(vlTOPp->addr_i) 
                                                  >> 2U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+842,(((0x20U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+843,(((0x21U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+844,(((0x22U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+845,(((0x23U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+846,(((0x24U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+847,(((0x25U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+848,(((0x26U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+849,(((0x27U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+850,(((5U == (0xfU & ((IData)(vlTOPp->addr_i) 
                                                  >> 2U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+851,(((0x28U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+852,(((0x29U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+853,(((0x2aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+854,(((0x2bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+855,(((0x2cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+856,(((0x2dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+857,(((0x2eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+858,(((0x2fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+859,(((6U == (0xfU & ((IData)(vlTOPp->addr_i) 
                                                  >> 2U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+860,(((0x30U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+861,(((0x31U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+862,(((0x32U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+863,(((0x33U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+864,(((0x34U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+865,(((0x35U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+866,(((0x36U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+867,(((0x37U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+868,(((7U == (0xfU & ((IData)(vlTOPp->addr_i) 
                                                  >> 2U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+869,(((0x38U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+870,(((0x39U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+871,(((0x3aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+872,(((0x3bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+873,(((0x3cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+874,(((0x3dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+875,(((0x3eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+876,(((0x3fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgCData(oldp+877,((7U & (IData)(vlTOPp->addr_i))),3);
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
