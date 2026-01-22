// 函数: sub_430348
// 地址: 0x430348
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

DeleteObject(arg1[-4])
sub_404544()
sub_404598(arg2)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2
DeleteDC(arg1[-7])
ReleaseDC(nullptr, arg1[-6])

if (arg1[-4] != 0)
    GetObjectA(arg1[-4], 0x54, arg1[3])

*arg1
return arg1[-4]
