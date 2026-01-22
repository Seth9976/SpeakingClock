// 函数: sub_43ae2b
// 地址: 0x43ae2b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg4 + 0x44) += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b

if (*(data_4ac4e0 + 0xc) == 0 || *data_4ac4d0 == 2 || (*(arg2 + 5) & 8) == 0)
    return sub_45bc7c(arg1, arg2)

PSTR var_9c
__builtin_memcpy(&var_9c, arg2, 0x8c)
int32_t var_98
int32_t var_98_1 = var_98 & 0xfffff7ff
sub_45bc7c(arg1, &var_9c)
HWND hWnd = *(arg1 + 0x1b4)

if (hWnd == 0)
    return hWnd

return SendMessageA(hWnd, 0xcf, 1, 0)
