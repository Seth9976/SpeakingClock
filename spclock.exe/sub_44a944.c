// 函数: sub_44a944
// 地址: 0x44a944
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 = arg1 & 0x1fff
*arg3 = 0

if ((arg1:1.b & 0x20) != 0)
    *arg3 |= 1

if ((arg1:1.b & 0x40) != 0)
    *arg3 |= 4

if ((arg1:1.b & 0x80) != 0)
    *arg3 |= 2

return 0
