// 函数: sub_409624
// 地址: 0x409624
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

long double var_14
uint32_t result = sub_40ab98(arg1, &var_14)

if (result.b == 0)
    void* ecx_1 = sub_409510()
    data_4af914
    int32_t eax_3 = sub_405cb8()
    result = sub_4095a0(data_4af914, eax_3, ecx_1)
    
    if (result.b == 0)
        int32_t __saved_ebp
        int32_t* var_1c_2 = &__saved_ebp
        data_4af918
        int32_t eax_7 = sub_405cb8()
        result = sub_4095a0(data_4af918, eax_7, &__saved_ebp)
        
        if (result.b != 0)
            *arg2 = 0
    else
        *arg2 = 1
else
    long double x87_r7_1 = var_14
    long double temp0_1 = fconvert.t(0f)
    x87_r7_1 - temp0_1
    uint32_t eax_1
    eax_1.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
    *arg2 = not(test_bit(eax_1:1.b, 6))

return result
