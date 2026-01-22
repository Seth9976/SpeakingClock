// 函数: sub_402ff8
// 地址: 0x402ff8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* ebx = arg1

while (true)
    int32_t* eax = *(ebx - 0x48)
    
    if (eax != 0)
        int32_t i_1 = *eax
        void* result = &eax[1]
        int32_t i
        
        do
            if (*arg2 == *result && arg2[1] == *(result + 4) && arg2[2] == *(result + 8)
                    && arg2[3] == *(result + 0xc))
                return result
            
            result += 0x1c
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void** ebx_1 = *(ebx - 0x24)
    
    if (ebx_1 == 0)
        break
    
    ebx = *ebx_1

return nullptr
