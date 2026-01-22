// 函数: sub_476368
// 地址: 0x476368
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = sub_46b8c0(*(arg1 + 0x30))

if (result == 0)
    sub_4757cc()
    SetActiveWindow(*(arg1 + 0x30))
    data_4b1cf0 = 1
    sub_475988(arg1, 0)
    BOOL eax_7
    
    if (*(arg1 + 0x44) != 0 && (*(arg1 + 0x5b) != 0 || *(*(arg1 + 0x44) + 0x57) != 0))
        eax_7 = IsWindowEnabled(sub_45f888(*(arg1 + 0x44)))
    
    if (*(arg1 + 0x44) == 0 || (*(arg1 + 0x5b) == 0 && *(*(arg1 + 0x44) + 0x57) == 0) || eax_7 == 0)
        result = sub_474fb0(*(arg1 + 0x30), SW_MINIMIZE)
    else if (sub_478b08() == 0)
        int32_t cx = *(*(arg1 + 0x44) + 0x48)
        int32_t Y = sub_46e140(*(arg1 + 0x44))
        int32_t X = sub_46e120(*(arg1 + 0x44))
        HWND hWndInsertAfter = sub_45f888(*(arg1 + 0x44))
        SetWindowPos(*(arg1 + 0x30), hWndInsertAfter, X, Y, cx, 0, SWP_SHOWWINDOW)
        result = DefWindowProcA(*(arg1 + 0x30), 0x112, 0xf020, 0)
    else
        result = sub_46fed0(*(arg1 + 0x44), 1)
    
    if (*(arg1 + 0x142) != 0)
        *(arg1 + 0x144)
        return (*(arg1 + 0x140))()

return result
