// 函数: sub_45f6c0
// 地址: 0x45f6c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = sub_45fc28(arg1)

if (result.b != 0)
    result = *(arg1 + 0x30)
    
    if (result != 0)
        result = sub_458ac8(result, 0)
    
    if (*(arg2 + 4) == 0)
        result.b = (*(arg1 + 0x50) & 0x40) != 0
        result.b ^= 1
        char temp0_1 = result.b
        result.b = neg.b(result.b)
        InvalidateRect(*(arg1 + 0x1b4), nullptr, sbb.d(result, result, temp0_1 != 0))
        result = sub_465ac4(sub_4659bc())
        
        if (result.b != 0)
            result = sub_45b7f4(arg1)
            
            if (result - 1 s>= 0)
                void* edi_3 = result
                int32_t esi_1 = 0
                void* i
                
                do
                    result = sub_45b7b8(arg1, esi_1)
                    
                    if ((*(result + 0x52) & 4) != 0)
                        result = (*(*sub_45b7b8(arg1, esi_1) + 0x80))()
                    
                    esi_1 += 1
                    i = edi_3
                    edi_3 -= 1
                while (i != 1)

return result
