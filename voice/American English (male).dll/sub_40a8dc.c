// 函数: sub_40a8dc
// 地址: 0x40a8dc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t result = 0

if (arg2 s> 0 && arg2 s<= sub_403c88(arg1))
    if (arg2 s<= 1 || data_41474c == 0)
        result = arg2
    else
        int32_t var_c
        sub_40a84c(&var_c, arg2 - 1, arg1, &result)
        
        if (arg2 - 1 s> var_c)
            result = 0
        else if (sub_403c88(arg1) s> result)
            result += 1
        else
            result = 0

return result
