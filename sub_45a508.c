// 函数: sub_45a508
// 地址: 0x45a508
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_45a500(arg1)

if (arg2 == result)
    return result

if (arg2 == 0)
    arg1[0x14] &= 0xffefffff
else
    arg1[0x14] |= 0x100000

return (*(*arg1 + 0x5c))()
