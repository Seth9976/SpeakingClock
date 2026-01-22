// 函数: sub_401728
// 地址: 0x401728
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t edi_2 = (arg1 + 0x3fff) & 0xffffc000

while (true)
    int32_t* result_1 = data_4145f4
    
    while (true)
        int32_t* result
        
        if (result_1 == &data_4145f4)
            result = sub_401480(edi_2, arg2)
            
            if (*arg2 != 0)
                int32_t var_18
                sub_40137c(&data_4145f4, arg2, &var_18)
                
                if (var_18 != 0)
                    break
                
                sub_40155c(*arg2, arg2[1], &var_18)
                result = nullptr
                *arg2 = 0
        else if (edi_2 s> result_1[3])
            result_1 = *result_1
            continue
        else
            result = sub_401614(result_1[2], edi_2, arg2)
            
            if (*arg2 != 0)
                result_1[2] += arg2[1]
                result = arg2[1]
                result_1[3] -= result
                
                if (result_1[3] == 0)
                    result = result_1
                    sub_401364(result)
        
        return result
