// 函数: sub_46e454
// 地址: 0x46e454
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND hWnd = *(arg1 + 0x1b4)

if (hWnd == 0)
    return 0

return GetWindow(hWnd, GW_OWNER)
