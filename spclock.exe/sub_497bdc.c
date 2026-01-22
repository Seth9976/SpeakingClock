// 函数: sub_497bdc
// 地址: 0x497bdc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 = *(arg1 + 0xc)
int32_t ecx
ecx.w = *(arg1 + 0x10)
arg2[1].w = ecx.w
ecx.b = *(arg1 + 0x12)
*(arg2 + 6) = ecx.b
