// 函数: sub_463e4c
// 地址: 0x463e4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_14 = *arg3
int32_t var_10 = arg3[1]
*(arg1 + 0x60) = arg2
HWND eax_1
int32_t ecx
eax_1, ecx = sub_45f888(*(arg1 + 0x14))
data_4b1c40
sub_464c7c(ecx, eax_1)
HWND hWnd = sub_45f888(*(arg1 + 0x14))
*(arg1 + 0x5c) = hWnd
enum GET_DCX_FLAGS flags = DCX_CACHE | DCX_CLIPSIBLINGS | DCX_LOCKWINDOWUPDATE
*(arg1 + 0x58) = GetDCEx(hWnd, nullptr, flags)
*(arg1 + 0x50) = var_14
*(arg1 + 0x54) = var_10
return sub_463f74(arg1)
