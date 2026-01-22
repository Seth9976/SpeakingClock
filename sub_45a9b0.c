// 函数: sub_45a9b0
// 地址: 0x45a9b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 += *(*(arg1 + 0x1a0) + 8)
arg2[1] += *(*(arg1 + 0x1a0) + 0xc)
arg2[2] -= *(*(arg1 + 0x1a0) + 0x10)
int32_t result = *(*(arg1 + 0x1a0) + 0x14)
arg2[3] -= result
return result
