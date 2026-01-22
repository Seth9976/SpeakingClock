// 函数: sub_42c0c9
// 地址: 0x42c0c9
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_42c608(sub_430bec(arg1[-2]))
(*(*arg1[-1] + 0xc))()
fsbase->NtTib.ExceptionList = arg3
int32_t result = sub_42c608(arg1[-1])
*arg1
return result
