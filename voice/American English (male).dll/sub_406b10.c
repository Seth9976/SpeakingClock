// 函数: sub_406b10
// 地址: 0x406b10
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

arg3.b = arg3.b
int16_t x87control

if (arg3.b != 0)
    return sub_406b44(arg1, arg2, arg3, arg4, x87control) __tailcall

if ((arg1[1] & 0x80000000) == 0)
    return sub_406b44(arg1, arg2, 0xa, arg4, x87control) __tailcall

int32_t var_4 = arg1[1]
int32_t var_8 = *arg1
int32_t temp0 = var_8
var_8 = neg.d(var_8)
int32_t var_4_2 = neg.d(adc.d(var_4, 0, temp0 != 0))
int32_t* result
int32_t ecx_2
result, ecx_2 = sub_406b44(&var_8, arg2, 0xa, arg4, x87control)
arg4[0xffffffff] = 0x2d
return result
