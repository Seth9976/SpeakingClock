// 函数: sub_406d30
// 地址: 0x406d30
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

long double var_14
int32_t* result = sub_407d80(arg1, &var_14)

if (result.b == 0)
    void* ecx_1 = sub_406c64()
    data_414788
    int32_t eax_3 = sub_4046ec()
    result = sub_406cf4(data_414788, eax_3, ecx_1)
    
    if (result.b == 0)
        int32_t __saved_ebp
        int32_t* var_1c_2 = &__saved_ebp
        data_41478c
        int32_t eax_7 = sub_4046ec()
        result = sub_406cf4(data_41478c, eax_7, &__saved_ebp)
        
        if (result.b != 0)
            *arg2 = 0
    else
        *arg2 = 1
else
    long double x87_r7_1 = var_14
    long double temp0_1 = fconvert.t(0f)
    x87_r7_1 - temp0_1
    int32_t* eax_1
    eax_1.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
    *arg2 = not(test_bit(eax_1:1.b, 6))

return result
