// 函数: sub_414f78
// 地址: 0x414f78
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t ebx = zx.d(*(zx.d(sub_414c30(zx.d(*arg1))) + 0x4aaa20))
char eax_6 = *(zx.d(sub_414c30(zx.d(*arg2))) + 0x4aaa20)
uint32_t edx_1 = zx.d(*(zx.d(ebx.b) * 0xb + 0x4aaa5c + zx.d(eax_6)))
uint32_t result
int32_t var_20
int32_t var_18

if (edx_1 u> 0xa)
    sub_410014()
    result.b = 1
else
    switch (edx_1)
        case 0
            sub_410014()
            result.b = 1
        case 1
            return sub_414d2c(ebx.b, eax_6)
        case 2
            return sub_414d40(ebx, eax_6, arg3)
        case 3
            int32_t eax_10 = sub_411168(arg2)
            return sub_414e34(sub_411168(arg1), eax_10)
        case 4
            sub_412750(arg1)
            var_18.q = fconvert.d(arg4)
            sub_412750(arg2)
            var_20.q = fconvert.d(arg5)
            return sub_414e84(var_20, var_18)
        case 5
            sub_413424(arg1)
            var_18.q = int.q(arg4)
            sub_413424(arg2)
            var_20.q = int.q(arg5)
            return sub_414edc(var_20, var_18)
        case 6
            return sub_414f0c(arg1, arg2)
        case 7
            uint32_t eax_25
            int32_t ecx_4
            int32_t edx_8
            eax_25, ecx_4, edx_8 = sub_412230(arg2, edx_1, zx.d(ebx.b) * 0xb + 0x4aaa5c)
            return sub_414e34(sub_412230(arg1, edx_8, ecx_4) & 0x7f, eax_25 & 0x7f)
        case 8
            sub_412ebc(arg1)
            var_18.q = fconvert.d(arg4)
            sub_412ebc(arg2)
            var_20.q = fconvert.d(arg5)
            return sub_414eb0(var_20, var_18)
        case 9
            int32_t eax_14
            int32_t edx_5
            eax_14, edx_5 = sub_411c38(arg1)
            int32_t eax_16
            int32_t edx_6
            eax_16, edx_6 = sub_411c38(arg2)
            return sub_414e48(eax_16, edx_6, eax_14, edx_5)
        case 0xa
            return sub_414c54(arg1, arg2)
return result
