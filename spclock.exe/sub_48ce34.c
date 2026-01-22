// 函数: sub_48ce34
// 地址: 0x48ce34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HGDIOBJ ho = *(arg1 + 0x2c)

if (ho != 0 && DeleteObject(ho) != 0)
    *(arg1 + 0x2c) = 0

return (*(**(arg1 + 0x20) + 8))()
