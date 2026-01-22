// 函数: sub_48da60
// 地址: 0x48da60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t x1_1 = *arg2
int32_t y1_1
int32_t* edi = &y1_1
void* esi_1 = &arg2[1]
*edi = *esi_1
void* edi_1 = &edi[1]
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t* var_8 = arg3

if (arg1 == 0 || arg5 == 0)
    return 

uint32_t eax_1 = sub_42ad8c(arg4)
int32_t var_14
int32_t cx = var_14 - x1_1
int32_t var_10
int32_t cy = var_10 - y1_1
(*(*arg5 + 0x40))()
(*(*arg5 + 0x34))()
int32_t y1 = y1_1
int32_t x1 = x1_1
HDC hdcSrc = sub_42c73c(var_8)
BitBlt(sub_42c73c(sub_430bec(arg5)), 0, 0, cx, cy, hdcSrc, x1, y1, SRCCOPY)
(*(*arg1 + 0x40))()
(*(*arg1 + 0x34))()
void var_2c
sub_406c1c(cx, 0, 0, &var_2c, cy)
sub_42c124(var_8, &var_2c, sub_430bec(arg1), &x1_1)
sub_430f38(arg1, eax_1)
SetBkColor(sub_42c73c(sub_430bec(arg5)), 0)
SetTextColor(sub_42c73c(sub_430bec(arg5)), 0xffffff)
HDC hdcSrc_1 = sub_42c73c(sub_430bec(arg1))
BitBlt(sub_42c73c(sub_430bec(arg5)), 0, 0, cx, cy, hdcSrc_1, 0, 0, SRCAND)
