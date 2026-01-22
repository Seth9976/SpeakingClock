// 函数: sub_424ad0
// 地址: 0x424ad0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

data_4aac18 = data_4af7f4
WNDCLASSA wndClass
BOOL eax_3 = GetClassInfoA(data_4af7f4, data_4aac2c, &wndClass)

if ((sbb.d(eax_3, eax_3, eax_3 u< 1)).b == 0xff || DefWindowProcA != wndClass.lpfnWndProc)
    if ((sbb.d(eax_3, eax_3, eax_3 u< 1)).b != 0xff)
        UnregisterClassA(data_4aac2c, data_4af7f4)
    
    RegisterClassA(0x4aac08)

HWND hWnd = sub_4079ac(0x424b80, data_4aac2c, WS_EX_TOOLWINDOW, 0, data_4af7f4, nullptr, nullptr, 
    0, 0, 0, 0, WS_POPUP)

if (arg2 != 0)
    SetWindowLongA(hWnd, 0xfffffffc, sub_424a14(arg1, arg3))

return hWnd
