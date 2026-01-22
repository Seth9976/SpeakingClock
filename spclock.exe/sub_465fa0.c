// 函数: sub_465fa0
// 地址: 0x465fa0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 = 0x12
uint32_t eax = zx.d(arg2.b)
int32_t result

if (eax s>= 0x14)
    if (eax - 0x14 u< 6)
        *(arg1 + 4) = 4
        result = 0x14
    else if (eax - 0x1a u< 6)
        *(arg1 + 4) = 5
        result = 0x1a
    else if (eax - 0x20 u< 6)
        *(arg1 + 4) = 6
        result = 0x20
    else
        *(arg1 + 4) = 0
        result = 0
else if (eax - 2 u< 6)
    *(arg1 + 4) = 1
    result = 2
else if (eax - 8 u< 6)
    *(arg1 + 4) = 2
    result = 8
else if (eax - 0xe u< 6)
    *(arg1 + 4) = 3
    result = 0xe
else
    *(arg1 + 4) = 0
    result = 0

*(arg1 + 8) = (arg2 & 0x7f) - result + 1
return result
