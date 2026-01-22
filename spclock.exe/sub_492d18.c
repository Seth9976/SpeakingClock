// 函数: sub_492d18
// 地址: 0x492d18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result
int32_t* esi_1
result, esi_1 = sub_489044(arg1, arg2)

if ((result & 0x10) == 0x10)
    *(arg1 + 0x54) = 1
else if ((result & 0x20) == 0x20)
    *(arg1 + 0x54) = 2
else if ((result & 0x40) == 0x40)
    *(arg1 + 0x54) = 3
else if ((result & 0x80) != 0x80)
    *(arg1 + 0x54) = 0
else
    *(arg1 + 0x54) = 4

result &= 8

if (result != 8)
    return result

return sub_4889cc(esi_1, *(arg1 + 0x50), zx.d(*(arg1 + 0x4e)))
