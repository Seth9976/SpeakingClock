// 函数: sub_489ecc
// 地址: 0x489ecc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_48911c(arg1)
char edx = *(arg1 + 0x60)

if (edx == 1)
    return result | 0x10

if (edx == 2)
    return result | 0x20

if (edx == 3)
    return result | 0x40

if (edx == 4)
    return result | 0x80

return result
