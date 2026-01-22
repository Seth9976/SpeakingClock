// 函数: sub_4775ac
// 地址: 0x4775ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = sub_474144(data_4b1ce4)

if (result - 1 s>= 0)
    int32_t esi_2 = result
    int32_t edi_1 = 0
    int32_t i
    
    do
        int32_t* eax_2 = sub_474130(data_4b1ce4, edi_1)
        result = sub_45fc28(eax_2)
        
        if (result.b != 0)
            result = IsWindowVisible(sub_45f888(eax_2))
            
            if (result != 0)
                result = IsWindowEnabled(sub_45f888(eax_2))
                
                if (result != 0)
                    result = (*(*eax_2 + 0xec))()
        
        edi_1 += 1
        i = esi_2
        esi_2 -= 1
    while (i != 1)

return result
