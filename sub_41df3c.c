// 函数: sub_41df3c
// 地址: 0x41df3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* const result = *(arg1 + 0x30)

if (result != 0)
    int32_t esi_2 = *(result + 8) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            sub_403c68(sub_41a0f4(*(arg1 + 0x30), edi_1))
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_403c68(*(arg1 + 0x30))
    result = nullptr
    *(arg1 + 0x30) = 0

return result
