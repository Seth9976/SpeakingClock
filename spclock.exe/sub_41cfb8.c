// 函数: sub_41cfb8
// 地址: 0x41cfb8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg3 u< 1)
    *(arg1 + 0xc) = arg2
else if (arg3 == 1)
    *(arg1 + 0xc) += arg2
else if (arg3 == 2)
    *(arg1 + 0xc) = arg2 + *(arg1 + 8)

return *(arg1 + 0xc)
