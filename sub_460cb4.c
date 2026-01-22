// 函数: sub_460cb4
// 地址: 0x460cb4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_460cac(arg1)

if (arg2 == result)
    return result

if (arg2 == 0)
    arg1[0x14] &= 0xfffbffff
else
    arg1[0x14] |= 0x40000

return (*(*arg1 + 0x80))()
