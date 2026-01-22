// 函数: sub_46bc9c
// 地址: 0x46bc9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND lParam = GetActiveWindow()
char var_8 = 0

if (arg1 == 0)
    EnumThreadWindows(GetCurrentThreadId(), sub_46bc44, &lParam)
else
    EnumWindows(sub_46bc64, &lParam)

return zx.d(var_8)
