// 函数: sub_42b01c
// 地址: 0x42b01c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HGDIOBJ h = arg1
__builtin_memcpy(arg2, &data_4aac40, 0x30)
int32_t pv

if (h == 0 || GetObjectA(h, 0x3c, &pv) == 0)
    return 

arg2[1] = pv
int32_t var_5c

if (var_5c s>= 0x2bc)
    *(arg2 + 0xd) |= 1

char var_58

if (var_58 == 1)
    *(arg2 + 0xd) |= 2

char var_57

if (var_57 == 1)
    *(arg2 + 0xd) |= 4

char var_56

if (var_56 == 1)
    *(arg2 + 0xd) |= 8

char var_55
*(arg2 + 0xe) = var_55
char var_50[0x20]
char var_30[0x24]
sub_4036f4(&var_30, &var_50, 0x20)
sub_403468(arg2 + 0xf, &var_30, 0x1f)
char var_51
char eax_4 = var_51 & 0xf

if (eax_4 == 1)
    arg2[3].b = 2
else if (eax_4 != 2)
    arg2[3].b = 0
else
    arg2[3].b = 1

*arg2 = h
int32_t var_60
arg2[2] = var_60
