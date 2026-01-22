// 函数: sub_4420b3
// 地址: 0x4420b3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t entry_ebx
arg1.b += *(entry_ebx + arg5)
*arg1 += 1
*arg1 += arg1.b
*arg3 = *arg3
*arg1 += arg1.b
char temp1 = *arg1
*arg1 -= arg1.b
bool c = temp1 u< arg1.b
char temp2 = *(arg1 + 0x61)
*(arg1 + 0x61) = adc.b(temp2, arg2.b, c)
bool c_1 = adc.b(temp2, arg2.b, c) u< temp2 || (c && adc.b(temp2, arg2.b, c) == temp2)
int32_t eflags

if (not(c_1))
    uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
    
    if (adc.b(temp2, arg2.b, c) == 0)
        *arg3 = *arg3
        *arg1 += arg1.b
        arg1.b -= *arg1
        int32_t edx_1 = arg2 | *(arg1 + 0x61)
        
        if (edx_1 u< 0)
            jump(0x44217c)
        
        return sub_442117(arg1, edx_1, esi) __tailcall
    
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg8 + 0x67), arg7)
    *(arg8 + 0x67) = temp0
    
    if (c_1)
        jump(0x44213e)
    
    jump(0x4420cf)

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg3 = *arg3
*arg1 += arg1.b
void* eax_2 = arg1 - *arg1
arg2.b |= *(eax_2 + 0x61)

if (arg2.b u>= 0)
    __outsb(arg2.w, *arg5, arg5, eflags)
    
    if (arg2.b == 0)
        jump("\tPopupMenu")
    
    jump(0x442140)

*(eax_2 - 0x80000000) += eax_2.b
char* cs
char i = *(cs + eax_2)
*(cs + eax_2) += arg3.b
int32_t var_4 = entry_ebx
int32_t* esp = &var_4

do
    *(esp - 4) = 0x6948776f
    esp -= 4
    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
while (i == neg.b(arg3.b))

eax_2.b = sbb.b(eax_2.b, 0x45, i + arg3.b u< i)
eax_2.b *= 2
__cli(eflags)
*(eax_2 - 5) += eax_2.b
*arg3 += eax_2.b
*eax_2 += eax_2.b
*eax_2 += eax_2.b
*eax_2 += eax_2.b
undefined
