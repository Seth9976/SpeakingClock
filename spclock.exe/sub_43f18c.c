// 函数: sub_43f18c
// 地址: 0x43f18c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
char* var_4 = arg1
arg1:1.b += arg3:1.b
__int1()
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*0x5c0043f2 += arg2:1.b
*arg1 += arg1.b
void* entry_ebx
*((entry_ebx + 3) * 5 + 0x3eb00042) += arg2.b
*(arg4 + arg5 + 0x3ec00040) += (entry_ebx + 3):1.b
void* eax_1
eax_1:1.b = (&arg1[2]):1.b + (&arg1[2]).b
*(eax_1 + 0x403f) += (entry_ebx + 3):1.b
void* var_5
*(&var_5:1 + arg5) += (entry_ebx + 3).b
*(arg4 + (arg5 << 2)) += (eax_1 + 2).b
int32_t* edx = arg2 + 1
void* eax_3
eax_3.b = (eax_1 + 2).b + edx:1.b
*arg4 - *arg5
void* esi = arg4 + 4
void* edi = arg5 + 4
eax_3.b += (entry_ebx + 3):1.b
*esi - *edi
uint16_t* esi_1 = esi + 4
char* edi_1 = edi + 4
*edi_1 += (arg3 + 2).b
char* ecx_2 = arg3 + 3
*(eax_3 + (ecx_2 << 3) - 0xd27ffbe) += eax_3:1.b
*(&edx[esi_1 * 2] + 0x10043) += edx:1.b
*eax_3 += (entry_ebx + 5).b
*eax_3 += eax_3.b
char temp1 = *eax_3
*eax_3 += eax_3.b
bool c = temp1 + eax_3.b u< temp1
bool p = unimplemented  {add byte [eax], al}
bool a = unimplemented  {add byte [eax], al}
bool z = temp1 == neg.b(eax_3.b)
bool s = temp1 + eax_3.b s< 0
bool o = add_overflow(temp1, eax_3.b)
var_5 = eax_3
void** esp = &var_5
int32_t* ebx_11
int32_t* esp_1
void* esp_2
void* esp_8
void* const __return_addr_1
char* esi_7

if (c)
label_43f265:
    bool d
    *(esp - 4) = (o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6
        | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
    esp_1 = esp - 4
    edx += 1
    *(eax_3 * 2) += eax_3.b
    *(eax_3 + 0x72) |= edx.b
    __return_addr_1 = *(esi_1 + 0x74) * 0x737265
label_43f274:
    *(__return_addr_1 + 0x56530040) += ecx_2.b
    *(esp_1 - 4) = edi_1
    esp_2 = esp_1 - 4
    
    if (edx.b != 0)
        esp_2 -= 0x10
    label_43f282:
        eax_3 = sub_403fcc(ecx_2, edx)
    
    esi_7 = ecx_2
    ebx_11 = edx
    edi_1 = eax_3
    sub_42bd40(edi_1, 0)
label_43f296:
    *(edi_1 + 0x58) = esi_7
    
    if (ebx_11.b == 0)
        goto label_43f2b0
    
    sub_404024(edi_1)
label_43f2a4:
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_2
    esp_8 = esp_2 + 4
label_43f2ab:
    esp_2 = esp_8 + 0xc
label_43f2b0:
    *esp_2
    *(esp_2 + 4)
    *(esp_2 + 8)
    return edi_1

int32_t eflags
uint16_t* esi_2 = __outsb(edx.w, *esi_1, esi_1, eflags)
bool c_1

if (z)
    char temp2_1 = *(edx + (eax_3 << 1) + 0x8000400)
    *(edx + (eax_3 << 1) + 0x8000400) += (entry_ebx + 5).b
    c_1 = temp2_1 + (entry_ebx + 5).b u< temp2_1
    void* var_9 = eax_3
    
    if (c_1)
        char* var_d = entry_ebx + 5
        edx.b = 1
        sub_43f528(*(eax_3 + 0x58), edx.b)
        sub_42c890(eax_3)
        return sub_43f2f8(eax_3)
    
    __outsb(edx.w, *esi_2, esi_2, eflags)
    
    if (temp2_1 == neg.b((entry_ebx + 5).b))
        return eax_3
else
    bool z_1
    
    if (c)
        eax_3:1.b = 0xf2
        char temp3_1 = *(entry_ebx + 6 + (eax_3 << 1))
        *(entry_ebx + 6 + (eax_3 << 1)) += ecx_2.b
        c_1 = temp3_1 + ecx_2.b u< temp3_1
        z_1 = temp3_1 == neg.b(ecx_2.b)
    else
        *(entry_ebx + 5) += edx.b
        char temp4_1 = *(&edx[esi_2 * 2] + 0x430c0043)
        *(&edx[esi_2 * 2] + 0x430c0043) += edx:1.b
        c_1 = temp4_1 + edx:1.b u< temp4_1
        z_1 = temp4_1 == neg.b(edx:1.b)
    
    if (not(c_1))
        edi_1 = var_5
        __return_addr_1 = __return_addr
        edx = arg8
        ecx_2 = arg9
        eax_3 = arg10
        int32_t arg_1b
        esp_1 = &arg_1b
        
        if (z_1)
            goto label_43f274
        
        int32_t edi_2 = arg_1b
        char ecx_3 = arg15.b
        char* eax_4 = arg16
        uint16_t* esi_5 = __outsb(arg14.w, *arg11, arg11, eflags)
        uint8_t* edi_3
        uint8_t temp0_1
        temp0_1, edi_3 = __insb(edi_2, arg14.w, eflags)
        *edi_3 = temp0_1
        int32_t tr = __ltr_gpr16(eax_4.w)
        char temp5_1 = *eax_4
        *eax_4 += ecx_3
        __builtin_strncpy(&arg16, "angi", 4)
        int32_t esi_6 = __outsb(arg14.w, *esi_5, esi_5, eflags)
        *(arg13 + 2 + esi_6) = adc.d(*(arg13 + 2 + esi_6), eax_4, temp5_1 + ecx_3 u< temp5_1)
        char temp6_1 = *arg14
        *arg14 += ecx_3
        bool c_3 = temp6_1 + ecx_3 u< temp6_1
        
        if (add_overflow(temp6_1, ecx_3))
            *edi_3 = eax_4.b
            undefined
        
        edi_1 = arg12
        esi_7 = arg16
        ebx_11 = arg18
        edx = arg19
        ecx_2 = arg20
        eax_3 = arg21
        void arg_53
        esp_2 = &arg_53
        
        if (temp6_1 == neg.b(ecx_3))
            goto label_43f296
        
        bool z_3 = esi_7 == 0xffffffff
        uint16_t* esi_9 = __outsd(edx.w, *(esi_7 + 1), &esi_7[1], eflags)
        esi_1 = __outsb(edx.w, *esi_9, esi_9, eflags)
        
        if (z_3)
            *eax_3 += eax_3
            goto label_43f246
        
        while (true)
            *(esp_2 - 4) = esp_2
            *(esp_2 - 8) = eax_3
            esp_2 -= 8
            
            if (not(c_3))
                __outsb(edx.w, *esi_1, esi_1, eflags)
            
            if (c_3 || z_3)
                jump(*(edi_1 + (ecx_2 << 2) + 5))
            
            if (c_3)
                goto label_43f282
            
            edi_1 = *esp_2
            uint16_t* esi_11 = *(esp_2 + 4)
            int32_t ebp_3 = *(esp_2 + 8)
            ebx_11 = *(esp_2 + 0x10)
            edx = *(esp_2 + 0x14)
            ecx_2 = *(esp_2 + 0x18)
            eax_3 = *(esp_2 + 0x1c)
            esp_2 += 0x20
            esi_1 = __outsb(edx.w, *esi_11, esi_11, eflags)
            
            if (z_3 || c_3)
                goto label_43f2a4
            
            if (not(c_3))
            label_43f246:
                esp_2 -= 1
                __out_dx_oeax(edx.w, eax_3, eflags)
                ebx_11 += 1
            else
                edi_1[(ebp_3 << 3) + 0x43] += ecx_2.b
            
            ebx_11[0x10fc9430].b += ecx_2.b
            char temp8_1 = *edi_1
            *edi_1 += eax_3.b
            c_3 = temp8_1 + eax_3.b u< temp8_1
            z_3 = temp8_1 == neg.b(eax_3.b)
            int16_t cs
            *(esp_2 - 4) = zx.d(cs)
            *(esp_2 - 8) = esp_2 - 4
            *(esp_2 - 0xc) = eax_3
            esp = esp_2 - 0xc
            
            if (c_3)
                *eax_3 += eax_3.b
                sub_43f2f8(ebx_11)
            else
                __outsb(edx.w, *esi_1, esi_1, eflags)
                
                if (z_3)
                    *eax_3 += eax_3
                else
                    if (c_3)
                        __psubsb_mmxq_memq(arg6, *(eax_3 + 0x64fffc4d))
                        *nullptr = *esp
                        esp_8 = &esp[1]
                        break
                    
                    edi_1 = *esp
                    uint16_t* esi_13 = esp[1]
                    esp[2]
                    ebx_11 = esp[4]
                    edx = esp[5]
                    ecx_2 = esp[6]
                    eax_3 = esp[7]
                    esp = &esp[8]
                    esi_1 = __outsb(edx.w, *esi_13, esi_13, eflags)
                    
                    if (not(z_3) && not(c_3))
                        if (not(c_3))
                            *(esp - 4) = zx.d(cs)
                            esp_2 = esp - 4
                            continue
                        
                        __int1()
                        char temp9_1 = *eax_3
                        *eax_3 += eax_3.b
                        c = temp9_1 + eax_3.b u< temp9_1
                        p = unimplemented  {add byte [eax], al}
                        a = unimplemented  {add byte [eax], al}
                        z = temp9_1 == neg.b(eax_3.b)
                        s = temp9_1 + eax_3.b s< 0
                        o = add_overflow(temp9_1, eax_3.b)
                        goto label_43f265
                
                *(ebx_11 + 0x30e8c3) += ecx_2.b
                *eax_3 += eax_3.b
            
            eax_3 = sub_42c7c4(ebx_11, *(ebx_11[0x16] + 0x20))
            *esp
            return eax_3
        
        goto label_43f2ab

if (c_1)
    return eax_3

*eax_3 += eax_3.b
return sub_43f278(eax_3, edx, ecx_2) __tailcall
