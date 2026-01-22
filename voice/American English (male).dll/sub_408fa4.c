// 函数: sub_408fa4
// 地址: 0x408fa4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

for (int32_t i = 1; i s<= sub_403c88(arg1); i += 1)
    int32_t eax
    eax.b = *(arg1 + i - 1)
    eax.b &= 0xdf
    char temp0_1 = eax.b
    eax.b -= 0x44
    int32_t result
    
    if (temp0_1 == 0x44)
        result.b = 1
        return result
    
    char temp1_1 = eax.b
    eax.b -= 1
    
    if (temp1_1 == 1)
        result.b = 2
        return result
    
    char temp2_1 = eax.b
    eax.b -= 8
    
    if (temp2_1 == 8)
        return 0
    
    char temp3_1 = eax.b
    eax.b -= 0xc
    
    if (temp3_1 == 0xc)
        result.b = 2
        return result

return 0
