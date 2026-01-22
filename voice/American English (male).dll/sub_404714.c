// 函数: sub_404714
// 地址: 0x404714
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* ebx_1 = *arg3
int32_t i_2 = *arg4
int32_t* result

if (i_2 s> 0)
    int32_t i_4 = 0
    
    if (ebx_1 != 0)
        i_4 = *(ebx_1 - 4)
        ebx_1 -= 8
    
    int32_t eax_2
    eax_2.b = *(arg2 + 1)
    void* esi_1 = arg2 + eax_2
    int32_t edx_1 = *(esi_1 + 2)
    char** edx_2 = *(esi_1 + 6)
    char* esi_2
    
    if (edx_2 == 0)
        esi_2 = nullptr
    else
        esi_2 = *edx_2
    
    int32_t eax_5 = i_2 * edx_1
    
    if (divs.dp.d(sx.q(eax_5), i_2) != edx_1)
        int32_t eax_8
        eax_8.b = 4
        sub_402710(eax_8)
        noreturn
    
    int32_t var_20_2 = eax_5 + 8
    void* ebx_3
    
    if (ebx_1 == 0 || *ebx_1 == 1)
        void* var_24 = ebx_1
        
        if (i_2 s< i_4 && esi_2 != 0)
            j_sub_404398(ebx_1 + 8 + i_2 * edx_1, esi_2, i_4 - i_2)
        
        sub_402668(&var_24, var_20_2)
        ebx_3 = var_24
    else
        *ebx_1 -= 1
        ebx_3 = sub_402628(var_20_2)
        int32_t i_3 = i_4
        
        if (i_2 s< i_3)
            i_3 = i_2
        
        if (esi_2 == 0)
            sub_4027b0(*arg3, ebx_3 + 8, i_3 * edx_1)
        else
            sub_4028b8(ebx_3 + 8, i_3 * edx_1, 0)
            *arg3
            sub_4046f4(i_3)
    
    *ebx_3 = 1
    *(ebx_3 + 4) = i_2
    sub_4028b8(edx_1 * i_4 + ebx_3 + 8, (i_2 - i_4) * edx_1, 0)
    
    if (arg1 s> 1)
        int32_t var_c_1 = arg1 - 1
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t var_10_1 = 0
            int32_t i
            
            do
                sub_404714(&arg4[1])
                var_10_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    result = arg3
    *result = ebx_3 + 8
else
    if (i_2 s< 0)
        int32_t* eax
        eax.b = 4
        sub_402710(eax)
        noreturn
    
    result = arg3
    sub_40470c()

return result
