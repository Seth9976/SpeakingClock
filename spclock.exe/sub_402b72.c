// 函数: sub_402b72
// 地址: 0x402b72
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
uint16_t* ecx = arg3 + 1
int32_t eflags
uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
arg4[0x37].b &= arg2:1.b
bool c = false
void* entry_ebx
void* esp
uint16_t* esi_5
TEB* fsbase
int32_t gsbase
bool cond:6_1
bool cond:7_1

if ((arg4[0x37].b & arg2:1.b) s< 0)
label_402bec:
    
    if (not(c))
        uint8_t* edi_4
        uint8_t temp0_11
        temp0_11, edi_4 = __insb(arg6, arg2.w, eflags)
        *edi_4 = temp0_11
        arg6 = *esp
        esi_5 = *(esp + 4)
        arg4 = *(esp + 8)
        entry_ebx = *(esp + 0x10)
        arg2 = *(esp + 0x14)
        ecx = *(esp + 0x18)
        arg1 = *(esp + 0x1c)
        esp += 0x20
        
        if (not(c))
            *(gsbase + &arg2[0x36]) &= arg1:1.b
            goto label_402c16
        
        *(entry_ebx - 0x338ac802) &= arg1.b
    label_402c7f:
        *esp
        *(esp + 4)
        return arg1
    
    esi = __outsd(arg2.w, *esi, esi, eflags)
    char temp5_1 = arg4[0x37].b
    arg4[0x37].b &= arg2:1.b
    bool z_1 = (temp5_1 & arg2:1.b) == 0
    
    if ((temp5_1 & arg2:1.b) s< 0)
        bool c_4 = false
        
        while (true)
            if (not(z_1) && not(c_4))
                do
                    arg1[0x4ad5bc] = ecx.b
                    arg1 = &arg1[1]
                while (arg6 u> arg1)
            
            arg1 = arg6
            
            while (true)
                esi += 1
                arg2 = &arg2[0x10]
                
                if (esi == 0x37)
                    goto label_402c7f
                
                cond:6_1 = data_4ad702 == 0
            label_402c52:
                
                if (not(cond:6_1))
                    cond:7_1 = (*arg2 & 0xf) != 0
                label_402c57:
                    
                    if (cond:7_1)
                        continue
                
                arg6 = zx.d(*arg2) u>> 3
                ecx = esi * 4
                c_4 = arg6 u< arg1
                z_1 = arg6 == arg1
                break
    else
        int16_t temp0_9
        temp0_9, eflags = __arpl_memw_gpr16(*(gsbase + &arg4[0x32]), esi.w)
        *(gsbase + &arg4[0x32]) = temp0_9
        *(arg4 + 0x61) &= ecx:1.b
        esp = *(arg4 + 0x64) * 0x20
        int16_t temp0_10
        temp0_10, arg6 = __insd(arg6, arg2.w, eflags)
        *arg6 = temp0_10
        esi_5 = *(fsbase + arg4 + 0x6d) * 0x646e6120
    
    goto label_402c0d

int16_t temp0_1
temp0_1, eflags = __arpl_memw_gpr16(*(gsbase + &arg4[0x32]), esi.w)
*(gsbase + &arg4[0x32]) = temp0_1
char temp4_1 = *(arg4 + 0x65) & ecx:1.b
*(arg4 + 0x65) = temp4_1
int16_t temp0_2
temp0_2, arg6 = __insd(arg6, arg2.w, eflags)
*arg6 = temp0_2
__outsd(arg2.w, *esi, esi, eflags)
bool cond:2_1

if (temp4_1 u< 0)
    *(fsbase + arg4 + 0x65) &= ecx:1.b
    esi_5 = *(fsbase + arg4 + 0x6d) * 0x646e6120
label_402c0d:
    ecx[0x39].b &= ecx:1.b
label_402c11:
    *(gsbase + arg4 + esi_5 + 0x6c) &= arg1:1.b
label_402c16:
    esi_5 = __outsd(arg2.w, *esi_5, esi_5, eflags)
    int16_t temp0_12
    temp0_12, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
    *(entry_ebx + 0x73) = temp0_12
    ecx[0x39].b &= arg1:1.b
    arg1[gsbase]
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1 |= 0x5500000a
    cond:2_1 = arg1 s< 0
label_402c29:
    uint16_t* esi_7 = __outsb(arg2.w, *esi_5, esi_5, eflags)
    
    if (cond:2_1)
        arg1.b = __in_al_immb(0x89, eflags)
        entry_ebx += 2
        goto label_402ca5
    
    int32_t eflags_1
    int16_t temp0_13
    temp0_13, eflags_1 = __arpl_memw_gpr16(*(gsbase + &arg4[0x32]), esi_7.w)
    *(gsbase + &arg4[0x32]) = temp0_13
    char temp11_1 = *(arg4 + 0x65) & ecx.b
    *(arg4 + 0x65) = temp11_1
    int16_t* edi_5
    int16_t temp0_14
    temp0_14, edi_5 = __insd(arg6, arg2.w, eflags_1)
    *edi_5 = temp0_14
    esi_7 = __outsd(arg2.w, *esi_7, esi_7, eflags_1)
    
    if (temp11_1 u< 0)
        *arg1 += arg1.b
        
        while (true)
            int32_t eax_11 = ((zx.d(*(entry_ebx - 0x1a)) * 0xc + 0xef) & 0xffffff00) + 0x30
            
            if (eax_11 u< 0xb30)
                eax_11 = 0xb30
            
            uint32_t eax_13 = (eax_11 + 0x4d0) u>> 0xd
            
            if (eax_13 u> 7)
                eax_13 = 7
            
            arg2.b = 0xff
            arg2.b = 0xff << eax_13.b
            *(entry_ebx - 0x1b) = arg2.b
            *(entry_ebx - 4) = (eax_13 << 0xd).w + 0xb30
            int16_t edi_9 = *(entry_ebx - 0x1a)
            int32_t ecx_14 = ((zx.d(edi_9) * 0x30 + 0xef) & 0xffffff00) + 0x30
            
            if (ecx_14 u< 0x7330)
                ecx_14 = 0x7330
            
            if (ecx_14 u> 0xff30)
                ecx_14 = 0xff30
            
            int16_t temp17_1
            int16_t temp18_1
            temp17_1:temp18_1 = muls.dp.w(divu.dp.d(0:(ecx_14 - 0x20), zx.d(edi_9)), edi_9)
            arg2.w = temp17_1
            *(entry_ebx - 2) = ((temp18_1 + 0xef) & 0xff00) + 0x30
            entry_ebx += 0x20
            uint16_t* temp19_1 = esi_7
            esi_7 -= 1
            
            if (temp19_1 == 1)
                sub_402c40()
                data_4ad704 = &data_4ad704
                data_4ad708 = &data_4ad704
                int32_t i_1 = 0x400
                void* edx_6 = &data_4ad7a4
                void* eax_19
                int32_t i
                
                do
                    eax_19 = edx_6
                    *eax_19 = eax_19
                    *(eax_19 + 4) = eax_19
                    edx_6 += 8
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                data_4af7a8 = &data_4af7a8
                data_4af7ac = &data_4af7a8
                *esp
                *(esp + 4)
                *(esp + 8)
                return eax_19
            
            if (*entry_ebx == 0)
                *entry_ebx = sub_401548
            
            *(entry_ebx - 8) = entry_ebx - 0x1c
        label_402ca5:
            *(entry_ebx - 0x18) = entry_ebx - 0x1c
            *(entry_ebx - 0x10) = 0
            *(entry_ebx - 0x14) = 1
    else
        *(arg4 + 0x61) &= ecx.b
else
    *(arg4 + 0x61) &= ecx:1.b
    *arg1
    int32_t* esp_1 = *arg1 * 0x68
    bool c_1 = unimplemented  {imul esp, dword [eax], 0x68}
    int32_t edi = *esp_1
    uint16_t* esi_2 = esp_1[1]
    void* ebp = esp_1[2]
    void* ebx = esp_1[4]
    void* edx = esp_1[5]
    esp_1[6]
    char* eax = esp_1[7]
    void* esp_4 = &esp_1[8]
    
    if (not(c_1))
        goto label_402bb2
    
    uint16_t esi_3 = __outsd(edx.w, *esi_2, esi_2, eflags)
    int16_t temp0_3
    temp0_3, eflags = __arpl_memw_gpr16(*(ebx + 0x75), esp_4.w)
    *(ebx + 0x75) = temp0_3
    
    if (c_1)
        arg6 = *esp_4
        uint16_t* esi_6 = *(esp_4 + 4)
        arg4 = *(esp_4 + 8)
        entry_ebx = *(esp_4 + 0x10)
        arg2 = *(esp_4 + 0x14)
        ecx = *(esp_4 + 0x18)
        arg1 = *(esp_4 + 0x1c)
        esp = esp_4 + 0x20
        esi_5 = __outsb(arg2.w, *esi_6, esi_6, eflags)
        *(fsbase + &ecx[0x39]) &= ecx:1.b
        goto label_402c11
    
    char* cs
    *(cs + eax) &= eax.b
    *eax += eax.b
    eax[(ebp << 1) + 0x65] += edx.b
    char temp10_1 = *(ebp + 0x6e)
    *(ebp + 0x6e) &= edx:1.b
    
    if ((temp10_1 & edx:1.b) s>= 0)
        int16_t temp0_4
        temp0_4, eflags = __arpl_memw_gpr16(*(gsbase + ebp + 0x64), esi_3)
        *(gsbase + ebp + 0x64) = temp0_4
        *(ebx + 0x6d) &= edx:1.b
        edi = *esp_4
        esi_2 = *(esp_4 + 4)
        ebp = *(esp_4 + 8)
        ebx = *(esp_4 + 0x10)
        edx = *(esp_4 + 0x14)
        *(esp_4 + 0x18)
        eax = *(esp_4 + 0x1c)
        esp_4 += 0x20
    label_402bb2:
        uint8_t* edi_1
        uint8_t temp0_5
        temp0_5, edi_1 = __insb(edi, edx.w, eflags)
        *edi_1 = temp0_5
        uint8_t* edi_2
        uint8_t temp0_6
        temp0_6, edi_2 = __insb(edi_1, edx.w, eflags)
        *edi_2 = temp0_6
        char temp7_1 = *(edx + 0x6c) & eax:1.b
        *(edx + 0x6c) = temp7_1
        cond:2_1 = temp7_1 s< 0
        __outsd(edx.w, *esi_2, esi_2, eflags)
        int16_t temp0_7
        temp0_7, eflags = __arpl_memw_gpr16(*(ebx + 0x20), ebp.w)
        *(ebx + 0x20) = temp0_7
        uint8_t* edi_3
        uint8_t temp0_8
        temp0_8, edi_3 = __insb(edi_2, edx.w, eflags)
        *edi_3 = temp0_8
        arg6 = *esp_4
        arg4 = *(esp_4 + 8)
        entry_ebx = *(esp_4 + 0x10)
        arg2 = *(esp_4 + 0x14)
        ecx = *(esp_4 + 0x18)
        arg1 = *(esp_4 + 0x1c)
        esp = esp_4 + 0x20
        *(entry_ebx + 0x20)
        esi_5 = *(entry_ebx + 0x20) * 0x61
        bool c_2 = unimplemented  {imul esi, dword [ebx+0x20], 0x61}
        
        if (c_2)
            goto label_402c29
        
        char temp9_1 = *0x6220000a
        
        if (ecx.b - temp9_1 s>= 0)
            return sub_402c40() __tailcall
        
        if (ecx.b u>= temp9_1)
            ecx[0x37].b &= arg1:1.b
            *(fsbase + &ecx[0x39]) &= ecx:1.b
            goto label_402c11
        
        *arg1 &= arg1.b
        *arg1 += arg1.b
        arg4[0x37].b += arg2.b
        arg4 = *(esi_5 + 0x6f) * 0x77
        esi = __outsb(arg2.w, *esi_5, esi_5, eflags)
        char temp12_1 = *(entry_ebx + 0x74)
        *(entry_ebx + 0x74) += arg2.b
        
        if (temp12_1 + arg2.b u< temp12_1)
            arg2 -= 1
            arg1[0x4ad7023d] += arg1.b
            char temp13_1 = *arg1
            *arg1 += arg1.b
            cond:6_1 = temp13_1 == neg.b(arg1.b)
            goto label_402c52
        
        esi = __outsb(arg2.w, *esi, esi, eflags)
        char temp14_1 = *(entry_ebx + esi)
        *(entry_ebx + esi) += arg1.b
        c = temp14_1 + arg1.b u< temp14_1
        bool p_1 = unimplemented  {add byte [bx+si], al}
        *(esp - 4) = esp
        *(esp - 8) = 0x69732065
        esp -= 8
        
        if (not(p_1))
            goto label_402bec
        
        *(arg4 + arg1 - 0xa) += arg2:1.b
        char temp15_1 = ecx.b
        ecx.b += *arg6
        cond:7_1 = temp15_1 != neg.b(*arg6)
        goto label_402c57
    
    *esp_4
    *(esp_4 + 4)
    *(esp_4 + 8)
    *(esp_4 + 0x10)
    *(esp_4 + 0x14)
    *(esp_4 + 0x18)
return sub_402c40() __tailcall
