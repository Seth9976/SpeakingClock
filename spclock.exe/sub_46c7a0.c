// 函数: sub_46c7a0
// 地址: 0x46c7a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *(arg1 + 4)

if ((*(result + 0x1c) & 2) == 0)
    int32_t eax = *(arg1 + 0x14)
    
    if (arg2 s> eax)
        arg2 = eax
    else if (arg2 s< 0)
        arg2 = 0
    
    int32_t esi
    
    if (*(arg1 + 0x18) != 0)
        esi.w = 1
    else
        esi = 0
    
    int32_t eax_1 = *(arg1 + 0xc)
    
    if (arg2 != eax_1)
        *(arg1 + 0xc) = arg2
        
        if (*(arg1 + 0x18) != 0)
            sub_45f434(*(arg1 + 4), 0, eax_1 - arg2)
        else
            sub_45f434(*(arg1 + 4), eax_1 - arg2, 0)
        
        int32_t* eax_5 = *(arg1 + 4)
        
        if ((eax_5[7].b & 0x10) != 0)
            int32_t* eax_6 = sub_46bf14(eax_5)
            
            if (eax_6 != 0 && eax_6[0xa6] != 0)
                (*(*eax_6[0xa6] + 0xc))()
    
    uint32_t edi_1 = zx.d(esi.w)
    result = (*data_4ac384)(sub_45f888(*(arg1 + 4)), edi_1)
    
    if (result != *(arg1 + 0xc))
        return (*data_4ac0f8)(sub_45f888(*(arg1 + 4)), edi_1, *(arg1 + 0xc), 0xffffffff)
else
    *(arg1 + 0xc) = arg2

return result
