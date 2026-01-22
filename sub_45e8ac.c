// 函数: sub_45e8ac
// 地址: 0x45e8ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_9 = 0

if (*(arg1 + 0x1da) != 0)
    int32_t esi_2 = sub_45b7f4(arg1) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            int32_t* eax_4 = sub_45b7b8(arg1, edi_1)
            
            if (*(eax_4 + 0x57) != 0 && (*(*eax_4 + 0x50))() != 0)
                if ((*(eax_4 + 0x52) & 1) != 0)
                    *(*(arg2 - 4) + 4)
                    sub_458ac8(eax_4, *(*(arg2 - 4) + 8))
                
                if (sub_403df4(eax_4, &data_453234) != 0 && sub_45e8ac(arg2) != 0)
                    var_9 = 1
                    break
            
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return zx.d(var_9)
