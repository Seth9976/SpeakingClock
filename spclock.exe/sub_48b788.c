// 函数: sub_48b788
// 地址: 0x48b788
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_42379c(arg1)

if ((arg1[7].b & 0x10) != 0 && ((arg1[7].b & 0x10) == 0 || *(arg1 + 0x49) == 0))
    return arg1

return (*(*arg1 + 0x38))()
