// 函数: sub_472230
// 地址: 0x472230
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((*(*(arg2 + 8) + 0x18) & 0x8000) == 0x8000)
    sub_473348(arg1)

if (arg1[0xd2].b != 0 && (arg1[0xc] == 0 || (arg1[7].b & 0x10) == 0))
    void* eax_4 = *(arg2 + 8)
    
    if (*(eax_4 + 8) != 0 || *(eax_4 + 0xc) != 0)
        void* esi_1 = *(arg2 + 8)
        
        if (*(esi_1 + 0x10) == arg1[0x12] && *(esi_1 + 0x14) == arg1[0x13])
            void* esi_2 = *(arg2 + 8)
            int32_t var_38
            sub_473e28(sub_46f710(arg1), &var_38)
            int32_t __saved_ebp
            sub_472204(esi_2 + 8, var_38, 0, &__saved_ebp)
            int32_t var_34
            sub_472204(esi_2 + 0xc, var_34, 0, &__saved_ebp)
            int32_t var_30
            sub_472204(esi_2 + 8, var_30, arg1[0x12], &__saved_ebp)
            int32_t var_2c
            sub_472204(esi_2 + 0xc, var_2c, arg1[0x13], &__saved_ebp)

sub_45dc88(arg1, arg2)
void* eax_17 = sub_478638(arg1)
int32_t* result = sub_478924(eax_17)

if (result.b != 0 && *(eax_17 + 0x28) == 0)
    result = arg1
    
    if (*(result + 0x57) != 0)
        result = *(arg2 + 8)
        int32_t edx_11 = result[4]
        
        if (edx_11 != 0 || result[5] != 0)
            int32_t edi_2 = edx_11 - arg1[0x12]
            result = result[5] - arg1[0x13]
            
            if (edi_2 != 0 || result != 0)
                (*(*arg1 + 0x44))()
                int32_t rect
                int32_t var_10
                int32_t var_c
                sub_418a64(var_10 - *(eax_17 + 0x14), *(eax_17 + 0x10), *(eax_17 + 0xc), &rect, 
                    var_c - *(eax_17 + 0x18))
                void* var_1c
                int32_t var_24
                
                if (var_1c s> *(eax_17 + 0x10) || result s<= 0)
                    if (result s> 0)
                        var_1c += result
                    
                    if (var_24 s> var_1c)
                        int32_t var_1c_2 = var_24
                else
                    void* var_1c_1 = var_24 - result
                    int32_t var_24_1 = *(eax_17 + 0x18)
                    *(arg1[0xa9] + 8) = 1
                int32_t edx_15 = *(eax_17 + 0xc)
                int32_t var_20
                
                if (edx_15 s<= var_20 || edi_2 s<= 0)
                    if (edi_2 s> 0)
                        var_20 += edi_2
                    
                    int32_t rect_1 = rect
                    
                    if (rect_1 s> var_20)
                        int32_t rect_2 = rect_1
                else
                    rect = var_20 - edi_2
                    int32_t var_20_1 = edx_15
                    *(arg1[0xa9] + 8) = 1
                
                return InvalidateRect(sub_45f888(arg1), &rect, 0)

return result
