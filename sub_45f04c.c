// 函数: sub_45f04c
// 地址: 0x45f04c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg2 + 0xc) = 1
int32_t ecx
sub_460bd4(ecx, *(arg2 + 4))
char result = sub_45efb4(arg1, arg2)

if (result == 0)
    if ((arg1[7].b & 0x10) == 0)
        *(arg2 + 4)
        sub_458ac8(arg1, arg1)
        int32_t edi_1 = 0
        uint32_t eax_3 = zx.d(*(arg2 + 4))
        
        if (eax_3 s> 0x1b)
            if (eax_3 - 0x25 u< 4)
                edi_1 = 1
            else if (eax_3 == 0x2b)
                edi_1 = 4
        else if (eax_3 == 0x1b || eax_3 == 3)
            edi_1 = 4
        else if (eax_3 == 9)
            edi_1 = 2
        else if (eax_3 == 0xd)
            edi_1 = 4
        
        if (edi_1 != 0)
            *(arg2 + 4)
            sub_458ac8(arg1, 0)
            sub_458ac8(arg1, 0)
            int32_t eax_12 = *(arg2 + 8)
            int32_t edx_5
            edx_5.b = 1
            int32_t* eax_14 = sub_46bf14(arg1)
            *(arg2 + 4)
            sub_458ac8(eax_14, eax_12)
    
    result = 0
    *(arg2 + 0xc) = 0

return result
