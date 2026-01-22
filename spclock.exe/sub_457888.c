// 函数: sub_457888
// 地址: 0x457888
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x59) = 0
*(arg1 + 0x56) = 0

if (sub_42b550(*(arg1 + 0x68)) != *(arg1 + 0x88))
    *(arg1 + 0x8c) |= 0x10
    *(arg1 + 0x88) = sub_42b550(*(arg1 + 0x68))

sub_458ac8(arg1, 0)
return 0
