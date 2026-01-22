// 函数: sub_46c280
// 地址: 0x46c280
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = 0x100000

if (arg1 == 1)
    ebx = 0x200000

int32_t result
result.b = (GetWindowLongA(sub_45f888(*(*(arg2 - 4) + 4)), 0xfffffff0) & ebx) != 0
return result
