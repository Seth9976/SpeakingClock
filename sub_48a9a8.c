// 函数: sub_48a9a8
// 地址: 0x48a9a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_18 = *arg1
void var_14
void* edi = &var_14
void* esi_1 = &arg1[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int16_t* eax_1 = sub_41a0f4(*(arg3 + 0x78), arg4)
void var_28

if (*(arg3 + 0x7d) == 0)
    sub_406ce8(*(arg3 + 0x5c), 0, sx.d(*eax_1), &var_28, *(arg3 + 0x54))
    return sub_48dc9c(sub_430bec(*(arg3 + 0x70)), &var_18, arg2, nullptr, arg5, arg6, zx.d(arg7), 
        &var_28)

sub_406ce8(*(arg3 + 0x5c), 0, sx.d(*eax_1), &var_28, *(arg3 + 0x54))
int32_t* eax_7 = sub_430bec(*(arg3 + 0x74))
return sub_48dc9c(sub_430bec(*(arg3 + 0x70)), &var_18, arg2, eax_7, nullptr, arg6, 
    zx.d(arg7) | 0x100, &var_28)
