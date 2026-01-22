// 函数: sub_42c914
// 地址: 0x42c914
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

UnrealizeObject(sub_42bc04(*(arg1 + 0x14)))
HGDIOBJ h = sub_42bc04(*(arg1 + 0x14))
SelectObject(*(arg1 + 4), h)

if (sub_42bce4(*(arg1 + 0x14)) != 0)
    int32_t color_1 = not.d(sub_42ad8c(sub_42bba8(*(arg1 + 0x14))))
    SetBkColor(*(arg1 + 4), color_1)
    return SetBkMode(*(arg1 + 4), 1)

COLORREF color = sub_42ad8c(sub_42bba8(*(arg1 + 0x14)))
SetBkColor(*(arg1 + 4), color)
return SetBkMode(*(arg1 + 4), 2)
