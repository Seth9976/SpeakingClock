// 函数: sub_4017b8
// 地址: 0x4017b8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t edi_2 = (arg2 + 0x3fff) & 0xffffc000
int32_t* result

while (true)
    int32_t* i
    
    for (i = data_4145f4; i != &data_4145f4; i = *i)
        if (arg1 == i[2])
            break
    
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    
    if (arg1 != i[2])
    label_40184b:
        sub_4014e4(arg1, edi_2, &var_20)
        
        if (var_20 != 0)
            sub_40137c(&data_4145f4, &var_20, &var_18)
            
            if (var_18 != 0)
                continue
            
            sub_40155c(var_20, var_1c, &var_18)
            result = arg3
            *result = 0
            break
    else if (edi_2 s> i[3])
        sub_4014e4(i[2] + i[3], edi_2 - i[3], &var_20)
        
        if (var_20 == 0)
            goto label_40184b
        
        sub_40137c(&data_4145f4, &var_20, &var_18)
        
        if (var_18 != 0)
            continue
        
        sub_40155c(var_20, var_1c, &var_18)
        result = arg3
        *result = 0
        break
    int32_t ebp_1 = i[2]
    
    if (arg1 != ebp_1 || edi_2 s> i[3])
        result = arg3
        *result = 0
    else
        sub_401614(ebp_1, edi_2, arg3)
        result = arg3
        
        if (*result != 0)
            i[2] += arg3[1]
            result = arg3[1]
            i[3] -= result
            
            if (i[3] == 0)
                result = i
                sub_401364(result)
    
    break

return result
