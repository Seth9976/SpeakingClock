// 函数: sub_4569fc
// 地址: 0x4569fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL ebx = arg1

if ((*(ebx + 0x1c) & 0x10) == 0)
    return 

arg1.b = (*(ebx + 0x55) & 8) != 0
arg1.b ^= 1

if (arg2 == arg1.b)
    return 

if (arg2 != 0)
    *(ebx + 0x54) &= 0xf7ff
else
    *(ebx + 0x54) |= 0x800

sub_457c5c(ebx, 1, 0)
