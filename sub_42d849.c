// 函数: sub_42d849
// 地址: 0x42d849
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
*(arg1[-0x10] + 8)
sub_402ec4(arg1[-0xb])
fsbase->NtTib.ExceptionList = arg3
arg1[-5]
int32_t result = sub_402ec4(arg1[-4])
*arg1
return result
