// 函数: sub_412230
// 地址: 0x412230
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg3
uint32_t eax = zx.d(*arg1)

switch (zx.d(eax.w))
    case 0
        var_8.b = 0
    case 1
        if (data_4aaa10 != 0)
            uint32_t edx
            edx.w = 0xb
            eax.w = 1
            sub_40ff78(eax.w, edx.w)
        
        var_8.b = 0
    case 2
        var_8.b = arg1[4] != 0
    case 3
        var_8.b = *(arg1 + 8) != 0
    case 4
        long double x87_r7_1 = fconvert.t(*(arg1 + 8))
        long double temp2_1 = fconvert.t(0f)
        x87_r7_1 - temp2_1
        eax.w = (x87_r7_1 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe
        var_8.b = not(test_bit(eax:1.b, 6))
    case 5
        long double x87_r7_2 = fconvert.t(*(arg1 + 8))
        long double temp3_1 = fconvert.t(0f)
        x87_r7_2 - temp3_1
        eax.w = (x87_r7_2 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe
        var_8.b = not(test_bit(eax:1.b, 6))
    case 6
        long double x87_r7_3 = float.t(*(arg1 + 8))
        long double temp4_1 = fconvert.t(0f)
        x87_r7_3 - temp4_1
        eax.w = (x87_r7_3 < temp4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe
        var_8.b = not(test_bit(eax:1.b, 6))
    case 7
        long double x87_r7_4 = fconvert.t(*(arg1 + 8))
        long double temp5_1 = fconvert.t(0f)
        x87_r7_4 - temp5_1
        eax.w = (x87_r7_4 < temp5_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_4, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp5_1 ? 1 : 0) << 0xe
        var_8.b = not(test_bit(eax:1.b, 6))
    case 8
        var_8.b = sub_41207c(arg1)
    case 9, 0xd
        var_8.b = sub_412140(arg1)
    case 0xb
        var_8.b = (sbb.d(eax, eax, arg1[4] u< 1)).b + 1
    case 0xc
        *(arg1 + 8)
        var_8.b = sub_412230()
    case 0x10
        var_8.b = arg1[4].b != 0
    case 0x11
        var_8.b = arg1[4].b != 0
    case 0x12
        var_8.b = arg1[4] != 0
    case 0x13
        var_8.b = *(arg1 + 8) != 0
    case 0x14
        int32_t temp7_1 = *(arg1 + 0xc)
        bool cond:0_1 = temp7_1 != 0
        
        if (temp7_1 == 0)
            cond:0_1 = *(arg1 + 8) != 0
        
        eax.b = cond:0_1
        var_8.b = eax.b
    default
        int16_t edx_1 = eax.w
        
        if (edx_1 == 0x100)
            var_8.b = sub_41207c(arg1)
        else if (edx_1 == 0x101)
            var_8.b = sub_412180(arg1)
        else if ((eax:1.b & 0x40) == 0)
            if (sub_4121e4(arg1, &var_8) == 0)
                var_8.b = sub_412140(arg1)
        else
            switch (zx.d(eax.w) & 0xffffbfff)
                case 2
                    var_8.b = **(arg1 + 8) != 0
                case 3
                    var_8.b = **(arg1 + 8) != 0
                case 4
                    long double x87_r7_5 = fconvert.t(**(arg1 + 8))
                    long double temp8_1 = fconvert.t(0f)
                    x87_r7_5 - temp8_1
                    float* eax_17
                    eax_17.w = (x87_r7_5 < temp8_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_5, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp8_1 ? 1 : 0) << 0xe
                    var_8.b = not(test_bit(eax_17:1.b, 6))
                case 5
                    long double x87_r7_6 = fconvert.t(**(arg1 + 8))
                    long double temp9_1 = fconvert.t(0f)
                    x87_r7_6 - temp9_1
                    double* eax_18
                    eax_18.w = (x87_r7_6 < temp9_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_6, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == temp9_1 ? 1 : 0) << 0xe
                    var_8.b = not(test_bit(eax_18:1.b, 6))
                case 6
                    long double x87_r7_7 = float.t(**(arg1 + 8))
                    long double temp10_1 = fconvert.t(0f)
                    x87_r7_7 - temp10_1
                    int64_t* eax_19
                    eax_19.w = (x87_r7_7 < temp10_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_7, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp10_1 ? 1 : 0) << 0xe
                    var_8.b = not(test_bit(eax_19:1.b, 6))
                case 7
                    long double x87_r7_8 = fconvert.t(**(arg1 + 8))
                    long double temp11_1 = fconvert.t(0f)
                    x87_r7_8 - temp11_1
                    double* eax_20
                    eax_20.w = (x87_r7_8 < temp11_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_8, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == temp11_1 ? 1 : 0) << 0xe
                    var_8.b = not(test_bit(eax_20:1.b, 6))
                case 8
                    var_8.b = sub_41207c(arg1)
                case 0xb
                    int16_t* eax_23 = *(arg1 + 8)
                    var_8.b = (sbb.d(eax_23, eax_23, *eax_23 u< 1)).b + 1
                case 0xc
                    *(arg1 + 8)
                    var_8.b = sub_412230()
                case 0x10
                    var_8.b = **(arg1 + 8) != 0
                case 0x11
                    var_8.b = **(arg1 + 8) != 0
                case 0x12
                    var_8.b = **(arg1 + 8) != 0
                case 0x13
                    var_8.b = **(arg1 + 8) != 0
                case 0x14
                    void* eax_30 = *(arg1 + 8)
                    int32_t temp13_1 = *(eax_30 + 4)
                    bool cond:1_1 = temp13_1 != 0
                    
                    if (temp13_1 == 0)
                        cond:1_1 = *eax_30 != 0
                    
                    eax_30.b = cond:1_1
                    var_8.b = eax_30.b
                default
                    var_8.b = sub_412140(arg1)

return zx.d(var_8.b)
