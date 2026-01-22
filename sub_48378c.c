// 函数: sub_48378c
// 地址: 0x48378c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

WPARAM wParam

if (*(arg1 + 8) != 0)
    wParam = 0
else
    wParam = 1

char result = sub_45fc28(*(arg1 + 4))

if (result == 0)
    return result

return SendMessageA(sub_45f888(*(arg1 + 4)), 0x444, wParam, arg2)
