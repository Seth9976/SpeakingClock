// 函数: sub_465d2c
// 地址: 0x465d2c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 = 0
uint32_t eax = zx.d(arg2.b)
int32_t result

if (eax s>= 0xf)
    if (eax - 0xf u< 0xc)
        *(arg1 + 4) = 3
        result = 0xf
    else if (eax - 0x1b u< 2)
        *(arg1 + 4) = 4
        result = 0x1b
    else if (eax == 0x1d)
        *(arg1 + 4) = 5
        result = 0x1d
    else
        *(arg1 + 4) = 0
        result = 0
else if (eax - 2 u< 5)
    *(arg1 + 4) = 1
    result = 2
else if (eax - 7 u< 8)
    *(arg1 + 4) = 2
    result = 7
else
    *(arg1 + 4) = 0
    result = 0

*(arg1 + 8) = (arg2 & 0x7f) - result + 1
return result
