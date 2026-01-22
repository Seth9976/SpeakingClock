// 函数: sub_402624
// 地址: 0x402624
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (data_4af7b8 != 0 && sub_402570() != 0)
    int32_t edx_2 = *data_4af7b8 - 1
    
    if (edx_2 s>= 0)
        int32_t i_1 = edx_2 + 1
        int32_t eax_2 = 0
        int32_t i
        
        do
            if (arg1 == *(data_4af7b8 + (eax_2 << 2) + 4))
                *(data_4af7b8 + (eax_2 << 2) + 4) = *(data_4af7b8 + (*data_4af7b8 << 2))
                int32_t* edx_6 = data_4af7b8
                *edx_6 -= 1
                result.b = 1
                break
            
            eax_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    data_4af7bc = 0

return result
