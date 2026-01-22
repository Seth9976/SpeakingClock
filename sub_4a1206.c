// 函数: sub_4a1206
// 地址: 0x4a1206
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = arg1.b
arg1.b += arg3:1.b
arg1.b = sbb.b(arg1.b, 0x47, temp1 + arg3:1.b u< temp1)
void* entry_ebx
*(arg1 + (entry_ebx << 3) - 0x26d7ffba) += arg3:1.b
arg1.b += arg1:1.b
arg1.b ^= *arg6
void* const __return_addr_1 = __return_addr
int32_t eflags
char temp0
char temp1_1
temp0, temp1_1, eflags = __aad_immb(0x46, arg1.b, arg1:1.b)
arg1.b = temp0
arg1:1.b = temp1_1
*(arg1 + 0x2d) += entry_ebx:1.b
*(arg1 + 0x6c00470e) += arg2:1.b
int32_t eflags_1
char temp0_1
temp0_1, eflags_1 = __das(arg1.b, eflags)
arg1.b = temp0_1
void* edi_1 = &arg6[2]
*(arg1 - 0x1a) += arg1.b
*edi_1 += entry_ebx.b
char temp2 = *arg2
*arg2 += arg1:1.b
char* eax = adc.d(arg1, 0x360004a, temp2 + arg1:1.b u< temp2)
*eax += eax.b
*eax += eax.b
int32_t temp3 = *(edi_1 + 0x72) | eax
*(edi_1 + 0x72) = temp3
uint16_t* esi_2 = __outsd(arg2.w, *(arg5 + 3), arg5 + 3, eflags_1)

if (temp3 != 0)
    goto label_4a12ae

char* temp6_1 = arg2
arg2 = &arg2[1]
uint16_t* esi_3 = __outsd(arg2.w, *esi_2, esi_2, eflags_1)

if (&temp6_1[1] s< 0)
    goto label_4a1273

TEB* fsbase
void* eax_1 = &eax[*(fsbase + eax)]
*arg3 += eax_1.b
*eax_1 += arg3.b
eax = eax_1 - 1
uint16_t* esi_4 = __outsd(arg2.w, *esi_3, esi_3, eflags_1)

if (eax_1 != 1)
    goto label_4a12bf

int16_t es = *__return_addr_1
*arg2 += eax.b + (*eax).b
char temp12_1 = *arg2
*arg2 += arg3.b
bool c_2 = temp12_1 + arg3.b u< temp12_1
uint8_t* edi_2
uint8_t temp0_2
temp0_2, edi_2 = __insb(edi_1, arg2.w, eflags_1)
*edi_2 = temp0_2
*(__return_addr_1 + 2)
esi_3 = *(__return_addr_1 + 6)
arg4 = *(__return_addr_1 + 0xa)
entry_ebx = *(__return_addr_1 + 0x12)
arg2 = *(__return_addr_1 + 0x16)
arg3 = *(__return_addr_1 + 0x1a)
eax = *(__return_addr_1 + 0x1e)
__return_addr_1 += 0x22

if (c_2)
    *entry_ebx = es
    *eax += eax.b
    eax.b = eax.b
else
    entry_ebx += 1
    *(__return_addr_1 - 4) = 0x706b6365
    __return_addr_1 -= 4
    eax = &eax[*eax]
label_4a1273:
    *entry_ebx += eax.b
    *esi_3 += eax.b
    char* esi_5 = *(__return_addr_1 + 3)
    int32_t* ebx = *(__return_addr_1 + 0xf)
    int32_t eax_3 = *(__return_addr_1 + 0x1b)
    __bound_gprv_mema32(__return_addr_1 + 0x1f, *(*(__return_addr_1 + 7) + 0x6c))
    *(ebx + eax_3) ^= esi_5
    *ebx += eax_3.b
    *esi_5 += eax_3.b
    edi_1 = *(__return_addr_1 + 0x1e)
    esi_3 = *(__return_addr_1 + 0x22)
    arg4 = *(__return_addr_1 + 0x26)
    entry_ebx = *(__return_addr_1 + 0x2e)
    arg2 = *(__return_addr_1 + 0x32)
    arg3 = *(__return_addr_1 + 0x36)
    eax = *(__return_addr_1 + 0x3a)
    __return_addr_1 += 0x3e
    __bound_gprv_mema32(__return_addr_1, *(arg4 + 0x6c))
    entry_ebx:1.b ^= eax[3]
    *eax += eax.b
    eax.b = eax.b
    char temp7_1 = arg3.b
    char temp8_1 = eax[0x6f]
    arg3.b |= eax[0x6f]
    bool z_1 = (temp7_1 | temp8_1) == 0
    
    if (not(z_1))
        goto label_4a1307
    
    *(__return_addr_1 - 4) = arg4
    __return_addr_1 -= 4
    uint16_t* esi_6 = __outsd(arg2.w, *esi_3, esi_3, eflags_1)
    
    if (not(z_1))
        es = *__return_addr_1
        arg2 = &arg2[1]
        *(arg2 + (eax << 1) + 0x74)
        *eax += eax.b
        *(__return_addr_1 - 2) = zx.d(es)
        __return_addr_1 -= 2
        *arg2 += arg3.b
    label_4a1321:
        eax.b = *3
        *edi_1 += eax.b
        goto label_4a1327
    
    if ((temp7_1 | temp8_1) s>= 0)
        *eax += eax.b
        eax.b = eax.b
        int32_t temp21_1 = *(arg4 + 0x69)
        *(arg4 + 0x69) |= arg3
        uint16_t* esi_7 = __outsb(arg2.w, *esi_6, esi_6, eflags_1)
        *(__return_addr_1 - 4) = arg4
        __return_addr_1 -= 4
        esi_2 = __outsd(arg2.w, *esi_7, esi_7, eflags_1)
        
        if ((temp21_1 | arg3) != 0)
            goto label_4a1321
        
        goto label_4a12ab
    
    *arg3 += arg3.b
    arg4 = *(esi_6 + 0x55) * 0x776f4470
    esi_2 = __outsb(arg2.w, *esi_6, esi_6, eflags_1)
label_4a12ab:
    *entry_ebx = *entry_ebx
label_4a12ae:
    *eax += eax.b
    char temp4_1 = *arg3
    *arg3 += arg3.b
    void* temp5_1 = edi_1
    edi_1 += 1
    
    if (temp4_1 + arg3.b u< temp4_1)
        goto label_4a1324
    
    if (temp5_1 != 0xffffffff)
        goto label_4a1327
    
    char* temp10_1 = arg2
    arg2 = &arg2[1]
    esi_4 = __outsd(arg2.w, *esi_2, esi_2, eflags_1)
    
    if (&temp10_1[1] s< 0)
        goto label_4a12ed
    
    *entry_ebx
    *eax += eax.b
label_4a12bf:
    eax.b += *eax
    arg3[0x6e] |= eax.b
    uint16_t* esi_8 = __outsb(arg2.w, *esi_4, esi_4, eflags_1)
    entry_ebx += 1
    *(__return_addr_1 - 4) = 0x886b6365
    __return_addr_1 -= 4
    eax = &eax[*eax]
    *arg3 += eax.b
    *edi_1 += eax.b
    arg3 = &arg3[1]
    uint16_t* esi_9 = __outsb(arg2.w, *esi_8, esi_8, eflags_1)
    __outsb(arg2.w, *esi_9, esi_9, eflags_1)
    arg4 += 1
    esi_3 = *(fsbase + __return_addr_1 + (arg3 << 2) + 3) * 0x40000

int32_t temp16_1 = *(arg3 + 0x6e)
*(arg3 + 0x6e) |= eax
bool c_5 = false
bool z_3 = (temp16_1 | eax) == 0
uint16_t* esi_11 = __outsb(arg2.w, *esi_3, esi_3, eflags_1)
*(__return_addr_1 - 4) = arg4
__return_addr_1 -= 4
esi_4 = __outsd(arg2.w, *esi_11, esi_11, eflags_1)

if (not(z_3))
    goto label_4a1356

eax = &eax[*eax]
*entry_ebx += eax.b
label_4a12ed:
*esi_4 += eax.b
edi_1 = *(__return_addr_1 - 1)
arg4 = *(__return_addr_1 + 7)
entry_ebx = *(__return_addr_1 + 0xf)
int32_t edx = *(__return_addr_1 + 0x13)
arg3 = *(__return_addr_1 + 0x17)
eax = *(__return_addr_1 + 0x1b)
__bound_gprv_mema32(__return_addr_1 + 0x1f, *(arg4 + 0x6c))
es = *(__return_addr_1 + 0x1f)
__return_addr_1 += 0x21
arg2 = (edx ^ *(entry_ebx + eax + 0x50000)) + 1
esi_3 = *(arg2 + (eax << 1) + 0x74) * 0x398316e
*eax += eax.b
label_4a1307:
char* temp11_1 = eax
eax = &eax[0x69420700]
bool cond:8_1 = temp11_1 == 0x96bdf900
void* eax_7
uint16_t* esi_14
uint16_t* esi_34
uint8_t* edi_8
bool c_10
bool z_4
bool z_9
bool o_1
bool o_3

if (temp11_1 == 0x96bdf900)
    *eax += eax.b
    *eax = &eax[*eax]
    char temp15_1 = eax.b
    eax.b |= 0x57
    c_5 = false
    z_3 = (temp15_1 | 0x57) == 0
label_4a1356:
    edi_1 = *__return_addr_1
    esi_14 = *(__return_addr_1 + 4)
    arg4 = *(__return_addr_1 + 8)
    entry_ebx = *(__return_addr_1 + 0x10)
    arg2 = *(__return_addr_1 + 0x14)
    arg3 = *(__return_addr_1 + 0x18)
    eax = *(__return_addr_1 + 0x1c)
    __return_addr_1 += 0x20
    
    if (z_3 || c_5)
        goto label_4a13be
    
    esi_14 += 1
    arg4 = *(arg4 + 0x45) * 0xb0746964
    eax_7 = &eax[*eax]
    *eax_7 += arg3.b
    char temp19_1 = *eax_7
    *eax_7 += arg3.b
    char* temp20_1 = arg2
    arg2 = &arg2[1]
    
    if (temp19_1 + arg3.b u< temp19_1)
        uint8_t temp0_7
        temp0_7, edi_8 = __insb(edi_1, arg2.w, eflags_1)
        *edi_8 = temp0_7
    label_4a13af:
        eax = eax_7 ^ 0x3c4
        int32_t temp25_1 = *eax
        *eax |= eax
        z_3 = (temp25_1 | eax) == 0
        arg4 = *(arg3 + 0x72)
        char temp0_9
        temp0_9, edi_1 = __insd(edi_8, arg2.w, eflags_1)
        *edi_1 = temp0_9
        goto label_4a13bc
    
    if (temp20_1 == 0xffffffff)
        if (temp20_1 == 0xffffffff)
            uint8_t temp0_11
            temp0_11, edi_1 = __insb(edi_1, arg2.w, eflags_1)
            *edi_1 = temp0_11
        label_4a13df:
            char temp0_12
            char temp1_2
            temp0_12, temp1_2, eflags_1 = __aaa(eax_7.b, eax_7:1.b, eflags_1)
            eax_7.b = temp0_12
            eax_7:1.b = temp1_2
            *entry_ebx = rol.b(*entry_ebx, 1)
            *eax_7 += eax_7.b
            eax = eax_7 + 0x65480a00
            z_4 = eax_7 == 0x9ab7f600
            o_1 = add_overflow(eax_7, 0x65480a00)
            goto label_4a13e9
        
        __outsb(arg2.w, *esi_14, esi_14, eflags_1)
        eax_7:1.b = 3
        *eax_7 += eax_7.b
        *eax_7 += eax_7
        uint8_t* edi_6
        uint8_t temp0_4
        temp0_4, edi_6 = __insb(edi_1, arg2.w, eflags_1)
        *edi_6 = temp0_4
        edi_1 = *__return_addr_1
        esi_14 = *(__return_addr_1 + 4)
        arg4 = *(__return_addr_1 + 8)
        entry_ebx = *(__return_addr_1 + 0x10)
        arg2 = *(__return_addr_1 + 0x14)
        arg3 = *(__return_addr_1 + 0x18)
        eax = *(__return_addr_1 + 0x1c)
        __return_addr_1 += 0x20
        char* temp35_1 = arg3
        arg3 -= 1
        cond:8_1 = temp35_1 == 1
        esi_3 = __outsb(arg2.w, *esi_14, esi_14, eflags_1)
        goto label_4a137e
    
    eax = eax_7 + *eax_7
    char temp26_1 = *0x65480a00
    *0x65480a00 += eax.b
    z_4 = temp26_1 == neg.b(eax.b)
    o_1 = add_overflow(temp26_1, eax.b)
label_4a13e9:
    uint8_t temp0_13
    temp0_13, edi_1 = __insb(edi_1, arg2.w, eflags_1)
    *edi_1 = temp0_13
    
    if (o_1)
        goto label_4a142e
    
    if (not(z_4))
        *(esi_14 + 0x45)
        arg4 = *(esi_14 + 0x45) * 0x43746964
        c_10 = unimplemented  {imul ebp, dword [esi+0x45], 0x43746964}
        *(__return_addr_1 - 4) = 0x65676e61
        __return_addr_1 -= 4
    label_4a146e:
        eax.b = adc.b(eax.b, 0, c_10)
        eax.b = *0xd004a18
        arg3 = &arg3[1]
    label_4a1476:
        uint16_t* esi_28 = __outsb(arg2.w, *esi_14, esi_14, eflags_1)
        __outsb(arg2.w, *esi_28, esi_28, eflags_1)
        arg4 += 1
    else
        if (z_4)
            goto label_4a145f
        
        esi_14 = __outsb(arg2.w, *esi_14, esi_14, eflags_1)
        char temp0_14
        char temp1_3
        temp0_14, temp1_3, eflags_1 = __aam_immb(3, eax.b)
        eax.b = temp0_14
        eax:1.b = temp1_3
        *eax += eax.b
        char* temp42_1 = eax
        eax = &eax[0x72500d00]
        bool c_7 = temp42_1 u>= 0x8daff300
        bool z_6 = temp42_1 == 0x8daff300
        
        if (z_6 || c_7)
            *(entry_ebx + (eax << 1) + 0x68)
            esi_14 = *(entry_ebx + (eax << 1) + 0x68) * 0x65676e61
            c_10 = unimplemented  {imul esi, dword [ebx+eax*2+0x68], 0x65676e61}
            goto label_4a146e
        
        if (not(z_6) && not(c_7))
            goto label_4a1442
        
        if (not(z_6))
            goto label_4a1476
        
        if (not(z_6))
            goto label_4a1404
        
        *0x456e6e41 += arg3.b
    
    *(&fsbase->User32Reserved[9] + entry_ebx + (eax << 1))
    esi_34 = *(&fsbase->User32Reserved[9] + entry_ebx + (eax << 1)) * 0x65676e61
    bool c_11 = unimplemented  {imul esi, dword [fs:ebx+eax*2+0x68], 0x65676e61}
    eax.b = adc.b(eax.b, 0, c_11)
    eax:1.b = 0x19
    arg2 -= 1
    char temp45_1 = *0x75427242
    *0x75427242 += arg3.b
    
    if (temp45_1 != neg.b(arg3.b))
        uint16_t* esi_30 = __outsd(arg2.w, *esi_34, esi_34, eflags_1)
        esi_14 = __outsb(arg2.w, *esi_30, esi_30, eflags_1)
        entry_ebx += 1
        uint8_t temp0_20
        temp0_20, edi_1 = __insb(edi_1, arg2.w, eflags_1)
        *edi_1 = temp0_20
        __return_addr_1 = *(entry_ebx + 0x6b) * 0x1a400012
        goto label_4a149a
    
    char temp49_1 = *0x480f004a
    z_9 = temp49_1 == entry_ebx.b
    o_3 = add_overflow(temp49_1, neg.b(entry_ebx.b))
label_4a1509:
    uint8_t temp0_26
    temp0_26, edi_1 = __insb(edi_1, arg2.w, eflags_1)
    *edi_1 = temp0_26
    
    if (o_3)
        goto label_4a154f
    
    if (not(z_9))
        goto label_4a1583
    
    if (z_9)
        goto label_4a1580
    
    goto label_4a1511

uint16_t* esi_18

if (temp11_1 == 0x96bdf900)
label_4a137e:
    
    if (not(cond:8_1))
        esi_18 = *(fsbase + eax + (edi_1 << 2) + 3) * 0x40000
        goto label_4a1389
    
    __outsd(arg2.w, *esi_3, esi_3, eflags_1)
    *(__return_addr_1 - 4) = arg4
    *eax
    *(__return_addr_1 - 0xb) = zx.d(es)
    __return_addr_1 -= 0xb
label_4a13ce:
    *(__return_addr_1 - 1)
    *(__return_addr_1 + 3)
    *(__return_addr_1 + 0xf)
    *(__return_addr_1 + 0x13)
    *(__return_addr_1 + 0x17)
    *(__return_addr_1 + 0x1b)
    __bound_gprv_mema32(__return_addr_1 + 0x1f, *(*(__return_addr_1 + 7) + 0x6c))
    breakpoint

entry_ebx.b ^= *(entry_ebx + eax + 0x60000)
eax.b |= *(esi_3 + 0x69)
uint8_t temp0_3
temp0_3, edi_1 = __insb(edi_1, arg2.w, eflags_1)
*edi_1 = temp0_3
__return_addr_1 = *(arg3 + 0x6c) * 0x3a0676f
label_4a1324:
*eax += eax.b
es = *__return_addr_1
__return_addr_1 += 2
label_4a1327:
*edi_1 += eax.b
*(__return_addr_1 - 4) = arg2
char* edi_4 = *(__return_addr_1 - 4)
int32_t edx_2 = *(__return_addr_1 + 0x10)
int32_t eax_5 = *(__return_addr_1 + 0x18)
*edi_4 += eax_5.b
*(__return_addr_1 + 0x18) = eax_5
*(__return_addr_1 + 0x14) = edx_2
void* edi_5 = *(__return_addr_1 + 0x14)
esi_14 = *(__return_addr_1 + 0x18)
entry_ebx = *(__return_addr_1 + 0x24)
arg2 = *(__return_addr_1 + 0x28)
arg3 = *(__return_addr_1 + 0x2c)
eax = *(__return_addr_1 + 0x30)
__return_addr_1 += 0x34
arg4 = *(fsbase + edi_5 - 0x58) * 3
char temp13_1 = *arg3
*arg3 += arg3.b
bool c_4 = temp13_1 + arg3.b u< temp13_1
edi_1 = edi_5 + 1
z_3 = edi_5 == 0xffffffff
void* esi_26

if (c_4)
    z_3 = arg3 == 0xffffffff
    uint8_t* edi_9
    uint8_t temp0_8
    temp0_8, edi_9 = __insb(edi_1, arg2.w, eflags_1)
    *edi_9 = temp0_8
    edi_1 = *__return_addr_1
    esi_14 = *(__return_addr_1 + 4)
    arg4 = *(__return_addr_1 + 8)
    entry_ebx = *(__return_addr_1 + 0x10)
    arg2 = *(__return_addr_1 + 0x14)
    arg3 = *(__return_addr_1 + 0x18)
    eax = *(__return_addr_1 + 0x1c)
    __return_addr_1 += 0x20
label_4a13ba:
    
    if (not(c_4))
    label_4a13bc:
        *(__return_addr_1 - 4) = entry_ebx
        __return_addr_1 -= 4
        esi_14 = __outsd(arg2.w, *esi_14, esi_14, eflags_1)
    label_4a13be:
        
        if (not(z_3))
            goto label_4a142e
        
        char* esi_20 = __outsd(arg2.w, *esi_14, esi_14, eflags_1)
        char* edi_10
        char temp0_10
        temp0_10, edi_10 = __insd(edi_1, arg2.w, eflags_1)
        *edi_10 = temp0_10
        __bound_gprv_mema32(arg4, *(edi_10 - 0x38))
        char eax_10 = eax.b + (*eax).b
        *(entry_ebx + 1) += eax_10
        *esi_20 += eax_10
        goto label_4a13ce
    
    int32_t gsbase
    char temp0_17
    temp0_17, eflags_1 = __arpl_memw_gpr16(*(gsbase + entry_ebx + 0x43), arg4.w)
    *(gsbase + entry_ebx + 0x43) = temp0_17
label_4a142d:
    uint8_t temp0_18
    temp0_18, edi_1 = __insb(edi_1, arg2.w, eflags_1)
    *edi_1 = temp0_18
label_4a142e:
    int32_t esp_27 = *(entry_ebx + 0x6b) * 0x16100014
    arg2 -= 1
    *0x436e6e41 += arg3.b
    *(esp_27 - 4) = 0x436b6365
    uint8_t temp0_19
    temp0_19, edi_1 = __insb(edi_1, arg2.w, eflags_1)
    *edi_1 = temp0_19
label_4a1442:
    __return_addr_1 = *(entry_ebx + 0x6b) * 0x16540015
    arg2 -= 1
    *esi_14 += arg3.b
    char* temp24_1 = eax
    eax -= 1
    esi_26 = __outsd(arg2.w, *esi_14, esi_14, eflags_1)
    
    if (temp24_1 != 1)
        goto label_4a14c2
    
    arg4 += 1
    *(&fsbase->User32Reserved[9] + entry_ebx + (eax << 1))
    *(&fsbase->User32Reserved[9] + entry_ebx + (eax << 1))
    bool c_9 = unimplemented  {imul esi, dword [fs:ebx+eax*2+0x68], 0x65676e61}
    eax.b = adc.b(eax.b, 0, c_9)
    int16_t ss
    *edi_1 = ss
    arg2 -= 1
label_4a145f:
    *0x456e694d += arg3.b
    *(&fsbase->User32Reserved[9] + entry_ebx + (eax << 1))
    esi_14 = *(&fsbase->User32Reserved[9] + entry_ebx + (eax << 1)) * 0x65676e61
    c_10 = unimplemented  {imul esi, dword [fs:ebx+eax*2+0x68], 0x65676e61}
    goto label_4a146e

if (not(z_3))
    goto label_4a13ba

char* temp18_1 = arg2
arg2 = &arg2[1]
char* esi_15 = __outsd(arg2.w, *esi_14, esi_14, eflags_1)

if (&temp18_1[1] s>= 0)
    eax.b = *esi_15
    *arg3 += eax.b + (*eax).b
    char temp29_1 = *(edi_1 + (arg2 << 1))
    *(edi_1 + (arg2 << 1)) += arg3.b
    c_5 = temp29_1 + arg3.b u< temp29_1
    z_3 = temp29_1 == neg.b(arg3.b)
    goto label_4a1356

esi_18 = *(eax + (edi_1 << 2) + 3) * 0x40000
label_4a1389:
eax.b |= 0x41
uint8_t* edi_7
uint8_t temp0_5
temp0_5, edi_7 = __insb(edi_1, arg2.w, eflags_1)
*edi_7 = temp0_5
char temp0_6
temp0_6, edi_1 = __insd(edi_7, arg2.w, eflags_1)
*edi_1 = temp0_6
char* temp23_1 = arg3
arg3 -= 1
bool z_5 = temp23_1 == 1
esi_14 = __outsb(arg2.w, *esi_18, esi_18, eflags_1)

if (z_5)
    char temp27_1 = arg3.b
    arg3.b |= eax[0x65]
    z_4 = (temp27_1 | eax[0x65]) == 0
    o_1 = false
    goto label_4a13e9

if (add_overflow(temp23_1, 0xffffffff))
    *(__return_addr_1 - 4) = zx.d(es)
    edi_1 = *(__return_addr_1 - 5)
    esi_14 = *(__return_addr_1 - 1)
    arg4 = *(__return_addr_1 + 3)
    entry_ebx = *(__return_addr_1 + 0xb)
    arg2 = *(__return_addr_1 + 0xf)
    arg3 = *(__return_addr_1 + 0x13)
    eax_7 = *(__return_addr_1 + 0x17)
    __return_addr_1 += 0x1b
    __bound_gprv_mema32(__return_addr_1, *(arg4 + 0x6c))
    goto label_4a13df

esi_14 = __outsd(arg2.w, *esi_14, esi_14, eflags_1)

if (z_5)
    *esi_14 += eax.b
    char* esi_19 = *0x3000006
    char* ebx_1 = *0x3000012
    int32_t eax_8 = *0x300001e
    __bound_gprv_mema32(0x3000022, *(*0x300000a + 0x6c))
    eax_8.b ^= 0xc0
    char eax_9 = eax_8.b + (*eax_8).b
    *ebx_1 += eax_9
    *esi_19 += eax_9
    edi_8 = *0x3000021
    esi_14 = *0x3000025
    entry_ebx = *0x3000031
    arg2 = *0x3000035
    arg3 = *0x3000039
    eax_7 = *0x300003d
    __return_addr_1 = 0x3000041
    __bound_gprv_mema32(0x3000041, *(*0x3000029 + 0x6c))
    goto label_4a13af

label_4a1404:
uint16_t* esi_23 = __outsb(arg2.w, *esi_14, esi_14, eflags_1)
*entry_ebx
*eax += eax.b
eax.b += *eax
void* eax_13 = eax | 0x72616c41
char* edi_12
char temp0_15
temp0_15, edi_12 = __insd(edi_1, arg2.w, eflags_1)
*edi_12 = temp0_15
uint16_t* esi_24 = __outsb(arg2.w, *esi_23, esi_23, eflags_1)
char* esi_25 = __outsb(arg2.w, *esi_24, esi_24, eflags_1)
*(__return_addr_1 - 4) = 0xc6b6365
*esi_25 += arg2.b
*(eax_13 + 0x15) += arg2:1.b
char temp36_1 = *edi_12
*edi_12 += arg3.b + 1
bool c_8 = temp36_1 + arg3.b + 1 u< temp36_1
uint8_t* edi_13
uint8_t temp0_16
temp0_16, edi_13 = __insb(edi_12, arg2.w - 1, eflags_1)
*edi_13 = temp0_16
edi_1 = *(__return_addr_1 - 4)
esi_14 = *__return_addr_1
arg4 = *(__return_addr_1 + 4)
entry_ebx = *(__return_addr_1 + 0xc)
arg2 = *(__return_addr_1 + 0x10)
arg3 = *(__return_addr_1 + 0x14)
eax = *(__return_addr_1 + 0x18)
__return_addr_1 += 0x1c

if (not(c_8))
    entry_ebx += 1
    *(__return_addr_1 - 4) = 0x436b6365
    goto label_4a142d

char temp0_21
temp0_21, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x12), arg4.w)
*(entry_ebx + 0x12) = temp0_21
eax[0x1a] += eax.b
label_4a149a:
arg2 -= 1
*entry_ebx += arg3.b
bool cond:13_1 = arg4 == 1
bool cond:18_1 = arg4 - 1 s< 0
arg4 = *(esi_14 + 0x45) * 0x45746964
char* esi_33
void* edi_16
bool c_15

if (cond:18_1)
    esi_34 = __outsd(arg2.w, *esi_14, esi_14, eflags_1)
label_4a1511:
    __outsb(arg2.w, *esi_34, esi_34, eflags_1)
    uint8_t* edi_15
    uint8_t temp0_27
    temp0_27, edi_15 = __insb(edi_1, arg2.w, eflags_1)
    *edi_15 = temp0_27
    *(entry_ebx + 0x6c)
    void** esp_32 = *(entry_ebx + 0x6c) * 0x6c41540a
    bool c_16 = unimplemented  {imul esp, dword [ebx+0x6b], 0x6c41540a}
    edi_1 = *esp_32
    int32_t ebp_4 = esp_32[2]
    entry_ebx = esp_32[4]
    int32_t edx_5 = esp_32[5]
    arg3 = esp_32[6]
    eax = esp_32[7]
    __return_addr_1 = &esp_32[8]
    
    if (c_16)
        *eax += eax.b
    label_4a158d:
        (*(*eax + 0x68))()
        goto label_4a1592
    
    uint16_t* esi_37 = esp_32[1] + 1
    __outsd(edx_5.w, *esi_37, esi_37, eflags_1)
    
    if (c_16)
        (*(arg3 + 0x68))()
        goto label_4a1592
    
    eax.b |= *eax
    *(__return_addr_1 - 4) = ebp_4
    __return_addr_1 -= 0x4344
    eax.b = __in_al_immb(0x53, eflags_1)
    entry_ebx += 1
    char temp53_1 = *eax
    *eax += entry_ebx:1.b
    
    if (temp53_1 s< neg.b(entry_ebx:1.b))
        *(entry_ebx + 0x36c83)
        *(entry_ebx - 0x276d00f0) += arg3.b
        *eax += eax.b
    label_4a1580:
        *(eax * 9 + 0x1b23674) += eax.b
    label_4a1587:
        eax = *(entry_ebx + 0x364)
        goto label_4a158d
    
    eax:1.b += entry_ebx.b
    arg2 = edx_5 - 1
    entry_ebx += 1
    eax:1.b += entry_ebx:1.b
label_4a1536:
    edi_1 += 1
    *((arg2 << 2) + 0x3bf00047) += eax.b
    __return_addr_1 += 1
    *(__return_addr_1 + (eax << 2)) += arg2:1.b
    entry_ebx += 1
    char temp37_1 = eax.b
    char temp38_1 = eax.b
    eax.b *= 2
    
    if (temp37_1 + temp38_1 u>= temp37_1)
        eax:1.b += entry_ebx.b
    label_4a154b:
        eax[0x15] += arg2.b
    label_4a154f:
        *edi_1 += eax.b
        arg3[(eax << 1) + 0x6c]
        c_15 = false
        edi_16 = *__return_addr_1
        esi_33 = *(__return_addr_1 + 4)
        arg4 = *(__return_addr_1 + 8)
        entry_ebx = *(__return_addr_1 + 0x10)
        arg2 = *(__return_addr_1 + 0x14)
        arg3 = *(__return_addr_1 + 0x18)
        eax = *(__return_addr_1 + 0x1c)
        __return_addr_1 += 0x20
        goto label_4a1559
    
    *eax
    *(entry_ebx + 0x6851ff08) += arg3.b
label_4a1592:
    arg2.b = 1
    (*(**(entry_ebx + 0x368) + 0x68))()
    int32_t edx_7
    edx_7.b = 1
    (*(**(entry_ebx + 0x3a0) + 0x68))()
    int32_t edx_8
    edx_8.b = 1
    (*(**(entry_ebx + 0x3a4) + 0x68))()
else
    bool c_13
    
    if (cond:13_1)
        char temp51_1 = *(entry_ebx * 2 + 0x4608004a)
        *(entry_ebx * 2 + 0x4608004a) += arg2.b
        c_13 = temp51_1 + arg2.b u< temp51_1
    else
        char temp52_1 = eax.b
        eax.b += arg3:1.b
        arg3.b = sbb.b(arg3.b, *arg2, temp52_1 + arg3:1.b u< temp52_1)
        int16_t cs
        *(__return_addr_1 - 4) = zx.d(cs)
        arg4 = *(esi_14 + 0x55) * 0x776f4470
        esi_26 = __outsb(arg2.w, *esi_14, esi_14, eflags_1)
        entry_ebx += 1
        uint8_t temp0_22
        temp0_22, edi_1 = __insb(edi_1, arg2.w, eflags_1)
        *edi_1 = temp0_22
        __return_addr_1 = *(entry_ebx + 0x6b) * 0x1b94000f
        arg2 -= 1
    label_4a14c2:
        char temp30_1 = *eax
        *eax += arg3.b
        c_13 = temp30_1 + arg3.b u< temp30_1
        esi_14 = esi_26 + 1
    
    uint16_t* esi_31 = __outsd(arg2.w, *esi_14, esi_14, eflags_1)
    
    if (c_13)
        goto label_4a1536
    
    *(__return_addr_1 - 4) = entry_ebx
    *(__return_addr_1 - 8) = 0x1c776f
    arg2 -= 1
    char temp39_1 = *0x72616c41
    *0x72616c41 += arg2.b
    char temp0_23
    temp0_23, edi_1 = __insd(edi_1, arg2.w, eflags_1)
    *edi_1 = temp0_23
    *(__return_addr_1 - 0xc) = entry_ebx
    __return_addr_1 -= 0xc
    uint16_t* esi_32 = __outsd(arg2.w, *esi_31, esi_31, eflags_1)
    
    if (temp39_1 != neg.b(arg2.b))
        goto label_4a154b
    
    entry_ebx += 1
    esi_33 = __outsd(arg2.w, *esi_32, esi_32, eflags_1)
    char* edi_14
    char temp0_24
    temp0_24, edi_14 = __insd(edi_1, arg2.w, eflags_1)
    *edi_14 = temp0_24
    __bound_gprv_mema32(arg4, *(edi_14 + 0x43))
    *(__return_addr_1 - 4) = 0x65676e61
    *eax = sbb.d(*eax, eax, temp39_1 + arg2.b u< temp39_1)
    int16_t ds
    *(arg2 + (arg3 << 1)) = ds
    char temp41_1 = *arg2
    *arg2 += arg2.b
    c_15 = temp41_1 + arg2.b u< temp41_1
    bool z_8 = temp41_1 == neg.b(arg2.b)
    *(__return_addr_1 - 8) = eax
    __return_addr_1 -= 8
    
    if (c_15)
        char temp0_30
        temp0_30, edi_16 = __insd(edi_14, arg2.w, eflags_1)
        *edi_16 = temp0_30
    label_4a1559:
        __outsd(arg2.w, *(esi_33 + 1), &esi_33[1], eflags_1)
        
        if (not(c_15))
            *arg3 -= arg2.b
            arg2 -= 1
            *(arg4 + 0x680046) += eax:1.b
        label_4a1566:
            eax = &eax[0x72616c61]
            char* edi_18
            char temp0_31
            temp0_31, edi_18 = __insd(edi_16, arg2.w, eflags_1)
            *edi_18 = temp0_31
        label_4a156c:
            *eax += eax.b
            *(__return_addr_1 - 4) = entry_ebx
            __return_addr_1 -= 4
            entry_ebx = eax
            goto label_4a157b
        
        *(entry_ebx + 0x36883) = ror.b(*(entry_ebx + 0x36883), arg3.b)
        *(entry_ebx + 0x6851ff08) += arg3.b
        (*(**(entry_ebx + 0x3a0) + 0x68))()
        (*(**(entry_ebx + 0x3a4) + 0x68))()
    else
        if (z_8 || c_15)
            *arg2 = adc.d(*arg2, arg3, c_15)
            *edi_14 = *esi_33
            int32_t* edi_17 = &edi_14[1]
            *edi_17 = *(esi_33 + 1)
            edi_16 = &edi_17[1]
            *eax += arg3:1.b
            goto label_4a1566
        
        if (not(z_8) && not(c_15))
            char* ebp_6 = eax
            edi_1 = &edi_14[1]
            eax.b = arg4.b + arg2:1.b
            *(eax * 2 + 0x34)
            *entry_ebx
            arg2[0x43] = arg2[0x43]
            *(ebp_6 + 0x43)
            goto label_4a154b
        
        if (not(z_8))
            *(entry_ebx - 0x2774ac40) += arg3.b
        label_4a157b:
            char eax_16
            eax_16, arg2 = (*(**(entry_ebx + 0x36c) + 0xd8))()
            z_9 = eax_16 == 0
        label_4a1583:
            
            if (not(z_9))
                arg2.b = 1
                goto label_4a1587
            
            (*(**(entry_ebx + 0x364) + 0x68))()
            (*(**(entry_ebx + 0x368) + 0x68))()
            (*(**(entry_ebx + 0x3a0) + 0x68))()
            (*(**(entry_ebx + 0x3a4) + 0x68))()
        else
            if (not(z_8))
                esi_34 = __outsb(arg2.w, *esi_33, esi_33, eflags_1)
                entry_ebx += 1
                uint8_t temp0_25
                temp0_25, edi_1 = __insb(edi_14, arg2.w, eflags_1)
                *edi_1 = temp0_25
                __return_addr_1 = *(entry_ebx + 0x6b) * 0x1d380016
                arg2 -= 1
                *edi_1 += arg3.b
                char* temp54_1 = eax
                eax -= 1
                z_9 = temp54_1 == 1
                o_3 = add_overflow(temp54_1, 0xffffffff)
                goto label_4a1509
            
            if (not(c_15))
                goto label_4a156c
            
            eax.b = *0x8b000003
            entry_ebx:1.b = entry_ebx:1.b
            *(__return_addr_1 - 4) = arg3
            *(__return_addr_1 - 8) = 0x838bd233
            __return_addr_1 -= 8
            *edi_14 = *esi_33
            *eax
            *(entry_ebx + 0x6851ff08) += arg3.b
(*(**(entry_ebx + 0x378) + 0x80))()
(*(**(entry_ebx + 0x37c) + 0x80))()
*__return_addr_1
