// 函数: sub_42d994
// 地址: 0x42d994
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void var_2c
HGDIOBJ eax
sub_42d8b0(eax, &var_2c, arg3)
int16_t var_1e
int32_t var_c

if (var_1e u> 8)
    *arg2 = 0x28
    char var_1c
    
    if ((var_1c & 3) != 0)
        *arg2 += 0xc
else if (var_c != 0)
    *arg2 = var_c * 4 + 0x28
else
    *arg2 = (1 << var_1e.b) * 4 + 0x28
int32_t result
*arg1 = result
return result
