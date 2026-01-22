// 函数: sub_40a7f4
// 地址: 0x40a7f4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t result_1 = arg2
int32_t result = 0

if (result_1 s> 0 && result_1 s<= sub_403c88(arg1))
    result = result_1
    
    if (data_41474c != 0)
        void* eax_2 = 1
        result = 0
        
        if (result_1 s>= 1)
            do
                arg2.b = *(arg1 + eax_2 - 1)
                
                if (not(test_bit(data_413114, arg2 & 0xff)))
                    eax_2 += 1
                else
                    eax_2, arg2 = sub_40aa04(arg1, eax_2)
                
                result += 1
            while (result_1 s>= eax_2)

return result
