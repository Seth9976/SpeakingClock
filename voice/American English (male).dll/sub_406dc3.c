// 函数: sub_406dc3
// 地址: 0x406dc3
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*arg2 += 1
*arg1 += arg1.b
*0x53000031 += arg3:1.b
char ebx = arg1.b

if (arg2.b == 0)
    int32_t edx_4
    edx_4.b = ebx
    return sub_403a40(arg3, (&data_41313c)[edx_4])

sub_406c64()

if (ebx == 0)
    return sub_403a40(arg3, *data_41478c)

return sub_403a40(arg3, *data_414788)
