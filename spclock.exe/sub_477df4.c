// 函数: sub_477df4
// 地址: 0x477df4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
HGDIOBJ ho = arg1[-6]

if (ho != 0)
    DeleteObject(ho)

HGDIOBJ ho_1 = arg1[-7]

if (ho_1 != 0)
    DeleteObject(ho_1)

*arg1
return arg1[-1]
