// 函数: sub_4514c9
// 地址: 0x4514c9
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

bool c
arg1.b = adc.b(arg1.b, 0x45, c)
char* entry_ebx
*entry_ebx += arg1.b
int16_t es
uint32_t var_4 = zx.d(es)
uint32_t* var_8 = &var_4
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg5, arg2, eflags)
*edi = temp0
int32_t* esp = *(edi + 0x6e)
*arg4 += arg1.b
*arg1 += arg1.b
char temp1 = arg1.b
arg1.b += arg3 + 1
arg1.b = adc.b(arg1.b, 0x45, temp1 + arg3 + 1 u< temp1)
*arg4 += arg1.b
int32_t esi = esp[1]
esp[2]
esp[4]
int16_t edx = (esp[5]).w
esp[6]
int32_t eax = esp[7]
void* esp_8 = &esp[8]
uint8_t* edi_2
uint8_t temp0_1
temp0_1, edi_2 = __insb(*esp, edx, eflags)
*edi_2 = temp0_1
uint16_t* esi_2 = __outsd(edx, *(esi - 1), esi - 1, eflags)
__outsb(edx, *esi_2, esi_2, eflags)

if (add_overflow(eax, 0x6f546c61))
    goto label_4514f7

int32_t edi_3 = *esp_8
uint16_t* esi_4 = *(esp_8 + 4)
void* ebp_1 = *(esp_8 + 8)
char* ebx_1 = *(esp_8 + 0x10)
void* edx_1 = *(esp_8 + 0x14)
char* ecx_2 = *(esp_8 + 0x18)
void* eax_2 = *(esp_8 + 0x1c)
esp_8 += 0x20
uint8_t* edi_4
uint8_t temp0_2
temp0_2, edi_4 = __insb(edi_3, edx_1.w, eflags)
*edi_4 = temp0_2
void* edx_2 = edx_1 + 1
uint16_t* esi_5 = __outsd(edx_2.w, *esi_4, esi_4, eflags)
void* eax_3
char* ecx_4
void* ebp_2
uint8_t* edi_9

if (edx_1 == 0xffffffff)
label_45156b:
    *(eax_2 + 0x3c) += ebx_1.b
    *(eax_2 + 1) += ecx_2:1.b
    *(eax_2 - 0x63ffbab7) += eax_2:1.b
    ecx_2 -= 1
    *(eax_2 + (ecx_2 << 1) + 0x45) += ecx_2:1.b
    void* eax_8
    eax_8.b = eax_2.b + edx_2.b
    edi_9 = &edi_4[1]
    ebp_2 = ebp_1 + 3
    *eax_8 += edx_2:1.b
    eax_3 = eax_8 - 1
label_451586:
    ebp_2 += 1
    *(eax_3 - 0x43ffbab7) += ebx_1:1.b
label_45158f:
    eax_3:1.b += eax_3.b
    ecx_4 = ecx_2 - 2
    ebp_2 += 2
else
    __outsd(edx_2.w, *esi_5, esi_5, eflags)
    int16_t* edi_5
    int16_t temp0_3
    temp0_3, edi_5 = __insd(edi_4, edx_2.w, eflags)
    *edi_5 = temp0_3
label_4514f7:
    *(esp_8 - 4) = zx.d(es)
    esi_5 = *esp_8
    ebp_2 = *(esp_8 + 4)
    void* ebx_2 = *(esp_8 + 0xc)
    edx_2 = *(esp_8 + 0x10)
    ecx_2 = *(esp_8 + 0x14)
    eax_3 = *(esp_8 + 0x18)
    uint8_t* edi_7
    uint8_t temp0_4
    temp0_4, edi_7 = __insb(*(esp_8 - 4), edx_2.w, eflags)
    *edi_7 = temp0_4
    
    if (esp_8 == 0xffffffe5)
        ecx_2[0x6c] |= eax_3:1.b
    else
        esi_5 = *(esp_8 + 0x1f)
        ebp_2 = *(esp_8 + 0x23)
        ebx_2 = *(esp_8 + 0x2b)
        edx_2 = *(esp_8 + 0x2f)
        ecx_2 = *(esp_8 + 0x33)
        eax_3 = *(esp_8 + 0x37)
        uint8_t temp0_5
        temp0_5, edi_7 = __insb(*(esp_8 + 0x1b), edx_2.w, eflags)
        *edi_7 = temp0_5
        *(esp_8 + 0x37) = edx_2
        *(edi_7 + 0x68)
    
    uint8_t temp0_6
    temp0_6, edi_9 = __insb(edi_7, edx_2.w, eflags)
    *edi_9 = temp0_6
    esp_8 = *(ebp_2 + 0x6e) * 0x6c610874
    ebx_1 = ebx_2 + 2
    
    if (ebx_2 != 0xfffffffe)
        eax_3 = 0xbc004549
        goto label_45158f
    
    if (ebx_2 == 0xfffffffe)
        goto label_451586
    
    int16_t temp0_7
    temp0_7, edi_9 = __insd(edi_9, edx_2.w, eflags)
    *edi_9 = temp0_7
    char temp6_1 = ebx_1[0x6f] | eax_3.b
    ebx_1[0x6f] = temp6_1
    esi_5 = __outsb(edx_2.w, *esi_5, esi_5, eflags)
    
    if (temp6_1 != 0)
        esi_5 = __outsd(edx_2.w, *esi_5, esi_5, eflags)
        uint8_t temp0_8
        temp0_8, edi_4 = __insb(edi_9, edx_2.w, eflags)
        *edi_4 = temp0_8
        void* ebp_3
        
        if (temp6_1 u>= 0)
            eax_3:1.b = 0x14
            ebp_3 = ebp_2 + 1
            char temp9_1 = *ecx_2
            *ecx_2 += eax_3.b
            bool c_11 = temp9_1 + eax_3.b u< temp9_1
            *esp_8
            *(esp_8 - 2) = esp_8 + 2
            esp_8 -= 2
            char* temp10_1 = ebx_1
            ebx_1 = &ebx_1[1]
            
            if (temp10_1 == 0xffffffff)
                if (not(c_11))
                    goto label_45152b
                
                if (c_11)
                    undefined
                
                jump(0x4514be)
            
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            char temp12_1 = *eax_3
            *eax_3 += eax_3.b
            int16_t temp0_9 = esp_8
            esp_8 = eax_3
            eax_3 = adc.d(temp0_9, 0x3c0045, temp12_1 + eax_3.b u< temp12_1)
        else
            eax_3 += 1
            *(eax_3 + 0x15) += edx_2:1.b
            ebp_3 = ebp_2 + 1
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
        label_45152b:
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *(ebp_3 + edx_2 + 0x3c0045) += edx_2.b
        
        *eax_3 += eax_3.b
        arg7 f- fconvert.t(*eax_3)
        *(eax_3 + 0x2400403f) += edx_2:1.b
        edx_2 -= 1
        *(edx_2 + (ecx_2 << 1)) += edx_2.b
        ebp_1 = ebp_3 + 2
        void* eax_5
        eax_5:1.b = (eax_3 + 1):1.b + (eax_3 + 1).b
        *(eax_5 + 0x403f) += ebx_1:1.b
        *(esp_8 + edi_4) += ebx_1.b
        eax_2 = eax_5 + 2
        goto label_45156b
    
    int16_t es_1
    ecx_4, es_1 = __les_gprz_memp(*(ecx_2 + 0x45))

char temp7 = *ebx_1
*ebx_1 += ecx_4.b
*(esp_8 - 4) = esp_8
char* esp_10 = esp_8 - 3
char* eax_10

if (temp7 + ecx_4.b u< temp7)
label_4515fb:
    *(edx_2 + (ecx_4 << 1)) += edx_2.b
    eax_3:1.b += eax_3.b
    *(eax_3 + 0x403f) += ebx_1:1.b
    *(esp_10 + edi_9) += ebx_1.b
    *(eax_3 + 0x3e) += ebx_1.b
    *(eax_3 - 0x5fffbab3) += ecx_4:1.b
    *((ecx_4 - 1) * 3 + 0x486c0045) += ebx_1.b
    *(eax_3 + 0x4d) += ebx_1.b
    *(eax_3 + 3) += edx_2:1.b
    eax_10 = eax_3 + 2
    eax_10[0xbc004549] += ebx_1:1.b
    ecx_4 -= 2
else
    __bound_gprv_mema32(ebp_2, *(edx_2 + 0x65))
    int32_t eflags_1
    int16_t temp0_10
    temp0_10, eflags_1 = __arpl_memw_gpr16(*(esp_10 + 0x15), esi_5.w)
    *(esp_10 + 0x15) = temp0_10
    *(edi_9 - 1) += eax_3.b
    int32_t edi_11 = *esp_10
    uint16_t* esi_7 = *(esp_10 + 4)
    int32_t ebp_8 = *(esp_10 + 8)
    void* ebx_4 = *(esp_10 + 0x10)
    edx_2 = *(esp_10 + 0x14)
    ecx_4 = *(esp_10 + 0x18)
    void* eax_9 = *(esp_10 + 0x1c)
    esp_10 = &esp_10[0x20]
    __bound_gprv_mema32(ebp_8, *(edx_2 + 0x65))
    int16_t temp0_11
    temp0_11, eflags = __arpl_memw_gpr16(*(eax_9 + (esi_7 << 1) + 0x15), esi_7.w)
    *(eax_9 + (esi_7 << 1) + 0x15) = temp0_11
    *(ecx_4 + edx_2) += ecx_4:1.b
    eax_10 = eax_9 + 1
    *eax_10 += eax_10.b
    *eax_10 += ecx_4.b
    ebx_1 = ebx_4 + 1
    uint16_t* esi_8 = __outsd(edx_2.w, *esi_7, esi_7, eflags)
    esi_5 = __outsb(edx_2.w, *esi_8, esi_8, eflags)
    
    if (ebx_4 != 0xffffffff)
        esi_5 = __outsd(edx_2.w, *esi_5, esi_5, eflags)
        uint8_t temp0_12
        temp0_12, edi_9 = __insb(edi_11 - 1, edx_2.w, eflags)
        *edi_9 = temp0_12
        ebx_1[0x451614c0] += ecx_4.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        *eax_10 += eax_10.b
        eax_10[0x16] += eax_10.b
        *(eax_10 * 2) += eax_10.b
        *(edx_2 + 0x3eb00045) += eax_10:1.b
        eax_3 = &eax_10[1]
        *(edx_2 + (ecx_4 << 1)) += eax_3:1.b
        goto label_4515fb

eax_10:1.b += eax_10.b
*(edx_2 + ((ecx_4 - 1) << 1) + 0x4a340045) += eax_10.b
char temp11 = *esi_5
*esi_5 += edx_2.b
bool c_4 = temp11 + edx_2.b u< temp11
*(esp_10 - 4) = esp_10
void* edi_13 = *(esp_10 - 4)
uint16_t* esi_9 = *esp_10
void* ebp_9 = *(esp_10 + 4)
int32_t ebx_5 = *(esp_10 + 0xc)
void* edx_3 = *(esp_10 + 0x10)
int32_t ecx_7 = *(esp_10 + 0x14)
char* eax_14 = *(esp_10 + 0x18)
void* esp_14 = &esp_10[0x1c]
void* eax_15
void* ebp_10

if (not(c_4))
    *(edi_13 + edx_3) += eax_14.b
label_4516af:
    *eax_14 += ecx_7.b
    *eax_14 += eax_14.b
    *(esp_14 - 4) = ebp_9 + 1
    void* esp_19 = esp_14 - 4
    esp_14 = esp_19 - 0x4515
    eax_14.b = 0x3e
    eax_14 = &eax_14[1]
    *(edx_3 + (ecx_7 << 1)) += eax_14:1.b
    ebp_9 = esp_19 + 1
    *(edx_3 + (ecx_7 << 1)) += edx_3.b
label_4516c2:
    ebp_10 = ebp_9 + 1
    eax_14:1.b += eax_14.b
    eax_15 = &eax_14[1]
    *(eax_15 + 0x403e) += ebx_5:1.b
else
    esp_14 += 1
    
    if (c_4)
        *eax_14 += eax_14.b
        eax_14.b += 0x17
        goto label_4516af
    
    int32_t temp13_1 = ebx_5
    ebx_5 += 1
    uint16_t* esi_10 = __outsd(edx_3.w, *esi_9, esi_9, eflags)
    esi_9 = __outsb(edx_3.w, *esi_10, esi_10, eflags)
    
    if (temp13_1 == 0xffffffff)
        edx_3 -= 1
        goto label_4516c2
    
    uint16_t esi_11 = __outsd(edx_3.w, *esi_9, esi_9, eflags)
    uint8_t* edi_14
    uint8_t temp0_13
    temp0_13, edi_14 = __insb(edi_13, edx_3.w, eflags)
    *edi_14 = temp0_13
    __bound_gprv_mema32(ebp_9, *(edx_3 + 0x65))
    int16_t temp0_14
    temp0_14, eflags = __arpl_memw_gpr16(*(eax_14 + (edx_3 << 2) + 0x5c), esi_11)
    *(eax_14 + (edx_3 << 2) + 0x5c) = temp0_14
    int16_t ss
    *(esp_14 - 4) = zx.d(ss)
    char temp14_1 = *(edi_14 - 1)
    *(edi_14 - 1) += eax_14.b
    bool c_5 = temp14_1 + eax_14.b u< temp14_1
    *(esp_14 - 8) = zx.d(ss)
    *(esp_14 - 0xc) = esp_14 - 8
    edi_13 = *(esp_14 - 0xc)
    esi_9 = *(esp_14 - 8)
    ebp_10 = *(esp_14 - 4)
    ebx_5 = *(esp_14 + 4)
    edx_3 = *(esp_14 + 8)
    ecx_7 = *(esp_14 + 0xc)
    eax_15 = *(esp_14 + 0x10)
    esp_14 += 0x14
    
    if (not(c_5))
        eax_15 = 0x403e
    else
        esp_14 += 1
        
        if (not(c_5))
            uint16_t* esi_12 = __outsd(edx_3.w, *esi_9, esi_9, eflags)
            __outsb(edx_3.w, *esi_12, esi_12, eflags)
            
            if (ebx_5 == 0xffffffff)
                jump(0x4516de)
            
            jump("olObject")
        
        *(eax_15 + 0x403e) += ebx_5:1.b

*(esp_14 + edi_13) += ebx_5.b
*(eax_15 + 0x3d) += ebx_5.b
*(eax_15 - 0x23ffbab4) += ecx_7:1.b
void* eax_17
eax_17:1.b = (eax_15 + 2):1.b + (edx_3 - 1):1.b
void* edx_5 = edx_3 - 2
*(eax_17 + (ecx_7 << 1) + 0x45) += ecx_7:1.b
*(eax_17 + 0x4a) += ebx_5.b
*eax_17 += edx_5:1.b
void* eax_18 = eax_17 - 1
*eax_18 += eax_18.b
int32_t ebx_7 = ebx_5 - 1
*(ecx_7 * 3 + 0x4b200045) += ebx_7:1.b
*(edx_5 + (ecx_7 << 1) + 0x4a340045) += eax_18.b
void* ebp_19 = ebp_10 + 7
char temp15 = *edx_5
*edx_5 += edx_5.b
*(esp_14 - 4) = esp_14
void* esp_21 = esp_14 - 3

if (temp15 + edx_5.b u< temp15)
    goto label_45176b

int32_t temp17_1 = ebx_7
ebx_7 += 1
uint16_t* esi_14 = __outsd(edx_5.w, *esi_9, esi_9, eflags)
esi_9 = __outsb(edx_5.w, *esi_14, esi_14, eflags)
void* ebx_8
void* ebp_26

if (temp17_1 == 0xffffffff)
    ecx_7 -= 1
    ebp_26 = ebp_19 + 1
    *eax_18 += eax_18:1.b
    ebx_8 = ebx_7 - 1
else
    esi_9 = __outsd(edx_5.w, *esi_9, esi_9, eflags)
    uint8_t* edi_16
    uint8_t temp0_15
    temp0_15, edi_16 = __insb(edi_13, edx_5.w, eflags)
    *edi_16 = temp0_15
    edi_13 = edi_16 - 1
    __bound_gprv_mema32(ebp_19, *(edx_5 + 0x65))
    int16_t temp0_16
    temp0_16, eflags = __arpl_memw_gpr16(*(eax_18 + (edx_5 << 2) + 0x64), esi_9.w)
    *(eax_18 + (edx_5 << 2) + 0x64) = temp0_16
    *esp_21
    esp_21 += 2
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *(eax_18 + 0x48004517) += edx_5.b
    *eax_18 += eax_18.b
    *(esi_9 + edx_5 + 0x3eb00045) += ecx_7.b
    *(edx_5 + (ecx_7 << 1)) += (eax_18 + 1):1.b
    *(eax_18 + 0x4c) += (eax_18 + 1).b
    ebp_19 += 3
    void* eax_19
    eax_19:1.b = (eax_18 + 1):1.b + (eax_18 + 1).b
    *(eax_19 + 0x403f) += ebx_7:1.b
    *(esp_21 + edi_13) += ebx_7.b
    *(eax_19 + 0x3e) += ebx_7.b
    eax_18 = eax_19 + 3
    *(eax_18 - 0x23ffbab6) += ecx_7:1.b
    edx_5 -= 1
label_45176b:
    eax_18:1.b += edx_5:1.b
    edx_5 -= 1
    *(eax_18 + (ecx_7 << 1) + 0x45) += ecx_7:1.b
    *(eax_18 + 0x4a) += ebx_7.b
    *eax_18 += edx_5:1.b
    eax_18 -= 1
    *eax_18 += eax_18.b
    ebx_8 = ebx_7 - 1
    ebp_26 = ebp_19 + 5
    *(ecx_7 * 3 + 0x4b200045) += ebx_8:1.b

*(edx_5 + (ecx_7 << 1) + 0x4a340045) += eax_18.b
char temp18 = *(esp_21 + (edx_5 << 1))
*(esp_21 + (edx_5 << 1)) += edx_5.b
int32_t ecx_8
void* ebx_9
void* ebp_35

if (temp18 + edx_5.b u< temp18)
    *eax_18 += eax_18:1.b
    *(ecx_7 * 3 + 0x486c0045) += ebx_8.b
    eax_18:1.b += ebx_8.b
    ebx_9 = ebx_8 - 1
    *eax_18 += edx_5:1.b
    *(eax_18 - 0x43ffbab8) += ebx_9:1.b
    ebp_35 = ebp_26 + 7
    eax_18:1.b = (eax_18 - 1):1.b + (eax_18 - 1).b
    ecx_8 = ecx_7 - 2
else
    ebx_9 = ebx_8 + 1
    uint16_t* esi_15 = __outsd(edx_5.w, *esi_9, esi_9, eflags)
    esi_9 = __outsb(edx_5.w, *esi_15, esi_15, eflags)
    
    if (ebx_8 != 0xffffffff)
        uint16_t esi_16 = __outsd(edx_5.w, *esi_9, esi_9, eflags)
        uint8_t* edi_17
        uint8_t temp0_17
        temp0_17, edi_17 = __insb(edi_13, edx_5.w, eflags)
        *edi_17 = temp0_17
        __bound_gprv_mema32(ebp_26 + 2, *(edx_5 + 0x65))
        int32_t eflags_2
        int16_t temp0_18
        temp0_18, eflags_2 = __arpl_memw_gpr16(*(ebp_26 + 2 + (eax_18 << 1) + 0x78), esi_16)
        *(ebp_26 + 2 + (eax_18 << 1) + 0x78) = temp0_18
        trap(0xd)
    
    ecx_8 = ecx_7 - 1
    ebp_35 = ebp_26 + 3
    *(ecx_8 * 3 + 0x49c40045) += ebx_9:1.b

*(esp_21 + 1 + (ecx_8 << 1)) += ebx_9:1.b
*(ebx_9 + (ecx_8 << 1) + 0x45) += eax_18.b
*(esp_21 + 1 + (ecx_8 << 1) + 0x45) += ebx_9:1.b
eax_18.b += ebx_9:1.b
*((ecx_8 << 1) + 0x4d300045) += ecx_8.b
char temp20 = *((ecx_8 << 1) + 0x540f0045)
*((ecx_8 << 1) + 0x540f0045) += ecx_8:1.b
char* esp_24 = esp_21 + 1
void* ebx_10
void* ebp_42

if (temp20 + ecx_8:1.b u< temp20)
    *(eax_18 + 0x2400403e) += edx_5:1.b
    edx_5 -= 1
    *eax_18 += ebx_9:1.b
    eax_18:1.b += eax_18.b
    *(eax_18 + 0x403f) += ebx_9:1.b
    *(esp_24 + edi_13) += ebx_9.b
    *(ebx_9 + (ecx_8 << 1) + 0x4aa80045) += ecx_8:1.b
    *(eax_18 + 2) += (eax_18 + 2):1.b
    *(ecx_8 * 3 + 0x486c0045) += ebx_9.b
    void* eax_24
    eax_24:1.b = (eax_18 + 2):1.b + ebx_9.b
    ebx_10 = ebx_9 - 1
    *eax_24 += edx_5:1.b
    eax_18 = eax_24 - 1
    *(eax_18 - 0x43ffbab7) += ebx_10:1.b
    ecx_8 -= 1
    ebp_42 = ebp_35 + 0xb
else
    uint16_t* esi_17 = __outsd(edx_5.w, *esi_9, esi_9, eflags)
    int32_t eflags_3
    int16_t temp0_19
    temp0_19, eflags_3 = __arpl_memw_gpr16(*(ebx_9 + 0x4f), (ebp_35 + 4).w)
    *(ebx_9 + 0x4f) = temp0_19
    __bound_gprv_mema32(ebp_35 + 4, *(edx_5 + 0x65))
    int32_t eflags_4
    int16_t temp0_20
    temp0_20, eflags_4 = __arpl_memw_gpr16(*(eax_18 + (ecx_8 << 1) + 0x18), esi_17.w)
    *(eax_18 + (ecx_8 << 1) + 0x18) = temp0_20
    *edi_13 += eax_18.b
    __andps_xmmxud_memxud(arg6, *(edx_5 + (esi_17 << 1) + 0x61))
    esp_24 = &esp_24[2]
    uint16_t* esi_18 = __outsd(edx_5.w, *esi_17, esi_17, eflags_4)
    int32_t eflags_5
    int16_t temp0_21
    temp0_21, eflags_5 = __arpl_memw_gpr16(*(ebx_9 + 0x4f), (ebp_35 + 5).w)
    *(ebx_9 + 0x4f) = temp0_21
    __bound_gprv_mema32(ebp_35 + 5, *(edx_5 + 0x65))
    int16_t temp0_22
    temp0_22, eflags = __arpl_memw_gpr16(*(esp_24 + (esi_18 << 3) + 0x17), esi_18.w)
    *(esp_24 + (esi_18 << 3) + 0x17) = temp0_22
    *(eax_18 + 0x16) += ebx_9.b
    ebp_42 = ebp_35 + 7
    *eax_18 += eax_18.b
    char temp21_1 = *eax_18
    *eax_18 += ecx_8.b
    ebx_10 = ebx_9 + 1
    uint16_t* esi_19 = __outsd(edx_5.w, *esi_18, esi_18, eflags)
    esi_9 = __outsb(edx_5.w, *esi_19, esi_19, eflags)
    
    if (ebx_9 != 0xffffffff)
        __outsd(edx_5.w, *esi_9, esi_9, eflags)
        uint8_t* edi_19
        uint8_t temp0_23
        temp0_23, edi_19 = __insb(edi_13, edx_5.w, eflags)
        *edi_19 = temp0_23
        
        if (temp21_1 + ecx_8.b u>= temp21_1)
            jump(sub_45171c+0x151)
        
        jump(sub_45171c+0x151)

eax_18:1.b += eax_18.b
char* ecx_10 = ecx_8 - 1
esp_24[ecx_10 << 1] += ebx_10:1.b
*(ebx_10 + (ecx_10 << 1) + 0x45) += eax_18.b
esp_24[(ecx_10 << 1) + 0x45] += ebx_10:1.b
eax_18.b += ebx_10:1.b
*((ecx_10 << 1) + 0x4d300045) += ecx_10.b
char temp23 = *((ecx_10 << 1) + 0x54110045)
*((ecx_10 << 1) + 0x54110045) += ecx_10:1.b
bool c_10 = temp23 + ecx_10:1.b u< temp23
char* esp_27 = esp_24

if (not(c_10))
    void* esi_21 = __outsd(edx_5.w, *esi_9, esi_9, eflags)
    int32_t eflags_6
    int16_t temp0_24
    temp0_24, eflags_6 = __arpl_memw_gpr16(*(ebx_10 + 0x4f), (ebp_42 + 4).w)
    *(ebx_10 + 0x4f) = temp0_24
    __bound_gprv_mema32(ebp_42 + 4, *(edx_5 + 0x65))
    int16_t temp0_25
    temp0_25, eflags = __arpl_memw_gpr16(*(ebp_42 + 4 + (eax_18 << 1) + 0x78), esi_21.w)
    *(ebp_42 + 4 + (eax_18 << 1) + 0x78) = temp0_25
    esp_27 = *(esp_27 + 1)
    *(ebp_42 + 4) = sbb.d(*(ebp_42 + 4), eax_18, c_10)
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *ecx_10 = ebx_10.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *(ecx_10 + ebx_10 + 0x45) += edx_5:1.b
    *(eax_18 * 2) += eax_18:1.b
    *(ebx_10 * 5 + 0x3eb00042) += edx_5.b
    *(esi_21 + edi_13 + 0x3ec00040) += ebx_10:1.b
    void* eax_27
    eax_27:1.b = (eax_18 + 2):1.b + (eax_18 + 2).b
    *(eax_27 + 0x403f) += ebx_10:1.b
    *(esp_27 + edi_13) += ebx_10.b
    *(edi_13 + (ebx_10 << 1) + 0x45) += edx_5:1.b
    eax_18.b = (eax_27 + 2).b + edx_5:1.b
    *esi_21 - *edi_13
    void* esi_22 = esi_21 + 4
    void* edi_20 = edi_13 + 4
    ecx_10 = &ecx_10[1]
    eax_18.b += ebx_10:1.b
    *esi_22 - *edi_20
    esi_9 = esi_22 + 4
    edi_13 = edi_20 + 4

*edi_13 += (&ecx_10[1]).b
*(eax_18 + (&ecx_10[2] << 3) - 0x376fffbe) += eax_18:1.b
*(eax_18 + 0xe00455f) += eax_18:1.b
*(esp_27 - 4) = esp_27
uint16_t* esi_23 = __outsd(edx_5.w + 1, *esi_9, esi_9, eflags)
__outsb(edx_5.w + 1, *esi_23, esi_23, eflags)

if (ebx_10 == 0xffffffff)
    jump(sub_45171c+0x2d1)

jump(sub_45171c+0x25f)
