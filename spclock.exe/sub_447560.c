// 函数: sub_447560
// 地址: 0x447560
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_46bb4c(arg1[-6])
SetActiveWindow(arg1[-4])
sub_46b8e8(arg1[-7])
fsbase->NtTib.ExceptionList = arg3
sub_406550(arg1[-3] + 0x3c)
fsbase->NtTib.ExceptionList = arg5
sub_405368(&arg1[-0x58])
sub_405e78(&arg1[-0x57], 0x433e38)
sub_405380(&arg1[-0x56], 6)
sub_406550(&arg1[-0x4c])
sub_406550(&arg1[-2])
sub_406550(&arg1[-1])
*arg1
return zx.d(*(arg1 - 0x11))
