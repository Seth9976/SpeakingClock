// 函数: sub_410db4
// 地址: 0x410db4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char var_18 = 0
uint32_t esi = 0
int32_t var_14 = arg1[5] - 1

if (0 s<= var_14)
    do
        uint32_t ebx_3 = (var_14 + esi) u>> 1
        *(arg1[4] + (ebx_3 << 3))
        int32_t eax_4 = (*(*arg1 + 0x34))(arg2, arg3, var_18, var_14)
        
        if (eax_4 s>= 0)
            var_14 = ebx_3 - 1
            
            if (eax_4 == 0)
                var_18 = 1
                
                if (*(arg1 + 0x1d) != 1)
                    esi = ebx_3
        else
            esi = ebx_3 + 1
    while (esi s<= var_14)

*arg3 = esi
uint32_t* result
result.b = var_18
return result
