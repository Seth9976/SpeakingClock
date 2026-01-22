// 函数: sub_4821d0
// 地址: 0x4821d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

RECT rect
GetWindowRect(sub_45f888(arg3), &rect)
*(arg2 + 0x4c) = rect.left
void* edi_2 = arg2 + 0x50
var_14
void* esi_1 = &var_14
*edi_2 = *esi_1
void* edi_3 = edi_2 + 4
void* esi_2 = esi_1 + 4
*edi_3 = *esi_2
*(edi_3 + 4) = *(esi_2 + 4)
int32_t* esi_5
esi_5.w = 0xffc2
return sub_403e64(arg3, esi_5, arg2, arg1, arg4, zx.d(arg5), arg6)
