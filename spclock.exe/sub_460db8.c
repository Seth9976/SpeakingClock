// 函数: sub_460db8
// 地址: 0x460db8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2.b == 0)
    *(arg1 + 0x54) &= 0xdfff
else
    *(arg1 + 0x54) |= 0x2000

void* result = *(arg1 + 0x1d0)

if (result != 0)
    int32_t esi_2 = *(result + 8) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            sub_41a0f4(*(arg1 + 0x1d0), edi_1)
            result = sub_460db8()
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
