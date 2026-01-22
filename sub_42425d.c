// 函数: sub_42425d
// 地址: 0x42425d
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1[-1] = 0x8000ffff
sub_404598(__return_addr)
TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_406550(&arg1[3])
*arg1
return arg1[-1]
