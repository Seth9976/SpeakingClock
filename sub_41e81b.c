// 函数: sub_41e81b
// 地址: 0x41e81b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_41e390(arg1) != 0)
    sub_403c68(arg1[-5])

sub_404544()
sub_404598(arg2)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2
*(arg1[-2] + 0x2c) = arg1[-9]
*(arg1[-2] + 0x1c) = arg1[-0xa]
fsbase->NtTib.ExceptionList = arg4
sub_404bac(&arg1[-7], 2)
sub_405e78(&arg1[-1], 0x41e254)
*arg1
return arg1[-5]
