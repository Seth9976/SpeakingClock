// 函数: sub_4481ff
// 地址: 0x4481ff
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

GlobalFree(*(arg1 - 8))
sub_404544()
sub_404598(arg2)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2
CloseClipboard()
fsbase->NtTib.ExceptionList = arg4
sub_404b88(arg1 - 4)
return arg1 - 4
