// 函数: sub_45347e
// 地址: 0x45347e
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint8_t* edi
uint8_t temp0_34
temp0_34, edi = __insb(arg6, arg2.w, eflags)
*edi = temp0_34
char temp1 = *arg5 | arg1.b
*arg5 = temp1

if (temp1 s< 0)
    return sub_45346f(arg1.w, arg4, arg5, edi, arg8) __tailcall

char* entry_ebx
entry_ebx[((arg4 + 1) << 3) - 0x260bffbb] += entry_ebx.b
char temp2 = *arg1
*arg1 += arg3.b
long double x87_r0 = arg8 + float.t(*(arg4 + 2))
arg2.b = sbb.b(arg2.b, entry_ebx.b, temp2 + arg3.b u< temp2)
*arg1 += arg2:1.b
int32_t var_5 = 0x7c0045de
long double x87_r0_3 = x87_r0 + float.t(*(arg4 + 3)) + float.t(*(arg4 + 3)) + float.t(*(arg4 + 3))
char* esp_1 = 0x7c0045de
*arg5
char* eax
eax.b = *arg5
void* esi = &arg5[1]
eax.b = __in_al_dx(arg2.w, eflags)
eax.b *= 2
eax.b = __in_al_dx(arg2.w, eflags)
eax:1.b += arg2.b
eax.b = __in_al_dx(arg2.w, eflags)
eax:1.b += entry_ebx.b
eax.b = __in_al_dx(arg2.w, eflags)
eax:1.b *= 2
eax.b = __in_al_dx(arg2.w, eflags)
eax:1.b += arg3:1.b
eax.b = __in_al_dx(arg2.w, eflags)
*((arg4 + 9) * 9 + 0x45) += eax.b
*((arg4 + 9) * 9 - 0x124bffbb) += arg3.b
*eax += arg2:1.b
__out_dx_al(arg2.w, eax.b, eflags)
eax.b += arg2:1.b
void* eax_1 = __in_oeax_dx(arg2.w, eflags)
*(eax_1 - 0x12) += arg2:1.b
*(eax_1 + 0x1c0045ee) += arg2:1.b
char* eax_2 = __in_oeax_dx(arg2.w, eflags)
entry_ebx[((arg4 + 0xe) << 3) - 0x13f3ffbb] += entry_ebx:1.b
*(((arg4 + 0xf) << 3) + 0x7c004623) += entry_ebx:1.b
*(((arg4 + 0xf) << 3) + 0x6af04623) += arg3.b
eax_2[0xf80045ef] += entry_ebx.b
__out_dx_al(arg2.w, eax_2.b, eflags)
*eax_2 += eax_2.b
__out_dx_oeax(arg2.w, eax_2, eflags)
*eax_2 += arg3.b
__out_dx_oeax(arg2.w, eax_2, eflags)
*eax_2 += arg2.b
__out_dx_oeax(arg2.w, eax_2, eflags)
eax_2[(esi << 3) + 0x45] += arg3.b
*eax_2 += arg2:1.b
__int1()
*(arg3 + (esi << 3) - 0xe2bffbb) += eax_2.b
*eax_2 += arg2:1.b
eax_2[0xffffffef] += arg2:1.b
edi[(&arg4[6] << 3) - 0x3e7fffbb] += eax_2.b
eax_2.b *= 2
*(arg4 + 0x19)
eax_2.b = __in_al_immb(0x45, eflags)
eax_2[0xffffffe5] += entry_ebx.b
char temp3 = eax_2[0xd40045e5]
eax_2[0xd40045e5] += eax_2.b
void* ebp_28
void* ebp_29

if (temp3 != neg.b(eax_2.b))
    ebp_28 = arg4 + 0x1b
label_453585:
    eax_2[0x400460d] += eax_2.b
    __out_immb_al(0x45, eax_2.b, eflags)
    *eax_2 += arg2:1.b
    __out_immb_oeax(0x45, eax_2, eflags)
    eax_2[ebp_28 << 3] += eax_2.b
    ebp_29 = ebp_28 + 1
    char temp6_1 = *eax_2
    *eax_2 += eax_2:1.b
    
    if (temp6_1 + eax_2:1.b u>= temp6_1)
        goto label_4535e0
    
label_45364f:
    edi[(entry_ebx << 2) + 0x45] += arg2:1.b
    goto label_453653

eax_2:1.b = 0xe0
void* ebp_26 = arg4 + 0x1b
eax_2:1.b = 0xe0 + arg2.b
arg3 -= 1

if (0xe0 != neg.b(arg2.b) && arg3 != 0)
    eax_2 = &eax_2[1]
label_4535b5:
    eax_2:1.b += arg3:1.b
    *(ebp_26 + 2 + arg3 + 0x46) += arg3.b
    entry_ebx[0x45] += entry_ebx:1.b
else
    eax_2[0xffffffb3] += eax_2.b
    char temp5_1 = eax_2[0xbc0045e0]
    eax_2[0xbc0045e0] += arg2:1.b
    arg3 -= 1
    
    if (temp5_1 != neg.b(arg2:1.b) && arg3 == 0)
        *eax_2 += arg3:1.b
        eax_2 = &eax_2[0xfecc0046]
        ebp_28 = ebp_26 + 2
        *(arg2 + 0x45) += arg2:1.b
        goto label_453585
    
    if (temp5_1 + arg2:1.b s< 0 != add_overflow(temp5_1, arg2:1.b))
        eax_2:1.b += eax_2.b
        *(ebp_26 + 2)
        eax_2.b = adc.b(eax_2.b, 0xb4, false)
        ebp_26 += 3
        eax_2[0xfffffff8] += eax_2.b
        goto label_4535b5

*entry_ebx += arg3.b
*0x7c0045da = 0x7c0045de
*0x7c0045d6 = edi
esp_1 = 0x7c0045d6
void* ebp_34 = *(esi + 0x43) * 0x72746e6f
uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags)
uint8_t temp0_7
temp0_7, edi = __insb(edi, arg2.w, eflags)
*edi = temp0_7
char temp0_8
char temp1_1
temp0_8, temp1_1, eflags = __aam_immb(0x35, eax_2.b)
eax_2.b = temp0_8
eax_2:1.b = temp1_1
ebp_29 = ebp_34 + 1
*edi += eax_2.b
*(edi + (arg2 << 1) + 0x69)
arg2 |= *(edi + (arg2 << 1) + 0x69)
uint16_t* esi_2 = __outsb(arg2.w, *esi_1, esi_1, eflags)
char* temp9_1 = entry_ebx
entry_ebx = &entry_ebx[1]
bool p_1 = unimplemented  {inc ebx}
bool a_1 = unimplemented  {inc ebx}
bool z_2 = temp9_1 == 0xffffffff
uint16_t* esi_3 = __outsd(arg2.w, *esi_2, esi_2, eflags)
esi = __outsb(arg2.w, *esi_3, esi_3, eflags)
void* esp_2
void* ebp_36
void* esi_5
int32_t tr
int16_t cs

if (z_2)
    eax_2:1.b = (&temp9_1[1] s< 0 ? 1 : 0) << 7 | (z_2 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
        | (p_1 ? 1 : 0) << 2
    ebp_29 += 1
label_453653:
    eax_2:1.b += entry_ebx:1.b
    *(esp_1 - 4) = 0x45
    esp_2 = esp_1 - 4
    eax_2[0x6a] += arg3:1.b
    ebp_36 = ebp_29 + 1
    char temp12_1 = eax_2.b
    char temp13_1 = eax_2.b
    eax_2.b *= 2
    bool z_3 = temp12_1 == neg.b(temp13_1)
    
    if (z_3)
        eax_2.b += entry_ebx.b
        *arg2
        esp_1 = 0xb4004237
        char temp0_11
        char temp1_2
        temp0_11, temp1_2, eflags = __aaa(eax_2.b, eax_2:1.b, eflags)
        eax_2.b = temp0_11
        eax_2:1.b = temp1_2
        goto label_45366a
    
    *edi = *esi
    edi = &edi[1]
    esi_5 = esi + 1
    
    if (z_3)
        arg2[ebp_36].b += arg2:1.b
        goto label_4536ab
    
    if (not(z_3))
        goto label_4536ee
    
    eax_2.b = sbb.b(eax_2.b, 0x3c, temp12_1 + temp13_1 u< temp12_1)
label_453763:
    char temp23_1 = (&eax_2[1]):1.b
    eax_2:1.b = (&eax_2[1]):1.b + entry_ebx.b
    *esi_5 = sbb.d(*esi_5, eax_2, temp23_1 + entry_ebx.b u< temp23_1)
    *0xbe3c0046 ^= eax_2.b
label_45376f:
    *edi += arg3.b
    arg3 += 1
    edi[(entry_ebx << 2) + 0x45] += arg2:1.b
    eax_2[(edi << 2) + 0x45] += arg2.b
    *eax_2 += entry_ebx:1.b
    ebp_36 += 2
    eax_2.b += entry_ebx.b
    *arg2
    esp_2 = 0xb4004237
    char temp0_15
    char temp1_3
    temp0_15, temp1_3, eflags = __aaa(eax_2.b, eax_2:1.b, eflags)
    eax_2.b = temp0_15
    eax_2:1.b = temp1_3
else
    esi = __outsd(arg2.w, *esi, esi, eflags)
label_4535e0:
    uint8_t temp0_9
    temp0_9, edi = __insb(edi, arg2.w, eflags)
    *edi = temp0_9
    eax_2.b ^= 0x32
    *(esp_1 + ebp_29 + 1) += eax_2:1.b
    ebp_36 = ebp_29 + 2
    char temp11_1 = *0x6f430800
    *0x6f430800 += arg3.b
    esi = __outsb(arg2.w, *esi, esi, eflags)
    
    if (temp11_1 != neg.b(arg3.b))
        uint64_t* esi_4 = __outsd(arg2.w, *esi, esi, eflags)
        uint8_t* edi_1
        uint8_t temp0_10
        temp0_10, edi_1 = __insb(edi, arg2.w, eflags)
        *edi_1 = temp0_10
        entry_ebx[0x453644c0] += arg3.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2:1.b += arg2:1.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2.b += entry_ebx.b
        eax_2.b += eax_2:1.b
        *(arg3 + eax_2 + 0x29540000) += arg2.b
        eax_2.b *= 2
        *arg2
        esp_1 = 0xfc00403e
        void* eax_3 = eax_2 ^ *arg2
        int16_t es_1
        edi, es_1 = __les_gprz_memp(*esi_4)
        *(esi_4 + (arg3 << 2) + 0x45) += arg2:1.b
        *(eax_3 + 1) += (eax_3 + 1).b
        *(0xfc00403e + edi) += entry_ebx.b
        eax_2 = eax_3 + 2
        eax_2[0xf] += entry_ebx.b
        esi = esi_4 + 1
        edi[(entry_ebx << 2) - 0x6e8fffbb] += arg3:1.b
        ebp_29 = ebp_36 + 5
        *edi += arg3.b
        arg3 += 1
        goto label_45364f
    
    *(edi + esi + 0x37b40042) += entry_ebx:1.b
label_45366a:
    arg2 += 1
    eax_2.b += eax_2:1.b
    *arg2
    *(esp_1 - 4) = zx.d(cs)
    esp_2 = esp_1 - 4
    esi_5 = esi + 1
    char temp14_1 = eax_2[0x94004588]
    eax_2[0x94004588] += entry_ebx.b
    *ebp_36 = eax_2.b
    TEB* fsbase
    *(fsbase + ebp_36) = eax_2
    eax_2 = 0xd0004568
    
    if (not(add_overflow(temp14_1, entry_ebx.b)))
        goto label_4536ce
    
    *(arg3 + (esi_5 << 1)) += arg2:1.b
    ebp_36 += 1
    char temp15_1 = *0xd0004568
    *0xd0004568 += arg3:1.b
    bool p_2 = unimplemented  {add byte [eax], ch}
    bool c_5
    
    if (not(p_2))
        esp_2 -= 1
        *esi_5 = adc.b(*esi_5, 0x68, temp15_1 + arg3:1.b u< temp15_1)
        int32_t temp18_1 = *0xd0004568
        *0xd0004568 -= 0x2fffba98
        c_5 = temp18_1 - 0x2fffba98 u< temp18_1
        tr = __ltr_memw(*0xdf008b77)
    label_4536e1:
        *(esp_2 - 4) = esp_2
        esp_2 -= 4
        uint8_t* temp20_1 = edi
        edi = &edi[1]
        
        if (c_5)
            ebp_36 += 1
            eax_2.b *= 2
            *arg2
            esp_2 = 0xfc00403e
        else
            if (not(add_overflow(temp20_1, 1)))
                *(entry_ebx + 0x43)
            label_4536ee:
                __outsd(arg2.w, *esi_5, esi_5, eflags)
                uint8_t* edi_2
                uint8_t temp0_12
                temp0_12, edi_2 = __insb(edi, arg2.w, eflags)
                *edi_2 = temp0_12
                trap(0xd)
            
            eax_2:1.b += entry_ebx:1.b
        
        void* eax_5 = eax_2 ^ *arg2
        int16_t es_3
        edi, es_3 = __les_gprz_memp(*esi_5)
        eax_2 = eax_5 + 1
        goto label_453757
    
    eax_2.b = 0x68 + entry_ebx:1.b
    eax_2:1.b = 0x45 + entry_ebx:1.b
    *(arg3 + 0x45) += eax_2.b
    eax_2[0xffffffa1] += arg2:1.b
    ebp_36 += 3
    *eax_2 += entry_ebx:1.b
    *(esp_2 - 4) = 0x45
    esp_2 -= 4
    *(ebp_36 + (esi_5 << 1) + 0x6a340045) += eax_2:1.b
label_4536ab:
    char temp21_1 = *eax_2
    *eax_2 += arg2:1.b
    bool o_3 = add_overflow(temp21_1, arg2:1.b)
    bool cond:7_1
    
    if (temp21_1 == neg.b(arg2:1.b) || temp21_1 + arg2:1.b u< temp21_1)
        *(esi_5 * 3 + 0x79f00045) += arg3:1.b
        eax_2[(edi << 1) + 0x45] += arg3:1.b
        entry_ebx[(arg3 << 2) - 0x5e0bffbb] += eax_2:1.b
        ebp_36 += 3
        char temp22_1 = eax_2.b
        eax_2.b += arg3:1.b
        
        if (temp22_1 s< neg.b(arg3:1.b))
            goto label_45370c
        
        char temp25_1 = eax_2:1.b
        char temp26_1 = eax_2:1.b
        eax_2:1.b *= 2
        
        if (temp25_1 s>= neg.b(temp26_1))
            char* temp27_1 = entry_ebx
            entry_ebx = &entry_ebx[1]
            cond:7_1 = temp27_1 == 0xffffffff
            esi_5 = __outsd(arg2.w, *esi_5, esi_5, eflags)
            goto label_453712
        
        *(esp_2 + (ebp_36 << 1)) += entry_ebx:1.b
    label_4536ce:
        ebp_36 += 1
        char temp16_1 = eax_2:1.b
        char temp17_1 = eax_2.b
        eax_2:1.b += eax_2.b
        
        if (temp16_1 s< neg.b(temp17_1))
            *(eax_2 + arg2 + 0x46) += arg3.b
            *arg3 += eax_2.b
            *edi += arg3.b
            char temp19_1 = eax_2[0xf00460f]
            eax_2[0xf00460f] += entry_ebx.b
            c_5 = temp19_1 + entry_ebx.b u< temp19_1
            goto label_4536e1
        
        *eax_2 += eax_2.b
        *(esp_2 - 4) = 0x4537
        esp_2 -= 4
    label_453721:
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2[0x38] += eax_2:1.b
        ebp_36 += 1
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *(eax_2 + edi + 0x45) += eax_2.b
        *(eax_2 + edi + 0x45) += arg3.b
        *(arg2 + eax_2) += arg2.b
        eax_2.b += arg3:1.b
        *ebp_36 ^= eax_2
        *arg2 s>>= 0x42
        *(esi_5 + edi + 0x33fc0040) += entry_ebx:1.b
        arg2 += 1
        eax_2:1.b += eax_2.b
        eax_2 = &eax_2[1]
    label_453757:
        *(esi_5 + (arg3 << 3) + 0x45) += entry_ebx:1.b
        *eax_2 += eax_2.b
        *(esp_2 + edi) += entry_ebx.b
        goto label_453763
    
    *esp_2
    __andps_xmmxud_memxud(arg7, *(edi + 0x72))
    edi = *(esp_2 + 2)
    uint16_t* esi_7 = *(esp_2 + 6)
    ebp_36 = *(esp_2 + 0xa)
    entry_ebx = *(esp_2 + 0x12)
    arg2 = *(esp_2 + 0x16)
    arg3 = *(esp_2 + 0x1a)
    eax_2 = *(esp_2 + 0x1e)
    
    if (o_3)
        x87_r0_3 - fconvert.t(*arg3)
        esi_5 = esi_7 + 1
        *eax_2 += arg2:1.b
        eax_2 = &eax_2[0xbe3c0046]
        goto label_45376f
    
    void* esp_6 = *(entry_ebx + 0x43) * 0x72746e6f
    esi_5 = __outsd(arg2.w, *esi_7, esi_7, eflags)
    uint8_t temp0_13
    temp0_13, edi = __insb(edi, arg2.w, eflags)
    *edi = temp0_13
    esp_2 = esp_6 + 1
    *(esp_2 + ebp_36 + 1) += eax_2:1.b
    ebp_36 += 2
label_45370c:
    char temp24_1 = *0x6f430800
    *0x6f430800 += arg3.b
    cond:7_1 = temp24_1 == neg.b(arg3.b)
label_453712:
    esi_5 = __outsb(arg2.w, *esi_5, esi_5, eflags)
    
    if (not(cond:7_1))
        esi_5 = __outsd(arg2.w, *esi_5, esi_5, eflags)
        uint8_t temp0_14
        temp0_14, edi = __insb(edi, arg2.w, eflags)
        *edi = temp0_14
        entry_ebx[0x453768c0] += arg3.b
        *eax_2 += eax_2.b
        goto label_453721
    
    *(edi + esi_5 + 0x37b40042) += entry_ebx:1.b

int16_t* edx = arg2 + 1
eax_2.b += eax_2:1.b
*arg3 = sbb.b(*arg3, 0x46, eax_2.b u< *edx)
*(edi * 9 + 0x45) += edx.b
eax_2[5] += eax_2:1.b
*(esp_2 + eax_2 + 0x68b80046) += arg3:1.b
eax_2.b += edx.b
eax_2.b += edx:1.b
*((esi_5 + 1) * 9 + 0x45) += entry_ebx.b
eax_2.b += entry_ebx:1.b
eax_2:1.b += entry_ebx:1.b
*(arg3 + 0x45) += eax_2.b
eax_2[0xffffffa1] += edx:1.b
*eax_2 += entry_ebx:1.b
*(esp_2 - 4) = 0x45
*(ebp_36 + 6 + ((esi_5 + 1) << 1) + 0x6a340045) += eax_2:1.b
void* ebp_53 = ebp_36 + 7
char temp29 = *eax_2
*eax_2 += edx:1.b

if (temp29 != neg.b(edx:1.b) && temp29 + edx:1.b u>= temp29)
    trap(0xd)

char temp30 = eax_2[0xf000460e]
eax_2[0xf000460e] += eax_2.b
int32_t eax_6
void* const esi_9

if (temp30 + eax_2.b s>= 0)
    eax_6 = sx.d(eax_2.w)
    esi_9 = 0xd400045
else
    eax_2[(edi << 1) + 0x45] += arg3:1.b
    *(arg3 * 9 + 0x45) += entry_ebx.b
    eax_6 = *0xf6b00045
    *(eax_6 - 9) += edx:1.b
    *(&edx[(esi_5 + 1) * 4] + 0x45) += eax_6:1.b
    edi[((esi_5 + 1) << 3) + 0x45] += edx.b
    *(eax_6 + 0x780045a9) += edx:1.b
    arg3.b = 0x45
    *(edi * 5 - 0x467fffbb) += eax_6:1.b
    *(esp_2 - 4 + (edi << 2) + 0x45) += entry_ebx:1.b
    *(&edx[edi * 2] - 0x3fc3ffbb) += arg3:1.b
    *(eax_6 - 0x40) += eax_6:1.b
    eax_6:1.b += edx:1.b
    *(ebp_53 + 5) = rol.b(*(ebp_53 + 5), 0xf8)
    esi_9 = 0xbe980045
    ebp_53 += 6
    *(eax_6 + 0xd) += eax_6.b

*(eax_6 + (edi << 3) + 0x1a2c0045) += entry_ebx.b
*(esp_2 - 4 + arg3 - 0xaf3ffba) += edx:1.b
*(esi_9 + 2 + arg3) += eax_6.b
*(eax_6 + (edi << 3)) += eax_6.b
void* ebp_60 = ebp_53 + 2
char temp31 = eax_6.b
eax_6.b += entry_ebx.b
eax_6.b = sbb.b(eax_6.b, *(esi_9 + 3), temp31 + entry_ebx.b u< temp31)
*eax_6 += eax_6
*(edx + entry_ebx) = __str_memw(tr)
char* esi_13 = esi_9 + 4
*esi_13 += arg3.b
*(esp_2 - 8) = esp_2 - 4
void* esp_8 = esp_2 - 8
void* ebx = &entry_ebx[1]

if (entry_ebx != 0xffffffff)
    if (entry_ebx s>= 0xffffffff)
        ebp_60 += 1
        goto label_4538c7
    
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    trap(0xd)

if (entry_ebx == 0xffffffff)
    goto label_4538c2

int16_t temp0_17
temp0_17, edi = __insd(edi, edx.w, eflags)
*edi = temp0_17
void* temp33_1 = ebx
ebx += 1
uint16_t* esi_14 = __outsd(edx.w, *esi_13, esi_13, eflags)
esi_13 = __outsb(edx.w, *esi_14, esi_14, eflags)

if (temp33_1 == 0xffffffff)
    goto label_4538cb

esi_13 = __outsd(edx.w, *esi_13, esi_13, eflags)
uint8_t temp0_18
temp0_18, edi = __insb(edi, edx.w, eflags)
*edi = temp0_18
*(esp_8 - 4) = eax_6
*(esp_8 - 8) = arg3
*(esp_8 - 0xc) = edx
*(esp_8 - 0x10) = ebx
*(esp_8 - 0x14) = esp_8 - 0x10
*(esp_8 - 0x18) = ebp_60
*(esp_8 - 0x1c) = esi_13
*(esp_8 - 0x20) = edi
*ebp_60
*(esp_8 - 0x20)
*(esp_8 - 0x22) = zx.d(cs)
*(esp_8 - 0x26) = esp_8 - 0x22
void* esp_12 = esp_8 - 0x26
void* temp35_1 = ebx
ebx += 1

if (temp35_1 != 0xffffffff)
    esi_13 = 0xa70c0045
label_4538de:
    arg3 += 1
    edi[(ebx << 2) + 0x45] += edx:1.b
label_4538e3:
    *(eax_6 + (edi << 2) + 0x45) += edx.b
    *eax_6 += ebx:1.b
    ebp_60 += 1
    eax_6.b += ebx.b
    *edx
    esp_12 = 0xb4004237
    char temp0_22
    char temp1_4
    temp0_22, temp1_4, eflags = __aaa(eax_6.b, eax_6:1.b, eflags)
    eax_6.b = temp0_22
    eax_6:1.b = temp1_4
else
    if (temp35_1 == 0xffffffff)
        esi_13[edi << 2] += ebx:1.b
        goto label_4538da
    
    int16_t temp0_19
    temp0_19, edi = __insd(edi, edx.w, eflags)
    *edi = temp0_19
    void* temp36_1 = ebx
    ebx += 1
    uint16_t* esi_15 = __outsd(edx.w, *esi_13, esi_13, eflags)
    esi_13 = __outsb(edx.w, *esi_15, esi_15, eflags)
    
    if (temp36_1 == 0xffffffff)
        if (temp36_1 == 0xffffffff)
            goto label_453881
        
        ebp_60 += 1
        goto label_4538e3
    
    uint16_t* esi_16 = __outsd(edx.w, *esi_13, esi_13, eflags)
    uint8_t temp0_20
    temp0_20, edi = __insb(edi, edx.w, eflags)
    *edi = temp0_20
    *(esp_12 - 4) = 0xd0004537
    esp_12 -= 4
    eax_6 ^= 0xd0045
    char temp37_1 = *(ebx + 0x6f) | eax_6.b
    *(ebx + 0x6f) = temp37_1
    esi_13 = __outsb(edx.w, *esi_16, esi_16, eflags)
    
    if (temp37_1 != 0)
        esi_13 = __outsd(edx.w, *esi_13, esi_13, eflags)
    label_453881:
        uint8_t temp0_21
        temp0_21, edi = __insb(edi, edx.w, eflags)
        *edi = temp0_21
        *(ebp_60 + 0x38d40040) += arg3.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        eax_6:1.b += edx:1.b
        *(ebp_60 + 1)
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *(esp_12 - 4) = ebp_60 + 1
        ebp_60 = esp_12 - 4
        arg3 -= 1
        
        if (arg3 != 0)
            goto label_4538e3
        
        *(eax_6 + 2) += eax_6:1.b
        char temp41_1 = *eax_6
        *eax_6 += eax_6.b
        eax_6.b = sbb.b(eax_6.b, 0x37, temp41_1 + eax_6.b u< temp41_1)
        ebp_60 += 2
        eax_6.b *= 2
        *edx
        esp_8 = 0xfc00403e
        eax_6 ^= *edx
        int16_t es_5
        edi, es_5 = __les_gprz_memp(*esi_13)
    label_4538c2:
        eax_6 += 1
        esi_13[(arg3 << 3) + 0x45] += ebx:1.b
    label_4538c7:
        *eax_6 += eax_6.b
    label_4538cb:
        *(esp_8 + edi) += ebx.b
        char temp34_1 = (eax_6 + 1):1.b
        eax_6:1.b = (eax_6 + 1):1.b + ebx.b
        *esi_13 = sbb.d(*esi_13, eax_6, temp34_1 + ebx.b u< temp34_1)
        *0xbe3c0046 ^= eax_6.b
    label_4538da:
        ebp_60 += 1
        *edi += arg3.b
        goto label_4538de
    
    edx += 1
    *(edi + esi_13 + 0x37b40042) += ebx:1.b

void* edx_1 = edx + 1
eax_6.b += eax_6:1.b
bool c_12 = eax_6.b u< *edx_1
*(esp_12 - 4) = eax_6
*esi_13 = adc.b(*esi_13, eax_6.b, c_12)
*(esp_12 - 8) = esp_12 - 4
*ebp_60 += 1
*(esp_12 - 0xc) = eax_6
*(esp_12 - 0x10) = arg3
*(esp_12 - 0x14) = edx_1
*(esp_12 - 0x18) = ebx
*(esp_12 - 0x1c) = esp_12 - 0x18
*(esp_12 - 0x20) = ebp_60
*(esp_12 - 0x24) = esi_13
*(esp_12 - 0x28) = edi
*(eax_6 - 0x2b53ba52) += ebx:1.b
char* eax_7
eax_7.b = (eax_6 + 0x4ac0046).b + edx_1:1.b
*(&esi_13[1] * 9 + 0x45) += ebx.b
eax_7.b += ebx:1.b
eax_7:1.b += ebx:1.b
*(arg3 + 0x45) += eax_7.b
eax_7[0xffffffa1] += edx_1:1.b
*eax_7 += ebx:1.b
*(esp_12 - 0x2c) = 0x45
void* esp_17 = esp_12 - 0x2c
*(ebp_60 + 5 + (&esi_13[1] << 1) + 0x6a340045) += eax_7:1.b
char temp39 = *eax_7
*eax_7 += edx_1:1.b

if (temp39 != neg.b(edx_1:1.b) && temp39 + edx_1:1.b u>= temp39)
    trap(0xd)

char temp40 = eax_7[0xf000460e]
eax_7[0xf000460e] += eax_7.b
char* eax_8
void* const esi_19

if (temp40 + eax_7.b s>= 0)
    eax_8 = sx.d(eax_7.w)
    esi_19 = 0xd400045
    goto label_453993

eax_7[(edi << 1) + 0x45] += arg3:1.b
*(arg3 * 9 + 0x45) += ebx.b
eax_8 = *0xf6b00045
eax_8[0xfffffff7] += edx_1:1.b
*(edx_1 + (&esi_13[1] << 3) + 0x45) += eax_8:1.b
edi[(&esi_13[1] << 3) + 0x45] += edx_1.b
eax_8[0x780045a9] += edx_1:1.b
arg3.b = 0x45
*(edi * 5 + 0x10bc0045) += eax_8:1.b
*(esp_17 + (edi << 2) + 0x45) += ebx:1.b
*(edx_1 + (edi << 2) - 0x3fc3ffbb) += arg3:1.b
void* ebp_75
uint16_t* esi_30

while (true)
    eax_8[0xffffffc0] += eax_8:1.b
    eax_8:1.b += edx_1:1.b
    void* ebp_70
    *(ebp_70 + 2) = rol.b(*(ebp_70 + 2), 0xf8)
    esi_19 = 0xbe980045
    eax_8[0xd] += eax_8.b
label_453993:
    eax_8[(edi << 3) + 0x1a2c0045] += ebx.b
    *(esp_17 + arg3 - 0xaf3ffba) += edx_1:1.b
    *(esi_19 + 2 + arg3) += eax_8.b
    eax_8[edi << 3] += eax_8.b
    *(arg3 + edx_1 + 0x163c0046) += arg3.b
    *(ebx + edx_1) += ebx:1.b
    char temp42_1 = eax_8[0xe0004615]
    eax_8[0xe0004615] += ebx:1.b
    char* eax_9
    eax_9:1.b = adc.d(eax_8, 0x12340046, temp42_1 + ebx:1.b u< temp42_1):1.b + arg3.b
    int16_t ss
    *(esp_17 - 4) = zx.d(ss)
    *(eax_9 * 2) += eax_9.b
    *eax_9
    *eax_9
    edx_1:1.b = adc.b(edx_1:1.b, eax_9[0x11200317], false)
    char temp44_1 = *eax_9
    *eax_9 += arg3:1.b
    bool c_15 = temp44_1 + arg3:1.b u< temp44_1
    int32_t temp45_1 = *(esi_19 + 8)
    *(esi_19 + 8) = adc.d(temp45_1, eax_9, c_15)
    *edi = *(esi_19 + 8)
    edi = &edi[1]
    char* esi_28 = esi_19 + 9
    eax_9.b = adc.b(eax_9.b, *esi_28, 
        adc.d(temp45_1, eax_9, c_15) u< temp45_1
            || (c_15 && adc.d(temp45_1, eax_9, c_15) == temp45_1))
    *ebx += arg3.b
    *(esp_17 - 8) = esp_17 - 4
    esp_17 -= 8
    eax_8 = eax_9 - 1
    *(esi_28 + 0x75)
    ebp_75 = *(esi_28 + 0x75) * 0x646e6957
    bool c_17 = unimplemented  {imul ebp, dword [esi+0x74], 0x646e6957}
    esi_30 = __outsd(edx_1.w, *(esi_28 + 1), &esi_28[1], eflags)
    
    if (eax_9 == 1 || c_17)
        break
    
    *(eax_8 * 9) += ebx:1.b

eax_8:1.b <<= 0x39
void* ebp_76 = ebp_75 + 1
*edi += eax_8.b
char* edx_2 = edx_1 | *(eax_8 + (arg3 << 1) + 0x69)
uint64_t* esi_31 = __outsb(edx_2.w, *esi_30, esi_30, eflags)

if (edx_2 == 0)
    goto label_453a53

ebp_76 = *(esi_31 + 0x64) * 0x38d4776f + 1
*(eax_8 + edi + 0x45) += ebx.b
char temp49_1 = *0x6f430800
*0x6f430800 += arg3.b
void* esi_32 = __outsb(edx_2.w, *esi_31, esi_31, eflags)
void* esp_24
bool c_18

if (temp49_1 == neg.b(arg3.b))
    *(edi + esi_32 + 0x37b40042) += ebx:1.b
label_453a8a:
    edx_2 = &edx_2[1]
    eax_8.b += eax_8:1.b
    eax_8.b = adc.b(eax_8.b, 0x69, eax_8.b u< *edx_2)
    esi_32 += 1
    char temp52_1 = *eax_8
    *eax_8 += edx_2:1.b
    
    if (temp52_1 == neg.b(edx_2:1.b))
        goto label_453add
    
    *eax_8 += edx_2.b
    *esp_17
    esi_32 += 1
    *(arg3 + (eax_8 << 2) + 0x46) += eax_8.b
    eax_8.b += ebx:1.b
    int32_t temp53_1 = *esi_32
    *esi_32 += sub_461794
    *(esp_17 - 2) = zx.d(cs)
    *(esp_17 - 6) = esp_17 - 2
    
    if (temp53_1 u>= 0xffb9e86c)
        ebp_76 += 1
        eax_8.b *= 2
        *edx_2
        esp_17 = 0xfc00403e
        void* eax_11 = eax_8 ^ *edx_2
        int16_t es_7
        edi, es_7 = __les_gprz_memp(*esi_32)
        eax_8 = eax_11 + 1
        eax_8[0x403e] += ebx:1.b
        goto label_453b27
    
    int16_t* edi_4
    int16_t temp0_25
    temp0_25, edi_4 = __insd(edi, edx_2.w, eflags)
    *edi_4 = temp0_25
    edi = *(esp_17 - 5)
    ebp_76 = *(esp_17 + 3)
    ebx = *(esp_17 + 0xb)
    edx_2 = *(esp_17 + 0xf)
    arg3 = *(esp_17 + 0x13)
    eax_8 = *(esp_17 + 0x17)
    esp_24 = esp_17 + 0x1a
    esi_32 = *(ebx + 0x74) * 0x453abc90
    uint8_t temp58_1 = *edi
    *edi += eax_8.b
    c_18 = temp58_1 + eax_8.b u< temp58_1
    goto label_453abd

void* esi_33 = __outsd(edx_2.w, *esi_32, esi_32, eflags)
uint8_t* edi_3
uint8_t temp0_23
temp0_23, edi_3 = __insb(edi, edx_2.w, eflags)
*edi_3 = temp0_23
*(ebx + 0x453a64c0) += arg3.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
*(edx_2 + edi_3 + 0x45) += ebx:1.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
*eax_8 += eax_8.b
ebp_76 += 1
eax_8[0xfc000000] += eax_8.b
esi_31 = esi_33 + 1
eax_8.b *= 2
*edx_2
esp_17 = 0xfc00403e
void* eax_10 = eax_8 ^ *edx_2
int16_t es_6
edi, es_6 = __les_gprz_memp(*esi_31)
eax_8 = eax_10 + 1
label_453a53:
eax_8[0x403e] += ebx:1.b
*(esp_17 + edi) += ebx.b
eax_8 = &eax_8[1]
*(arg3 + (ebp_76 << 1) + 0x79040046) += edx_2:1.b
esi_32 = esi_31 + 1
char temp48_1 = eax_8[0x4000467c]
eax_8[0x4000467c] += edx_2.b
c_18 = temp48_1 + edx_2.b u< temp48_1

if (temp48_1 + edx_2.b s>= 0)
    *(edi + esi_32 + 0x36640042) += ebx.b
    *(edi + esi_32 + 0x38a40042) += arg3:1.b
    edx_2 = &edx_2[2]
    eax_8.b += ebx.b
    *edx_2
    esp_17 = 0xb4004237
    char temp0_24
    char temp1_5
    temp0_24, temp1_5, eflags = __aaa(eax_8.b, eax_8:1.b, eflags)
    eax_8.b = temp0_24
    eax_8:1.b = temp1_5
    goto label_453a8a

if (not(c_18))
    goto label_453b2b

esp_24 = 0x700453a
label_453abd:
*(esp_24 - 4) = zx.d(cs)
*(esp_24 - 8) = esp_24 - 4
esp_17 = esp_24 - 7
void* edx_4
void* edx_5

if (not(c_18))
    int16_t* edi_5
    int16_t temp0_26
    temp0_26, edi_5 = __insd(edi, edx_2.w, eflags)
    *edi_5 = temp0_26
    edi = *esp_17
    ebp_76 = *(esp_17 + 8)
    void* ebx_1 = *(esp_17 + 0x10)
    edx_2 = *(esp_17 + 0x14)
    arg3 = *(esp_17 + 0x18)
    eax_8 = *(esp_17 + 0x1c)
    esp_17 += 0x1f
    uint16_t* esi_35 = *(ebx_1 + 0x74) * 0x453a64 + 1
    *edx_2 += eax_8.b
    *eax_8 += arg3.b
    ebx = ebx_1 + 1
    uint16_t* esi_36 = __outsd(edx_2.w, *esi_35, esi_35, eflags)
    esi_32 = __outsb(edx_2.w, *esi_36, esi_36, eflags)
    
    if (ebx_1 == 0xffffffff)
        edx_5 = &edx_2[1]
        *(edi + esi_32 + 0x37b40042) += ebx:1.b
        goto label_453b56
    
    esi_32 = __outsd(edx_2.w, *esi_32, esi_32, eflags)
label_453add:
    uint8_t temp0_27
    temp0_27, edi = __insb(edi, edx_2.w, eflags)
    *edi = temp0_27
    *(ebp_76 + 0x3b300040) += arg3.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *(ebx + edi + 0x45) += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    char temp57_1 = *eax_8
    *eax_8 += eax_8.b
    
    if (temp57_1 == neg.b(eax_8.b))
        edx_4 = &edx_2[1]
        goto label_453b43
    
    ebp_76 += 2
    eax_8[0x18000000] += eax_8.b
    *ebp_76
    *edx_2 s>>= 0x42
    *(esi_32 + edi + 0x33fc0040) += ebx:1.b
    edx_2 = &edx_2[1]
    eax_8:1.b += eax_8.b
    eax_8 = &eax_8[1]
    eax_8[0x403e] += ebx:1.b
    goto label_453b27

*eax_8 += eax_8.b
label_453b27:
*(esp_17 + edi) += ebx.b
eax_8 = &eax_8[1]
label_453b2b:
*(arg3 + (ebp_76 << 1) + 0x79040046) += edx_2:1.b
esi_32 += 1
char temp50_1 = eax_8[0x4000467c]
eax_8[0x4000467c] += edx_2.b
void* eax_15
void* edx_8
void* esi_37
void* esp_30

if (temp50_1 + edx_2.b s< 0)
    *ebp_76
    *esp_17
    esp_30 = esp_17 + 2
label_453b89:
    int32_t edi_7 = *esp_30
    *(esp_30 + 8)
    void* ebx_3 = *(esp_30 + 0x10)
    char* edx_6 = *(esp_30 + 0x14)
    int32_t* ecx = *(esp_30 + 0x18)
    uint16_t* esi_40 = *(ebx_3 + 0x74) * 0x453b30
    void* eax_13 = 0xc00453a
    char temp54_1 = *0xc00453a
    *0xc00453a += ecx.b
    ebx = ebx_3 + 1
    uint16_t* esi_41 = __outsd(edx_6.w, *esi_40, esi_40, eflags)
    uint16_t* esi_42 = __outsb(edx_6.w, *esi_41, esi_41, eflags)
    
    if (ebx_3 == 0xffffffff)
        *0xc00453b
        *0xc00453b += 0x3b
        bool p_3 = unimplemented  {add byte [eax], al}
        *(esp_30 + 0x1b) = *0xc00453b
        
        if (not(p_3))
            *ecx += 0x3b
            *0xc00453b += 0x3b
            *0xc00453b += 0x3b
            *0xc00453b += 0x3b
            *edx_6 = *edx_6
            *0xc00453b += 0x3b
            *(esp_30 + 0x23)
            *(esp_30 + 0x2b)
            jump(sub_453c79+0x1e)
        
        *0xc00453b += 0x3b
        *ecx += 1
        *0xc00453b += 0x3b
        *0xc00453b += 0x3b
        *0xc00453b += 0x3b
        *0xc00453b = *0xc00453b
        *0xc00453b += 0x3b
        *(esp_30 + 0x1b)
        *ecx += ecx.b
        int16_t* edi_9
        int16_t temp0_33
        temp0_33, edi_9 = __insd(edi_7, edx_6.w, eflags)
        *edi_9 = temp0_33
        *(esp_30 + 0x1d)
        *(esp_30 + 0x21)
        *(esp_30 + 0x25)
        *(esp_30 + 0x2d)
        int32_t edx_12 = *(esp_30 + 0x31)
        int32_t ecx_3 = *(esp_30 + 0x35)
        char* eax_19 = *(esp_30 + 0x39)
        *(esp_30 + 0x39) = esp_30 + 0x3d
        
        if (ecx - 1 s< 0)
            noreturn sub_453c79(eax_19, edx_12, ecx_3, unimplemented  {jns 0x453ce9}) __tailcall
        
        *eax_19 += eax_19.b
        undefined
    
    esi_37 = __outsd(edx_6.w, *esi_42, esi_42, eflags)
    uint8_t temp0_29
    temp0_29, edi = __insb(edi_7, edx_6.w, eflags)
    *edi = temp0_29
    
    if (temp54_1 + ecx.b u< temp54_1)
        eax_13.b = 0x3a + edx_6:1.b
        char* eax_14 = ebx
        *eax_14 += ecx.b
        ebx:1.b = eax_13:1.b * 2
        eax_13 = eax_14 - 1
    
    *eax_13 += eax_13.b
    *ecx += 1
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
    *eax_13 += eax_13.b
label_453bbb:
    eax_15, edx_8, arg3 = (*edi)()
else
    *(edi + esi_32 + 0x36640042) += ebx.b
    edx_4 = &edx_2[1]
label_453b43:
    *(edi + esi_32 + 0x38a40042) += arg3:1.b
    edx_5 = edx_4 + 1
    eax_8.b += ebx.b
    *edx_5
    esp_17 = 0xb4004237
    char temp0_28
    char temp1_6
    temp0_28, temp1_6, eflags = __aaa(eax_8.b, eax_8:1.b, eflags)
    eax_8.b = temp0_28
    eax_8:1.b = temp1_6
label_453b56:
    edx_8 = edx_5 + 1
    eax_8.b += eax_8:1.b
    eax_8.b = adc.b(eax_8.b, 0x69, eax_8.b u< *edx_8)
    esi_37 = esi_32 + 1
    char temp61_1 = *eax_8
    *eax_8 += edx_8:1.b
    
    if (temp61_1 != neg.b(edx_8:1.b))
        *eax_8 += edx_8.b
        *esp_17
        *(arg3 + (eax_8 << 2) + 0x46) += eax_8.b
        *(esi_37 + 1) += sub_461794
        char* edi_6 = *(esp_17 + 2)
        *(esp_17 + 0xa)
        esp_30 = esp_17 + 0x21
        *(*(esp_17 + 0x12) + 0x74)
        *edi_6 += (*(esp_17 + 0x1e)).b
        goto label_453b89
    
    eax_15 = eax_8 - 1
    *eax_15 += eax_15.b
    *eax_15 -= 1
    ebx:1.b *= 2
    *eax_15 += eax_15
    *eax_15 += eax_15.b
    *eax_15 += eax_15.b
    *(eax_15 + 0x1fffffff) += eax_15.b
eax_15.b += *eax_15
eax_15.b |= *(edx_8 + 0x6c)
uint16_t* gsbase
uint16_t* esi_43 = __outsb(edx_8.w, *(gsbase + esi_37), esi_37, eflags)
uint16_t* esi_44 = __outsd(edx_8.w, *esi_43, esi_43, eflags)
uint8_t temp0_31
temp0_31, edi = __insb(edi, edx_8.w, eflags)
*edi = temp0_31
__outsd(edx_8.w, *esi_44, esi_44, eflags)

if (eax_15.b u< 0)
    return 

char* eax_16 = ebx + 1
char temp64 = *eax_16
*eax_16 += arg3.b

if (temp64 == neg.b(arg3.b))
    jump(0x453c17)

jump(0x453bd1)
