// 函数: sub_46f644
// 地址: 0x46f644
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (*(arg1 + 0x277) == 2 && *(arg1 + 0x29c) != 0)
    int32_t ebx_2 = sub_474128(data_4b1ce4) - 1
    
    if (ebx_2 s>= 0)
        int32_t i_1 = ebx_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            if (*(sub_474114(data_4b1ce4, esi_1) + 0x277) == 1)
                result += 1
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
