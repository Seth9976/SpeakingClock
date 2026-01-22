// 函数: sub_492dc0
// 地址: 0x492dc0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = sub_48911c(arg1)
char eax_2 = *(arg1 + 0x54)

if (eax_2 == 1)
    result.b |= 0x10
else if (eax_2 == 2)
    result.b |= 0x20
else if (eax_2 == 3)
    result.b |= 0x40
else if (eax_2 == 4)
    result.b |= 0x80

if ((*(**(arg1 + 0x50) + 0x1c))() == 0)
    result.b |= 8

return result
