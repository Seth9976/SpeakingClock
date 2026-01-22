// 函数: sub_432334
// 地址: 0x432334
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HICON hIcon = *(arg1 + 8)

if (hIcon != 0)
    DestroyIcon(hIcon)

*(arg1 + 8) = 0
return 0
