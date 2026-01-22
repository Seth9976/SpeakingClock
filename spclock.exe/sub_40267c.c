// 函数: sub_40267c
// 地址: 0x40267c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = arg2 + ((*arg1 - &data_4aa044) u>> 5 << 0xb) - 0x1b800
int32_t var_20
int32_t* result_1
sub_4022dc(arg1, &result_1, &var_20)
int32_t* result

while (true)
    result = result_1
    
    if (result u> var_20)
        break
    
    if ((*(result_1 - 4) & 1) == 0 && sub_402624(result_1) == 0)
        *(arg2 - 0x1b801) = 0
        int32_t ebx_1 = 0
        void* i = sub_402548(result_1)
        
        if (i != 0)
            ebx_1 = 2
            
            while (i != *(esi + (ebx_1 << 3)))
                if (*(esi + (ebx_1 << 3)) == 0)
                    break
                
                ebx_1 += 1
                
                if (ebx_1 s> 0xff)
                    break
            
            if (ebx_1 s> 0xff)
                ebx_1 = 0
            else
                *(esi + (ebx_1 << 3)) = i
        else if (*result_1 u< 0x100)
            int32_t i_3 = result_1[1]
            
            if (i_3 s> 0 && zx.d(*(*arg1 + 2)) - 0xd s>= i_3)
                void* var_14_1 = &result_1[2]
                char var_15_1 = 1
                
                if (i_3 s> 0)
                    int32_t i_2 = i_3
                    int32_t i_1
                    
                    do
                        void* eax_23
                        
                        if (var_15_1 == 0 || *var_14_1 u< 0x20 || *var_14_1 u>= 0x80)
                            eax_23 = nullptr
                        else
                            eax_23.b = 1
                        
                        var_15_1 = eax_23.b
                        var_14_1 += 1
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                if (var_15_1 != 0 && *var_14_1 == 0)
                    ebx_1 = 1
        
        *(esi + (ebx_1 << 3) + 4) += 1
    
    result_1 += zx.d(*(*arg1 + 2))

return result
