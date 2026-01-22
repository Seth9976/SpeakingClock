// 函数: sub_474614
// 地址: 0x474614
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == *(arg1 + 0x44))
    *(arg1 + 0x48) += 1
    return 

*(arg1 + 0x44) = arg2

if (arg2 != 0)
    SetCursor(sub_4745ec(arg1, sx.d(arg2)))
    *(arg1 + 0x48) += 1
    return 

POINT point
GetCursorPos(&point)
int32_t y = point.y
HWND eax = WindowFromPoint(point.x)

if (eax == 0)
    SetCursor(sub_4745ec(arg1, sx.d(arg2)))
    *(arg1 + 0x48) += 1
else if (GetWindowThreadProcessId(eax, nullptr) != GetCurrentThreadId())
    SetCursor(sub_4745ec(arg1, sx.d(arg2)))
    *(arg1 + 0x48) += 1
else
    int16_t var_12_1 = point.y.w
    SendMessageA(eax, 0x20, eax, zx.d(SendMessageA(eax, 0x84, 0, point.x.w.d)) | 0x2000000)
