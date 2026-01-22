// 函数: sub_484bde
// 地址: 0x484bde
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_403c68(*(arg1[-2] + 0x20))
*(arg1[-2] + 0x20) = 0
sub_404544()
sub_404598(arg2)
(*(**(arg1[-2] + 0x18) + 0xd8))()
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2
sub_404b88(&arg1[-3])
sub_404b88(&arg1[-1])
*arg1
return &arg1[-1]
