// 函数: sub_48a8d0
// 地址: 0x48a8d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_18 = *arg1
void var_14
void* edi = &var_14
void* esi_1 = &arg1[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
SetRectEmpty(arg4)
int16_t* eax_1 = sub_41a0f4(*(arg3 + 0x78), arg5)
int32_t result
int32_t* ebp_1
void var_28

if (*(arg3 + 0x7d) == 0)
    sub_406ce8(*(arg3 + 0x5c), 0, sx.d(*eax_1), &var_28, *(arg3 + 0x54))
    int32_t eax_16 =
        sub_42c6a0(sub_430bec(*(arg3 + 0x70)), sx.d(*eax_1), *(arg3 + 0x54) - 1) | 0x2000000
    result, ebp_1 = sub_48df58(sub_430bec(*(arg3 + 0x70)), &var_18, arg2, arg4, nullptr, 0, eax_16, 
        zx.d(arg6), &var_28)
else
    sub_406ce8(*(arg3 + 0x5c), 0, sx.d(*eax_1), &var_28, *(arg3 + 0x54))
    int32_t* eax_6 = sub_430bec(*(arg3 + 0x74))
    result, ebp_1 = sub_48df58(sub_430bec(*(arg3 + 0x70)), &var_18, arg2, arg4, eax_6, 0, 0, 
        zx.d(arg6) | 0x100, &var_28)
*ebp_1
return result
