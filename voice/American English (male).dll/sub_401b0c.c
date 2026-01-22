// 函数: sub_401b0c
// 地址: 0x401b0c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg1 == data_414610)
    data_414610 = arg1[1]

int32_t* edx_2 = arg1[1]
int32_t ecx = arg1[2]
void* eax

if (ecx s> 0x1000)
    eax = *arg1
    *edx_2 = eax
    *(eax + 4) = edx_2
else
    if (arg1 != edx_2)
        if (ecx s< 0)
            ecx += 3
        
        *(data_41461c + (ecx s>> 2 << 2) - 0xc) = edx_2
        void* eax_1 = *arg1
        *edx_2 = eax_1
        *(eax_1 + 4) = edx_2
        return eax_1
    
    if (ecx s< 0)
        ecx += 3
    
    eax = data_41461c
    *(eax + (ecx s>> 2 << 2) - 0xc) = 0

return eax
