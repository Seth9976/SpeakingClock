// 函数: sub_43b450
// 地址: 0x43b450
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT result = 0

if (sub_45fc28(*(arg1 + 0x18)) != 0 || *(*(arg1 + 0x18) + 0x64) != 0)
    result = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xba, 0, 0)
    LRESULT wParam = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xbb, result - 1, 0)
    
    if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc1, wParam, 0) == 0)
        return result - 1

return result
