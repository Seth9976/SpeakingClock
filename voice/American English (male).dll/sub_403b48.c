// 函数: sub_403b48
// 地址: 0x403b48
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* var_1010 = arg1
int32_t* result

if (arg3 s> 0)
    int32_t eax_1
    
    if (arg3 + 1 s< 0x7ff)
        eax_1 = sub_403b0c(arg2, 0xfff, &var_1010, arg3)
    
    if (arg3 + 1 s>= 0x7ff || eax_1 s< 0)
        char* ebx_3 = (arg3 + 1) * 2
        sub_403f68(arg1, ebx_3)
        char* ebx_4 = sub_403b0c(arg2, ebx_3, *arg1, arg3)
        
        if (ebx_4 s< 0)
            ebx_4 = nullptr
        
        return sub_403f68(arg1, ebx_4)
    
    result = arg1
    sub_403adc(result, &var_1010, eax_1)
else
    result = arg1
    sub_4039ec(result)

return result
