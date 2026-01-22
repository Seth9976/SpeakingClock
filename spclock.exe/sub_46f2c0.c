// 函数: sub_46f2c0
// 地址: 0x46f2c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 &= 0x7f3bff7f
*arg1 &= 0xfffffe7e
*arg4 &= 0xffffd7ff
char eax_1 = *(arg3 + 0x271)

if (*(arg3 + 0x277) == 1 && (eax_1 == 0 || eax_1 == 3))
    eax_1 = 2

switch (zx.d(eax_1))
    case 0
        if (*(arg3 + 0x30) == 0 && *(arg3 + 0x1c4) == 0)
            *arg2 |= 0x80000000
    case 1, 4
        *arg2 |= 0xc00000
    case 2, 5
        *arg2 |= 0xc40000
    case 3
        if ((*(arg3 + 0x1c) & 0x10) == 0 || *(arg3 + 0x30) == 0)
            *arg2 = *arg2 | 0x80000000 | 0xc00000
        else
            *arg2 |= 0xc00000
        
        *arg1 = *arg1 | 1 | 0x100
        
        if (*data_4ac1d0 == 0)
            *arg2 = *arg2 | &__dos_header | 0x80
        
        *arg4 = *arg4 | 8 | 0x800 | 0x2000

if (eax_1 - 4 u< 2 && *(arg3 + 0x277) != 1)
    *arg1 |= 0x80

return eax_1 - 6
