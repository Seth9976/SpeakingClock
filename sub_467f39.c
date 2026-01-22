// 函数: sub_467f39
// 地址: 0x467f39
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_403c68(arg1[-4])
fsbase->NtTib.ExceptionList = arg3
int32_t result = sub_403c68(arg1[-2])
*arg1
return result
