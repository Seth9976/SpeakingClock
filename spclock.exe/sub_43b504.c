// 函数: sub_43b504
// 地址: 0x43b504
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT wParam = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xbb, arg2, 0)

if (wParam s< 0)
    return wParam

LPARAM lParam = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc1, wParam, 0) + wParam
SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xb1, wParam, lParam)
LPARAM lParam_1 = sub_405018(arg3)
return SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc2, 0, lParam_1)
