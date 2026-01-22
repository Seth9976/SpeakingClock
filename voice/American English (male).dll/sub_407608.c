// 函数: sub_407608
// 地址: 0x407608
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* var_1004 = arg3
char* i_1 = 0x1000
char var_100c
void* i
int32_t edi

if (sub_403c88(arg2) s>= 0xc00)
    i_1 = sub_403c88(arg2)
    i = i_1
else
    int32_t var_1018_1 = sub_403c88(arg2)
    int32_t var_101c_1 = arg1
    i = sub_40723c(arg2, 0xfff, &var_100c, arg3, edi, arg4)

if (i s< i_1 - 1)
    sub_403adc(arg3, &var_100c, i)
    return arg3

for (; i s>= i_1 - 1; i = sub_40723c(arg2, i_1 - 1, *arg3, arg3, edi, arg4))
    i_1 *= 2
    sub_4039ec(arg3)
    sub_403f68(arg3, i_1)
    int32_t var_1018_2 = sub_403c88(arg2)
    int32_t var_101c_2 = arg1

return sub_403f68(arg3, i)
