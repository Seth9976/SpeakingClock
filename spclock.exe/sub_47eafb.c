// 函数: sub_47eafb
// 地址: 0x47eafb
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg3.b
*arg1 += arg1.b
char temp1 = arg1.b
char temp2 = arg1.b
arg1.b *= 2
bool c = temp1 + temp2 u< temp1
int32_t eflags
char* entry_ebx
char** esp
uint16_t* esi_4
void* var_8
char* var_2
char* arg_14
char* arg_18
TEB* fsbase
uint16_t* gsbase
int16_t es
int16_t ss
bool z_2
bool z_3

if (temp1 != neg.b(temp2) && not(c))
    es = __return_addr.w
    esp = &__return_addr:2
    __andps_xmmxud_memxud(arg7, *(arg1 + 0x61))
    
    if (c)
        goto label_47ebac
    
    uint16_t* temp3_1 = arg3
    arg3 += 1
    bool p_1 = unimplemented  {inc ecx}
    z_2 = temp3_1 == 0xffffffff
    bool c_2
    
    if (not(z_2))
        if (not(c))
            __bound_gprv_mema32(arg5, *(arg4 + 0x74))
            
            if (not(c))
                if (z_2)
                    goto label_47ebce
                
                if (c)
                    if (p_1)
                        jump(0x47ebe6)
                    
                    jump("Event")
                
                __outsb(arg2.w, *arg5, arg5, eflags)
                
                if (arg3 == 1)
                    jump(0x47ec52)
                
                jump(0x47ebed)
            
            var_2 = &__return_addr:2
            esp = &var_2
        label_47eba0:
            *(esp - 4) = arg2
            esp -= 4
            int16_t temp0_3
            temp0_3, eflags = __arpl_memw_gpr16(*(gsbase + arg1 * 2 + 0x2c), arg5.w)
            *(gsbase + arg1 * 2 + 0x2c) = temp0_3
            *arg1 = adc.d(*arg1, arg1, c)
        label_47eba9:
            *arg1 += arg1.b
            *arg1 += arg1.b
            arg1:1.b = 0xeb
            goto label_47ebb2
        
        int16_t temp0_4
        temp0_4, eflags = __arpl_memw_gpr16(*(arg1 + 0x45), arg4.w)
        *(arg1 + 0x45) = temp0_4
        arg5 = *(fsbase + arg1 + (arg2 << 1) + 0x72) * 0x6365746f
        
        if (z_2)
            uint16_t* esi_7 = __outsb(arg2.w, *arg5, arg5, eflags)
            es = __return_addr:2.w
            uint16_t* esi_8 = __outsd(arg2.w + 1, *esi_7, esi_7, eflags)
            __outsd(arg2.w + 1, *esi_8, esi_8, eflags)
            uint8_t* edi_3
            uint8_t temp0_7
            temp0_7, edi_3 = __insb(arg6, arg2.w + 1, eflags)
            *edi_3 = temp0_7
            entry_ebx = arg_14
            arg2 = arg_18
            arg3 = arg12
            void arg_24
            esp = &arg_24
            __outsb(arg2.w, *arg9, arg9, eflags)
            *(arg3 + arg2) += arg3:1.b
            *(arg13 + 1 + arg2 + 0x40) += arg2.b
            *(arg13 + 1 + arg2 + 0x40) += arg2.b
            char temp9_1 = *(arg13 + 1)
            *(arg13 + 1) += (arg13 + 1).b
            *(arg13 + 1) = adc.b(*(arg13 + 1), (arg13 + 1).b, temp9_1 + (arg13 + 1).b u< temp9_1)
            arg1.b = (arg13 + 1).b + 0x14
            goto label_47ec2b
        
        __builtin_strncpy(&var_2, "ange", 4)
        char temp10_1 = *(arg1 + arg3)
        *(arg1 + arg3) += arg1.b
        c_2 = temp10_1 + arg1.b u< temp10_1
        uint32_t var_6_1 = zx.d(es)
        esp = &var_8:2
    label_47ebd0:
        *(esp - 4) = entry_ebx
        void* esp_6 = esp - 4
        esi_4 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
        
        if (c_2)
            char temp12_1 = *arg1
            *arg1 += arg3.b
            c_2 = temp12_1 + arg3.b u< temp12_1
            z_3 = temp12_1 == neg.b(arg3.b)
        else
            *(esp_6 - 4) = esp_6
            esp_6 -= 4
            void* temp13_1 = arg6
            arg6 -= 1
            z_3 = temp13_1 == 1
            __bound_gprv_mema32(arg4, *(arg2 + 0x65))
            int16_t temp0_6
            temp0_6, eflags = __arpl_memw_gpr16(*(arg1 * 2 + 8), esi_4.w)
            *(arg1 * 2 + 8) = temp0_6
        
        *(esp_6 - 4) = entry_ebx
        esp = esp_6 - 4
        
        if (z_3)
            goto label_47ec44
        
        if (c_2)
            goto label_47ec59
        
        *(esp - 4) = arg1
        __outsd(arg2.w, *esi_4, esi_4, eflags)
        
        if (not(c_2))
            jump(0x47ebf0)
        
        jump(0x47ebe9)
    
label_47ebc2:
    
    if (not(z_2))
        int16_t temp0_5
        temp0_5, eflags = __arpl_memw_gpr16(*(entry_ebx + (arg1 << 1) + 0x68), arg5.w)
        *(entry_ebx + (arg1 << 1) + 0x68) = temp0_5
        arg6 = *esp
        uint16_t* esi_3 = esp[1]
        arg4 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        arg3 = esp[6]
        arg1 = esp[7]
        esp = &esp[8]
        arg5 = __outsb(arg2.w, *esi_3, esi_3, eflags)
        *(gsbase + arg5) += arg1.b
    label_47ebce:
        *arg5
        *arg5 |= arg1.b
        c_2 = false
        goto label_47ebd0
    
    arg1.b = __in_al_dx(arg2.w, eflags)
label_47ec2b:
    char temp6_1 = *arg1
    *arg1 += arg3.b
    bool z_4 = temp6_1 == neg.b(arg3.b)
    *(esp - 4) = zx.d(ss)
    *(esp - 8) = esp - 4
    *(esp - 0xc) = arg2
    *(entry_ebx + 0x68)
    int32_t esp_10 = *(entry_ebx + 0x68) * 0x74696445
    bool c_4 = unimplemented  {imul esp, dword [ebx+0x68], 0x74696445}
    *(esp_10 - 4) = entry_ebx
    void* edi_4 = *(esp_10 - 4)
    esi_4 = *esp_10
    arg4 = *(esp_10 + 4)
    entry_ebx = *(esp_10 + 0xc)
    arg2 = *(esp_10 + 0x10)
    arg3 = *(esp_10 + 0x14)
    arg1 = *(esp_10 + 0x18)
    esp = esp_10 + 0x1c
    
    if (not(z_4) && not(c_4))
        entry_ebx = &entry_ebx[1]
        uint8_t temp0_10
        temp0_10, arg6 = __insb(edi_4, arg2.w, eflags)
        *arg6 = temp0_10
        goto label_47ec3d
    
    *arg1 += arg2.b
    arg1.b = (&arg1[1]).b + arg2:1.b
    arg1.b = __in_al_dx(arg2.w, eflags)
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b += entry_ebx:1.b
    arg1.b = __in_al_dx(arg2.w, eflags)
    arg6 = edi_4 + 2
    *(arg1 * 2) += arg1.b
    *arg1 += arg1.b
else
    arg1[0xbc00403e] += arg2:1.b
    void* eax
    eax.b = (&arg1[1]).b * 2
    void* eax_1
    eax_1:1.b = (eax + 1):1.b + (eax + 1).b
    *(eax_1 + 0x403f) += entry_ebx:1.b
    *(&var_2:2 + arg6) += entry_ebx.b
    void* eax_3
    eax_3.b = (eax_1 + 2).b + (eax_1 + 2):1.b
    *arg5 - *arg6
    void* esi = &arg5[1]
    void* edi = arg6 + 1
    eax_3.b += arg2:1.b
    *esi - *edi
    void* edi_1 = edi + 4
    eax_3.b += entry_ebx:1.b
    *(esi + 4) - *edi_1
    void* edi_2 = edi_1 + 4
    *eax_3 += entry_ebx:1.b
    char temp15_1 = *edi_2
    *edi_2 += arg3.b + 3
    c = temp15_1 + arg3.b + 3 u< temp15_1
    bool z_1 = temp15_1 == neg.b(arg3.b + 3)
    int32_t var_6 = &var_2:2
    var_8 = eax_3
    arg6 = var_8
    arg5 = var_6
    arg4 = __return_addr
    entry_ebx = arg9
    arg2 = arg10
    arg3 = arg11
    arg1 = arg_14
    esp = &arg_18
    
    if (c)
        if (z_1)
            goto label_47eba9
        
        char temp20_1 = arg1.b
        arg1.b += 0x52
        c = temp20_1 u>= 0xae
    label_47eb9b:
        int32_t eflags_2
        int16_t temp0_2
        temp0_2, eflags_2 = __arpl_memw_gpr16(*(gsbase + arg4 + arg1 + 0x54), arg5.w)
        *(gsbase + arg4 + arg1 + 0x54) = temp0_2
        goto label_47eba0
    
    uint16_t* temp19_1 = arg3
    arg3 += 1
    
    if (temp19_1 == 0xffffffff)
        arg1:1.b = 0xeb
        goto label_47ebb2
    
    if (not(c))
        __bound_gprv_mema32(arg5, *(arg4 + 0x74))
        
        if (not(c))
            char temp27_1 = arg3.b
            arg3.b += *arg1
            c = temp27_1 + *arg1 u< temp27_1
            arg_14 = zx.d(es)
            esp = &arg_14
        
        *(esp - 4) = entry_ebx
        esp -= 4
        arg5 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
        
        if (c)
            char temp29_1 = *(arg2 * 3)
            *(arg2 * 3) = adc.b(temp29_1, arg1.b, c)
            c = adc.b(temp29_1, arg1.b, c) u< temp29_1
                || (c && adc.b(temp29_1, arg1.b, c) == temp29_1)
        else
            *(esp - 4) = esp
            arg6 -= 1
            __bound_gprv_mema32(arg4, *(arg2 + 0x65))
            int32_t eflags_1
            int16_t temp0_1
            temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg1 + arg2 + 4), arg5.w)
            *(arg1 + arg2 + 4) = temp0_1
            *(esp - 8) = arg2
            esp -= 8
        
        goto label_47eb9b
    
    *(arg3 + arg2) += arg3:1.b
    arg1 = &arg1[1]
    *arg1 += arg1.b
    *arg1 += arg1.b
label_47ebac:
    *(arg4 - 0x144bffc0) += arg3.b
label_47ebb2:
    arg6 += 1
    char temp4_1 = *arg1
    *arg1 += arg3.b
    z_2 = temp4_1 == neg.b(arg3.b)
    *(esp - 4) = zx.d(ss)
    *(esp - 8) = esp - 4
    *(esp - 0xc) = arg2
    *(entry_ebx + 0x68)
    int32_t esp_4 = *(entry_ebx + 0x68) * 0x74696445
    bool c_1 = unimplemented  {imul esp, dword [ebx+0x68], 0x74696445}
    *(esp_4 - 4) = arg1
    esp = esp_4 - 4
    
    if (not(c_1))
        goto label_47ebc2
    
    int16_t temp0_9
    temp0_9, eflags = __arpl_memw_gpr16(*(arg1 + 0x45), arg4.w)
    *(arg1 + 0x45) = temp0_9
    *(fsbase + entry_ebx + (arg2 << 1) + 0x61)
label_47ec3d:
    esi_4 = *(arg1 + 0x62) * 0x6472616f
label_47ec44:
    char temp11_1 = *(arg1 + arg3)
    *(arg1 + arg3) += arg1.b
    *(esp - 4) = zx.d(es)
    *(esp - 8) = entry_ebx
    esp -= 8
    int32_t esi_13 = __outsb(arg2.w, *(gsbase + esi_4), esi_4, eflags)
    
    if (temp11_1 + arg1.b u< temp11_1)
        *arg2 += arg3.b
    else
        *(esp - 4) = esp
        esp -= 4
        arg6 -= 1
        __bound_gprv_mema32(arg4, *(arg2 + 0x65))
        int16_t temp0_11
        temp0_11, eflags = __arpl_memw_gpr16(*(arg1 * 2 + 0xa), esi_13.w)
        *(arg1 * 2 + 0xa) = temp0_11
    
    esi_4 = esi_13 - 1
    z_3 = esi_13 == 1
label_47ec59:
    
    if (not(z_3))
        arg1.b = arg1.b
        *arg1 += arg1.b
    else
        arg6 -= 1
        __bound_gprv_mema32(arg4, *(arg2 + 0x65))
        int16_t temp0_12
        temp0_12, eflags = __arpl_memw_gpr16(*(entry_ebx + (esi_4 << 1) + 7), esi_4.w)
        *(entry_ebx + (esi_4 << 1) + 7) = temp0_12
        uint16_t* temp21_1 = arg3
        arg3 -= 1
        esi_4 = __outsb(arg2.w, *esi_4, esi_4, eflags)
        
        if (temp21_1 != 1)
            *(esi_4 + 0x75) |= arg3.b
            int16_t* edi_5
            int16_t temp0_13
            temp0_13, edi_5 = __insd(arg6, arg2.w, eflags)
            *edi_5 = temp0_13
            *(esp - 4) = 0x7737261
            __outsb(arg2.w, *esi_4, esi_4, eflags)
            
            if (arg3 == 1)
                jump(0x47ecde)
            
            jump(0x47ec79)
arg8 f- fconvert.t(*arg1)
arg1[0xbc00403f] += arg2:1.b
void* eax_9
eax_9.b = (&arg1[2]).b * 2
void* eax_10
eax_10:1.b = (eax_9 + 1):1.b + (eax_9 + 1).b
*(eax_10 + 0x403f) += entry_ebx:1.b
*(esp + arg6) += entry_ebx.b
*(eax_10 + 0x3e) += entry_ebx.b
void* eax_13
eax_13:1.b = (eax_10 + 3):1.b + arg2.b
void* eax_15
eax_15.b = eax_13.b + arg3:1.b
char temp17 = *entry_ebx
*entry_ebx += arg3.b
bool c_6 = temp17 + arg3.b u< temp17
*(esp - 4) = esp
uint16_t* esi_15 = __outsd(arg2.w, *esi_4, esi_4, eflags)
uint16_t* esi_16 = __outsb(arg2.w, *esi_15, esi_15, eflags)
void* eax_19

if (entry_ebx == 0xffffffff || c_6)
    int16_t es_2
    arg6, es_2 = __les_gprz_memp(*esi_16)
    *(eax_15 + 0x43b2) += arg2.b
    *(esp - 4 + arg6) += (&entry_ebx[1]).b
    eax_19 = eax_15 + 2
    esi_16[&arg3[0x12]].b += eax_19:1.b
else
    if (not(c_6))
        *(arg6 + 0x6e)
        *(arg6 + 0x6e)
        bool c_7 = unimplemented  {imul ebp, dword [edi+0x6e], 0x47ed08}
        int16_t cs
        *(esp - 8) = zx.d(cs)
        int32_t temp24 = *(entry_ebx + 1 + (eax_15 << 1) + 0x6f)
        *(entry_ebx + 1 + (eax_15 << 1) + 0x6f) = adc.d(temp24, arg2, c_7)
        __outsb(arg2.w, *esi_16, esi_16, eflags)
        
        if (adc.d(temp24, arg2, c_7) == 0 || adc.d(temp24, arg2, c_7) u< temp24
                || (c_7 && adc.d(temp24, arg2, c_7) == temp24))
            jump(0x47ed75)
        
        jump("rsionForm")
    
    esi_16 -= 1
    eax_19 = eax_15 - 1

*eax_19 += arg2:1.b
*arg6 += arg3.b
*(eax_19 - 0x41c3ffba) += (eax_19 - 0x41c3ffba).b
*(eax_19 - 0x41c3ffba) = *(eax_19 - 0x41c3ffba)
void* eax_20
eax_20.b = (eax_19 - 0x41c3ffba).b + 0x43
*arg2
int32_t eflags_3
char temp0_16
char temp1_1
temp0_16, temp1_1, eflags_3 = __aaa(eax_20.b, eax_20:1.b, eflags)
eax_20.b = temp0_16
eax_20:1.b = temp1_1
eax_20.b += eax_20:1.b
arg2[1]
eax_20.b ^= 0x4d
*(arg6 * 9 + 0x45) += (&arg2[1]).b
*(eax_20 + 4) += (eax_20 - 1):1.b
*(eax_20 + 0x1cb8427c) += (arg3 + 1):1.b
void* eax_21
eax_21.b = (eax_20 - 1).b + (&arg2[1]).b
eax_21.b += (&arg2[1]):1.b
*((esi_16 + 1) * 9 + 0x45) += 0x43
eax_21.b = eax_21.b
eax_21:1.b = eax_21:1.b
arg3[0x23].b += eax_21.b
*(eax_21 - 0x5f) += (&arg2[1]):1.b
*eax_21 = *eax_21
*0xb4004233 = 0x45
*(arg3 + 1 + ((arg4 + 9) << 2) + 0x43) += 0x43
arg2[1 + ((arg4 + 9) << 1)] += (&arg2[1]):1.b
char temp22 = *eax_21
*eax_21 += (&arg2[1]):1.b

if (temp22 != neg.b((&arg2[1]):1.b) && temp22 + (&arg2[1]):1.b u>= temp22)
    trap(0xd)

char temp25 = *(eax_21 - 0xfffb9f2)
*(eax_21 - 0xfffb9f2) += eax_21.b

if (temp25 + eax_21.b s< 0)
    jump(0x47edeb)

char* eax_22 = eax_21 | 0xf89c0046
*eax_22 += (arg3 + 1):1.b
*(arg4 + 0xb) = rol.d(*(arg4 + 0xb), 1)
eax_22:1.b = 0xc
*((&esi_16[1] << 3) + 0xe040045) += (arg3 + 1).b
eax_22[arg6 << 3] += eax_22.b
*(&arg2[1] * 3 + 0x48) += 0xc
*eax_22 += (&arg2[1]):1.b
*0x4000484c = 0xb8540043
eax_22[0x52] += 0x43
*(eax_22 - 2) += (eax_22 - 2).b
*0x40004848 = 0x4000484c
void* eax_25
eax_25:1.b = (eax_22 - 3):1.b + 0x43
*0x40004844 = 0x40004848
*(arg4 + 0xc + (&arg2[1] << 1) + 0x4ec00048) += (arg3 + 1).b
*((&arg2[1] << 1) + 0xb854008b) = *((&arg2[1] << 1) + 0xb854008b)
*(&arg2[1] * 3 + 0x52e40048) += (eax_25 - 2).b
void* eax_28
eax_28.b = (eax_25 - 3).b
*0x40004844
*(arg4 + 0xc + (&arg2[1] << 1) + 0xa0048) += (&arg2[1]):1.b
undefined
