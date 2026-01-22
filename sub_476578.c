// 函数: sub_476578
// 地址: 0x476578
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND hWnd

if (sub_478b08() == 0 || *(arg1 + 0x44) == 0)
    hWnd = *(arg1 + 0x30)
else
    hWnd = sub_45f888(*(arg1 + 0x44))

if (hWnd != 0)
    hWnd = GetLastActivePopup(hWnd)
    HWND hWnd_1 = hWnd
    
    if (hWnd_1 != 0 && hWnd_1 != *(arg1 + 0x30))
        hWnd = IsWindowVisible(hWnd_1)
        
        if (hWnd != 0)
            hWnd = IsWindowEnabled(hWnd_1)
            
            if (hWnd != 0)
                return SetForegroundWindow(hWnd_1)

return hWnd
