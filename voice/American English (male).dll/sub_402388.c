// 函数: sub_402388
// 地址: 0x402388
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* esi_2 = (arg2 + 7) & 0xfffffffc

if (esi_2 s< 0xc)
    esi_2 = 0xc

void* edi_1 = *(arg1 - 4) & 0x7ffffffc
void* result = arg1 - 4 + edi_1
void* result_1 = result

if (edi_1 == esi_2)
    result.b = 1
else
    void* var_18
    
    if (edi_1 s<= esi_2)
        while (true)
            void* var_14 = esi_2 - edi_1
            
            if (result_1 == data_414618)
                if (data_414614 s>= var_14)
                    data_414614 -= var_14
                    data_414618 += var_14
                    
                    if (data_414614 s< 0xc)
                        data_414618 += data_414614
                        esi_2 += data_414614
                        data_414614 = 0
                    
                    data_4145b0 += esi_2 - edi_1
                    *(arg1 - 4) = esi_2 | (*(arg1 - 4) & 0x80000003)
                    result.b = 1
                    break
                
                sub_401dfc()
                result_1 = arg1 - 4 + edi_1
            
            if ((*result_1 & 2) == 0)
                var_18 = *(result_1 + 8)
                
                if (var_18 s>= var_14)
                    sub_401b0c(result_1)
                    var_18 -= var_14
                    
                    if (var_18 s< 0xc)
                        esi_2 += var_18
                        void* ebx_5 = arg1 - 4 + esi_2
                        *ebx_5 &= 0xfffffffe
                    else
                        sub_401d74(arg1 - 4 + esi_2, var_18)
                    
                    goto label_402546
                
                result_1 += var_18
                var_14 -= var_18
            
            int32_t eax_24 = *result_1
            char eax_28
            
            if ((eax_24 & 0x80000000) != 0)
                eax_28 = sub_401f00((eax_24 & 0x7ffffffc) + result_1, var_14)
            
            if ((eax_24 & 0x80000000) == 0 || eax_28 == 0)
                return nullptr
            
            result_1 = arg1 - 4 + edi_1
    else
        var_18 = edi_1 - esi_2
        
        if (result_1 != data_414618)
            if ((*result & 2) == 0)
                var_18 += *(result + 8)
                sub_401b0c(result)
            
            if (var_18 s< 0xc)
                esi_2 = edi_1
            else
                void* ebx_2 = arg1 - 4 + esi_2
                *ebx_2 = var_18 | 2
                sub_401bd0(ebx_2 + 4)
        else
            data_414618 -= var_18
            data_414614 += var_18
            
            if (data_414614 s< 0xc)
                data_414618 += var_18
                data_414614 -= var_18
                esi_2 = edi_1
        
    label_402546:
        data_4145b0 += esi_2 - edi_1
        *(arg1 - 4) = esi_2 | (*(arg1 - 4) & 0x80000003)
        result.b = 1

return result
