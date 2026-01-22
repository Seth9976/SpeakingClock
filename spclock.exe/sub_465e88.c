// 函数: sub_465e88
// 地址: 0x465e88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 = 0xf
int32_t result

switch (zx.d(arg2.b))
    case 2, 3, 4, 5, 6
        *(arg1 + 4) = 1
        result = 2
    case 7, 8, 9, 0xa, 0xb
        *(arg1 + 4) = 2
        result = 7
    case 0xc, 0xd, 0xe, 0xf, 0x10
        *(arg1 + 4) = 3
        result = 0xc
    case 0x11, 0x12, 0x13, 0x14, 0x15
        *(arg1 + 4) = 4
        result = 0x11
    case 0x16, 0x17, 0x18, 0x19, 0x1a
        *(arg1 + 4) = 5
        result = 0x16
    case 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
        *(arg1 + 4) = 6
        result = 0x1b
    case 0x20, 0x21, 0x22, 0x23, 0x24
        *(arg1 + 4) = 7
        result = 0x20
    case 0x25, 0x26, 0x27, 0x28, 0x29
        *(arg1 + 4) = 8
        result = 0x25
    case 0x2a
        *(arg1 + 4) = 9
        result = 0x2a
    case 0x2b
        *(arg1 + 4) = 0xa
        result = 0x2b
    default
        *(arg1 + 4) = 0
        result = 0

*(arg1 + 8) = (arg2 & 0x7f) - result + 1
return result
