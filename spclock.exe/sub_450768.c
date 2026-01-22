// 函数: sub_450768
// 地址: 0x450768
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == *(arg1 + 0x5c))
    return 

*(arg1 + 0x5c) = arg2
HWND hWnd = *(arg1 + 0x38)

if (hWnd != 0)
    SendMessageA(hWnd, 0xb015, 0, 0)
