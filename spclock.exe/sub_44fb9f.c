// 函数: sub_44fb9f
// 地址: 0x44fb9f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_403c68(arg1[-3])
fsbase->NtTib.ExceptionList = arg3
sub_404bac(&arg1[-8], 2)
sub_404b88(&arg1[-1])
*arg1
return &arg1[-1]
