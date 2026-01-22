// 函数: sub_42c8e4
// 地址: 0x42c8e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HGDIOBJ h = sub_42b8e8(*(arg1 + 0x10))
SelectObject(*(arg1 + 4), h)
return SetROP2(*(arg1 + 4), zx.d(*((zx.d(*(*(arg1 + 0x10) + 0x18)) << 1) + &data_4aaed8)))
