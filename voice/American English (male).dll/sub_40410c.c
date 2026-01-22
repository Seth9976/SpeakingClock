// 函数: sub_40410c
// 地址: 0x40410c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

uint32_t ecx_2 = 0

if (arg2 != 0)
    int16_t* var_4_1 = arg2
    
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
    
    int16_t* ecx = arg2
    arg2 = var_4_1
    ecx_2 = (ecx - arg2) u>> 1

OLECHAR** eax
return sub_4040e8(eax, arg2, ecx_2) __tailcall
