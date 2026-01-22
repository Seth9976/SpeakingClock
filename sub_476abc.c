// 函数: sub_476abc
// 地址: 0x476abc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t lParam

if (*(arg1 + 0xac) != 0)
    sub_41a0d4(*(arg1 + 0xb0))
    int32_t* eax_1 = sub_402ea8(8)
    *eax_1 = lParam
    eax_1[1] = arg2
    return sub_419f9c(*(arg1 + 0xb0), eax_1)

LRESULT hWnd = *(arg1 + 0x30)

if (hWnd == 0)
    return hWnd

return SendMessageA(hWnd, 0xb020, 0, &lParam)
