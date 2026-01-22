// 函数: sub_41df78
// 地址: 0x41df78
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

for (int32_t* i = sub_403b40(arg2); i != &data_41780c; i = sub_403bf4(i))
    int16_t* esi_1 = sub_419548(i)
    
    if (esi_1 != 0)
        int32_t ebx_2 = sx.d(*esi_1) - 1
        
        if (ebx_2 s>= 0)
            int32_t j_1 = ebx_2 + 1
            int32_t var_14_1 = 0
            int32_t j
            
            do
                void* result = **(esi_1 + (var_14_1 << 2) + 2)
                char eax_7
                eax_7, i, esi_1 = sub_403b5c(result, arg3)
                
                if (eax_7 != 0)
                    return result
                
                var_14_1 += 1
                j = j_1
                j_1 -= 1
            while (j != 1)

void* eax_11 = *(arg1 + 0x84)

if (eax_11 == 0)
    return sub_4195c0(arg3)

return sub_4194c0(eax_11, arg3)
