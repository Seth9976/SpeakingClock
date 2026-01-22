// 函数: sub_48c36f
// 地址: 0x48c36f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 * 2) += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*(arg3 - 2) += arg1.b
void arg_4d
*(&arg_4d + ((arg3 - 2) << 1)) |= arg2
int32_t eflags
__outsb(arg2.w, *(arg4 - 1), arg4 - 1, eflags)
uint16_t temp0
temp0, temp0 = __insb(arg5.w, arg2.w, eflags)
arg5.w = temp0
*arg5 = temp0
int32_t gsbase
void* eax = arg1 + *(gsbase + arg1)
*eax += eax.b
*(eax + 1) += ((arg3 - 2).w + 1):1.b
*eax += eax.b
return sx.d(eax.w)
