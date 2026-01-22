// 函数: sub_48cd6c
// 地址: 0x48cd6c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HPALETTE result = sub_48ce34(arg1)

if (*(arg1 + 0x38) == 0)
    int32_t* esi_1 = *(arg1 + 0x34)
    
    if (esi_1[2] s> 1)
        int32_t* eax_3 = *(arg1 + 0x20)
        uint32_t eax_5 = sub_41a0f4(*(arg1 + 0x34), 1)
        uint32_t eax_7 = sub_41a0f4(esi_1, 0)
        sub_48e814((divs.dp.d(sx.q(zx.d(*(arg1 + 0x18))), *(*(arg1 + 0x34) + 8))).b, eax_5, eax_7, 
            1, eax_3)
        result = *(arg1 + 0x34)
        int32_t i_1 = result - 2
        
        if (i_1 s> 0)
            int32_t esi_2 = 1
            int32_t i
            
            do
                int32_t* eax_12 = *(arg1 + 0x20)
                uint32_t eax_14 = sub_41a0f4(*(arg1 + 0x34), esi_2 + 1)
                uint32_t eax_16 = sub_41a0f4(*(arg1 + 0x34), esi_2)
                result = sub_48e814(
                    (divs.dp.d(sx.q(zx.d(*(arg1 + 0x18))), *(*(arg1 + 0x34) + 8))).b, eax_14, 
                    eax_16, 0, eax_12)
                esi_2 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
else
    result = sub_48e814(*(arg1 + 0x18), *(arg1 + 0x24), *(arg1 + 0x1c), 1, *(arg1 + 0x20))

if (*(arg1 + 0x28) != 0)
    result = sub_48e934(*(arg1 + 0x20))
    *(arg1 + 0x2c) = result

return result
