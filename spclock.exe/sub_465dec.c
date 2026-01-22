// 函数: sub_465dec
// 地址: 0x465dec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 = 0xa
int32_t result

switch (zx.d(arg2.b))
    case 2
        *(arg1 + 4) = 1
        result = 2
    case 3
        *(arg1 + 4) = 2
        result = 3
    case 4, 5, 6, 7, 8, 9
        *(arg1 + 4) = 3
        result = 4
    case 0xa, 0xb, 0xc, 0xd
        *(arg1 + 4) = 4
        result = 0xa
    case 0xe, 0xf, 0x10, 0x11
        *(arg1 + 4) = 5
        result = 0xe
    default
        *(arg1 + 4) = 0
        result = 0

*(arg1 + 8) = (arg2 & 0x7f) - result + 1
return result
