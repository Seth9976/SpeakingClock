// 函数: sub_469a56
// 地址: 0x469a56
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg6 * 9 + 0x45) += arg2.b
arg1[5] += arg1:1.b
void arg_68b80046
*(&arg_68b80046 + arg1) += arg3:1.b
arg1.b += arg2.b
arg1.b += arg2:1.b
int16_t entry_ebx
*((arg5 + 2) * 9 + 0x45) += entry_ebx.b
arg1.b += entry_ebx:1.b
arg1:1.b += entry_ebx:1.b
*(arg3 + 0x45) += arg1.b
arg1[0xffffffa1] += arg2:1.b
*arg1 += entry_ebx:1.b
int32_t var_4 = 0x45
*(arg4 + 6 + ((arg5 + 2) << 1) + 0x6a340045) += arg1:1.b
char temp0 = *arg1
*arg1 += arg2:1.b

if (temp0 != neg.b(arg2:1.b) && temp0 + arg2:1.b u>= temp0)
    trap(0xd)

char temp1 = arg1[0xf000460e]
arg1[0xf000460e] += arg1.b

if (temp1 + arg1.b s>= 0)
    int32_t eax_1 = sx.d(arg1.w)
    *(eax_1 + (arg6 << 3) - 0x2ed7ffbb) += entry_ebx.b
    char var_af3ffbe[0xaf3ffba]
    *(&var_af3ffbe + arg3) += arg2:1.b
    *(0xd400046 + arg3) += eax_1.b
    *(eax_1 + (arg6 << 3)) += eax_1.b
    *(eax_1 - 0x34) += arg3:1.b
    *eax_1 += entry_ebx.b
    undefined

arg1[(arg6 << 1) + 0x45] += arg3:1.b
*(arg3 * 9 + 0x45) += entry_ebx.b
void* eax = *0xf6b00045
*(eax - 9) += arg2:1.b
*(arg2 + ((arg5 + 2) << 3) + 0x45) += eax:1.b
*(arg6 + ((arg5 + 2) << 3) + 0x45) += arg2.b
*(eax + 0x480046d2) += arg3.b
breakpoint
