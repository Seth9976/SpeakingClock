// 函数: sub_491508
// 地址: 0x491508
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x5c) u> 0)
    return 

int32_t edi_1 = 0

while (true)
    int32_t* ebp_1 = *(arg1 + 0x58)
    
    if (edi_1 s>= ebp_1[2])
        break
    
    int32_t esi_1 = sub_41a0f4(ebp_1, edi_1)
    
    if (*(esi_1 + 0xc) != 0)
        *(esi_1 + 0x14)
        
        if (mods.dp.d(sx.q(*(arg1 + 0x50)), *(esi_1 + 0x14)) == 0)
            sub_491460(esi_1)
    
    edi_1 += 1

*(arg1 + 0x50) += 1

if (*(arg1 + 0x50) s< 0)
    *(arg1 + 0x50) = 0
