// 函数: sub_40a718
// 地址: 0x40a718
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t result = 0

if (arg1 != 0 && arg1[arg2] != 0)
    if (arg2 != 0)
        int32_t i
        
        for (i = arg2 - 1; i s>= 0; i -= 1)
            int32_t ecx
            ecx.b = arg1[i]
            
            if (not(test_bit(data_413114, ecx & 0xff)))
                break
        
        int32_t ecx_3 = (arg2 - i) & 0x80000001
        
        if (ecx_3 s< 0)
            ecx_3 = ((ecx_3 - 1) | 0xfffffffe) + 1
        
        if (ecx_3 != 0)
            arg1.b = arg1[arg2]
            
            if (test_bit(data_413114, arg1 & 0xff))
                result.b = 1
        else
            result.b = 2
    else
        arg1.b = *arg1
        
        if (test_bit(data_413114, arg1 & 0xff))
            result.b = 1

return result
