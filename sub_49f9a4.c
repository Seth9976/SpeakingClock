// 函数: sub_49f9a4
// 地址: 0x49f9a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0xe1) == 0)
    *(arg1 + 0x3c) = 0

if ((*(arg1 + 0x1c) & 0x10) == 0)
    if (sub_49f7d4(arg1) != 0)
        return sbb.d(0, 0, Shell_NotifyIconA(NIM_DELETE, arg1 + 0xf8) u< 1) + 1
else if (*(arg1 + 0xe1) != 0 && sub_49f7d4(arg1) != 0)
    return sbb.d(0, 0, Shell_NotifyIconA(NIM_DELETE, arg1 + 0xf8) u< 1) + 1

return 0
