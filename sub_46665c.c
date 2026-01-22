// 函数: sub_46665c
// 地址: 0x46665c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = 0

if (arg1 == 0)
    return result

if ((*(arg1 + 0x1c) & 0x10) == 0)
    result = sub_465ac4(sub_4659bc())

if ((*(arg1 + 0x1c) & 0x10) == 0 && result != 0)
    return 1

if ((*(arg1 + 0x1c) & 0x10) != 0 && *(arg1 + 0x30) != 0 && sub_465ac4(sub_4659bc()) != 0)
    sub_465964(*(arg1 + 0x30))
    return 1

return 0
