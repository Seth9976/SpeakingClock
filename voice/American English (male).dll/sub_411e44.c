// 函数: sub_411e44
// 地址: 0x411e44
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* var_10 = arg3
int32_t ecx = sub_403dd4(arg2, arg3)
bool z

if (not(z))
    var_10 = sub_403c88(arg3)
    sub_411f30(ecx, 0x14)
    sub_411dd0(arg1, &var_10, 4)
    return sub_411dd0(arg1, arg3, var_10)

var_10 = sub_403c88(arg2)

if (var_10 s> 0xff)
    sub_411f30(ecx, 0xc)
    sub_411dd0(arg1, &var_10, 4)
else
    sub_411f30(ecx, 6)
    sub_411dd0(arg1, &var_10, 1)

return sub_411dd0(arg1, arg2, var_10)
