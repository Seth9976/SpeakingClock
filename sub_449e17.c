// 函数: sub_449e17
// 地址: 0x449e17
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
arg1[0x80000000] += arg1.b
arg1.b += *arg1
int16_t es
uint32_t var_4 = zx.d(es)
int32_t* ecx = arg3 + 1
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*(ecx + (arg4 << 1) + 0x6f), arg5.w)
*(ecx + (arg4 << 1) + 0x6f) = temp0
uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
*arg1 += arg2.b
arg1[0xa8ff0001] += ecx:1.b
arg1[1] += (&arg1[1]).b
*ecx += 1
arg1[1] += (&arg1[1]).b
arg1[1] += (&arg1[1]).b
arg1[1] += (&arg1[1]).b
arg1[1] = arg1[1]
arg1[1] += (&arg1[1]).b
void* eax_1 = &arg1[1 + *(arg1 + 1)]
int32_t temp1 = *(ecx + 0x75) | eax_1
*(ecx + 0x75) = temp1
uint16_t edx
char* entry_ebx
void* esp_3
uint32_t var_8

if (temp1 == 0)
    var_8 = zx.d(es)
    *esi += eax_1.b
    edx = arg2.w + 1
    esi = *(arg4 * 3 + 0x61) * 0x4499d070
    *eax_1 += ecx.b
    entry_ebx:1.b *= 2
    eax_1.b = __in_al_immb(0xe2, eflags)
    *ecx += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 = *eax_1
    *eax_1 += eax_1.b
    esp_3 = &var_8:3
    *0x61657242 += eax_1.b
else
    entry_ebx = &entry_ebx[1]
    var_8 = 0xbc6b6365
    *entry_ebx += entry_ebx:1.b
    *eax_1 += eax_1.b
    int32_t var_b = *eax_1
    *ecx += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *arg2 = *arg2
    *eax_1 += eax_1.b
    eax_1.b = eax_1.b
    void* temp3_1 = eax_1
    eax_1 |= *(ecx + 0x75)
    
    if ((temp3_1 | *(ecx + 0x75)) != 0)
        void* temp6_1 = eax_1
        eax_1 -= 1
        __outsd(arg2.w, *esi, esi, eflags)
        
        if (temp6_1 != 1)
            if (temp6_1 - 1 s>= 0)
                entry_ebx:1.b *= 2
                trap(0xd)
            
            *eax_1 += eax_1.b
            undefined
    
    esi = var_8
    arg4 = var_4
    entry_ebx = arg7
    edx = arg8
    ecx = arg9
    eax_1 = arg10
    void arg_16
    esp_3 = &arg_16
arg6 = nullptr
*(esp_3 - 4) = esp_3
void* esp_1 = esp_3 - 4
ecx -= 1

if (ecx != 0)
    *ecx += eax_1.b
    *eax_1 += eax_1.b
else
    eax_1:1.b += edx.b

*eax_1 += eax_1.b
*eax_1 += eax_1.b
*eax_1 = *eax_1
char temp7_1 = *(eax_1 + 0x530d000a)
*(eax_1 + 0x530d000a) += eax_1.b
bool c_1 = temp7_1 + eax_1.b u< temp7_1

if (temp7_1 != neg.b(eax_1.b))
    *eax_1 += eax_1.b
    goto label_449fa7

uint32_t temp8_1 = arg4
arg4 -= 1
uint16_t* gsbase
esi = __outsb(edx, *(gsbase + esi), esi, eflags)
char* eax_3
uint16_t* esi_1

if (temp8_1 != 1)
    while (true)
        uint8_t temp0_4
        temp0_4, arg6 = __insb(arg6, edx, eflags)
        *arg6 = temp0_4
        *eax_1 = adc.b(*eax_1, eax_1.b, c_1)
        char temp0_5
        char temp1_1
        temp0_5, temp1_1, eflags = __aas(eax_1.b, eax_1:1.b, eflags)
        eax_1.b = temp0_5
        eax_1:1.b = temp1_1
        *eax_1 += eax_1.b
        *(esp_1 - 4) = *esp_1
        esp_1 -= 3
        *ecx += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 = *eax_1
    label_449fa7:
        *eax_1 += eax_1.b
        eax_3 = eax_1 | 0x72470a00
        uint16_t* esi_3 = __outsd(edx, *esi, esi, eflags)
        
        if ((eax_1 | 0x72470a00) != 0)
            *eax_3 = adc.b(*eax_3, eax_3.b, false)
            undefined
        
        esi_1 = __outsb(edx, *esi_3, esi_3, eflags)
        
        if (ecx - 1 s>= 0)
            break
        
        eax_3.b = __in_al_dx(edx, eflags)
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *(ecx - 1) = *(ecx - 1)
        *eax_3 += eax_3.b
        c_1 = false
        *0x140044e4
        __outsb(edx, *esi_1, esi_1, eflags)
        arg6 = *0x140044e6
        esi = *0x140044ea
        arg4 = *0x140044ee
        entry_ebx = *0x140044f6
        edx = (*0x140044fa).w
        ecx = *0x140044fe
        eax_1 = *0x14004502
        esp_1 = 0x14004506
        __bound_gprv_mema32(arg4, *(arg4 + 0x64))
    
    if (not(add_overflow(ecx, 0xffffffff)))
        *(eax_3 * 2) += edx.b
        (*(eax_3 * 2))()
        char* eax_4
        char ecx_3
        uint16_t edx_2
        eax_4, edx_2, ecx_3 = (*(esp_1 + (arg4 << 3) + 0x44))()
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 = *eax_4
        *eax_4 += eax_4.b
        int16_t cs
        *(esp_1 - 4) = zx.d(cs)
        *entry_ebx += ecx_3
        uint8_t* edi_3
        uint8_t temp0_6
        temp0_6, edi_3 = __insb(arg6, edx_2, eflags)
        *edi_3 = temp0_6
        
        if (add_overflow(eax_4, 0xffffffff))
            jump("geIndex")
        
        jump("ontext")
    
    if (ecx != 1)
        jump(0x449ffc)
else
    int16_t* edi_1
    int16_t temp0_2
    temp0_2, edi_1 = __insd(arg6, edx, eflags)
    *edi_1 = temp0_2
    *esp_1
    *(esp_1 + 4)
    *(esp_1 + 8)
    entry_ebx = *(esp_1 + 0x10)
    *(esp_1 + 0x14)
    char* ecx_1 = *(esp_1 + 0x18)
    char* eax_2 = *(esp_1 + 0x1c)
    *eax_2 = adc.b(*eax_2, eax_2.b, c_1)
    *eax_2
    entry_ebx:1.b *= 2
    eax_2.b = 0xe5
    *ecx_1 -= 0x1b
    *eax_2 -= 0x1b
    *eax_2 -= 0x1b
    *eax_2 -= 0x1b
    *eax_2 = *eax_2
    *eax_2 -= 0x1b
    *eax_2
    *(esp_1 + 0x21)
    int32_t edi_2
    edi_2.w = *(esp_1 + 0x24)
    esi_1.w = *(esp_1 + 0x26)
    int32_t ebp
    ebp.w = *(esp_1 + 0x28)
    void* esp_8
    esp_8.w = (esp_1 + 0x2a).w + 2
    entry_ebx.w = *esp_8
    int32_t edx_1
    edx_1.w = *(esp_8 + 2)
    ecx_1.w = *(esp_8 + 4)
    eax_3.w = *(esp_8 + 6)
    
    if (esp_1 == 0xffffffdc)
        if (esp_1 == 0xffffffdc)
            jump(0x449f70)
        
        jump(0x449f70)
    
    if (esp_1 + 0x24 s< 0)
        jump(&data_44a050)

*eax_3 += eax_3.b
entry_ebx:1.b *= 2
char* eax_6
eax_6.b = (*eax_3)().b ^ 0xec
*eax_6 += eax_6.b
*eax_6 += eax_6.b
*eax_6 = *eax_6
eax_6[0x4804000f] += eax_6.b
*(esi_1 + 0x74)
eax_6[1] += (&eax_6[1]).b
undefined
