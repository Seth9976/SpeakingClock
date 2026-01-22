// 函数: sub_412ae4
// 地址: 0x412ae4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t* result

switch (zx.d(*arg1))
    case 0
        result = nullptr
        int32_t var_c = 0
    case 1
        if (data_4aaa10 != 0)
            uint32_t eax_1
            eax_1.w = 1
            sub_40ff78(eax_1.w, 4)
        
        result = nullptr
        int32_t var_c_1 = 0
    case 2
        result = arg1
        float var_c_2 = fconvert.s(float.t(result[4]))
    case 3
        result = arg1
        float var_c_3 = fconvert.s(float.t(*(result + 8)))
    case 4
        result = *(arg1 + 8)
        int16_t* result_1 = result
    case 0xb
        result = sx.d(arg1[4])
        float var_c_4 = fconvert.s(float.t(result))
    case 0x10
        result = sx.d(arg1[4].b)
        float var_c_5 = fconvert.s(float.t(result))
    case 0x11
        result = zx.d(arg1[4].b)
        float var_c_6 = fconvert.s(float.t(result))
    case 0x12
        result = zx.d(arg1[4])
        float var_c_7 = fconvert.s(float.t(result))
    case 0x13
        result = nullptr
        int32_t var_14_1 = 0
        float var_c_8 = fconvert.s(float.t((*(arg1 + 8)).q))
    case 0x14
        result = arg1
        float var_c_9 = fconvert.s(float.t(*(result + 8)))
    default
        int32_t __saved_ebp
        int32_t* var_28_1 = &__saved_ebp
        int32_t (* var_2c_1)() = j_sub_404188
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        sub_412750(arg1)
        float var_c_10 = fconvert.s(arg2)
        result = nullptr
        fsbase->NtTib.ExceptionList = ExceptionList

unimplemented  {fld st0, dword [ebp-0x8]}
return result
