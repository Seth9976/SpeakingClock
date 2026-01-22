// 函数: sub_4012dc
// 地址: 0x4012dc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (data_4145e0 == 0)
    HLOCAL eax_1 = LocalAlloc(LMEM_FIXED, 0x644)
    
    if (eax_1 == 0)
        return 0
    
    *eax_1 = data_4145dc
    data_4145dc = eax_1
    
    for (int32_t i = 0; i != 0x64; i += 1)
        *(eax_1 + i * 0x10 + 4) = data_4145e0
        data_4145e0 = eax_1 + i * 0x10 + 4

int32_t* result = data_4145e0
data_4145e0 = *result
return result
