// 函数: sub_462364
// 地址: 0x462364
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char eax_1 = *(*(arg1 + 0x14) + 0x5b) - 1

if (eax_1 u>= 2)
    arg3[1] += 0xc
    return eax_1 - 2

*arg3 += 0xc
return eax_1 - 2
