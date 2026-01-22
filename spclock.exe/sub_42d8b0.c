// 函数: sub_42d8b0
// 地址: 0x42d8b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_48 = 0
void pv
int32_t eax
int32_t edx
eax, edx = GetObjectA(arg1, 0x54, &pv)

if (eax == 0)
    sub_42ca20()
else if (eax s< 0x40 || var_48 u< 0x28)
    sub_403578(arg2, 0x28, 0)
    *arg2 = 0x28
    int32_t var_5c
    arg2[1] = var_5c
    int32_t var_58
    arg2[2] = var_58
else
    __builtin_memcpy(arg2, &var_48, 0x28)

if (arg3 == 2)
    *(arg2 + 0xe) = 1
else if (arg3 - 3 u< 0xe)
    *(arg2 + 0xe) = 4
    arg2[8] = arg3
else if (arg3 - 0x11 u< 0xf0)
    *(arg2 + 0xe) = 8
    arg2[8] = arg3
else
    int16_t var_50
    int16_t var_4e
    int16_t temp3_1
    int16_t temp4_1
    temp3_1:temp4_1 = muls.dp.w(var_4e, var_50)
    edx.w = temp3_1
    *(arg2 + 0xe) = temp4_1

arg2[3].w = 1
int32_t result = arg2[8]

if (result u< arg2[9])
    arg2[9] = result

if (arg2[5] == 0)
    int32_t eax_11 = sub_42ccd0(arg2[1], zx.d(*(arg2 + 0xe)), 0x20)
    int32_t eax_13
    int32_t edx_2
    edx_2:eax_13 = sx.q(arg2[2])
    result = (eax_13 ^ edx_2) - edx_2
    arg2[5] = eax_11 * result

return result
