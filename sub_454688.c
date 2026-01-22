// 函数: sub_454688
// 地址: 0x454688
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND hWnd = sub_45f888(*(arg1 - 4))
HWND result = hWnd

for (; hWnd != 0; hWnd = GetParent(hWnd))
    result = hWnd

return result
