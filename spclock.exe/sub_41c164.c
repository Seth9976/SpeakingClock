// 函数: sub_41c164
// 地址: 0x41c164
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 != *(arg1 + 0xd) || (*(arg1 + 4) & 4) == 0)
    *(arg1 + 4) |= 4
    *(arg1 + 0xd) = arg2
