// 函数: sub_45476c
// 地址: 0x45476c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_10 = arg3
int32_t i = 0
int32_t eax = arg1[2]

if (eax != 0)
    if (eax == 1)
        return *sub_41a0f4(arg1, 0)
    
    HWND hWnd = GetTopWindow(GetDesktopWindow())
    
    while (i == 0)
        if (hWnd == 0)
            break
        
        if (sub_454650(arg1, hWnd, &var_10) == 0)
            hWnd = GetWindow(hWnd, GW_HWNDNEXT)
        else
            i = **(arg1[1] + (var_10 << 2))

return i
