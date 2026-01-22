// 函数: sub_408cbc
// 地址: 0x408cbc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 != 0)
    char* edx = *(arg1 - 4)
    
    if (edx != 0)
        sub_4052a8(arg2, edx)
        int32_t edi_1 = *arg2
        int32_t eax_1 = *(edx + arg1 - 4)
        int32_t eax_2 = eax_1 | 0x80808080
        uint32_t result =
            ((((eax_2 - 0x7b7b7b7b) | 0x80808080) - 0x66666666) & (eax_2 ^ eax_1)) u>> 2
        *(edx + edi_1 - 4) = eax_1 - result
        int32_t* ebx_2 = (edx - 1) & 0xfffffffc
        
        while (true)
            int32_t* temp0_1 = ebx_2
            ebx_2 -= 4
            
            if (temp0_1 u< 4)
                break
            
            int32_t eax_7 = *(ebx_2 + arg1)
            int32_t eax_8 = eax_7 | 0x80808080
            result = ((((eax_8 - 0x7b7b7b7b) | 0x80808080) - 0x66666666) & (eax_8 ^ eax_7)) u>> 2
            *(ebx_2 + edi_1) = eax_7 - result
        
        return result

return sub_404b88(arg2) __tailcall
