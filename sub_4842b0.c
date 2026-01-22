// 函数: sub_4842b0
// 地址: 0x4842b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT result = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xba, 0, 0)
LRESULT wParam = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xbb, result - 1, 0)

if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc1, wParam, 0) != 0)
    return result

return result - 1
