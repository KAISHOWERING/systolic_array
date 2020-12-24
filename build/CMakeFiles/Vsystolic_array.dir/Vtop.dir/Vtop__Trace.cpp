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
    WData/*255:0*/ __Vtemp12[8];
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
            __Vtemp12[0U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x40U];
            __Vtemp12[1U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x41U];
            __Vtemp12[2U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x42U];
            __Vtemp12[3U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x43U];
            __Vtemp12[4U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x44U];
            __Vtemp12[5U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x45U];
            __Vtemp12[6U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x46U];
            __Vtemp12[7U] = vlTOPp->top__DOT__i1__DOT__pe_mac[0x47U];
            tracep->chgWData(oldp+19,(__Vtemp12),256);
            tracep->chgCData(oldp+27,((0xffU & vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U])),8);
            tracep->chgCData(oldp+28,(vlTOPp->top__DOT__cnt_24_r),6);
            tracep->chgWData(oldp+29,(vlTOPp->top__DOT__rdata),256);
            tracep->chgWData(oldp+37,(vlTOPp->top__DOT__i1__DOT__pe_mac),2304);
            tracep->chgWData(oldp+109,(vlTOPp->top__DOT__i1__DOT__pe_mac_v),72);
            tracep->chgWData(oldp+112,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x),81);
            tracep->chgSData(oldp+115,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+116,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x),81);
            tracep->chgSData(oldp+119,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+120,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x),81);
            tracep->chgSData(oldp+123,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+124,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x),81);
            tracep->chgSData(oldp+127,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+128,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x),81);
            tracep->chgSData(oldp+131,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+132,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x),81);
            tracep->chgSData(oldp+135,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+136,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x),81);
            tracep->chgSData(oldp+139,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v),9);
            tracep->chgWData(oldp+140,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x),81);
            tracep->chgSData(oldp+143,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v),9);
            tracep->chgSData(oldp+144,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__rbuf__d_o),9);
            tracep->chgBit(oldp+145,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+146,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgSData(oldp+147,((0x1ffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U])),9);
            tracep->chgBit(oldp+148,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+149,(vlTOPp->top__DOT__i1__DOT__pe_mac[0U]),32);
            tracep->chgBit(oldp+150,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U])));
            tracep->chgSData(oldp+151,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+152,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+153,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+154,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+155,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+156,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                     >> 9U)))),9);
            tracep->chgBit(oldp+157,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+158,(vlTOPp->top__DOT__i1__DOT__pe_mac[1U]),32);
            tracep->chgBit(oldp+159,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 1U))));
            tracep->chgSData(oldp+160,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+161,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+162,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+163,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+164,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+165,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                     >> 0x12U)))),9);
            tracep->chgBit(oldp+166,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+167,(vlTOPp->top__DOT__i1__DOT__pe_mac[2U]),32);
            tracep->chgBit(oldp+168,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 2U))));
            tracep->chgSData(oldp+169,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+170,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+171,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+172,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+173,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+174,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                   << 5U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[0U] 
                                                     >> 0x1bU)))),9);
            tracep->chgBit(oldp+175,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+176,(vlTOPp->top__DOT__i1__DOT__pe_mac[3U]),32);
            tracep->chgBit(oldp+177,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 3U))));
            tracep->chgSData(oldp+178,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+179,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+180,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+181,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+182,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+183,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                     >> 4U)))),9);
            tracep->chgBit(oldp+184,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+185,(vlTOPp->top__DOT__i1__DOT__pe_mac[4U]),32);
            tracep->chgBit(oldp+186,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 4U))));
            tracep->chgSData(oldp+187,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+188,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+189,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+190,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+191,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+192,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                     >> 0xdU)))),9);
            tracep->chgBit(oldp+193,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+194,(vlTOPp->top__DOT__i1__DOT__pe_mac[5U]),32);
            tracep->chgBit(oldp+195,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 5U))));
            tracep->chgSData(oldp+196,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+197,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+198,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+199,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+200,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+201,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                     >> 0x16U)))),9);
            tracep->chgBit(oldp+202,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+203,(vlTOPp->top__DOT__i1__DOT__pe_mac[6U]),32);
            tracep->chgBit(oldp+204,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 6U))));
            tracep->chgSData(oldp+205,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+206,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+207,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+208,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+209,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+210,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x[1U] 
                                                     >> 0x1fU)))),9);
            tracep->chgBit(oldp+211,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+212,(vlTOPp->top__DOT__i1__DOT__pe_mac[7U]),32);
            tracep->chgBit(oldp+213,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 7U))));
            tracep->chgSData(oldp+214,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+215,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+216,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+217,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+218,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+219,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__rbuf__d_o),9);
            tracep->chgBit(oldp+220,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+221,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgSData(oldp+222,((0x1ffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U])),9);
            tracep->chgBit(oldp+223,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+224,(vlTOPp->top__DOT__i1__DOT__pe_mac[8U]),32);
            tracep->chgBit(oldp+225,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 8U))));
            tracep->chgSData(oldp+226,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+227,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+228,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+229,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+230,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+231,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                     >> 9U)))),9);
            tracep->chgBit(oldp+232,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+233,(vlTOPp->top__DOT__i1__DOT__pe_mac[9U]),32);
            tracep->chgBit(oldp+234,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 9U))));
            tracep->chgSData(oldp+235,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+236,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+237,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+238,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+239,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+240,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                     >> 0x12U)))),9);
            tracep->chgBit(oldp+241,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+242,(vlTOPp->top__DOT__i1__DOT__pe_mac[0xaU]),32);
            tracep->chgBit(oldp+243,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xaU))));
            tracep->chgSData(oldp+244,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+245,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+246,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+247,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+248,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+249,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                   << 5U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[0U] 
                                                     >> 0x1bU)))),9);
            tracep->chgBit(oldp+250,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+251,(vlTOPp->top__DOT__i1__DOT__pe_mac[0xbU]),32);
            tracep->chgBit(oldp+252,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xbU))));
            tracep->chgSData(oldp+253,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+254,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+255,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+256,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+257,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+258,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                     >> 4U)))),9);
            tracep->chgBit(oldp+259,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+260,(vlTOPp->top__DOT__i1__DOT__pe_mac[0xcU]),32);
            tracep->chgBit(oldp+261,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+262,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+263,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+264,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+265,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+266,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+267,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                     >> 0xdU)))),9);
            tracep->chgBit(oldp+268,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+269,(vlTOPp->top__DOT__i1__DOT__pe_mac[0xdU]),32);
            tracep->chgBit(oldp+270,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xdU))));
            tracep->chgSData(oldp+271,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+272,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+273,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+274,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+275,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+276,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                     >> 0x16U)))),9);
            tracep->chgBit(oldp+277,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+278,(vlTOPp->top__DOT__i1__DOT__pe_mac[0xeU]),32);
            tracep->chgBit(oldp+279,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xeU))));
            tracep->chgSData(oldp+280,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+281,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+282,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+283,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+284,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+285,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x[1U] 
                                                     >> 0x1fU)))),9);
            tracep->chgBit(oldp+286,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+287,(vlTOPp->top__DOT__i1__DOT__pe_mac[0xfU]),32);
            tracep->chgBit(oldp+288,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0xfU))));
            tracep->chgSData(oldp+289,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+290,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+291,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+292,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+293,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+294,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__rbuf__d_o),9);
            tracep->chgBit(oldp+295,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+296,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgSData(oldp+297,((0x1ffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U])),9);
            tracep->chgBit(oldp+298,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+299,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x10U]),32);
            tracep->chgBit(oldp+300,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x10U))));
            tracep->chgSData(oldp+301,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+302,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+303,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+304,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+305,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+306,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                     >> 9U)))),9);
            tracep->chgBit(oldp+307,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+308,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x11U]),32);
            tracep->chgBit(oldp+309,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x11U))));
            tracep->chgSData(oldp+310,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+311,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+312,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+313,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+314,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+315,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                     >> 0x12U)))),9);
            tracep->chgBit(oldp+316,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+317,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x12U]),32);
            tracep->chgBit(oldp+318,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x12U))));
            tracep->chgSData(oldp+319,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+320,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+321,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+322,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+323,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+324,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                   << 5U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[0U] 
                                                     >> 0x1bU)))),9);
            tracep->chgBit(oldp+325,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+326,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x13U]),32);
            tracep->chgBit(oldp+327,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x13U))));
            tracep->chgSData(oldp+328,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+329,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+330,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+331,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+332,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+333,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                     >> 4U)))),9);
            tracep->chgBit(oldp+334,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+335,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x14U]),32);
            tracep->chgBit(oldp+336,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+337,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+338,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+339,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+340,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+341,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+342,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                     >> 0xdU)))),9);
            tracep->chgBit(oldp+343,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+344,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x15U]),32);
            tracep->chgBit(oldp+345,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x15U))));
            tracep->chgSData(oldp+346,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+347,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+348,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+349,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+350,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+351,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                     >> 0x16U)))),9);
            tracep->chgBit(oldp+352,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+353,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x16U]),32);
            tracep->chgBit(oldp+354,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x16U))));
            tracep->chgSData(oldp+355,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+356,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+357,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+358,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+359,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+360,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x[1U] 
                                                     >> 0x1fU)))),9);
            tracep->chgBit(oldp+361,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+362,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x17U]),32);
            tracep->chgBit(oldp+363,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x17U))));
            tracep->chgSData(oldp+364,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+365,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+366,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+367,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+368,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+369,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__rbuf__d_o),9);
            tracep->chgBit(oldp+370,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+371,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgSData(oldp+372,((0x1ffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U])),9);
            tracep->chgBit(oldp+373,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+374,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x18U]),32);
            tracep->chgBit(oldp+375,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x18U))));
            tracep->chgSData(oldp+376,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+377,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+378,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+379,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+380,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+381,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                     >> 9U)))),9);
            tracep->chgBit(oldp+382,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+383,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x19U]),32);
            tracep->chgBit(oldp+384,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x19U))));
            tracep->chgSData(oldp+385,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+386,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+387,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+388,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+389,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+390,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                     >> 0x12U)))),9);
            tracep->chgBit(oldp+391,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+392,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x1aU]),32);
            tracep->chgBit(oldp+393,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+394,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+395,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+396,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+397,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+398,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+399,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                   << 5U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[0U] 
                                                     >> 0x1bU)))),9);
            tracep->chgBit(oldp+400,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+401,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x1bU]),32);
            tracep->chgBit(oldp+402,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1bU))));
            tracep->chgSData(oldp+403,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+404,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+405,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+406,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+407,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+408,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                     >> 4U)))),9);
            tracep->chgBit(oldp+409,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+410,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x1cU]),32);
            tracep->chgBit(oldp+411,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1cU))));
            tracep->chgSData(oldp+412,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+413,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+414,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+415,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+416,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+417,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                     >> 0xdU)))),9);
            tracep->chgBit(oldp+418,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+419,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x1dU]),32);
            tracep->chgBit(oldp+420,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1dU))));
            tracep->chgSData(oldp+421,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+422,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+423,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+424,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+425,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+426,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                     >> 0x16U)))),9);
            tracep->chgBit(oldp+427,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+428,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x1eU]),32);
            tracep->chgBit(oldp+429,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1eU))));
            tracep->chgSData(oldp+430,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+431,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+432,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+433,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+434,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+435,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x[1U] 
                                                     >> 0x1fU)))),9);
            tracep->chgBit(oldp+436,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+437,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x1fU]),32);
            tracep->chgBit(oldp+438,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[0U] 
                                            >> 0x1fU))));
            tracep->chgSData(oldp+439,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+440,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+441,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+442,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+443,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+444,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__rbuf__d_o),9);
            tracep->chgBit(oldp+445,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+446,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgSData(oldp+447,((0x1ffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U])),9);
            tracep->chgBit(oldp+448,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+449,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x20U]),32);
            tracep->chgBit(oldp+450,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U])));
            tracep->chgSData(oldp+451,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+452,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+453,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+454,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+455,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+456,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                     >> 9U)))),9);
            tracep->chgBit(oldp+457,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+458,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x21U]),32);
            tracep->chgBit(oldp+459,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 1U))));
            tracep->chgSData(oldp+460,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+461,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+462,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+463,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+464,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+465,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                     >> 0x12U)))),9);
            tracep->chgBit(oldp+466,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+467,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x22U]),32);
            tracep->chgBit(oldp+468,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 2U))));
            tracep->chgSData(oldp+469,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+470,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+471,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+472,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+473,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+474,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                   << 5U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[0U] 
                                                     >> 0x1bU)))),9);
            tracep->chgBit(oldp+475,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+476,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x23U]),32);
            tracep->chgBit(oldp+477,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 3U))));
            tracep->chgSData(oldp+478,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+479,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+480,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+481,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+482,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+483,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                     >> 4U)))),9);
            tracep->chgBit(oldp+484,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+485,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x24U]),32);
            tracep->chgBit(oldp+486,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 4U))));
            tracep->chgSData(oldp+487,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+488,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+489,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+490,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+491,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+492,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                     >> 0xdU)))),9);
            tracep->chgBit(oldp+493,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+494,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x25U]),32);
            tracep->chgBit(oldp+495,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 5U))));
            tracep->chgSData(oldp+496,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+497,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+498,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+499,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+500,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+501,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                     >> 0x16U)))),9);
            tracep->chgBit(oldp+502,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+503,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x26U]),32);
            tracep->chgBit(oldp+504,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 6U))));
            tracep->chgSData(oldp+505,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+506,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+507,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+508,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+509,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+510,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x[1U] 
                                                     >> 0x1fU)))),9);
            tracep->chgBit(oldp+511,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+512,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x27U]),32);
            tracep->chgBit(oldp+513,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 7U))));
            tracep->chgSData(oldp+514,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+515,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+516,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+517,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+518,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+519,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__rbuf__d_o),9);
            tracep->chgBit(oldp+520,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+521,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgSData(oldp+522,((0x1ffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U])),9);
            tracep->chgBit(oldp+523,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+524,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x28U]),32);
            tracep->chgBit(oldp+525,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 8U))));
            tracep->chgSData(oldp+526,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+527,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+528,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+529,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+530,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+531,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                     >> 9U)))),9);
            tracep->chgBit(oldp+532,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+533,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x29U]),32);
            tracep->chgBit(oldp+534,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 9U))));
            tracep->chgSData(oldp+535,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+536,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+537,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+538,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+539,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+540,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                     >> 0x12U)))),9);
            tracep->chgBit(oldp+541,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+542,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x2aU]),32);
            tracep->chgBit(oldp+543,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xaU))));
            tracep->chgSData(oldp+544,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+545,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+546,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+547,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+548,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+549,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                   << 5U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[0U] 
                                                     >> 0x1bU)))),9);
            tracep->chgBit(oldp+550,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+551,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x2bU]),32);
            tracep->chgBit(oldp+552,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xbU))));
            tracep->chgSData(oldp+553,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+554,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+555,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+556,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+557,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+558,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                     >> 4U)))),9);
            tracep->chgBit(oldp+559,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+560,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x2cU]),32);
            tracep->chgBit(oldp+561,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+562,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+563,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+564,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+565,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+566,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+567,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                     >> 0xdU)))),9);
            tracep->chgBit(oldp+568,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+569,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x2dU]),32);
            tracep->chgBit(oldp+570,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xdU))));
            tracep->chgSData(oldp+571,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+572,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+573,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+574,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+575,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+576,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                     >> 0x16U)))),9);
            tracep->chgBit(oldp+577,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+578,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x2eU]),32);
            tracep->chgBit(oldp+579,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xeU))));
            tracep->chgSData(oldp+580,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+581,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+582,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+583,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+584,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+585,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x[1U] 
                                                     >> 0x1fU)))),9);
            tracep->chgBit(oldp+586,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+587,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x2fU]),32);
            tracep->chgBit(oldp+588,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0xfU))));
            tracep->chgSData(oldp+589,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+590,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+591,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+592,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+593,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+594,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__rbuf__d_o),9);
            tracep->chgBit(oldp+595,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+596,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgSData(oldp+597,((0x1ffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U])),9);
            tracep->chgBit(oldp+598,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+599,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x30U]),32);
            tracep->chgBit(oldp+600,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x10U))));
            tracep->chgSData(oldp+601,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+602,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+603,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+604,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+605,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+606,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                     >> 9U)))),9);
            tracep->chgBit(oldp+607,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+608,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x31U]),32);
            tracep->chgBit(oldp+609,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x11U))));
            tracep->chgSData(oldp+610,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+611,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+612,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+613,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+614,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+615,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                     >> 0x12U)))),9);
            tracep->chgBit(oldp+616,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+617,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x32U]),32);
            tracep->chgBit(oldp+618,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x12U))));
            tracep->chgSData(oldp+619,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+620,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+621,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+622,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+623,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+624,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                   << 5U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[0U] 
                                                     >> 0x1bU)))),9);
            tracep->chgBit(oldp+625,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+626,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x33U]),32);
            tracep->chgBit(oldp+627,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x13U))));
            tracep->chgSData(oldp+628,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+629,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+630,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+631,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+632,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+633,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                     >> 4U)))),9);
            tracep->chgBit(oldp+634,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+635,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x34U]),32);
            tracep->chgBit(oldp+636,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+637,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+638,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+639,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+640,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+641,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+642,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                     >> 0xdU)))),9);
            tracep->chgBit(oldp+643,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+644,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x35U]),32);
            tracep->chgBit(oldp+645,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x15U))));
            tracep->chgSData(oldp+646,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+647,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+648,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+649,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+650,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+651,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                     >> 0x16U)))),9);
            tracep->chgBit(oldp+652,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+653,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x36U]),32);
            tracep->chgBit(oldp+654,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x16U))));
            tracep->chgSData(oldp+655,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+656,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+657,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+658,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+659,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+660,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x[1U] 
                                                     >> 0x1fU)))),9);
            tracep->chgBit(oldp+661,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+662,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x37U]),32);
            tracep->chgBit(oldp+663,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x17U))));
            tracep->chgSData(oldp+664,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+665,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+666,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+667,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+668,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+669,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__rbuf__d_o),9);
            tracep->chgBit(oldp+670,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__rbuf__v_vo));
            tracep->chgCData(oldp+671,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__cnt_r),4);
            tracep->chgSData(oldp+672,((0x1ffU & vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U])),9);
            tracep->chgBit(oldp+673,((1U & (IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v))));
            tracep->chgIData(oldp+674,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x38U]),32);
            tracep->chgBit(oldp+675,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x18U))));
            tracep->chgSData(oldp+676,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+677,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+678,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+679,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+680,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__0__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+681,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                     >> 9U)))),9);
            tracep->chgBit(oldp+682,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 1U))));
            tracep->chgIData(oldp+683,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x39U]),32);
            tracep->chgBit(oldp+684,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x19U))));
            tracep->chgSData(oldp+685,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+686,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+687,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+688,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+689,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__1__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+690,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                     >> 0x12U)))),9);
            tracep->chgBit(oldp+691,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 2U))));
            tracep->chgIData(oldp+692,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x3aU]),32);
            tracep->chgBit(oldp+693,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+694,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+695,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+696,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+697,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+698,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__2__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+699,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                   << 5U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[0U] 
                                                     >> 0x1bU)))),9);
            tracep->chgBit(oldp+700,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 3U))));
            tracep->chgIData(oldp+701,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x3bU]),32);
            tracep->chgBit(oldp+702,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1bU))));
            tracep->chgSData(oldp+703,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+704,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+705,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+706,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+707,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__3__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+708,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                     >> 4U)))),9);
            tracep->chgBit(oldp+709,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 4U))));
            tracep->chgIData(oldp+710,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x3cU]),32);
            tracep->chgBit(oldp+711,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1cU))));
            tracep->chgSData(oldp+712,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+713,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+714,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+715,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+716,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__4__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+717,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                     >> 0xdU)))),9);
            tracep->chgBit(oldp+718,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 5U))));
            tracep->chgIData(oldp+719,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x3dU]),32);
            tracep->chgBit(oldp+720,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1dU))));
            tracep->chgSData(oldp+721,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+722,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+723,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+724,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+725,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__5__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+726,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                     >> 0x16U)))),9);
            tracep->chgBit(oldp+727,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 6U))));
            tracep->chgIData(oldp+728,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x3eU]),32);
            tracep->chgBit(oldp+729,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1eU))));
            tracep->chgSData(oldp+730,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+731,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+732,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+733,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+734,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__6__KET____DOT__pe__DOT__w_r),9);
            tracep->chgSData(oldp+735,((0x1ffU & ((
                                                   vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x[1U] 
                                                     >> 0x1fU)))),9);
            tracep->chgBit(oldp+736,((1U & ((IData)(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_x_v) 
                                            >> 7U))));
            tracep->chgIData(oldp+737,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x3fU]),32);
            tracep->chgBit(oldp+738,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[1U] 
                                            >> 0x1fU))));
            tracep->chgSData(oldp+739,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_o),9);
            tracep->chgBit(oldp+740,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__x_v_o));
            tracep->chgIData(oldp+741,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_o),32);
            tracep->chgBit(oldp+742,(vlTOPp->top__DOT__i1__DOT____Vcellout__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__mac_v_o));
            tracep->chgSData(oldp+743,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__pe_row__BRA__7__KET____DOT__pe__DOT__w_r),9);
            tracep->chgIData(oldp+744,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x40U]),32);
            tracep->chgBit(oldp+745,((1U & vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U])));
            tracep->chgIData(oldp+746,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__0__KET____DOT__obuf__rdata_o),32);
            tracep->chgCData(oldp+747,(vlTOPp->top__DOT__o_buf_gen__BRA__0__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+748,(vlTOPp->top__DOT__o_buf_gen__BRA__0__KET____DOT__obuf__DOT__data_r),256);
            tracep->chgIData(oldp+756,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x41U]),32);
            tracep->chgBit(oldp+757,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 1U))));
            tracep->chgIData(oldp+758,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__1__KET____DOT__obuf__rdata_o),32);
            tracep->chgCData(oldp+759,(vlTOPp->top__DOT__o_buf_gen__BRA__1__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+760,(vlTOPp->top__DOT__o_buf_gen__BRA__1__KET____DOT__obuf__DOT__data_r),256);
            tracep->chgIData(oldp+768,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x42U]),32);
            tracep->chgBit(oldp+769,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 2U))));
            tracep->chgIData(oldp+770,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__2__KET____DOT__obuf__rdata_o),32);
            tracep->chgCData(oldp+771,(vlTOPp->top__DOT__o_buf_gen__BRA__2__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+772,(vlTOPp->top__DOT__o_buf_gen__BRA__2__KET____DOT__obuf__DOT__data_r),256);
            tracep->chgIData(oldp+780,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x43U]),32);
            tracep->chgBit(oldp+781,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+782,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__3__KET____DOT__obuf__rdata_o),32);
            tracep->chgCData(oldp+783,(vlTOPp->top__DOT__o_buf_gen__BRA__3__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+784,(vlTOPp->top__DOT__o_buf_gen__BRA__3__KET____DOT__obuf__DOT__data_r),256);
            tracep->chgIData(oldp+792,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x44U]),32);
            tracep->chgBit(oldp+793,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 4U))));
            tracep->chgIData(oldp+794,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__4__KET____DOT__obuf__rdata_o),32);
            tracep->chgCData(oldp+795,(vlTOPp->top__DOT__o_buf_gen__BRA__4__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+796,(vlTOPp->top__DOT__o_buf_gen__BRA__4__KET____DOT__obuf__DOT__data_r),256);
            tracep->chgIData(oldp+804,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x45U]),32);
            tracep->chgBit(oldp+805,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 5U))));
            tracep->chgIData(oldp+806,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__5__KET____DOT__obuf__rdata_o),32);
            tracep->chgCData(oldp+807,(vlTOPp->top__DOT__o_buf_gen__BRA__5__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+808,(vlTOPp->top__DOT__o_buf_gen__BRA__5__KET____DOT__obuf__DOT__data_r),256);
            tracep->chgIData(oldp+816,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x46U]),32);
            tracep->chgBit(oldp+817,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 6U))));
            tracep->chgIData(oldp+818,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__6__KET____DOT__obuf__rdata_o),32);
            tracep->chgCData(oldp+819,(vlTOPp->top__DOT__o_buf_gen__BRA__6__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+820,(vlTOPp->top__DOT__o_buf_gen__BRA__6__KET____DOT__obuf__DOT__data_r),256);
            tracep->chgIData(oldp+828,(vlTOPp->top__DOT__i1__DOT__pe_mac[0x47U]),32);
            tracep->chgBit(oldp+829,((1U & (vlTOPp->top__DOT__i1__DOT__pe_mac_v[2U] 
                                            >> 7U))));
            tracep->chgIData(oldp+830,(vlTOPp->top__DOT____Vcellout__o_buf_gen__BRA__7__KET____DOT__obuf__rdata_o),32);
            tracep->chgCData(oldp+831,(vlTOPp->top__DOT__o_buf_gen__BRA__7__KET____DOT__obuf__DOT__cnt_r),3);
            tracep->chgWData(oldp+832,(vlTOPp->top__DOT__o_buf_gen__BRA__7__KET____DOT__obuf__DOT__data_r),256);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgWData(oldp+840,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__0__KET____DOT__rbuf__DOT__data_r),72);
            tracep->chgWData(oldp+843,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__1__KET____DOT__rbuf__DOT__data_r),72);
            tracep->chgWData(oldp+846,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__2__KET____DOT__rbuf__DOT__data_r),72);
            tracep->chgWData(oldp+849,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__3__KET____DOT__rbuf__DOT__data_r),72);
            tracep->chgWData(oldp+852,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__4__KET____DOT__rbuf__DOT__data_r),72);
            tracep->chgWData(oldp+855,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__5__KET____DOT__rbuf__DOT__data_r),72);
            tracep->chgWData(oldp+858,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__6__KET____DOT__rbuf__DOT__data_r),72);
            tracep->chgWData(oldp+861,(vlTOPp->top__DOT__i1__DOT__pe_column__BRA__7__KET____DOT__rbuf__DOT__data_r),72);
        }
        tracep->chgBit(oldp+864,(vlTOPp->clk_i));
        tracep->chgBit(oldp+865,(vlTOPp->rst_i));
        tracep->chgCData(oldp+866,(vlTOPp->addr_i),8);
        tracep->chgIData(oldp+867,(vlTOPp->data_i),32);
        tracep->chgBit(oldp+868,(vlTOPp->wr_vi));
        tracep->chgIData(oldp+869,(vlTOPp->data_o),32);
        tracep->chgCData(oldp+870,(vlTOPp->top__DOT__addr_76_r),2);
        tracep->chgSData(oldp+871,((0x1ffU & vlTOPp->data_i)),9);
        tracep->chgCData(oldp+872,((0x3fU & (IData)(vlTOPp->addr_i))),6);
        tracep->chgBit(oldp+873,(((3U == (3U & ((IData)(vlTOPp->addr_i) 
                                                >> 6U))) 
                                  & (IData)(vlTOPp->wr_vi))));
        tracep->chgCData(oldp+874,((7U & (IData)(vlTOPp->addr_i))),3);
        tracep->chgBit(oldp+875,(((0U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+876,(((0U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+877,(((1U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+878,(((2U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+879,(((3U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+880,(((4U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+881,(((5U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+882,(((6U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+883,(((7U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+884,(((1U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+885,(((8U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+886,(((9U == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+887,(((0xaU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+888,(((0xbU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+889,(((0xcU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+890,(((0xdU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+891,(((0xeU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+892,(((0xfU == (0x3fU & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+893,(((2U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+894,(((0x10U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+895,(((0x11U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+896,(((0x12U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+897,(((0x13U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+898,(((0x14U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+899,(((0x15U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+900,(((0x16U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+901,(((0x17U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+902,(((3U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+903,(((0x18U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+904,(((0x19U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+905,(((0x1aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+906,(((0x1bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+907,(((0x1cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+908,(((0x1dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+909,(((0x1eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+910,(((0x1fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+911,(((4U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+912,(((0x20U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+913,(((0x21U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+914,(((0x22U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+915,(((0x23U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+916,(((0x24U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+917,(((0x25U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+918,(((0x26U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+919,(((0x27U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+920,(((5U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+921,(((0x28U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+922,(((0x29U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+923,(((0x2aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+924,(((0x2bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+925,(((0x2cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+926,(((0x2dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+927,(((0x2eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+928,(((0x2fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+929,(((6U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+930,(((0x30U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+931,(((0x31U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+932,(((0x32U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+933,(((0x33U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+934,(((0x34U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+935,(((0x35U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+936,(((0x36U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+937,(((0x37U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+938,(((7U == (7U & ((IData)(vlTOPp->addr_i) 
                                                >> 3U))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__rbuf_w_vi))));
        tracep->chgBit(oldp+939,(((0x38U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+940,(((0x39U == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+941,(((0x3aU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+942,(((0x3bU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+943,(((0x3cU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+944,(((0x3dU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+945,(((0x3eU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgBit(oldp+946,(((0x3fU == (0x3fU 
                                             & (IData)(vlTOPp->addr_i))) 
                                  & (IData)(vlTOPp->top__DOT____Vcellinp__i1__w_en_i))));
        tracep->chgCData(oldp+947,((7U & (IData)(vlTOPp->addr_i))),3);
        tracep->chgBit(oldp+948,(((2U == (3U & ((IData)(vlTOPp->addr_i) 
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
