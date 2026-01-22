// 函数: sub_46a634
// 地址: 0x46a634
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
char temp1 = *arg1
*arg1 += arg1.b
arg1.b = adc.b(arg1.b, 0, temp1 + arg1.b u< temp1)
arg3[0x6c]
arg1.b |= arg3[0x6c]
char* eax = arg12
int32_t eflags
uint8_t* edi_1
uint8_t temp0
temp0, edi_1 = __insb(__return_addr, arg10 + 1, eflags)
*edi_1 = temp0
uint16_t* gsbase
__outsb(arg10 + 1, *(gsbase + arg7), arg7, eflags)
uint8_t* edi_2
uint8_t temp0_1
temp0_1, edi_2 = __insb(edi_1, arg10 + 1, eflags)
*edi_2 = temp0_1
*eax = adc.b(*eax, eax.b, false)
*arg9 -= eax
void** ebx
ebx:1.b = arg9:1.b * 2
*edi_2
*(eax + 1) = &eax[1 + *(eax + 1)]
eax[1] += (&eax[1]).b
eax[1] += (&eax[1]).b
char temp6_1 = eax[0x100]
eax[0x100] += (&eax[1]).b
void*** eax_2 = adc.d(&eax[1], 0x6c410f00, temp6_1 + (&eax[1]).b u< temp6_1)
bool o = unimplemented  {adc eax, 0x6c410f00}

if (not(o))
    uint8_t* edi_4
    uint8_t temp0_2
    temp0_2, edi_4 = __insb(arg13, arg15.w + 1, eflags)
    *edi_4 = temp0_2
    uint8_t* edi_6
    uint8_t temp0_3
    temp0_3, edi_6 = __insb(__outsb(arg15.w + 1, *(gsbase + arg14), arg14, eflags), arg19, eflags)
    *edi_6 = temp0_3
    
    if (arg15 != 0xffffffff)
        jump(0x46a6de)
    
    jump(0x46a679)

char temp9_1 = *eax_2
*eax_2 += eax_2.b
*eax_2 = sbb.b(*eax_2, eax_2.b, temp9_1 + eax_2.b u< temp9_1)
char temp10_1 = *(arg11 + 0x75) | eax_2.b
*(arg11 + 0x75) = temp10_1

if (temp10_1 != 0)
    arg12 = ebx
    *eax_2 += eax_2.b
    arg12 = *(eax_2 * 2)
    undefined

if (temp10_1 == 0)
    jump(0x46a7c9)

jump("le\/E")
