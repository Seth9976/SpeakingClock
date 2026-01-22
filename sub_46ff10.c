// 函数: sub_46ff10
// 地址: 0x46ff10
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = zx.d(*(arg1 + 0x279))

if (result.b != 0 && *(data_4b1ce0 + 0x44) != 0)
    uint32_t result_1 = 0
    
    if (result.b != 2)
        char eax_4 = *(arg1 + 0x279)
        
        if (eax_4 == 3 && *(data_4b1ce4 + 0x68) != 0)
            result_1 = *(sub_46f710(*(data_4b1ce4 + 0x68)) + 4)
        else if (eax_4 == 1)
            result_1 = *(sub_47506c(data_4b1ce4) + 4)
    else
        result_1 = *(sub_46f710(*(data_4b1ce0 + 0x44)) + 4)
    
    int32_t eax_14 = *(sub_46f710(arg1) + 4)
    result = sub_4740f8(data_4b1ce4) - 1
    
    if (result s>= 0)
        int32_t i_1 = result + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            result = *(sub_4740e4(data_4b1ce4, esi_1) + 4)
            
            if (result == result_1)
                result = result_1
                
                if (result != eax_14)
                    result = sub_4740f8(data_4b1ce4)
                    
                    if (result - 1 s>= 0)
                        int32_t edi_3 = result
                        int32_t var_1c_1 = 0
                        int32_t j
                        
                        do
                            result = *(sub_4740e4(data_4b1ce4, var_1c_1) + 4)
                            
                            if (result == eax_14)
                                char eax_23 = arg1[0x9e].b
                                
                                if (eax_23 == 4)
                                    int32_t eax_24 = arg1[0x12]
                                    int32_t ebp_1 = arg1[0x13]
                                    int32_t eax_27 = sub_473dc4(sub_4740e4(data_4b1ce4, esi_1))
                                    int32_t eax_31 =
                                        sub_473da8(sub_4740e4(data_4b1ce4, esi_1)) - ebp_1
                                    int32_t eax_32 = eax_31 s>> 1
                                    bool c_1 = unimplemented  {sar eax, 0x1}
                                    
                                    if (eax_31 s>> 1 s< 0)
                                        eax_32 = adc.d(eax_32, 0, c_1)
                                    
                                    int32_t var_30_2 = eax_27 + eax_32
                                    sub_473d90(sub_4740e4(data_4b1ce4, esi_1))
                                    sub_473ddc(sub_4740e4(data_4b1ce4, esi_1)) - arg1[0x12]
                                    unimplemented  {sar eax, 0x1}
                                    result = (*(*arg1 + 0x88))(ebp_1, eax_24)
                                else if (eax_23 != 6)
                                    int32_t ebp_11 = sub_473d90(sub_4740e4(data_4b1ce4, esi_1))
                                        + sub_46e120(arg1)
                                        - sub_473d90(sub_4740e4(data_4b1ce4, var_1c_1))
                                    
                                    if (sub_473d90(sub_4740e4(data_4b1ce4, esi_1))
                                            + sub_473ddc(sub_4740e4(data_4b1ce4, esi_1))
                                            s< arg1[0x12] + ebp_11)
                                        sub_473d90(sub_4740e4(data_4b1ce4, esi_1))
                                            + sub_473ddc(sub_4740e4(data_4b1ce4, esi_1))
                                            - arg1[0x12]
                                    
                                    int32_t var_18_1 = sub_473dc4(sub_4740e4(data_4b1ce4, esi_1))
                                        + sub_46e140(arg1)
                                        - sub_473dc4(sub_4740e4(data_4b1ce4, var_1c_1))
                                    
                                    if (sub_473dc4(sub_4740e4(data_4b1ce4, esi_1))
                                            + sub_473da8(sub_4740e4(data_4b1ce4, esi_1))
                                            s< var_18_1 + arg1[0x13])
                                        var_18_1 = sub_473dc4(sub_4740e4(data_4b1ce4, esi_1))
                                            + sub_473da8(sub_4740e4(data_4b1ce4, esi_1))
                                            - arg1[0x13]
                                    
                                    result = (*(*arg1 + 0x88))(arg1[0x13], arg1[0x12])
                                else
                                    int32_t eax_42 = arg1[0x12]
                                    int32_t ebp_5 = arg1[0x13]
                                    int32_t eax_45 = sub_473dc4(sub_4740e4(data_4b1ce4, esi_1))
                                    int32_t eax_49 =
                                        sub_473da8(sub_4740e4(data_4b1ce4, esi_1)) - ebp_5
                                    int32_t eax_50 = eax_49 s>> 1
                                    bool c_3 = unimplemented  {sar eax, 0x1}
                                    
                                    if (eax_49 s>> 1 s< 0)
                                        eax_50 = adc.d(eax_50, 0, c_3)
                                    
                                    int32_t var_30_4 = eax_45 + eax_50
                                    sub_473d90(sub_4740e4(data_4b1ce4, esi_1))
                                    sub_473ddc(sub_4740e4(data_4b1ce4, esi_1)) - arg1[0x12]
                                    unimplemented  {sar eax, 0x1}
                                    result = (*(*arg1 + 0x88))(ebp_5, eax_42)
                            
                            var_1c_1 += 1
                            j = edi_3
                            edi_3 -= 1
                        while (j != 1)
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
