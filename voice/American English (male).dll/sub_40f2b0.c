// 函数: sub_40f2b0
// 地址: 0x40f2b0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int16_t cs
uint32_t var_4_1 = zx.d(cs)
char* entry_ebx
int32_t edx = arg2 | *(entry_ebx + (arg2 << 1) + 0x74)

if (edx u>= 0)
    int32_t eflags
    __outsb(edx.w, *arg4, arg4, eflags)
    
    if (arg1 == 1)
        jump(0x40f321)
    
    jump(0x40f2bc)

*arg1 += var_4_1.b
uint32_t var_4 = var_4_1
*var_4_1 += 1
uint32_t eax
eax.b = var_4_1.b - 0xe
*(eax + 0xe) += eax:1.b
*(arg4 + &arg1[2] + 0x41) += eax:1.b
*(eax + 0xe) += (&arg1[2]):1.b
entry_ebx[eax] += entry_ebx:1.b
char temp0 = eax:1.b
eax:1.b += entry_ebx.b

if (not(add_overflow(temp0, entry_ebx.b)))
    eax = *eax

*eax
arg1[5 + edx] += (&arg1[5]).b
eax:1.b += entry_ebx:1.b
*(arg1 + 6) |= eax
arg1[6] -= edx.b
arg1[edx + 0xbe00048] += entry_ebx.b
eax:1.b += (&arg1[8]):1.b
int32_t eax_2 = sx.d(eax.w | (*(arg1 + 8)).w)
*eax_2 += 1
arg1[8 + (eax_2 << 1)] = (&arg1[8]).b
eax_2.b += (&arg1[8]).b
eax_2.b |= 0x41
arg1[0x2e80049] += edx:1.b
eax_2:1.b += eax_2.b
uint32_t var_8 = zx.d(cs)
eax_2.b += edx:1.b
eax_2.b += 0x41
eax_2:1.b += eax_2.b
char* eax_3 = eax_2 + 0xf000041
char temp2 = *eax_3
*eax_3 += edx.b

if (not(add_overflow(temp2, edx.b)))
    eax_3 = *eax_3

*arg4 -= eax_3.b
*(arg4 + eax_3 + 0x41) += entry_ebx:1.b
*eax_3 += (&arg1[0xc]):1.b
eax_3.b *= 2
arg1[0xd]
arg1[0xd] |= eax_3.b
arg1[0xd] = sbb.b(arg1[0xd], (&arg1[0xd]).b, false)
*(&arg1[0xe] * 2 + 0xc500041) += (&arg1[0xe]):1.b
void arg_3b
*(&arg_3b + &arg1[0xf]) += (&arg1[0xf]):1.b
arg1[arg5 + 0x50] += eax_3:1.b
arg1[arg3 + 0x11540050] += edx:1.b
arg1[edx + 0x51] += eax_3:1.b
char temp4 = *entry_ebx
*entry_ebx += (&arg1[0x10]).b
void* var_a = &var_8:2
char* var_e = entry_ebx

if (temp4 != neg.b((&arg1[0x10]).b))
    jump("ingList")

*(arg4 + arg3 + 0x40) += eax_3:1.b
char temp5 = eax_3[0xd800402e]
eax_3[0xd800402e] += eax_3:1.b
*(arg1 + 0x10) = adc.d(*(arg1 + 0x10), eax_3, temp5 + eax_3:1.b u< temp5)
eax_3.b &= 0x12
char temp6 = *eax_3
*eax_3 += (&arg1[0x11]):1.b
eax_3.b = adc.b(eax_3.b, arg1[0x11], temp6 + (&arg1[0x11]):1.b u< temp6)
undefined
