// 函数: sub_401d74
// 地址: 0x401d74
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

arg1[2] = arg2
*(arg1 + arg2 - 4) = arg2
void** result

if (arg2 s> 0x1000)
    if (arg2 s>= 0x3c00)
        result = sub_401cc4(arg1, arg2)
    
    if (arg2 s< 0x3c00 || result.b == 0)
        result = data_414610
        data_414610 = arg1
        void* edx_4 = *result
        arg1[1] = result
        *arg1 = edx_4
        *result = arg1
        *(edx_4 + 4) = arg1
else
    void* edx = arg2
    
    if (edx s< 0)
        edx += 3
    
    int32_t edx_1 = edx s>> 2
    result = *(data_41461c + (edx_1 << 2) - 0xc)
    
    if (result != 0)
        void* edx_2 = *result
        arg1[1] = result
        *arg1 = edx_2
        *result = arg1
        *(edx_2 + 4) = arg1
    else
        result = data_41461c
        result[edx_1 - 3] = arg1
        arg1[1] = arg1
        *arg1 = arg1

return result
