// 函数: sub_49e084
// 地址: 0x49e084
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x18) = arg2
*(arg1 + 0x1c) = arg3

if (arg2:2.w == 0 && *(arg1 + 8) != 0)
    sub_49e0f8(arg1, 0)
