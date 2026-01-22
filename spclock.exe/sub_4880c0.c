// 函数: sub_4880c0
// 地址: 0x4880c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void pv
GetObjectA(arg1, 0x18, &pv)
*arg2 = 0x28
int32_t var_1c
arg2[1] = var_1c
int32_t var_18
arg2[2] = var_18

if (arg3 == 0)
    int16_t var_10
    int16_t var_e
    int16_t temp0_1
    int16_t temp1_1
    temp0_1:temp1_1 = muls.dp.w(var_e, var_10)
    int32_t edx
    edx.w = temp0_1
    *(arg2 + 0xe) = temp1_1
else if (arg3 == 2)
    *(arg2 + 0xe) = 1
else if (arg3 == 0x10)
    *(arg2 + 0xe) = 4
else if (arg3 == 0x100)
    *(arg2 + 0xe) = 8

int16_t eax_3 = *(arg2 + 0xe)
int16_t temp5_1

if (eax_3 != 0x10)
    temp5_1 = eax_3 - 0x10

if (eax_3 == 0x10 || temp5_1 == 0x10)
    *(arg2 + 0xe) = 0x18

arg2[3].w = 1
arg2[6] = 0
arg2[7] = 0
arg2[8] = 0
arg2[9] = 0
arg2[4] = 0
int32_t eax_6 = arg2[1] * zx.d(*(arg2 + 0xe)) + 0x1f

if (eax_6 s< 0)
    eax_6 += 0x1f

int32_t result = (eax_6 s>> 5) * 4 * arg2[2]
arg2[5] = result
return result
