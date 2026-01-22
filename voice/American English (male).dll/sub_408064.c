// 函数: sub_408064
// 地址: 0x408064
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t var_28 = arg6
uint32_t var_1c
sub_407e10(&var_1c, arg5)
int32_t var_18

if (var_18 s<= 0)
    *arg3 = 0
    *arg2 = 0
    *arg1 = 0
    *arg4 = 0
    return 0

*arg4 = (mods.dp.d(sx.q(var_18), 7)).w + 1
int32_t i = var_18 - 1
int16_t* ebx
ebx.w = 1

while (i s>= 0x23ab1)
    i -= 0x23ab1
    ebx.w += 0x190

int16_t var_14
uint16_t var_12
sub_406864(&var_14, 0x8eac, i, &var_12)

if (var_14 == 4)
    var_14 -= 1
    var_12 -= 0x7154

ebx.w += var_14 * 0x64
sub_406864(&var_14, 0x5b5, zx.d(var_12), &var_12)
int32_t eax_10
eax_10.w = var_14
ebx.w += (eax_10 << 2).w
sub_406864(&var_14, 0x16d, zx.d(var_12), &var_12)

if (var_14 == 4)
    var_14 -= 1
    var_12 += 0x16d

ebx.w += var_14
uint32_t result = sub_407f60(ebx.w)
int32_t eax_15
eax_15.b = result.b
int32_t eax_16
eax_16.w = 1

while (true)
    uint32_t ecx_4
    ecx_4.w = *(eax_15 * 0x18 + &data_4130e4 + (zx.d(eax_16.w) << 1) - 2)
    var_14 = ecx_4.w
    ecx_4.w = var_12
    
    if (ecx_4.w u< var_14)
        break
    
    ecx_4.w = var_14
    var_12 -= ecx_4.w
    eax_16 += 1

*arg3 = ebx.w
*arg2 = eax_16.w
eax_16.w = var_12
*arg1 = eax_16.w + 1
return result
