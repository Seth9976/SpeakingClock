// 函数: sub_49f4d0
// 地址: 0x49f4d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_1 = *arg2
LRESULT result
int32_t __saved_ebp

if (eax_1 != 0x18)
    if (eax_1 != 0x112 || arg2[1] != 0xf020)
        goto label_49f57b
    
    result = sub_49f470(&__saved_ebp)
    
    if (result.b == 0)
        goto label_49f57b
else if (arg2[1] != 1 || arg2[2] != 0)
    if (arg2[1] != 0 || arg2[2] != 1 || *(*data_4ac2fc + 0xa4) != 0)
        goto label_49f57b
    
    result = sub_49f470(&__saved_ebp)
    
    if (result.b == 0)
        goto label_49f57b
else
    SetForegroundWindow(*(*data_4ac2fc + 0x30))
    int32_t* eax_10 = *(arg1 + 4)
    sub_403e18(eax_10, &data_453234)
    SetForegroundWindow(sub_45f888(eax_10))
label_49f57b:
    LPARAM lParam = arg2[2]
    WPARAM wParam = arg2[1]
    uint32_t Msg = *arg2
    int32_t* eax_21 = *(arg1 + 4)
    sub_403e18(eax_21, &data_453234)
    HWND hWnd = sub_45f888(eax_21)
    result = CallWindowProcA(*(arg1 + 0xf0), hWnd, Msg, wParam, lParam)
    arg2[3] = result
return result
