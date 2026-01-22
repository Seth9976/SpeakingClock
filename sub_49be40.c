// 函数: sub_49be40
// 地址: 0x49be40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg3.b |= 0xc3
*(arg3 - 0x77ffb63e) += arg3:1.b
*0xc2c40049 = arg3.b
char* entry_ebx
*(arg3 - 0x49) += entry_ebx.b
*(arg5 + (arg4 << 2) - 0x529bffb7) += entry_ebx.b
arg3.b += (arg1 - 4).b
int32_t ecx_4
int16_t es
ecx_4, es = __les_gprz_memp(*(arg1 - 4))
arg3:1.b = arg3.b
*(arg3 - 0x3b) += arg2.b
arg3:1.b *= 2
arg3.b += entry_ebx:1.b
int32_t ecx_8
int16_t es_1
ecx_8, es_1 = __les_gprz_memp(*(ecx_4 - 3))
int32_t eflags
arg3.b = __in_al_dx(arg2, eflags)
char temp1 = *(arg3 + 0x340049c6)
*(arg3 + 0x340049c6) += entry_ebx:1.b
bool p = unimplemented  {add byte [eax+0x340049c6], bh}
bool a = unimplemented  {add byte [eax+0x340049c6], bh}
arg3:1.b = (temp1 + entry_ebx:1.b s< 0 ? 1 : 0) << 7 | (temp1 == neg.b(entry_ebx:1.b) ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (temp1 + entry_ebx:1.b u< temp1 ? 1 : 0)
*(arg5 + (entry_ebx << 2)) += entry_ebx:1.b
*(arg3 - 0x41) += entry_ebx:1.b
*entry_ebx += arg3.b
*0xd7b0ce00 += arg3.b
char* eax
int32_t ecx_13
uint16_t edx
eax, edx, ecx_13 = (*(arg5 * 5 + 0x49))()
*eax += entry_ebx.b
char temp2 = *0x444d4c54
*0x444d4c54 += edx.b
bool c_1 = temp2 + edx.b u< temp2
int32_t* esp

if (entry_ebx == 0xffffffff)
    if (entry_ebx == 0xffffffff)
        *eax += eax.b
    else
        int32_t* edi
        int32_t temp0_1
        temp0_1, edi = __insd(0xc2e00049, edx, eflags)
        *edi = temp0_1
        char* var_4_1 = eax
        char* arg_18
        char* eax_1 = arg_18
        int32_t arg_1c
        esp = &arg_1c
        int32_t* ebx_3
        int32_t* esp_1
        bool cond:2_1
        
        if (c_1)
            char* ebx_1
            ebx_1:1.b = adc.b(arg8:1.b, arg8:1.b, c_1)
            *arg9 += arg9
            *(__return_addr - 0x3d) += ebx_1.b
            arg_18 = ebx_1
            esp_1 = &arg_18
            ebx_3 = arg9
            cond:2_1 = 0 != (0xb & ebx_3[7].w)
        label_49bf30:
            
            if (not(cond:2_1))
                goto label_49bf34
            
            *esp_1
            return 
        
        void* esi_1 = __outsb(arg9.w, *__return_addr, __return_addr, eflags)
        char* esi_12
        bool cond:7_1
        
        if (entry_ebx == 0xffffffff)
            eax_1.b += *eax_1
            char temp4_1 = arg9:1.b
            int32_t* edx_1
            edx_1:1.b = arg9:1.b * 2
            esi_12 = esi_1 + 1
            eax_1.b = sbb.b(eax_1.b, 1, temp4_1 + arg9:1.b u< temp4_1)
            cond:7_1 = eax_1.b != 0
        label_49bf01:
            
            if (not(cond:7_1) && (esi_12[0x1c] & 0x10) == 0)
                (*(*esi_12 + 0x190))()
        else
            int32_t edi_2 = arg_1c
            uint16_t* arg_3c
            esp_1 = &arg_3c
            __outsb(arg14.w, *arg11, arg11, eflags)
            uint8_t* edi_3
            uint8_t temp0_2
            temp0_2, edi_3 = __insb(edi_2, arg14.w, eflags)
            *edi_3 = temp0_2
            float* eax_3
            eax_3:1.b = 0xbe
            uint8_t temp6_1 = *edi_3
            *edi_3 += eax_3.b
            bool c_2 = temp6_1 + eax_3.b u< temp6_1
            float* eax_4 = adc.d(eax_3, 0x444d4c54, c_2)
            ebx_3 = arg13 + 1
            cond:2_1 = arg13 != 0xffffffff
            
            if (arg13 != 0xffffffff)
                goto label_49bf30
            
            if (arg13 == 0xffffffff)
                cond:2_1 = arg14 != eax_4
                goto label_49bf30
            
            int32_t* edi_4
            int32_t temp0_3
            temp0_3, edi_4 = __insd(edi_3, arg14.w, eflags)
            *edi_4 = temp0_3
            uint16_t* esi_4 = arg_3c
            ebx_3 = arg18
            int32_t arg_54
            int32_t eax_5 = arg_54
            int32_t arg_58
            int32_t* esp_2 = &arg_58
            
            if (adc.d(eax_3, 0x444d4c54, c_2) u< eax_3
                    || (c_2 && adc.d(eax_3, 0x444d4c54, c_2) == eax_3))
                goto label_49bf29
            
            __outsb(arg19, *esi_4, esi_4, eflags)
            int32_t* eax_15
            
            if (arg13 == 0xffffffff)
                char temp9_1 = *(ebx_3 - 0x75)
                *(ebx_3 - 0x75) += arg19.b
                *eax_4
                ebx_3:1.b = 5
                esp_2 = &arg_54:3
                eax_5.b = sbb.b(eax_5.b, 0xf, temp9_1 + arg19.b u< temp9_1)
                ebx_3:1.b = 0x15
            label_49bf29:
                *(esp_2 - 4) = eax_5
                esp_1 = esp_2 - 4
                *(arg17 + 0x15) <<= 1
            label_49bf34:
                
                if (sub_49c25c(ebx_3) == 0)
                    *esp_1
                    return 
                
                eax_15 = ebx_3
            label_49bf41:
                (*(*eax_15 + 0x190))()
                *esp_1
                return 
            
            int32_t edi_6 = arg_58
            __outsb(arg24.w, *arg21, arg21, eflags)
            uint8_t* edi_7
            uint8_t temp0_4
            temp0_4, edi_7 = __insb(edi_6, arg24.w, eflags)
            *edi_7 = temp0_4
            char* eax_6
            eax_6.b = __in_al_immb(0xbc, eflags)
            eax_6.b *= 2
            char ecx_20 = 0x49
            char temp10_1 = *0x4d4c1400
            *0x4d4c1400 += ecx_20
            
            if (arg23 != 0xffffffff)
                goto label_49bf4f
            
            if (arg23 == 0xffffffff)
                *eax_6 += eax_6.b
            label_49bf4f:
                *eax_6 += eax_6.b
                *eax_6 += eax_6.b
                *(arg23 + 0x57) += arg24.b
                
                if ((eax_6[0x1c] & 1) == 0)
                    (*(*eax_6 + 0x19c))()
                
                sub_49afd8(eax_6)
                return 
            
            int32_t* edi_8
            int32_t temp0_6
            temp0_6, edi_8 = __insd(edi_7, arg24.w, eflags)
            *edi_8 = temp0_6
            arg26 = eax_6
            int32_t arg_95
            esp_1 = &arg_95
            
            if (temp10_1 + ecx_20 u< temp10_1)
                return 
            
            __outsb(arg30, *arg27, arg27, eflags)
            
            if (arg23 == 0xffffffff)
                eax_15 = arg32 + *arg32
                *(eax_15 * 9 - 0x3c74f58c) += eax_15.b
                goto label_49bf41
            
            int32_t edi_10 = arg_95
            char* arg_b1
            char* eax_8 = arg_b1
            char* esi_11 = __outsb(arg36, *arg33, arg33, eflags)
            uint8_t* edi_11
            uint8_t temp0_7
            temp0_7, edi_11 = __insb(edi_10, arg36, eflags)
            *edi_11 = temp0_7
            *eax_8 += eax_8.b
            arg_b1 = esi_11
            esp = &arg_b1
            esi_12 = eax_8
            
            if (arg36.b != esi_12[0x2e9])
                esi_12[0x2e9] = arg36.b
                cond:7_1 = (esi_12[0x1c] & 1) != 0
                goto label_49bf01

*esp
