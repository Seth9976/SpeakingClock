// 函数: sub_49e830
// 地址: 0x49e830
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (GetAsyncKeyState(0x10) s< 0)
    result.b = 1

if (GetAsyncKeyState(0x11) s< 0)
    result.b |= 4

if (GetAsyncKeyState(0x12) s< 0)
    result.b |= 2

return result
