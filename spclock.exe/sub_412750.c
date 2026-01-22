// 函数: sub_412750
// 地址: 0x412750
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
            edx.w = 5
            result.w = 1
            sub_40ff78(result.w, edx.w)
        
        result = 0
        var_18.d = 0
        var_18:4.d = 0
    case 2
        var_18 = fconvert.d(float.t(arg1[4]))
    case 3
        var_18 = fconvert.d(float.t(*(arg1 + 8)))
    case 4
        var_18 = fconvert.d(fconvert.t(*(arg1 + 8)))
    case 5
        var_18.d = *(arg1 + 8)
        result = *(arg1 + 0xc)
        var_18:4.d = result
    case 6
        var_18 = fconvert.d(float.t(*(arg1 + 8)) / fconvert.t(10000f))
    case 7
        var_18.d = *(arg1 + 8)
        result = *(arg1 + 0xc)
        var_18:4.d = result
    case 8
        result = sub_412590(arg1)
        var_18 = fconvert.d(x87_r0)
    case 9, 0xd
        long double st0_1
        st0_1, result = sub_412654(arg1)
        var_18 = fconvert.d(st0_1)
    case 0xb
        result = sx.d(arg1[4])
        var_18 = fconvert.d(float.t(result))
    case 0xc
        *(arg1 + 8)
        result = sub_412750()
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
        var_18 = fconvert.d(float.t(*(arg1 + 8)))
    default
        int16_t edx_1 = result.w
        
        if (edx_1 == 0x100)
            result = sub_412590(arg1)
            var_18 = fconvert.d(x87_r0)
        else if (edx_1 == 0x101)
            result = sub_4126a0(arg1, x87_r0)
            var_18 = fconvert.d(x87_r0)
        else if ((result:1.b & 0x40) == 0)
            result = sub_412704(arg1, &var_18)
            
            if (result.b == 0)
                long double st0_3
                st0_3, result = sub_412654(arg1)
                var_18 = fconvert.d(st0_3)
        else
            switch (zx.d(result.w) & 0xffffbfff)
                case 2
                    result = *(arg1 + 8)
                    var_18 = fconvert.d(float.t(*result))
                case 3
                    result = *(arg1 + 8)
                    var_18 = fconvert.d(float.t(*result))
                case 4
                    result = *(arg1 + 8)
                    var_18 = fconvert.d(fconvert.t(*result))
                case 5
                    result = *(arg1 + 8)
                    var_18.d = *result
                    var_18:4.d = *(result + 4)
                case 6
                    result = *(arg1 + 8)
                    var_18 = fconvert.d(float.t(*result) / fconvert.t(10000f))
                case 7
                    result = *(arg1 + 8)
                    var_18.d = *result
                    var_18:4.d = *(result + 4)
                case 8
                    result = sub_412590(arg1)
                    var_18 = fconvert.d(x87_r0)
                case 0xb
                    result = sx.d(**(arg1 + 8))
                    var_18 = fconvert.d(float.t(result))
                case 0xc
                    *(arg1 + 8)
                    result = sub_412750()
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
                    result = *(arg1 + 8)
                    var_18 = fconvert.d(float.t(*result))
                default
                    long double st0_2
                    st0_2, result = sub_412654(arg1)
                    var_18 = fconvert.d(st0_2)

unimplemented  {fld st0, qword [esp]}
return result
