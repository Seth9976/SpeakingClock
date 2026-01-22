// 函数: sub_478eac
// 地址: 0x478eac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* eax
char* ecx
int16_t* edx
int32_t entry_ebx
eax, edx, ecx = (*(entry_ebx + (arg2 << 2)))()
eax[0xffffffbb] += eax.b
*(entry_ebx + ((arg2 + 2) << 2) + 0x47) += edx:1.b
eax.b += ecx:1.b
eax[0xa00047bc] += edx.b
*eax = *eax
ecx[(arg2 + 5) << 2] += ecx.b
*0xb6ebfffe += ecx.b
char* ebx
ebx:1.b = 0x47
char* eax_2 = 0x540c0047
*0xbcc40043 = 0xbc804747
int32_t esp_1 = 0xbcc40043
int32_t eflags
bool c_1
bool z
bool o_2

if (add_overflow(0x47 + edx:1.b, edx:1.b))
    *0x540c0047 += 0x47
    *arg1 += ecx.b
    *0x67696c41 += 0x47
    arg1 = __outsb(edx.w, *arg1, arg1, eflags)
    *0x540c0047 += edx.b
    eax_2 = 0x540c0048
    *(edx + 0x8ff0001) = *(edx + 0x8ff0001)
label_478f6c:
    ebx = 0x10047
label_478f71:
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    char temp3_1 = *eax_2
    *eax_2 += eax_2.b
    c_1 = temp3_1 + eax_2.b u< temp3_1
    int0_t tr
    *edx = __str_memw(tr)
    char* temp4_1 = ecx
    ecx = &ecx[1]
    z = temp4_1 == 0xffffffff
    o_2 = add_overflow(temp4_1, 1)
else
    int16_t* temp2_1 = edx
    edx += 1
    
    if (temp2_1 != 0xffffffff)
        goto label_478f6c
    
    if (temp2_1 == 0xffffffff)
        ebx:1.b = 0x8e
        ebx[0x10047] |= ebx:1.b
        goto label_478f71
    
    arg1 = __outsb(edx.w, *arg1, arg1, eflags)
    char temp5_1 = *(arg2 + 0xc07004f)
    *(arg2 + 0xc07004f) += ecx.b
    c_1 = temp5_1 + ecx.b u< temp5_1
    *0xbcc4003f = 0xbcc40043
    *0xbcc4003b = 0xbc804747
    esp_1 = 0xbcc4003b
    
    if (add_overflow(temp5_1, ecx.b))
        ebx[0x10047] |= ebx:1.b
        goto label_478f71
    
    int16_t* temp6_1 = edx
    edx += 1
    z = temp6_1 == 0xffffffff
    o_2 = add_overflow(temp6_1, 1)
    
    if (z)
        if (z)
            jump(0x478f7c)
        
        jump(0x478f0d)

uint8_t* edi_8
uint8_t temp0_2
temp0_2, edi_8 = __insb(arg2 + 8, edx.w, eflags)
*edi_8 = temp0_2
uint8_t* edi_9
uint8_t temp0_3
temp0_3, edi_9 = __insb(edi_8, edx.w, eflags)
*edi_9 = temp0_3
uint16_t* esi = __outsd(edx.w, *arg1, arg1, eflags)

if (not(z) && not(c_1))
    char* eax_4 = *(ecx + 0x7c4800db) * 0x1065646f
    int16_t ds
    *(esp_1 - 4) = zx.d(ds)
    *(eax_4 * 2) += (edx.w + 1):1.b
    undefined

uint8_t* edi_10
uint8_t temp0_4
temp0_4, edi_10 = __insb(edi_9, edx.w, eflags)
*edi_10 = temp0_4
uint8_t* edi_11
uint8_t temp0_5
temp0_5, edi_11 = __insb(edi_10, edx.w, eflags)
*edi_11 = temp0_5
*(esp_1 - 4) = 0xbe240047

if (not(o_2))
    ebx:1.b *= 2
    *(esp_1 - 8) = 0xbe240047
    char* eax_3
    eax_3.b = __in_al_immb(0x69, eflags)
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *ebx = *ebx
    char temp7 = *eax_3
    *eax_3 += eax_3.b
    bool c_2 = temp7 + eax_3.b u< temp7
    char temp8 = *eax_3
    *eax_3 = adc.b(temp8, eax_3.b, c_2)
    *(esp_1 - 0x4570)
    uint16_t* esi_1 = __outsb(edx.w, *esi, esi, eflags)
    int32_t eflags_1
    int16_t temp0_7
    temp0_7, eflags_1 = __arpl_memw_gpr16(*(eax_3 + 0x6f), (esp_1 - 7).w)
    *(eax_3 + 0x6f) = temp0_7
    
    if (adc.b(temp8, eax_3.b, c_2) u< temp8 || (c_2 && adc.b(temp8, eax_3.b, c_2) == temp8))
        *eax_3 = &eax_3[*eax_3]
        eax_3[1] += (&eax_3[1]).b
        eax_3[1] += (&eax_3[1]).b
        char temp10 = eax_3[1]
        eax_3[1] += (&eax_3[1]).b
        void* eax_8
        eax_8.b = adc.b((&eax_3[1]).b, 0, temp10 + (&eax_3[1]).b u< temp10)
        char temp11 = eax_8.b
        eax_8.b += 0x44
        bool c_6 = temp11 u>= 0xbc
        __outsd(edx.w, *esi_1, esi_1, eflags_1)
        
        if (temp11 != 0xbc && not(c_6))
            char temp14 = eax_8:1.b
            eax_8:1.b += ebx.b
            
            if (temp14 + ebx.b s< 0)
                jump(0x4790ee)
            
            jump(0x4790a9)
        
        *0x77d80045 = adc.b(*0x77d80045, ebx.b, c_6)
        char temp15 = *eax_8
        *eax_8 += 0x47
        
        if (temp15 + 0x47 s< 0)
            jump(0x479087)
        
        jump(0x479042)
    
    int16_t gs
    *(edi_11 + 0x41) = gs
    *edi_11 += ebx.b
    ebx:1.b *= 2
    char temp16 = edx:1.b
    edx:1.b += ebx:1.b
    
    if (temp16 + ebx:1.b s< 0)
        jump(0x478ffe)
    
    jump(0x478fb9)

char* eax_7
void* const edx_2
void* esp_7
uint16_t* esi_2
void* edi_12

if (z)
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *ecx = *ecx
    *eax_2 += eax_2.b
    int16_t ss
    *(esp_1 - 8) = zx.d(ss)
    *edi_11 += eax_2.b
    __outsb(edx.w, *esi, esi, eflags)
    edi_12 = *(esp_1 - 8)
    esi_2 = *(esp_1 - 4)
    void* ebp_7 = *esp_1
    *(esp_1 + 8)
    int16_t edx_4 = (*(esp_1 + 0xc)).w
    *(esp_1 + 0x10)
    char* eax_11 = *(esp_1 + 0x14)
    esp_7 = esp_1 + 0x18
    __bound_gprv_mema32(ebp_7, *(ebp_7 + 0x64))
    *eax_11 += edx_4.b
    eax_7 = &eax_11[1]
    eax_7[0x30ff0001] += edx_4:1.b
    edx_2 = 0x10047
else
    *(esp_1 - 8) = esp_1 - 4
    *eax_2 = adc.b(*eax_2, eax_2.b, c_1)
    int32_t eax_5 = sx.d(eax_2.w)
    *eax_5 += eax_5
    char* eax_6
    char* ecx_2
    eax_6, edx_2, ecx_2 = (*(eax_5 - 0x46))()
    esp_7 = esp_1 - 4
    edi_12 = &edi_11[1]
    *ecx_2 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 = *eax_6
    char temp9_1 = *eax_6
    *eax_6 += eax_6.b
    eax_7.b = adc.d(eax_6, *eax_6, temp9_1 + eax_6.b u< temp9_1).b | *(edi_12 + 0x72)
    esi_2 = __outsd(edx_2.w, *esi, esi, eflags)
    
    if (eax_7.b == 0)
        __outsb(edx_2.w, *esi_2, esi_2, eflags)
        
        if (ecx_2 - 1 s< 0)
            jump(0x479019)
        
        jump(0x479019)
    
    *(edx_2 + 0x10047) ^= ebx:1.b

*eax_7 += eax_7.b
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*esp_7
char temp12 = esi_2[eax_7].b
esi_2[eax_7].b += eax_7.b
uint8_t* edi_14
uint8_t temp0_8
temp0_8, edi_14 = __insb(edi_12, edx_2.w, eflags)
*edi_14 = temp0_8
*(esp_7 + 2)
*(esp_7 + 6)
int16_t ebx_3 = (*(esp_7 + 0x12)).w
*(esp_7 + 0x16)

if (temp12 != neg.b(eax_7.b))
    char* eax_12 = sx.d((*(esp_7 + 0x1e)).w)
    *eax_12 += (*(esp_7 + 0x1a)).w:1.b
    ebx_3:1.b *= 2
    breakpoint

char* eax_9
eax_9:1.b = 0x9e
*eax_9 += eax_9.b
*eax_9 += eax_9.b
*eax_9 = *eax_9
char temp17 = eax_9[0x43070015]
eax_9[0x43070015] += eax_9.b
void* edi_13 = *(esp_7 + 0x22)
*(esp_7 + 0x26)
*(esp_7 + 0x2a)
*(esp_7 + 0x32)
int16_t edx_3 = (*(esp_7 + 0x36)).w
*(esp_7 + 0x3a)
char* eax_10 = *(esp_7 + 0x3e)

if (not(add_overflow(temp17, eax_9.b)))
    *(edi_13 + 0x6e)
    *(esp_7 + 0x3e) = eax_10
    *eax_10 += eax_10.b
    undefined

*eax_10 += eax_10.b
*eax_10 = *eax_10
char temp18 = eax_10[0x47050019]
eax_10[0x47050019] += eax_10.b
uint8_t* edi_16
uint8_t temp0_9
temp0_9, edi_16 = __insb(edi_13, edx_3, eflags)
*edi_16 = temp0_9

if (temp18 + eax_10.b s>= 0)
    jump(0x479148)

jump(0x4790d8)
