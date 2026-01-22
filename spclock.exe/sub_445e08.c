// 函数: sub_445e08
// 地址: 0x445e08
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_104
sub_403b48(**(arg1 + 8), &var_104)
uint32_t ecx = zx.d(var_104)
int32_t result = sub_403508(&var_104, sub_445e5f+1, ecx + 1)

if (ecx != 0xffffffff)
    return result

int32_t* eax_4 = *(*(arg1 + 4) + 0x3c)
int32_t var_108
(*(*eax_4 + 0x28))(eax_4, &var_108)
var_108 |= 0x40000000
int32_t* eax_8 = *(*(arg1 + 4) + 0x3c)
return (*(*eax_8 + 0x24))(eax_8, var_108)
