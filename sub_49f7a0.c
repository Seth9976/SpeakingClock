// 函数: sub_49f7a0
// 地址: 0x49f7a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0xda) = arg2

if (arg2 u< 1)
    *(arg1 + 0x298) = 0
else if (arg2 == 1)
    *(arg1 + 0x298) = 3

return Shell_NotifyIconA(NIM_SETVERSION, arg1 + 0xf8)
