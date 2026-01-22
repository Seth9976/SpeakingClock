// 函数: sub_403be4
// 地址: 0x403be4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* ecx_1 = nullptr

if (arg2 != 0)
    char* var_4_1 = arg2
    
    while (0 != *arg2)
        if (0 != arg2[1])
            if (0 != arg2[2])
                if (0 == arg2[3])
                    arg2 = &arg2[1]
                else
                    arg2 = &arg2[4]
                    continue
            
            arg2 = &arg2[1]
        
        arg2 = &arg2[1]
        break
    
    char* ecx = arg2
    arg2 = var_4_1
    ecx_1 = ecx - arg2

void** eax
return sub_403adc(eax, arg2, ecx_1) __tailcall
