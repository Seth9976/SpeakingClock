// 函数: sub_40aeb0
// 地址: 0x40aeb0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_28 = arg6
uint32_t var_1c
sub_40ac28(&var_1c, arg5)
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
sub_408b74(&var_14, 0x8eac, i, &var_12)

if (var_14 == 4)
    var_14 -= 1
    var_12 -= 0x7154

ebx.w += var_14 * 0x64
sub_408b74(&var_14, 0x5b5, zx.d(var_12), &var_12)
ebx.w += var_14 * 4
sub_408b74(&var_14, 0x16d, zx.d(var_12), &var_12)

if (var_14 == 4)
    var_14 -= 1
    var_12 += 0x16d

ebx.w += var_14
uint32_t result = sub_40ad78(ebx.w)
uint32_t eax_17
eax_17.w = 1

while (true)
    var_14 = *(zx.d(result.b) * 0x18 + &data_4aa7d0 + (zx.d(eax_17.w) << 1) - 2)
    
    if (var_12 u< var_14)
        break
    
    var_12 -= var_14
    eax_17 += 1

*arg3 = ebx.w
*arg2 = eax_17.w
*arg1 = var_12 + 1
return result
