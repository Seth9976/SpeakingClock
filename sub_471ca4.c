// 函数: sub_471ca4
// 地址: 0x471ca4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND result = GetWindowLongA(sub_45f888(arg1), 0xfffffff0) & 0x40000000

if ((result == 0x40000000 || *(arg1 + 0x277) == 2) && (arg1[7].b & 0x10) == 0)
    return result

return sub_4711d0(arg1, *(arg2 + 4) != 0)
