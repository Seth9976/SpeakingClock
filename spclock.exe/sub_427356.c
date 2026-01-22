// 函数: sub_427356
// 地址: 0x427356
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404598(__return_addr)
TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_404b88(&arg1[-1])
*arg1
return fconvert.t(*(arg1 - 0x10))
