// 函数: sub_407a04
// 地址: 0x407a04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t* var_8 = arg1
HWND hWnd = FindWindowA("MouseZ", "Magellan MSWHEEL")
*arg3 = RegisterWindowMessageA("MSWHEEL_ROLLMSG")
*arg2 = RegisterWindowMessageA("MSH_WHEELSUPPORT_MSG")
*arg1 = RegisterWindowMessageA("MSH_SCROLL_LINES_MSG")

if (*arg2 == 0 || hWnd == 0)
    *arg5 = 0
else
    *arg5 = SendMessageA(hWnd, *arg2, 0, 0)

if (*arg1 == 0 || hWnd == 0)
    *arg4 = 3
else
    *arg4 = SendMessageA(hWnd, *arg1, 0, 0)

return hWnd
