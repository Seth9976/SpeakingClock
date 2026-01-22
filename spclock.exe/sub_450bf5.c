// 函数: sub_450bf5
// 地址: 0x450bf5
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_403c68(arg1[-5])
fsbase->NtTib.ExceptionList = arg3
sub_404b88(&arg1[-0xc])
*arg1
return &arg1[-0xc]
