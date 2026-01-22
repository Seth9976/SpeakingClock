// 函数: sub_48b7b0
// 地址: 0x48b7b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x52) != 0)
    *(arg1 + 0x54)
    (*(arg1 + 0x50))()

WNDPROC lpPrevWndFunc = *(arg1 + 0x58)

if (lpPrevWndFunc != 0)
    arg2[3] = CallWindowProcA(lpPrevWndFunc, sub_48b704(arg1), *arg2, arg2[1], arg2[2])
