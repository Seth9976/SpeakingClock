// 函数: sub_402a34
// 地址: 0x402a34
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg1 s< 0)
    int32_t eax_3 = neg.d(arg1)
    
    if (eax_3 s< 0x1400)
        *((eax_3 & 0x1f) * 0xa + sub_402ae7)
        uint32_t eax_4 = eax_3 u>> 5
        
        if (eax_4 != 0)
            int32_t edx_11 = eax_4 & 0xf
            
            if (edx_11 != 0)
                *(edx_11 * 0xa + 0x402c1d)
            
            uint32_t eax_5 = eax_4 u>> 4
            
            if (eax_5 != 0)
                *(eax_5 * 0xa + 0x402cb3)
else if (arg1 != 0)
    if (arg1 s>= 0x1400)
        data_402add
    else
        *((arg1 & 0x1f) * 0xa + sub_402ae7)
        uint32_t eax = arg1 u>> 5
        
        if (eax != 0)
            int32_t edx_5 = eax & 0xf
            
            if (edx_5 != 0)
                *(edx_5 * 0xa + 0x402c1d)
            
            uint32_t eax_1 = eax u>> 4
            
            if (eax_1 != 0)
                *(eax_1 * 0xa + 0x402cb3)
