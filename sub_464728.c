// 函数: sub_464728
// 地址: 0x464728
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 -= (*arg1 - *(arg2 + 0x40)) * 2
arg1[1] -= (arg1[1] - *(arg2 + 0x44)) * 2
arg1[2] -= (*(arg2 + 0x48) - (arg1[2] - *arg1)) * 2
int32_t result = (*(arg2 + 0x4c) - (arg1[3] - arg1[1])) * 2

if (result s> 0)
    arg1[3] -= result

return result
