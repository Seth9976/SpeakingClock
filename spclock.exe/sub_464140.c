// 函数: sub_464140
// 地址: 0x464140
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = 4

if (arg2 != 0)
    int32_t var_14
    sub_4570f0(arg1, &var_14)
    int32_t var_24
    sub_4570f0(arg2, &var_24)
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_10
    int32_t var_c
    int32_t var_8
    
    if (var_10 s<= var_20 && var_8 s< var_18 && var_c s>= var_1c)
        result.b = 1
    else if (var_14 s> var_24 || var_c s>= var_1c || var_8 s< var_18)
        int32_t eax_9 = var_20 + var_18
        int32_t eax_10 = eax_9 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_9 s>> 1 s< 0)
            eax_10 = adc.d(eax_10, 0, c_1)
        
        if (eax_10 s<= var_10)
            result.b = 2
    else
        result.b = 3

return result
