// 函数: sub_42c8b8
// 地址: 0x42c8b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HGDIOBJ h = sub_42b2f0(*(arg1 + 0xc))
SelectObject(*(arg1 + 4), h)
COLORREF color = sub_42ad8c(*(*(arg1 + 0xc) + 0x18))
return SetTextColor(*(arg1 + 4), color)
