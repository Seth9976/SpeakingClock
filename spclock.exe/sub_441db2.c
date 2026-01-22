// 函数: sub_441db2
// 地址: 0x441db2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint8_t* edi_2
uint8_t temp0_4
temp0_4, edi_2 = __insb(arg6, arg2.w, eflags)
*edi_2 = temp0_4
int32_t ecx = arg3 - 1
bool z = arg3 == 1
uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
uint8_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
bool c

if (not(c))
    *arg4 ^= arg1.b
    int16_t temp0 = arg4
    arg4 = arg1
    int32_t* eax = temp0
    *eax += eax
    char* eax_1
    eax_1, arg2, ecx = (*(edi_2 + eax + 0x10046))()
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    char temp2_1 = *eax_1
    *eax_1 += eax_1.b
    arg1 = adc.d(eax_1, *eax_1, temp2_1 + eax_1.b u< temp2_1)
    int32_t temp3_1 = *(arg2 + 0x65)
    *(arg2 + 0x65) |= arg1
    c = false
    z = (temp3_1 | arg1) == 0

if (not(z) && not(c))
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(edi_2, arg2.w, eflags)
    *edi = temp0_1
    *(esi_1 + 0x64)
    arg1.b += *arg1
    undefined

arg1[0x42080016] += arg1.b
int32_t eflags_1
char temp0_2
temp0_2, eflags_1 = __das((*(ecx + (arg4 << 1) + 0x4d) * 0x5c65646f).b, eflags)
void* eax_2
eax_2.b = temp0_2
*(eax_2 + 2) += eax_2:1.b
char* entry_ebx
entry_ebx:1.b *= 2
*edi_2 = *esi_1
void* edi_1 = &edi_2[1]
uint16_t* esi_2 = &esi_1[1]
char* eax_3 = eax_2 ^ 0x10044
*eax_3 += eax_3.b
*eax_3 += eax_3.b
*eax_3 += eax_3.b
void* esp_1 = &__return_addr:2
char temp4 = *entry_ebx
*entry_ebx += ecx.b
bool c_2 = temp4 + ecx.b u< temp4
void* edx_1 = arg2 + 1
uint16_t* esi_3 = __outsd(edx_1.w, *esi_2, esi_2, eflags_1)
void* eax_6
bool c_6

if (c_2)
    *eax_3 += eax_3.b
    eax_6, edx_1, ecx = (*edx_1)()
    char temp5_1 = *0x6f6c6f43
    *0x6f6c6f43 += eax_6.b
    c_6 = temp5_1 + eax_6.b u< temp5_1
else
    if (not(c_2))
        void arg_6a
        *(&arg_6a + (esi_3 << 1))
        TEB* fsbase
        eax_3.b += *(fsbase + eax_3)
        char* eax_5 = &eax_3[1] ^ 0x10044
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        char temp8_1 = *eax_5
        *eax_5 += eax_5.b
        *eax_5 = sbb.b(*eax_5, eax_5.b, temp8_1 + eax_5.b u< temp8_1)
        *(edx_1 + 0x6f)
        *(edx_1 + 0x6f)
        jump("tyle")
    
    char temp6_1 = eax_3:1.b
    char temp7_1 = eax_3.b
    eax_3:1.b += eax_3.b
    
    if (temp6_1 + temp7_1 s>= 0)
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 = *eax_3
        char temp12 = eax_3[0x4305001c]
        eax_3[0x4305001c] += eax_3.b
        
        if (temp12 == neg.b(eax_3.b))
            return sub_441f87(eax_3, edx_1, ecx, &arg4[2], esi_3, edi_1) __tailcall
        
        jump(0x441f1b)
    
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *edi_1 = *edi_1
    char temp13_1 = entry_ebx:1.b
    char temp14_1 = entry_ebx:1.b
    entry_ebx:1.b *= 2
    eax_3.b = sbb.b(eax_3.b, *eax_3, temp13_1 + temp14_1 u< temp13_1)
    eax_6 = &eax_3[0x6f6c6f43]
    c_6 = eax_3 u>= 0x909390bd

int16_t ds

if (not(c_6))
    uint32_t var_2_1 = zx.d(ds)
    *(eax_6 * 2) += edx_1:1.b
    undefined

*eax_6 += eax_6.b
*eax_6 = *eax_6
char temp11_1 = *(eax_6 + 0x430b001b)
*(eax_6 + 0x430b001b) += eax_6.b
bool c_4 = temp11_1 + eax_6.b u< temp11_1
uint16_t* esi_4 = __outsd(edx_1.w, *esi_3, esi_3, eflags_1)
uint16_t* esi_5 = __outsb(edx_1.w, *esi_4, esi_4, eflags_1)

if (c_4)
    if (c_4)
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *(esp_1 - 4) = zx.d(ds)
        *eax_6 += ecx.b
        __outsd(edx_1.w, *esi_5, esi_5, eflags_1)
        int32_t eflags_2
        int16_t temp0_3
        temp0_3, eflags_2 = __arpl_memw_gpr16(*(entry_ebx + 0x53), (&arg4[1]).w)
        *(entry_ebx + 0x53) = temp0_3
        *(arg4 - 0x4f)
        *eax_6 += eax_6.b
        undefined
    
    return sub_441ef9(eax_6, edx_1, ecx, esi_5, edi_1) __tailcall

*esi_5 += entry_ebx:1.b
entry_ebx:1.b *= 2
entry_ebx:1.b *= 2
*eax_6 += eax_6
*eax_6 += eax_6.b
*eax_6 += eax_6.b
*(eax_6 - 0xc) += eax_6.b
*esp_1
char temp16 = *edx_1
*edx_1 += ecx.b

if (temp16 + ecx.b u< temp16)
    jump(0x441fe8)

return sub_441f87(eax_6, edx_1, ecx, &arg4[2], esi_5, edi_1) __tailcall
