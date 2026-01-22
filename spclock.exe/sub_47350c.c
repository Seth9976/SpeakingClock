// 函数: sub_47350c
// 地址: 0x47350c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (*(arg1 + 0x1da) != 0)
    int32_t esi_2 = sub_45b7f4(arg1) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            int32_t* eax_4
            void* edx_2
            eax_4, edx_2 = sub_45b7b8(arg1, edi_1)
            char eax_7
            
            if (*(eax_4 + 0x57) != 0)
                int32_t var_18_1 = arg2
                eax_7 = sub_4734dc(eax_4, edx_2)
            
            if (*(eax_4 + 0x57) != 0 && eax_7 != 0)
                return 1
            
            if (sub_403df4(eax_4, &data_453234) != 0)
                eax_7 = sub_47350c(arg2)
                
                if (eax_7 != 0)
                    return 1
            
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return 0
