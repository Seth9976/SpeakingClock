// 函数: sub_413424
// 地址: 0x413424
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = zx.d(*arg1)
int64_t var_18
long double x87_r0

switch (zx.d(result.w))
    case 0
        result = 0
        var_18.d = 0
        var_18:4.d = 0
    case 1
        if (data_4aaa10 != 0)
            uint32_t edx
            edx.w = 6
            result.w = 1
            sub_40ff78(result.w, edx.w)
        
        result = 0
        var_18.d = 0
        var_18:4.d = 0
    case 2
        var_18 = int.q(float.t(arg1[4]) * fconvert.t(10000f))
    case 3
        var_18 = int.q(float.t(*(arg1 + 8)) * fconvert.t(10000f))
    case 4, 5
        long double st0_1
        st0_1, result = sub_413328(arg1)
        var_18 = int.q(st0_1)
    case 6
        var_18.d = *(arg1 + 8)
        result = *(arg1 + 0xc)
        var_18:4.d = result
    case 7
        long double st0_2
        st0_2, result = sub_413328(arg1)
        var_18 = int.q(st0_2)
    case 8
        result = sub_41320c(arg1)
        var_18 = int.q(x87_r0)
    case 9, 0xd
        long double st0_4
        st0_4, result = sub_413328(arg1)
        var_18 = int.q(st0_4)
    case 0xb
        result = sx.d(arg1[4])
        var_18 = int.q(float.t(result) * fconvert.t(10000f))
    case 0xc
        *(arg1 + 8)
        result = sub_413424()
        var_18 = int.q(x87_r0)
    case 0x10
        result = sx.d(arg1[4].b)
        var_18 = int.q(float.t(result) * fconvert.t(10000f))
    case 0x11
        result = zx.d(arg1[4].b)
        var_18 = int.q(float.t(result) * fconvert.t(10000f))
    case 0x12
        result = zx.d(arg1[4])
        var_18 = int.q(float.t(result) * fconvert.t(10000f))
    case 0x13
        result = 0
        int32_t var_8_1 = 0
        var_18 = int.q(float.t((*(arg1 + 8)).q) * fconvert.t(10000f))
    case 0x14
        long double st0_3
        st0_3, result = sub_4132c8(arg1, fconvert.d(float.t(*(arg1 + 8))))
        var_18 = int.q(st0_3)
    default
        int16_t edx_1 = result.w
        
        if (edx_1 == 0x100)
            result = sub_41320c(arg1)
            var_18 = int.q(x87_r0)
        else if (edx_1 == 0x101)
            result = sub_413374(arg1, x87_r0)
            var_18 = int.q(x87_r0)
        else if ((result:1.b & 0x40) == 0)
            result = sub_4133d8(arg1, &var_18)
            
            if (result.b == 0)
                long double st0_9
                st0_9, result = sub_413328(arg1)
                var_18 = int.q(st0_9)
        else
            switch (zx.d(result.w) & 0xffffbfff)
                case 2
                    result = *(arg1 + 8)
                    var_18 = int.q(float.t(*result) * fconvert.t(10000f))
                case 3
                    result = *(arg1 + 8)
                    var_18 = int.q(float.t(*result) * fconvert.t(10000f))
                case 4, 5
                    long double st0_5
                    st0_5, result = sub_413328(arg1)
                    var_18 = int.q(st0_5)
                case 6
                    result = *(arg1 + 8)
                    var_18.d = *result
                    var_18:4.d = *(result + 4)
                case 7
                    long double st0_6
                    st0_6, result = sub_413328(arg1)
                    var_18 = int.q(st0_6)
                case 8
                    result = sub_41320c(arg1)
                    var_18 = int.q(x87_r0)
                case 0xb
                    result = sx.d(**(arg1 + 8))
                    var_18 = int.q(float.t(result) * fconvert.t(10000f))
                case 0xc
                    *(arg1 + 8)
                    result = sub_413424()
                    var_18 = int.q(x87_r0)
                case 0x10
                    result = sx.d(**(arg1 + 8))
                    var_18 = int.q(float.t(result) * fconvert.t(10000f))
                case 0x11
                    result = zx.d(**(arg1 + 8))
                    var_18 = int.q(float.t(result) * fconvert.t(10000f))
                case 0x12
                    result = zx.d(**(arg1 + 8))
                    var_18 = int.q(float.t(result) * fconvert.t(10000f))
                case 0x13
                    result = 0
                    int32_t var_8_2 = 0
                    var_18 = int.q(float.t((**(arg1 + 8)).q) * fconvert.t(10000f))
                case 0x14
                    long double st0_7
                    st0_7, result = sub_4132c8(arg1, fconvert.d(float.t(**(arg1 + 8))))
                    var_18 = int.q(st0_7)
                default
                    long double st0_8
                    st0_8, result = sub_413328(arg1)
                    var_18 = int.q(st0_8)

unimplemented  {fild st0, qword [esp]}
return result
