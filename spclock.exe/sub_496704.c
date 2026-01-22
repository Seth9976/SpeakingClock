// 函数: sub_496704
// 地址: 0x496704
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_1c = *arg2
void var_18
void* edi = &var_18
void* esi_1 = &arg2[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
*arg3 = var_1c
void* edi_5 = &arg3[1]
void* esi_5 = &var_18
*edi_5 = *esi_5
void* edi_6 = edi_5 + 4
void* esi_6 = esi_5 + 4
*edi_6 = *esi_6
*(edi_6 + 4) = *(esi_6 + 4)

if (*(arg1 + 0x30) != 0 || *(arg1 + 0x19) != 6)
    int32_t dx = neg.d(*(arg1 + 0x24))
    int32_t dy = dx
    *(arg1 + 0x24)
    return InflateRect(arg3, dx, dy)

*arg3 = *arg3 + zx.d(*(arg1 + 0x1a)) + zx.d(*(arg1 + 0x20))
arg3[1] = arg3[1] + zx.d(*(arg1 + 0x1a)) + zx.d(*(arg1 + 0x20))
arg3[2] = arg3[2] - zx.d(*(arg1 + 0x1a)) - zx.d(*(arg1 + 0x1b)) - zx.d(*(arg1 + 0x20))
uint32_t result = zx.d(*(arg1 + 0x20))
arg3[3] = arg3[3] - zx.d(*(arg1 + 0x1a)) - zx.d(*(arg1 + 0x1b)) - result
return result
