// 函数: sub_40405c
// 地址: 0x40405c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

OLECHAR** var_1010 = arg1

if (arg3 s<= 0)
    int32_t* result = arg1
    sub_403ffc(result)
    return result

if (arg3 + 1 s< 0x7ff)
    uint32_t eax_1 = sub_403b2c(arg2, 0x7ff, &var_1010, arg3)
    
    if (eax_1 s> 0)
        return sub_4040e8(arg1, &var_1010, eax_1)

sub_404244(arg1, arg3 + 1)
int32_t ebx_3 = sub_403b2c(arg2, arg3 + 1, *arg1, arg3)

if (ebx_3 s< 0)
    ebx_3 = 0

return sub_404244(arg1, ebx_3)
