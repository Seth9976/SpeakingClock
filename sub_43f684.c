// 函数: sub_43f684
// 地址: 0x43f684
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x1e) = 0

if ((arg2 & 1) != 0)
    *(arg1 + 0x1e) |= 2

if ((arg2 & 0x100) != 0)
    *(arg1 + 0x1e) |= 1

if ((arg2 & 0x8000) != 0)
    *(arg1 + 0x1e) |= 4

return 0
