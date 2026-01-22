// 函数: sub_43efb4
// 地址: 0x43efb4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* result = *arg1

if (*arg1 != 0)
    char* result_1 = *arg1
    
    while (*result_1 == 0x20)
        result_1 = &result_1[1]
    
    result = result_1
    
    while (true)
        char ecx_1 = *result_1
        
        if (ecx_1 == 0)
            break
        
        if (ecx_1 == 0x2c)
            break
        
        result_1 = &result_1[1]
    
    if (*result_1 == 0x2c)
        *result_1 = 0
        result_1 = &result_1[1]
    
    *arg1 = result_1

return result
