// 函数: sub_465db0
// 地址: 0x465db0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 = 3
int32_t result

if (arg2.b - 2 u< 7)
    *(arg1 + 4) = 1
    result = 2
else if (arg2.b == 9)
    *(arg1 + 4) = 2
    result = 9
else
    *(arg1 + 4) = 0
    result = 0

*(arg1 + 8) = (arg2 & 0x7f) - result + 1
return result
