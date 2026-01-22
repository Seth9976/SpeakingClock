// 函数: sub_483908
// 地址: 0x483908
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
void var_44
void* eax
sub_48374c(eax, &var_44)
int32_t var_3c

if ((var_3c & 1) != 0)
    result.b = 1

if ((var_3c & 2) != 0)
    result.b |= 2

if ((var_3c & 4) != 0)
    result.b |= 4

if ((var_3c & 8) != 0)
    result.b |= 8

return result
