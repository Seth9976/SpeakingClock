// 函数: sub_450d13
// 地址: 0x450d13
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_403c68(arg1[-5])
fsbase->NtTib.ExceptionList = arg3
ReleaseDC(*(arg1[-1] + 0x10), arg1[-7])
fsbase->NtTib.ExceptionList = arg5
sub_404b88(&arg1[-0xc])
*arg1
return &arg1[-0xc]
