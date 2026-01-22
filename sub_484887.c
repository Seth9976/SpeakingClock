// 函数: sub_484887
// 地址: 0x484887
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1[-1] = 1
sub_404598(__return_addr)
TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_409eec(arg1[-2])
*arg1
return arg1[-1]
