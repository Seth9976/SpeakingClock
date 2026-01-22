// 函数: sub_40d0c9
// 地址: 0x40d0c9
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 = rol.b(*arg1, 1)
int16_t cs
uint32_t var_4 = zx.d(cs)
arg2.b |= *(arg3 + (arg1 << 1) + 0x78)
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*(arg3 + 0x70), &var_4)
*(arg3 + 0x70) = temp0

if (arg2.b == 0)
    undefined

char* ecx
return sub_40d0d6(arg1, arg2, ecx) __tailcall
