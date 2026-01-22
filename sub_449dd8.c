// 函数: sub_449dd8
// 地址: 0x449dd8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esp_2 = &__return_addr:1
arg3.b += arg3:1.b
char* ecx = arg1 - 1
int32_t eflags
void* esp_1
int16_t es

if (ecx != 0)
    arg3.b += *arg3
label_449e23:
    *(esp_2 - 4) = zx.d(es)
    esp_1 = esp_2 - 4
    ecx = &ecx[1]
    int16_t temp0_4
    temp0_4, eflags = __arpl_memw_gpr16(*(ecx + (arg4 << 1) + 0x6f), arg5.w)
    *(ecx + (arg4 << 1) + 0x6f) = temp0_4
    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
    *arg3 += arg2.b
    arg3 = &arg3[1]
    arg3[0xa8ff0000] += ecx:1.b
    *arg3 += arg3.b
    *ecx += 1
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
label_449e3d:
    *arg3 = *arg3
    *arg3 += arg3.b
    goto label_449e42

*ecx += ecx.b
void* var_3 = &__return_addr:1
esp_1 = &var_3
void* temp1_1 = arg4
arg4 -= 1
uint16_t* gsbase
arg5 = __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
int16_t edx
char* entry_ebx
void* esp_8

if (temp1_1 != 1)
    entry_ebx:1.b *= 2
    entry_ebx:1.b *= 2
    *arg3 = &arg3[*arg3]
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
label_449e42:
    arg3 = &arg3[*arg3]
    int32_t temp2_1 = *(ecx + 0x75) | arg3
    *(ecx + 0x75) = temp2_1
    
    if (temp2_1 != 0)
        entry_ebx = &entry_ebx[1]
        *(esp_1 - 4) = 0xbc6b6365
        esp_1 -= 4
        goto label_449e51
    
    *(esp_1 - 4) = zx.d(es)
    *arg5 += arg3.b
    edx = arg2.w + 1
    arg5 = *(arg4 * 3 + 0x61) * 0x4499d070
    *arg3 += ecx.b
    entry_ebx:1.b *= 2
    arg3.b = __in_al_immb(0xe2, eflags)
    *ecx += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 = *arg3
    *arg3 += arg3.b
    *(esp_1 - 3)
    esp_8 = esp_1 - 1
    *0x61657242 += arg3.b
else
    if (temp1_1 == 1)
        int16_t temp0_5
        temp0_5, eflags = __arpl_memw_gpr16(*(entry_ebx - 0x44), arg4.w)
        *(entry_ebx - 0x44) = temp0_5
    label_449e51:
        *entry_ebx += entry_ebx:1.b
        *arg3 += arg3.b
        *(esp_1 - 3) = *arg3
        esp_1 -= 2
        *ecx += arg3.b
    else
        int16_t temp0_1
        temp0_1, arg6 = __insd(arg6, arg2.w, eflags)
        *arg6 = temp0_1
        arg3.b = __in_al_dx(arg2.w, eflags)
        esp_1 = &__return_addr:2
        *arg6 += arg3.b
        int32_t temp3_1 = *(arg4 + (ecx << 1) + 0x65) | arg2
        *(arg4 + (ecx << 1) + 0x65) = temp3_1
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
        
        if (temp3_1 != 0)
            goto label_449e3d
        
        if (temp3_1 != 0)
            int16_t temp0_3
            temp0_3, arg6 = __insd(arg6, arg2.w, eflags)
            *arg6 = temp0_3
            var_3 = arg3
            esp_2 = &__return_addr:3
            arg6[arg3 * 2].b += arg3:1.b
            ecx = &ecx[1]
            *arg3 += entry_ebx.b
            char temp7_1 = *0x756e654d
            *0x756e654d += arg3.b
            
            if (temp7_1 + arg3.b u>= temp7_1)
                *arg3 += arg3.b
                *arg2 = *arg2
                goto label_449e23
            
            arg3[(ecx << 2) - 0x1b87ffbf] += arg2:1.b
            *arg3 += entry_ebx.b
            *arg3 += arg3.b
            TEB* fsbase
            fsbase->NtTib.ExceptionList = arg7
            arg8 = sub_459e7f
            return sub_404bac(arg4 - 8, 2)
    
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg2 = *arg2
    *arg3 += arg3.b
    arg3.b = arg3.b
    char* temp5_1 = arg3
    arg3 |= *(ecx + 0x75)
    
    if ((temp5_1 | *(ecx + 0x75)) != 0)
        char* temp9_1 = arg3
        arg3 -= 1
        __outsd(arg2.w, *arg5, arg5, eflags)
        
        if (temp9_1 != 1)
            if (temp9_1 - 1 s>= 0)
                entry_ebx:1.b *= 2
                trap(0xd)
            
            *arg3 += arg3.b
            undefined
    
    *esp_1
    arg5 = *(esp_1 + 4)
    arg4 = *(esp_1 + 8)
    entry_ebx = *(esp_1 + 0x10)
    edx = (*(esp_1 + 0x14)).w
    ecx = *(esp_1 + 0x18)
    arg3 = *(esp_1 + 0x1c)
    esp_8 = esp_1 + 0x20

arg6 = nullptr
*(esp_8 - 4) = esp_8
esp_1 = esp_8 - 4
ecx -= 1

if (ecx != 0)
    *ecx += arg3.b
    *arg3 += arg3.b
else
    arg3:1.b += edx.b

*arg3 += arg3.b
*arg3 += arg3.b
*arg3 = *arg3
char temp10_1 = arg3[0x530d000a]
arg3[0x530d000a] += arg3.b
bool c_2 = temp10_1 + arg3.b u< temp10_1

if (temp10_1 != neg.b(arg3.b))
    *arg3 += arg3.b
    goto label_449fa7

void* temp11_1 = arg4
arg4 -= 1
arg5 = __outsb(edx, *(gsbase + arg5), arg5, eflags)
char* eax_1
uint16_t* esi

if (temp11_1 != 1)
    while (true)
        uint8_t temp0_9
        temp0_9, arg6 = __insb(arg6, edx, eflags)
        *arg6 = temp0_9
        *arg3 = adc.b(*arg3, arg3.b, c_2)
        char temp0_10
        char temp1_2
        temp0_10, temp1_2, eflags = __aas(arg3.b, arg3:1.b, eflags)
        arg3.b = temp0_10
        arg3:1.b = temp1_2
        *arg3 += arg3.b
        *(esp_1 - 4) = *esp_1
        esp_1 -= 3
        *ecx += arg3.b
        *arg3 += arg3.b
        *arg3 += arg3.b
        *arg3 += arg3.b
        *arg3 = *arg3
    label_449fa7:
        *arg3 += arg3.b
        eax_1 = arg3 | 0x72470a00
        uint16_t* esi_2 = __outsd(edx, *arg5, arg5, eflags)
        
        if ((arg3 | 0x72470a00) != 0)
            *eax_1 = adc.b(*eax_1, eax_1.b, false)
            undefined
        
        esi = __outsb(edx, *esi_2, esi_2, eflags)
        
        if (ecx - 1 s>= 0)
            break
        
        eax_1.b = __in_al_dx(edx, eflags)
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *(ecx - 1) = *(ecx - 1)
        *eax_1 += eax_1.b
        c_2 = false
        *0x140044e4
        __outsb(edx, *esi, esi, eflags)
        arg6 = *0x140044e6
        arg5 = *0x140044ea
        arg4 = *0x140044ee
        entry_ebx = *0x140044f6
        edx = (*0x140044fa).w
        ecx = *0x140044fe
        arg3 = *0x14004502
        esp_1 = 0x14004506
        __bound_gprv_mema32(arg4, *(arg4 + 0x64))
    
    if (not(add_overflow(ecx, 0xffffffff)))
        *(eax_1 * 2) += edx.b
        (*(eax_1 * 2))()
        char* eax_2
        char ecx_3
        uint16_t edx_2
        eax_2, edx_2, ecx_3 = (*(esp_1 + (arg4 << 3) + 0x44))()
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 = *eax_2
        *eax_2 += eax_2.b
        int16_t cs
        *(esp_1 - 4) = zx.d(cs)
        *entry_ebx += ecx_3
        uint8_t* edi_3
        uint8_t temp0_11
        temp0_11, edi_3 = __insb(arg6, edx_2, eflags)
        *edi_3 = temp0_11
        
        if (add_overflow(eax_2, 0xffffffff))
            jump("geIndex")
        
        jump("ontext")
    
    if (ecx != 1)
        jump(0x449ffc)
else
    int16_t* edi_1
    int16_t temp0_7
    temp0_7, edi_1 = __insd(arg6, edx, eflags)
    *edi_1 = temp0_7
    *esp_1
    *(esp_1 + 4)
    *(esp_1 + 8)
    entry_ebx = *(esp_1 + 0x10)
    *(esp_1 + 0x14)
    uint16_t* ecx_1 = *(esp_1 + 0x18)
    uint16_t* eax = *(esp_1 + 0x1c)
    *eax = adc.b(*eax, eax.b, c_2)
    *eax
    entry_ebx:1.b *= 2
    eax.b = 0xe5
    *ecx_1 -= 0x1b
    *eax -= 0x1b
    *eax -= 0x1b
    *eax -= 0x1b
    *eax = *eax
    *eax -= 0x1b
    *eax
    *(esp_1 + 0x21)
    int32_t edi_2
    edi_2.w = *(esp_1 + 0x24)
    esi.w = *(esp_1 + 0x26)
    uint16_t* ebp
    ebp.w = *(esp_1 + 0x28)
    int16_t* esp_14
    esp_14.w = (esp_1 + 0x2a).w + 2
    entry_ebx.w = *esp_14
    uint16_t* edx_1
    edx_1.w = esp_14[1]
    ecx_1.w = esp_14[2]
    eax_1.w = esp_14[3]
    
    if (esp_1 == 0xffffffdc)
        if (esp_1 == 0xffffffdc)
            jump(0x449f70)
        
        jump(0x449f70)
    
    if (esp_1 + 0x24 s< 0)
        jump(&data_44a050)

*eax_1 += eax_1.b
entry_ebx:1.b *= 2
char* eax_4
eax_4.b = (*eax_1)().b ^ 0xec
*eax_4 += eax_4.b
*eax_4 += eax_4.b
*eax_4 = *eax_4
eax_4[0x4804000f] += eax_4.b
*(esi + 0x74)
eax_4[1] += (&eax_4[1]).b
undefined
