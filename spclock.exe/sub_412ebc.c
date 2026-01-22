// 函数: sub_412ebc
// 地址: 0x412ebc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = zx.d(*arg1)
double var_18
long double x87_r0

switch (zx.d(result.w))
    case 0
        result = 0
        var_18.d = 0
        var_18:4.d = 0
    case 1
        if (data_4aaa10 != 0)
            uint32_t edx
            edx.w = 7
            result.w = 1
            sub_40ff78(result.w, edx.w)
        
        result = 0
        var_18.d = 0
        var_18:4.d = 0
    case 2
        var_18 = fconvert.d(float.t(arg1[4]))
    case 3
        var_18 = fconvert.d(float.t(*(arg1 + 8)))
    case 4, 5, 6
        long double st0_1
        st0_1, result = sub_412dc0(arg1)
        var_18 = fconvert.d(st0_1)
    case 7
        var_18.d = *(arg1 + 8)
        result = *(arg1 + 0xc)
        var_18:4.d = result
    case 8
        result = sub_412c74(arg1)
        var_18 = fconvert.d(x87_r0)
    case 9, 0xd
        long double st0_3
        st0_3, result = sub_412dc0(arg1)
        var_18 = fconvert.d(st0_3)
    case 0xb
        result = sx.d(arg1[4])
        var_18 = fconvert.d(float.t(result))
    case 0xc
        *(arg1 + 8)
        result = sub_412ebc()
        var_18 = fconvert.d(x87_r0)
    case 0x10
        result = sx.d(arg1[4].b)
        var_18 = fconvert.d(float.t(result))
    case 0x11
        result = zx.d(arg1[4].b)
        var_18 = fconvert.d(float.t(result))
    case 0x12
        result = zx.d(arg1[4])
        var_18 = fconvert.d(float.t(result))
    case 0x13
        result = 0
        int32_t var_8_1 = 0
        var_18 = fconvert.d(float.t((*(arg1 + 8)).q))
    case 0x14
        long double st0_2
        st0_2, result = sub_412d60(arg1, fconvert.d(float.t(*(arg1 + 8))))
        var_18 = fconvert.d(st0_2)
    default
        int16_t edx_1 = result.w
        
        if (edx_1 == 0x100)
            result = sub_412c74(arg1)
            var_18 = fconvert.d(x87_r0)
        else if (edx_1 == 0x101)
            result = sub_412e0c(arg1, x87_r0)
            var_18 = fconvert.d(x87_r0)
        else if ((result:1.b & 0x40) == 0)
            result = sub_412e70(arg1, &var_18)
            
            if (result.b == 0)
                long double st0_7
                st0_7, result = sub_412dc0(arg1)
                var_18 = fconvert.d(st0_7)
        else
            switch (zx.d(result.w) & 0xffffbfff)
                case 2
                    result = *(arg1 + 8)
                    var_18 = fconvert.d(float.t(*result))
                case 3
                    result = *(arg1 + 8)
                    var_18 = fconvert.d(float.t(*result))
                case 4, 5, 6
                    long double st0_4
                    st0_4, result = sub_412dc0(arg1)
                    var_18 = fconvert.d(st0_4)
                case 7
                    result = *(arg1 + 8)
                    var_18.d = *result
                    var_18:4.d = *(result + 4)
                case 8
                    result = sub_412c74(arg1)
                    var_18 = fconvert.d(x87_r0)
                case 0xb
                    result = sx.d(**(arg1 + 8))
                    var_18 = fconvert.d(float.t(result))
                case 0xc
                    *(arg1 + 8)
                    result = sub_412ebc()
                    var_18 = fconvert.d(x87_r0)
                case 0x10
                    result = sx.d(**(arg1 + 8))
                    var_18 = fconvert.d(float.t(result))
                case 0x11
                    result = zx.d(**(arg1 + 8))
                    var_18 = fconvert.d(float.t(result))
                case 0x12
                    result = zx.d(**(arg1 + 8))
                    var_18 = fconvert.d(float.t(result))
                case 0x13
                    result = 0
                    int32_t var_8_2 = 0
                    var_18 = fconvert.d(float.t((**(arg1 + 8)).q))
                case 0x14
                    long double st0_5
                    st0_5, result = sub_412d60(arg1, fconvert.d(float.t(**(arg1 + 8))))
                    var_18 = fconvert.d(st0_5)
                default
                    long double st0_6
                    st0_6, result = sub_412dc0(arg1)
                    var_18 = fconvert.d(st0_6)

unimplemented  {fld st0, qword [esp]}
return result
