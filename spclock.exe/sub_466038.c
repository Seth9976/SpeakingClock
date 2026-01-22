// 函数: sub_466038
// 地址: 0x466038
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 = 0x14
int32_t result

switch (zx.d(arg2.b))
    case 2
        *(arg1 + 4) = 1
        result = 2
    case 3
        *(arg1 + 4) = 2
        result = 3
    case 4, 5, 6, 7, 8
        *(arg1 + 4) = 3
        result = 4
    case 9, 0xa, 0xb, 0xc, 0xd
        *(arg1 + 4) = 4
        result = 9
    case 0xe, 0xf, 0x10, 0x11, 0x12
        *(arg1 + 4) = 5
        result = 0xe
    case 0x13, 0x14, 0x15, 0x16, 0x17
        *(arg1 + 4) = 6
        result = 0x13
    case 0x18, 0x19, 0x1a, 0x1b, 0x1c
        *(arg1 + 4) = 7
        result = 0x18
    case 0x1d, 0x1e, 0x1f, 0x20, 0x21
        *(arg1 + 4) = 8
        result = 0x1d
    case 0x22
        *(arg1 + 4) = 9
        result = 0x22
    case 0x23
        *(arg1 + 4) = 0xa
        result = 0x23
    default
        *(arg1 + 4) = 0
        result = 0

*(arg1 + 8) = (arg2 & 0x7f) - result + 1
return result
