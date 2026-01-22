// 函数: sub_483958
// 地址: 0x483958
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void var_40
int32_t ecx
sub_483730(ecx, &var_40)
int32_t var_3c = 0xf
int32_t var_38

if ((arg2 & 1) != 0)
    var_38 |= 1

if ((arg2 & 2) != 0)
    var_38 |= 2

if ((arg2 & 4) != 0)
    var_38 |= 4

if ((arg2 & 8) != 0)
    int32_t var_38_1 = var_38 | 8

return sub_48378c(arg1, &var_40)
