// 函数: sub_4455ac
// 地址: 0x4455ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND hWnd = *(arg1 + 0x3c)
LRESULT result

if (hWnd == 0)
    result = arg1
else
    result = CallWindowProcA(*(arg1 + 0x34), hWnd, *arg2, arg2[1], arg2[2])
    arg2[3] = result

return result
