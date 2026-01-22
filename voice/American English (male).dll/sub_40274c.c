// 函数: sub_40274c
// 地址: 0x40274c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t result
result.b = *arg3

if (result.b == 0)
    *arg4 = result.b
else
    if (arg2 s<= 0)
        arg2 = 1
    label_402764:
        result = result - arg2 + 1
        
        if (arg1 s< 0)
            arg1 = 0
        else if (arg1 s> result)
            arg1 = result
    else
        if (arg2 s<= result)
            goto label_402764
        
        arg1 = 0
    
    *arg4 = arg1.b
    __builtin_memcpy(&arg4[1], &arg3[arg2], arg1)

return result
