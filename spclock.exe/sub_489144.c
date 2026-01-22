// 函数: sub_489144
// 地址: 0x489144
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char eax_1 = (*(*arg1 + 0x44))()
sub_488778(arg2, eax_1)
char result = eax_1 & 2

if (result == 2)
    result = sub_488654(arg2, arg1[0x12])

if ((eax_1 & 4) != 4)
    return result

return sub_488640(arg2, zx.d(arg1[0x13].w))
