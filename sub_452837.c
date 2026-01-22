// 函数: sub_452837
// 地址: 0x452837
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1_1 = *arg2
*arg2 += arg3.b
bool c_2 = temp1_1 + arg3.b u< temp1_1
int32_t var_4 = arg6
int32_t var_8
__builtin_strncpy(&var_8, "eelD", 4)
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, arg2.w, eflags)
*edi = temp0
char* var_c
void* eax_3
char* entry_ebx
void* esp_1
void* esp_8
char* ebp_3
uint16_t* esi
uint8_t* edi_3
uint16_t* gsbase
bool c_3
bool z
bool z_2
bool s_1

if (temp1_1 != neg.b(arg3.b))
    esp_1 = &var_8:2
    char* temp2_1 = arg3
    arg3 -= 1
    z = temp2_1 == 1
    esi = __outsb(arg2.w, *arg5, arg5, eflags)
    
    if (z)
        goto label_4528ad
    
    if (not(c_2))
        char temp6_1 = *(arg4 + 0x6f)
        *(arg4 + 0x6f) |= arg3.b
        
        if ((temp6_1 | arg3.b) != 0)
            char temp12_1 = *(gsbase + arg1)
            *(gsbase + arg1) = adc.b(temp12_1, arg3.b, false)
            c_3 = adc.b(temp12_1, arg3.b, false) u< temp12_1
            goto label_4528c8
        
        var_c = arg1
        esp_1 = &var_c:2
        __outsd(arg2.w, *esi, esi, eflags)
    
    *edi = &arg1[*edi]
    edi = *esp_1
    uint16_t* esi_2 = *(esp_1 + 4)
    *(esp_1 + 8)
    *(esp_1 + 0x10)
    arg2 = *(esp_1 + 0x14)
    *(esp_1 + 0x18)
    *(esp_1 + 0x1c)
    int32_t* esp_2 = esp_1 + 0x20
    uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags)
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, arg2.w, eflags)
    *edi_1 = temp0_1
    *esp_2
    uint16_t* esi_4 = __outsd(arg2.w + 1, *esi_3, esi_3, eflags)
    __outsd(arg2.w + 1, *esi_4, esi_4, eflags)
    uint8_t* edi_2
    uint8_t temp0_2
    temp0_2, edi_2 = __insb(edi_1, arg2.w + 1, eflags)
    *edi_2 = temp0_2
    edi = *(esp_2 + 2)
    uint16_t* esi_6 = *(esp_2 + 6)
    int32_t ebp_2 = *(esp_2 + 0xa)
    entry_ebx = *(esp_2 + 0x12)
    arg2 = *(esp_2 + 0x16)
    arg3 = *(esp_2 + 0x1a)
    void* eax_1 = *(esp_2 + 0x1e)
    uint16_t* esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags)
    *(arg3 + arg2) += arg3:1.b
    char temp9_1 = *(eax_1 + 0x54004171)
    *(eax_1 + 0x54004171) += arg3:1.b
    *(eax_1 + 1) = adc.b(*(eax_1 + 1), (eax_1 + 1).b, temp9_1 + arg3:1.b u< temp9_1)
    *(eax_1 + 1) += (eax_1 + 1).b
    *(eax_1 + 1) += (eax_1 + 1).b
    *(eax_1 + 1) += arg2.b
    eax_3 = eax_1 + 2
    entry_ebx[0x452888c0] += arg3.b
    char temp10_1 = *eax_3
    *eax_3 += arg3.b
    int16_t ss
    *(esp_2 + 0x1e) = zx.d(ss)
    *(esp_2 + 0x1a) = esp_2 + 0x1e
    esp_1 = esp_2 + 0x1a
    ebp_3 = ebp_2 - 1
    z_2 = ebp_2 == 1
    s_1 = ebp_2 - 1 s< 0
    esi = __outsd(arg2.w, *esi_7, esi_7, eflags)
    
    if (not(z_2))
        goto label_452902
    
    *(esp_1 - 4) = edi
    *(esp_1 - 8) = 0x556c6565
    esp_8 = esp_1 - 8
    
    if (add_overflow(ebp_2, 0xffffffff))
        uint8_t temp0_5
        temp0_5, edi_3 = __insb(edi, arg2.w, eflags)
        *edi_3 = temp0_5
        goto label_4528dd
    
    __outsd(arg2.w, *esi, esi, eflags)
    
    if (not(z_2) && temp10_1 + arg3.b u>= temp10_1)
        jump(sub_451eec+0xa1d)
    
    jump(sub_451eec+0x9af)

var_c = entry_ebx
esp_1 = &var_c
esi = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
void* ebp_7
uint16_t* esi_9

if (c_2)
    char temp3_1 = *0x66696853
    *0x66696853 += arg1.b
    c_2 = temp3_1 + arg1.b u< temp3_1
    z = temp3_1 == neg.b(arg1.b)
    
    if (not(z))
        goto label_4528ba
    
label_4528c5:
    char temp5_1 = *arg1
    *arg1 = adc.b(temp5_1, arg3.b, c_2)
    c_3 = adc.b(temp5_1, arg3.b, c_2) u< temp5_1 || (c_2 && adc.b(temp5_1, arg3.b, c_2) == temp5_1)
label_4528c8:
    esi_9 = __outsd(arg2.w, *esi, esi, eflags)
    
    if (arg4 == 1)
        *(esp_1 - 4) = arg1
        uint16_t* esi_10 = __outsd(arg2.w, *esi_9, esi_9, eflags)
        uint16_t* esi_11
        
        if (not(c_3))
            *edi = &arg1[*edi]
            edi = *(esp_1 - 4)
            esi_11 = *esp_1
            *(esp_1 + 4)
            *(esp_1 + 0xc)
            arg2 = *(esp_1 + 0x10)
            *(esp_1 + 0x14)
            *(esp_1 + 0x18)
            esp_8 = esp_1 + 0x1c
        else
            *(esp_1 - 8) = esp_1 - 4
            *(esp_1 - 0xc) = arg1
            esp_8 = esp_1 - 0xc
            esi_11 = __outsd(arg2.w, *esi_10, esi_10, eflags)
            *(esi_11 + 0x74)
        
        esi = __outsb(arg2.w, *esi_11, esi_11, eflags)
        uint8_t temp0_4
        temp0_4, edi_3 = __insb(edi, arg2.w, eflags)
        *edi_3 = temp0_4
    label_4528dd:
        *esp_8
        uint16_t* esi_12 = __outsd(arg2.w + 1, *esi, esi, eflags)
        __outsd(arg2.w + 1, *esi_12, esi_12, eflags)
        uint8_t* edi_4
        uint8_t temp0_6
        temp0_6, edi_4 = __insb(edi_3, arg2.w + 1, eflags)
        *edi_4 = temp0_6
        edi = *(esp_8 + 2)
        uint16_t* esi_14 = *(esp_8 + 6)
        ebp_3 = *(esp_8 + 0xa)
        void* ebx_2 = *(esp_8 + 0x12)
        arg2 = *(esp_8 + 0x16)
        arg3 = *(esp_8 + 0x1a)
        void* eax_5 = *(esp_8 + 0x1e)
        uint16_t* esi_15 = __outsb(arg2.w, *esi_14, esi_14, eflags)
        *(arg3 + arg2) += arg3:1.b
        eax_3 = eax_5 + 1
        *(eax_3 + 0x4170) += arg3:1.b
        *eax_3 += eax_3.b
        char temp17_1 = *eax_3
        *eax_3 += eax_3.b
        *eax_3 = adc.b(*eax_3, eax_3.b, temp17_1 + eax_3.b u< temp17_1)
        *ebp_3 -= eax_3.b
        *arg2 |= arg2.b
        *(esp_8 + 0x1e) = esp_8 + 0x22
        esp_1 = esp_8 + 0x1e
        entry_ebx = ebx_2 + 1
        z_2 = ebx_2 == 0xffffffff
        s_1 = ebx_2 + 1 s< 0
        uint16_t* esi_16 = __outsd(arg2.w, *esi_15, esi_15, eflags)
        esi = __outsb(arg2.w, *esi_16, esi_16, eflags)
    label_452902:
        
        if (z_2)
            *eax_3 += eax_3.b
            goto label_45296b
        
        if (s_1)
            jump(0x45297a)
        
        jump(sub_451eec+0xa1a)
    
label_45293e:
    uint16_t* esi_19 = __outsd(arg2.w, *esi_9, esi_9, eflags)
    __outsd(arg2.w, *esi_19, esi_19, eflags)
    uint8_t* edi_5
    uint8_t temp0_8
    temp0_8, edi_5 = __insb(edi, arg2.w, eflags)
    *edi_5 = temp0_8
    edi = *esp_1
    uint16_t* esi_21 = *(esp_1 + 4)
    ebp_3 = *(esp_1 + 8)
    entry_ebx = *(esp_1 + 0x10)
    arg2 = *(esp_1 + 0x14)
    arg3 = *(esp_1 + 0x18)
    void* eax_7 = *(esp_1 + 0x1c)
    esp_1 += 0x20
    esi = __outsb(arg2.w, *esi_21, esi_21, eflags)
    *(arg3 + arg2) += arg3:1.b
    *(eax_7 + 1) += (eax_7 + 1).b
    *(eax_7 + 1) += (eax_7 + 1).b
    char temp13_1 = *(eax_7 + 1)
    *(eax_7 + 1) += (eax_7 + 1).b
    *(eax_7 + 1) = adc.b(*(eax_7 + 1), (eax_7 + 1).b, temp13_1 + (eax_7 + 1).b u< temp13_1)
    eax_3.b = *0x4529
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += arg2:1.b
    eax_3.b -= *ebp_3
    *(eax_3 << 1) -= arg3:1.b
label_45296b:
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    arg2[0x2a] += arg3.b
    ebp_7 = &ebp_3[1]
    *arg2 += entry_ebx.b
    eax_3.b -= 0x45
    *(eax_3 + 0x28000001) += arg2.b
    char temp0_9 = *arg3
    *arg3 = eax_3.b
    eax_3.b = temp0_9
    *arg2 s>>= 0x42
    *(esi + edi + 0x33fc0040) += entry_ebx:1.b
    arg2 = &arg2[1]
    eax_3:1.b += eax_3.b
    *(&esi[arg3 * 2] + 0x45) += arg2:1.b
    *(eax_3 + 1) += (eax_3 + 1).b
    *(esp_1 + edi) += entry_ebx.b
    arg1 = eax_3 + 2
else
    char** var_10_1 = &var_c
    char* var_12
    esp_1 = &var_12:2
    uint8_t* temp4_1 = edi
    edi -= 1
    z = temp4_1 == 1
label_4528ad:
    __bound_gprv_mema32(arg4, *(arg2 + 0x65))
    int16_t temp0_3
    temp0_3, eflags = __arpl_memw_gpr16(*(arg1 * 2 + 5), esi.w)
    *(arg1 * 2 + 5) = temp0_3
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = 0xb746669
    esp_1 -= 8
label_4528ba:
    *(esp_1 - 4) = esp_1
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = 0x53746669
    esp_1 -= 0xc
    
    if (not(z))
        if (z)
            goto label_45292a
        
        goto label_4528c5
    
    ebp_7 = arg4 - 1
    esi = __outsd(arg2.w, *esi, esi, eflags)
    
    if (arg4 == 1)
        *(esp_1 - 4) = arg1
        esp_1 -= 4
    label_45292a:
        uint16_t* esi_17 = __outsd(arg2.w, *esi, esi, eflags)
        void* esp_18
        uint16_t* esi_18
        
        if (not(c_2))
            *edi = &arg1[*edi]
            edi = *esp_1
            esi_18 = *(esp_1 + 4)
            *(esp_1 + 8)
            *(esp_1 + 0x10)
            arg2 = *(esp_1 + 0x14)
            *(esp_1 + 0x18)
            *(esp_1 + 0x1c)
            esp_18 = esp_1 + 0x20
        else
            *(esp_1 - 4) = esp_1
            *(esp_1 - 8) = arg1
            esp_18 = esp_1 - 8
            esi_18 = __outsd(arg2.w, *esi_17, esi_17, eflags)
            *(esi_18 + 0x74)
        
        esi_9 = __outsb(arg2.w, *esi_18, esi_18, eflags)
        uint8_t temp0_7
        temp0_7, edi = __insb(edi, arg2.w, eflags)
        *edi = temp0_7
        *esp_18
        esp_1 = esp_18 + 2
        arg2 = &arg2[1]
        goto label_45293e
*arg1 += arg2:1.b
edi[(entry_ebx << 2) - 0x6e8fffbb] += arg3:1.b
*edi += arg3.b
edi[(entry_ebx << 2) + 0x45] += arg2:1.b
arg1:1.b += entry_ebx:1.b
*(esp_1 - 4) = 0x45
arg1[0x6a] += (&arg3[1]):1.b
char temp14 = arg1.b
char temp15 = arg1.b
arg1.b *= 2

if (temp14 == neg.b(temp15))
    arg1.b += entry_ebx.b
    *arg2
    int32_t eflags_1
    char temp0_10
    char temp1
    temp0_10, temp1, eflags_1 = __aaa(arg1.b, arg1:1.b, eflags)
    arg1.b = temp0_10
    arg1:1.b = temp1
    arg1.b += arg1:1.b
    arg2[1]
    *(esi + 0x45)
    char temp16 = arg1[0x94004588]
    arg1[0x94004588] += entry_ebx.b
    *(ebp_7 + 3) = arg1.b
    TEB* fsbase
    *(fsbase + ebp_7 + 3) = arg1
    
    if (not(add_overflow(temp16, entry_ebx.b)))
        jump(&data_452a28)
    
    return sub_4529e3(0xd0004568, &arg2[1], &arg3[1], ebp_7 + 3, esi, edi) __tailcall

*edi = *esi
char* edi_6 = &edi[1]

if (temp14 == neg.b(temp15))
    jump(0x452a03)

*arg1 += arg1.b
arg3[1] += arg1.b
arg1:1.b += arg3[0x7020401]
arg1.b += *entry_ebx
arg1.b += *(esi + 1)
char* ecx_3
ecx_3.b = (&arg3[1]).b + arg3[1]
arg1.b += *arg1
arg1.b += *arg2
arg1.b += *0xa020802
entry_ebx.b += *edi_6
*edi_6 += arg1.b
*(arg1 - 0x4ff14ff4)
int32_t eax_12
eax_12.b = 0x35
eax_12.b = 9
eax_12.b = 0x23
eax_12.b = 0x30
eax_12.b = 0xa
eax_12.b = 0x13
eax_12.b = 0x14
eax_12.b = 0x1c
eax_12.b = 0x3a
eax_12.b = 0x3c
eax_12.b = 0x3d
eax_12.b = 0x43
eax_12.b = 0x7b
entry_ebx:1.b += ecx_3:1.b
undefined
