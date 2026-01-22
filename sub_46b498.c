// 函数: sub_46b498
// 地址: 0x46b498
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint16_t* esi_1 = 0x40ffbcff
*arg5
int32_t var_4 = 0xfc00473b
*arg5
int32_t* var_8 = &var_4
void* entry_ebx
*arg1 += entry_ebx:1.b
arg1[0xa8004739] += entry_ebx:1.b
arg1.b = adc.b(arg1.b, 0x3b, arg1.b u< *(arg5 + 1))
char temp2 = *(arg5 + 2)
*(arg5 + 2) += arg3.b
int32_t** var_c = &var_8
void* var_e
void* esp_1 = &var_e:2
void* ebx = entry_ebx + 1

if (entry_ebx != 0xffffffff)
    goto label_46b538

int32_t eflags
char* eax
uint8_t* edi_2
void* eax_2
void* eax_3

if (entry_ebx == 0xffffffff)
    *arg1 += arg1.b
label_46b538:
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    uint8_t temp0_6
    temp0_6, edi_2 = __insb(arg5 + 2, arg2.w, eflags)
    *edi_2 = temp0_6
    arg3:1.b = 0x46
label_46b543:
    *(arg1 * 2) += arg3.b
    *arg1 += arg1.b
    arg8 - fconvert.t(*arg1)
    arg1[0xbc00403f] += arg2:1.b
    eax_2 = &arg1[2]
label_46b553:
    eax_2.b *= 2
    eax_3 = eax_2 + 1
label_46b557:
    eax_3:1.b += eax_3.b
    *(eax_3 + 0x403f) += ebx:1.b
    *(esp_1 + edi_2) += ebx.b
    *(eax_3 + 0x3e) += ebx.b
    eax = eax_3 + 3
else
    int16_t temp0
    temp0, edi_2 = __insd(arg5 + 2, arg2.w, eflags)
    *edi_2 = temp0
    esp_1 = &var_c:1
    uint16_t* esi = __outsd(arg2.w, *0x40ffbcff, 0x40ffbcff, eflags)
    int16_t temp0_1
    temp0_1, eflags = __arpl_memw_gpr16(*(ebx + 0x46), arg4.w)
    *(ebx + 0x46) = temp0_1
    esi_1 = __outsd(arg2.w, *esi, esi, eflags)
    
    if (temp2 + arg3.b u< temp2)
        *arg1 += arg1.b
        *(arg4 + (esi_1 << 2) + 0x46) += arg3:1.b
        goto label_46b543
    
    char temp0_2
    char temp1_1
    temp0_2, temp1_1, eflags = __aam_immb(0xb4, arg1.b)
    arg1.b = temp0_2
    arg1:1.b = temp1_1
    esi_1 += 1
    uint8_t temp4_1 = *edi_2
    *edi_2 += arg1.b
    bool c_2 = temp4_1 + arg1.b u< temp4_1
    __andps_xmmxud_memxud(arg6, *(ebx + 0x75))
    
    if (not(c_2))
        *(esi_1 + edi_2 + 0x3ec00040) += ebx:1.b
        eax_3 = &arg1[1]
        goto label_46b557
    
    uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags)
    int16_t temp0_3
    temp0_3, edi_2 = __insd(edi_2, arg2.w, eflags)
    *edi_2 = temp0_3
    esp_1 = &var_c:2
    uint16_t* esi_3 = __outsd(arg2.w, *esi_2, esi_2, eflags)
    int16_t temp0_4
    temp0_4, eflags = __arpl_memw_gpr16(*(ebx + 0x46), arg4.w)
    *(ebx + 0x46) = temp0_4
    esi_1 = __outsd(arg2.w, *esi_3, esi_3, eflags)
    
    if (c_2)
        eax_2 = &arg1[1]
        goto label_46b553
    
    *(ebx - 0x5c13ffba)
    esi_1 += 1
    *arg2 += arg2.b
    char temp5_1 = *0x6d726f46
    *0x6d726f46 += arg1.b
    bool c_3 = temp5_1 + arg1.b u< temp5_1
    
    if (not(c_3))
        var_e = &var_c:2
        *arg1 = adc.b(*arg1, arg1.b, c_3)
        void** var_12 = &var_e
        esp_1 = &var_12
        esi_1 += 1
    else
        *(arg1 + arg2 + 0x40) += arg2.b
        void arg_3c
        *(&arg_3c + (edi_2 << 3)) += arg2.b
    
    *(esp_1 + (edi_2 << 3) + 0x46) += ebx:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp6_1 = arg1[0x80000000]
    arg1[0x80000000] += arg1.b
    *arg1 = adc.d(*arg1, arg1, temp6_1 + arg1.b u< temp6_1)
    eax = arg1 | 0x65786950
    uint8_t temp0_5
    temp0_5, edi_2 = __insb(edi_2, arg2.w, eflags)
    *edi_2 = temp0_5
    
    if (eax u< 0)
        if (eax u< 0)
            jump(0x46b565)
        
        jump(0x46b51c)
*eax += arg3.b
*(esp_1 - 4) = esp_1
uint16_t* esi_4 = __outsd(arg2.w, *esi_1, esi_1, eflags)
__outsb(arg2.w, *esi_4, esi_4, eflags)
void* esi_6 = *(edi_2 + ((arg4 - 1) << 1) + 0x72) * 0xc400408d
arg3:1.b = 0x46
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
eax:1.b += arg2:1.b
arg3:1.b = 0x46
*(esi_6 * 5) += arg2.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*(esi_6 + 1) += eax.b
arg2:1.b = 0x46
eax[0x28000000] += eax:1.b
char temp0_7 = *arg3
*arg3 = eax.b
eax.b = temp0_7
*arg2 s>>= 0x42
*(esi_6 + 1 + edi_2 + 0x33fc0040) += ebx:1.b
eax:1.b += eax.b
eax[0x403f] += ebx:1.b
*(esp_1 - 4 + edi_2) += ebx.b
void* eax_7
eax_7:1.b = (&eax[2]):1.b + (&arg2[1]).b
int32_t eflags_1
char temp0_8
char temp1_2
temp0_8, temp1_2, eflags_1 = __aas(eax_7.b, eax_7:1.b, eflags)
eax_7.b = temp0_8
eax_7:1.b = temp1_2
eax_7.b += (&arg2[1]):1.b
*(esi_6 + 1) - *(edi_2 + 1)
void* esi_8 = esi_6 + 5
void* edi_4 = &edi_2[5]
eax_7:1.b += eax_7.b
*edi_4 += (&arg3[1]).b
void* ecx_1 = &arg3[2]
*(edi_4 + esi_8 + 0x36640042) += ebx.b
*(edi_4 + esi_8 + 0x38a40042) += ecx_1:1.b
eax_7.b += ebx.b
arg2[4]
char* esp_3 = 0xb4004237
int32_t eflags_2
char temp0_9
char temp1_3
temp0_9, temp1_3, eflags_2 = __aaa(eax_7.b, eax_7:1.b, eflags_1)
eax_7.b = temp0_9
eax_7:1.b = temp1_3
eax_7.b += eax_7:1.b
uint16_t* esi_12
int16_t es

if (eax_7.b s< arg2[5])
    eax_7.b ^= 0xb6
    esi_12 = esi_8 + 1
    *esi_12 += ecx_1.b
else
    edi_4 += 1
    *esi_8 += ecx_1.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *ecx_1 += eax_7.b
    *eax_7 += eax_7.b
    *(eax_7 + &arg2[5] + 0x380040) += ebx:1.b
    char temp7_1 = *eax_7
    *eax_7 += eax_7.b
    *0xb4004235 = 0xb4004239
    *0xb4004231 = ebx
    int32_t eflags_3
    int16_t temp0_10
    temp0_10, eflags_3 = __arpl_memw_gpr16(*(arg2 + 0x6a), esi_8.w)
    *(arg2 + 0x6a) = temp0_10
    eax_7.b = adc.b(eax_7.b, 0xb6, temp7_1 + eax_7.b u< temp7_1)
    uint16_t* gsbase
    int32_t esi_10 = __outsb((&arg2[5]).w, *(gsbase + esi_8), esi_8, eflags_3) + 1
    *edi_4 += eax_7.b
    *0xb4004231
    *0xb400422f = 0xb4004233
    *0xb400422b = ebx
    int16_t temp0_11
    temp0_11, eflags_2 = __arpl_memw_gpr16(*(arg2 + 0x6a), esi_10.w)
    *(arg2 + 0x6a) = temp0_11
    __outsb((&arg2[5]).w, *(gsbase + esi_10), esi_10, eflags_2)
    esi_12, es = __les_gprz_memp(*(arg4 - 0x78dbffbb))
    ecx_1 += 1
    arg2[5] += eax_7.b
    *0x6d726f46 += eax_7.b
    *(eax_7 + 0x46b634) += (&arg2[5]).b
    int16_t cs
    *0xb4004227 = zx.d(cs)
    esp_3 = 0xb4004227

int32_t temp8 = *(eax_7 + (ecx_1 << 1) + 0x69) | &arg2[5]
*(eax_7 + (ecx_1 << 1) + 0x69) = temp8
uint16_t* esi_13 = __outsb((&arg2[5]).w, *esi_12, esi_12, eflags_2)
void* edx_4

if (temp8 == 0)
    *eax_7 += eax_7.b
    eax_7.b += ebx:1.b
    edx_4:1.b = 0x46
    *(edi_4 + (esi_13 << 2) + 0x46) += ecx_1.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *eax_7 += eax_7.b
    *edx_4 += ebx:1.b
    ebx:1.b = 0x46
    *(eax_7 + 1) += ecx_1:1.b
    *eax_7 += eax_7.b
    *(esi_13 + 0x3ac00041) -= eax_7.b
    edx_4 += 1
label_46b6ab:
    *(esi_13 + edi_4 + 0x33fc0040) += ebx:1.b
    edx_4 += 1
    eax_7:1.b += eax_7.b
    *(eax_7 + 0x403f) += ebx:1.b
    *(esp_3 + edi_4) += ebx.b
    *(eax_7 + 2) += ebx.b
    *(esp_3 - 4) = ebx
    eax_7.b = (eax_7 + 2).b + edx_4:1.b
    *esi_13 - *(edi_4 + 1)
    esi_13 = &esi_13[2]
    edi_4 += 5
    ecx_1 += 1
    eax_7:1.b += eax_7.b
    goto label_46b6cd

uint16_t* esi_14 = __outsb((&arg2[5]).w, *esi_13, esi_13, eflags_2)
esi_13 = __outsw((&arg2[5]).w, *esi_14, esi_14, eflags_2)
eax_7 += 1
*eax_7 += eax_7.b
*ecx_1 += eax_7.b
*eax_7 += eax_7.b
*(eax_7 + &arg2[5] + 0x380040) += ebx:1.b
*eax_7 += eax_7.b
*(esp_3 - 4) = esp_3
esp_3 -= 4
edx_4:1.b = 0x46
char temp9_1 = *ecx_1
*ecx_1 += edx_4.b
bool c_6 = temp9_1 + edx_4.b u< temp9_1
bool o_1 = add_overflow(temp9_1, edx_4.b)
__andps_xmmxud_memxud(arg7, *(eax_7 + 0x6f))
void* ecx_2
void* edx_6

if (o_1)
    eax_7.b |= 0xa7
label_46b6d2:
    ecx_2 = ecx_1 + 1
    *(edi_4 + esi_13 + 0x36640042) += ebx.b
    edx_6 = edx_4 + 1
else
    if (o_1)
        *eax_7 += ecx_1:1.b
        char temp0_12 = *ecx_1
        *ecx_1 = eax_7.b
        eax_7.b = temp0_12
        *edx_4 s>>= 0x42
        goto label_46b6ab
    
    esi_13 = __outsd(edx_4.w, *esi_13, esi_13, eflags_2)
    
    if (c_6)
    label_46b6cd:
        edx_4 += 1
        *edi_4 += ecx_1.b
        goto label_46b6d2
    
    ecx_2 = ecx_1 + 1
    
    if (not(c_6))
        *esp_3
        *(esp_3 + 4)
        *(esp_3 + 8)
        *(esp_3 + 0x10)
        *(esp_3 + 0x14)
        *(esp_3 + 0x18)
        *(esp_3 + 0x1c)
        
        if (ecx_1 + 1 s>= 0)
            jump(0x46b672)
        
        jump(0x46b666)
    
    char temp0_13
    char temp1_4
    temp0_13, temp1_4, eflags_2 = __aaa(eax_7.b, eax_7:1.b, eflags_2)
    eax_7.b = temp0_13
    eax_7:1.b = temp1_4
    edx_6 = edx_4 + 1
    *(esi_13 * 2 + 0x42) += eax_7:1.b

*(edi_4 + esi_13 + 0x38a40042) += ecx_2:1.b
eax_7.b += ebx.b
*(edx_6 + 1)
int32_t eflags_4
char temp0_14
char temp1_5
temp0_14, temp1_5, eflags_4 = __aaa(eax_7.b, eax_7:1.b, eflags_2)
eax_7.b = temp0_14
eax_7:1.b = temp1_5
eax_7.b += eax_7:1.b
*(edx_6 + 2)
*0xb4004233 = eax_7
uint8_t* edi_7 = edi_4 + 1
*esi_13 += ecx_2.b
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*edi_7 += eax_7.b
*eax_7 += eax_7.b
*(eax_7 + edx_6 + 2 + 0x380040) += ebx:1.b
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*eax_7 += ecx_2:1.b
*(eax_7 * 2) += ecx_2.b
*(eax_7 + edx_6 + 3 + 0x500040) += ebx:1.b
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*(eax_7 + edx_6 + 3 + 0x8c0040) += ebx:1.b
*eax_7 += eax_7.b
*0x5400400c = eax_7
char* esp_6 = 0x5400400c
void* edx_9
edx_9:1.b = 0x46
eax_7.b += edx_9.b
*eax_7 += eax_7.b
*(0x5400400c + (edx_9 << 1)) += ecx_2.b
void* edi_11

if (add_overflow(ecx_2, 1))
label_46b7af:
    *(esp_6 + edi_7) += ebx.b
    eax_7.b = (eax_7 + 1).b + (eax_7 + 1):1.b
    *(esi_13 - 1) - *edi_7
    void* esi_17 = esi_13
    void* edi_9 = &edi_7[1]
    eax_7.b += 0x46
    *esi_17 - *edi_9
    void* edi_10 = edi_9 + 4
    eax_7.b += ebx:1.b
    *(esi_17 + 4) - *edi_10
    edi_11 = edi_10 + 4
    *(eax_7 + 0x10004788) += ebx:1.b
else
    char* edi_8
    uint8_t temp0_15
    temp0_15, edi_8 = __insb(edi_7, edx_9.w, eflags_4)
    *edi_8 = temp0_15
    esp_6 = *(ebx + 0x61) * 0x6e6f6974 - 1
    ebx:1.b = 0x46
    *edi_8 += eax_7.b
    eax_7.b |= 0x54
    
    if (not(add_overflow(ecx_2 + 1, 1)))
        uint8_t temp0_16
        temp0_16, edi_7 = __insb(edi_8, edx_9.w, eflags_4)
        *edi_7 = temp0_16
        int32_t esp_8 = *(ebx + 0x61) * 0x6e6f6974
        *(esp_8 - 4) = arg4 - 1
        esp_6 = esp_8 - 0x46ba
        eax_7.b &= 0x87
        *edx_9 += eax_7.b
        *0x6d726f46 += eax_7.b
        *(eax_7 + 0x46b7) += 0x46
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        eax_7.b += ebx.b
        ebx:1.b = 0x46
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        eax_7.b += (ecx_2 + 3).b
        ebx:1.b = 0x46
        *(eax_7 * 2) += (ecx_2 + 3):1.b
        *eax_7 += eax_7.b
        edi_7[0x41] = edi_7[0x41]
        eax_7.b = 0x3e
        *(esi_13 - 1 + edi_7 + 0x3ec00040) += 0x46
        void* eax_11
        eax_11:1.b = (eax_7 + 2):1.b + (eax_7 + 2).b
        eax_7 = eax_11 + 1
        *(eax_7 + 0x403e) += 0x46
        goto label_46b7af
    
    edi_11 = &edi_8[1]
    *eax_7 += edx_9.b

*edi_11 = eax_7
*(edi_11 + (eax_7 << 1) + 0x6c)
int32_t edi_12 = *esp_6
uint16_t* esi_20 = *(esp_6 + 4)
*(esp_6 + 8)
char* ebx_2 = *(esp_6 + 0x10)
char* edx_10 = *(esp_6 + 0x14)
char* ecx_9 = *(esp_6 + 0x18)
char* eax_12 = *(esp_6 + 0x1c)
void* esp_13 = &esp_6[0x20]
char i
char temp25_1

do
    edi_12 += 1
    *ecx_9 += eax_12.b
    *eax_12 += eax_12.b
    *ecx_9 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *edx_10 += eax_12.b
    char temp15_1 = *ebx_2
    *ebx_2 += eax_12.b
    bool c_7 = temp15_1 + eax_12.b u< temp15_1
    *(esp_13 - 4) = esp_13
    esp_13 -= 4
    esi_20 = __outsd(edx_10.w, *esi_20, esi_20, eflags_4)
    bool z_3
    
    if (add_overflow(temp15_1, eax_12.b))
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        z_3 = eax_12 == 0x97acf400
        
        if (z_3)
            int16_t es_2
            eax_12, es_2 = __les_gprz_memp(*edx_10)
        label_46b909:
            
            if (z_3)
                jump(sub_46b8f0+0x2c)
            
        label_46b937:
            *esp_13
            *(esp_13 + 4)
            return 
        
        edi_12.w += 1
        uint8_t* edi_18
        uint8_t temp0_20
        temp0_20, edi_18 = __insb(edi_12, edx_10.w, eflags_4)
        *edi_18 = temp0_20
        *esp_13
        *(esp_13 + 8)
        *(esp_13 + 0x10)
        *(esp_13 + 0x14)
        *(esp_13 + 0x18)
        
        if (eax_12 u>= 0x97acf400)
            return sub_46b8c0(*(esp_13 + 0x1c)) __tailcall
        
        *(esp_13 + 0x1c) = *(esp_13 + 4)
        SetWindowPos()
        esp_13 += 0x38
        goto label_46b937
    
    char temp19_1 = *eax_12
    *eax_12 = adc.b(temp19_1, eax_12.b, c_7)
    eax_12.b = adc.b(eax_12.b, 0, 
        adc.b(temp19_1, eax_12.b, c_7) u< temp19_1
            || (c_7 && adc.b(temp19_1, eax_12.b, c_7) == temp19_1))
    char temp20_1 = ebx_2:1.b
    char temp21_1 = ebx_2:1.b
    ebx_2:1.b *= 2
    
    if (temp20_1 s>= neg.b(temp21_1))
        *ecx_9 += eax_12.b
        *eax_12 += eax_12.b
        *edx_10 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *ebx_2 += eax_12.b
        char temp26 = *0x68676952
        *0x68676952 += eax_12.b
        bool c_12 = temp26 + eax_12.b u< temp26
        
        if (temp26 == neg.b(eax_12.b))
            data_4b1cf0
            return 
        
        char temp29 = *eax_12
        *eax_12 = adc.b(temp29, eax_12.b, c_12)
        *eax_12 = sbb.b(*eax_12, eax_12.b, 
            adc.b(temp29, eax_12.b, c_12) u< temp29
                || (c_12 && adc.b(temp29, eax_12.b, c_12) == temp29))
        char temp30 = ebx_2:1.b
        char temp31 = ebx_2:1.b
        ebx_2:1.b *= 2
        
        if (temp30 s< neg.b(temp31))
            jump(0x46b80a)
        
        jump(0x46b880)
    
    if (temp20_1 + temp21_1 s>= 0)
        *esi_20 += eax_12.b
        char temp27 = *0x6d726f46
        *0x6d726f46 += eax_12.b
        
        if (temp27 + eax_12.b u>= temp27)
            jump(0x46b7fc)
        
        jump(0x46b7f6)
    
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 = &eax_12[*eax_12]
    char temp16_1 = eax_12.b
    eax_12.b += 0x4c
    bool c_9 = temp16_1 u>= 0xb4
    
    if (temp16_1 == 0xb4)
        *(eax_12 * 2) += eax_12.b
        *(esp_13 - 4) = zx.d(es)
        esp_13 -= 4
        z_3 = edx_10 == 0xffffffff
        uint16_t* esi_22 = __outsd(edx_10.w + 1, *esi_20, esi_20, eflags_4)
        
        if (z_3)
            goto label_46b909
        
        __outsd(edx_10.w + 1, *esi_22, esi_22, eflags_4)
        int16_t* edi_17
        int16_t temp0_19
        temp0_19, edi_17 = __insd(edi_12, edx_10.w + 1, eflags_4)
        *edi_17 = temp0_19
        *eax_12 += (edx_10.w + 1).b
        eax_12[1] += ecx_9:1.b
        eax_12[1] += (&eax_12[1]).b
        undefined
    
    char temp23_1 = *eax_12
    *eax_12 = adc.b(temp23_1, eax_12.b, c_9)
    *eax_12 = adc.b(*eax_12, eax_12.b, 
        adc.b(temp23_1, eax_12.b, c_9) u< temp23_1
            || (c_9 && adc.b(temp23_1, eax_12.b, c_9) == temp23_1))
    i = ebx_2:1.b
    temp25_1 = ebx_2:1.b
    ebx_2:1.b *= 2
while (i s>= neg.b(temp25_1))
jump(0x46b7cc)
