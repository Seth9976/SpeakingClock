// 函数: sub_48a494
// 地址: 0x48a494
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg1[8]
arg1[8] = 0x8800c6
void var_18
sub_406ce8(*(*(arg3 - 8) + 0x5c), 0, sx.d(**(arg3 - 0xc)), &var_18, *(*(arg3 - 8) + 0x54))
void var_28
sub_406ce8(*(*(arg3 - 8) + 0x5c), *(arg3 + 0xc), *(arg3 - 4), &var_28, *(*(arg3 - 8) + 0x54))
sub_42c124(sub_430bec(*(*(arg3 - 8) + 0x74)), &var_28, arg1, &var_18)
arg1[8] = 0xee0086
int32_t result

if (arg2 == 0)
    sub_406ce8(*(*(arg3 - 8) + 0x5c), 0, sx.d(**(arg3 - 0xc)), &var_18, *(*(arg3 - 8) + 0x54))
    sub_406ce8(*(*(arg3 - 8) + 0x5c), *(arg3 + 0xc), *(arg3 - 4), &var_28, *(*(arg3 - 8) + 0x54))
    result = sub_42c124(sub_430bec(*(*(arg3 - 8) + 0x70)), &var_28, arg1, &var_18)
else
    sub_406c1c(*(*(arg3 - 8) + 0x5c), 0, 0, &var_18, *(*(arg3 - 8) + 0x54))
    sub_406ce8(*(*(arg3 - 8) + 0x5c), *(arg3 + 0xc), *(arg3 - 4), &var_28, *(*(arg3 - 8) + 0x54))
    result = sub_42c124(sub_430bec(arg2), &var_28, arg1, &var_18)

arg1[8] = esi
return result
