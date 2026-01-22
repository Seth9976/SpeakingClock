// 函数: sub_4071b4
// 地址: 0x4071b4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx = arg3

if (ebx u> 0x1f)
    ebx = 0x1f

if (sub_40a7b4() == 1)
    ebx -= 1

char var_34[0x20]
sub_407084(&var_34, arg2)
var_34[ebx] = 0
char (* var_14)[0x20] = &var_34
char var_10 = 6
return sub_406898((&data_413164)[arg1], &var_14, 0)
