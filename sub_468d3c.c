// 函数: sub_468d3c
// 地址: 0x468d3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_14 = 0

if (sub_44fc50() == 0)
    char eax_2 = sub_46bdd4(*(arg2 + 8))
    int16_t eax_4 = sub_44a90c(*(arg2 + 4), eax_2)
    
    if (eax_4 != 0)
        int32_t esi_2 = *(*(arg1 + 0x30) + 8) - 1
        
        if (esi_2 s>= 0)
            int32_t i_1 = esi_2 + 1
            int32_t edi_1 = 0
            int32_t i
            
            do
                int32_t* ebx_2 = *(*(*(arg1 + 0x30) + 4) + (edi_1 << 2))
                
                if (sub_403df4(ebx_2, &data_468718) != 0)
                    if (eax_4 == ebx_2[0x21].w)
                        var_14 = (*(*ebx_2 + 0x50))(arg1, 0)
                        break
                    
                    if (ebx_2[0x24] != 0 && sub_46966c(sub_46960c(ebx_2), eax_4) != 0xffffffff)
                        var_14 = (*(*ebx_2 + 0x50))(arg1, 0)
                        break
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)

return zx.d(var_14)
