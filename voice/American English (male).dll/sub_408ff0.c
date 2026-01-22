// 函数: sub_408ff0
// 地址: 0x408ff0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

while (true)
    int32_t result = sub_403c88(arg1)
    
    if (result s< *arg2)
        return result
    
    result.b = *(arg1 + *arg2 - 1)
    result.b -= 0x30
    char temp0_1 = result.b
    result.b -= 0xa
    
    if (temp0_1 u< 0xa)
        return result
    
    int32_t eax
    eax.b = *(arg1 + *arg2 - 1)
    
    if (not(test_bit(data_413114, eax & 0xff)))
        *arg2 += 1
    else
        *arg2 = sub_40aa04(arg1, *arg2)
