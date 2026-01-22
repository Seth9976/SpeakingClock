// 函数: sub_46bd7c
// 地址: 0x46bd7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if ((arg1 & 4) != 0)
    result.b = 1

if ((arg1 & 8) != 0)
    result.b |= 4

if ((arg1 & 1) != 0)
    result.b |= 8

if ((arg1 & 2) != 0)
    result.b |= 0x10

if ((arg1 & 0x10) != 0)
    result.b |= 0x20

if (GetKeyState(0x12) s< 0)
    result.b |= 2

return result
