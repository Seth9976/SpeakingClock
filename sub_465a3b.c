// 函数: sub_465a3b
// 地址: 0x465a3b
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
char* var_8 = arg5
sub_404074(arg1, arg2)
sub_465af0(arg1)
int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_403c58(sub_433220(), edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
