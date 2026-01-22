// 函数: sub_4018dc
// 地址: 0x4018dc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx_1 = (arg1 + 0x3fff) & 0xffffc000
int32_t esi_2 = (arg2 + arg1) & 0xffffc000
int32_t* result

if (ebx_1 u>= esi_2)
    result = nullptr
    *arg3 = 0
else
    sub_4016a8(ebx_1, esi_2 - ebx_1, arg3)
    int32_t var_1c
    result = sub_40137c(&data_4145f4, arg3, &var_1c)
    int32_t ebx_2 = var_1c
    
    if (ebx_2 != 0)
        int32_t var_18
        int32_t var_14
        sub_40155c(ebx_2, var_18, &var_14)
        var_1c = var_14
        int32_t* result_2
        result = result_2
        int32_t* result_1 = result
    
    if (var_1c != 0)
        return sub_4013ec(&data_4145f4, &var_1c)

return result
