// 函数: sub_48911c
// 地址: 0x48911c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (*(arg1 + 0x4e) != 0)
    result.b = 1

if (*(arg1 + 0x48) != 0)
    result.b |= 2

if (*(arg1 + 0x4c) != 0)
    result.b |= 4

return result
