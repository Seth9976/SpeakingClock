// 函数: sub_46bdd4
// 地址: 0x46bdd4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (GetKeyState(0x10) s< 0)
    result.b = 1

if (GetKeyState(0x11) s< 0)
    result.b |= 4

if ((arg1 & 0x20000000) != 0)
    result.b |= 2

return result
