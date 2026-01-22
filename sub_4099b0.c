// 函数: sub_4099b0
// 地址: 0x4099b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL hFindFile = *(arg1 + 0x1c)

if (hFindFile != 0xffffffff)
    hFindFile = FindClose(hFindFile)
    *(arg1 + 0x1c) = 0xffffffff

return hFindFile
