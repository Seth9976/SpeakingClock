// 函数: sub_46ef14
// 地址: 0x46ef14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_46cc48(arg1)
BOOL hWnd = arg1[0xa7]

if (hWnd != 0)
    int32_t Y = arg3[1]
    int32_t X = *arg3
    hWnd = SetWindowPos(hWnd, 1, X, Y, arg3[2] - X, arg3[3] - Y, 0x14)
    
    if (*(arg1 + 0x277) == 2)
        RECT rect
        hWnd = GetClientRect(arg1[0xa7], &rect)
        
        if (hWnd != 0)
            return InvalidateRect(arg1[0xa7], nullptr, 0xffffffff)

return hWnd
