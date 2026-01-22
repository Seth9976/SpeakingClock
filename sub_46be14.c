// 函数: sub_46be14
// 地址: 0x46be14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if ((*(arg1 + 0x10) & 0x80) != 0)
    result.b = 1

if ((*(arg1 + 0x11) & 0x80) != 0)
    result.b |= 4

if ((*(arg1 + 0x12) & 0x80) != 0)
    result.b |= 2

if ((*(arg1 + 1) & 0x80) != 0)
    result.b |= 8

if ((*(arg1 + 2) & 0x80) != 0)
    result.b |= 0x10

if ((*(arg1 + 4) & 0x80) != 0)
    result.b |= 0x20

return result
