// 函数: sub_46c248
// 地址: 0x46c248
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = 0x100000

if (*(arg1 + 0x18) == 1)
    esi = 0x200000

if (*(arg1 + 0x1c) != 0 && (GetWindowLongA(sub_45f888(*(arg1 + 4)), 0xfffffff0) & esi) != 0)
    int32_t result
    result.b = 1
    return result

return 0
