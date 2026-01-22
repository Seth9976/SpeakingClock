// 函数: sub_48042f
// 地址: 0x48042f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 * 2) -= 1
*arg1 += arg1.b
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*(arg6 + 0x6d), arg4.w)
*(arg6 + 0x6d) = temp0
void arg_33
int32_t eflags_1
int16_t temp0_1
temp0_1, eflags_1 = __arpl_memw_gpr16(*(&arg_33 + (arg4 << 1)), arg5.w)
*(&arg_33 + (arg4 << 1)) = temp0_1
arg3:1.b ^= *arg5
uint8_t* edi
uint8_t temp0_2
temp0_2, edi = __insb(arg6, arg2.w, eflags_1)
*edi = temp0_2
uint8_t* edi_1
uint8_t temp0_3
temp0_3, edi_1 = __insb(edi, arg2.w, eflags_1)
*edi_1 = temp0_3
*arg1 += arg1.b
*arg1 += arg1.b
return sub_480444(arg1, arg2, arg3.b) __tailcall
