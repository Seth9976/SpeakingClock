// 函数: sub_423a28
// 地址: 0x423a28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void** edi = arg1
int32_t* esi = edi[1]

if (esi == 0)
    return 

char var_10c[0x100]
sub_404e24(&var_10c, edi[2], 0xff)
arg1 = sub_403f7c(esi, &var_10c)

if (arg1 == 0)
    return 

if (arg2 == 0)
    *arg1 = nullptr
else
    *arg1 = edi
