// 函数: sub_472a67
// 地址: 0x472a67
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 - 4)
sub_476e5c(data_4b1ce0)
sub_404598(__return_addr)

if (*(data_4b1ce4 + 0x6c) == *(arg1 - 4))
    sub_471284(*(arg1 - 4), 0)

if (*(*(arg1 - 4) + 0x277) == 1)
    (*(**(arg1 - 4) + 0xb0))()
else if ((*(*(arg1 - 4) + 0x358) & 8) == 0)
    HWND hWnd = nullptr
    
    if (sub_45f888(*(arg1 - 4)) == GetActiveWindow() && sub_46b8c0(sub_45f888(*(arg1 - 4))) == 0)
        hWnd = sub_46bbe8(sub_45f888(*(arg1 - 4)))
    
    if (hWnd == 0)
        ShowWindow(sub_45f888(*(arg1 - 4)), SW_HIDE)
    else
        SetWindowPos(sub_45f888(*(arg1 - 4)), nullptr, 0, 0, 0, 0, 0x97)
        SetActiveWindow(hWnd)
else
    SetWindowPos(sub_45f888(*(arg1 - 4)), nullptr, 0, 0, 0, 0, 0x97)

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
void* eax_22 = *(arg1 - 4)
*(eax_22 + 0x358) &= 0xfb
fsbase->NtTib.ExceptionList = arg3
sub_404b88(arg1 - 8)
return arg1 - 8
