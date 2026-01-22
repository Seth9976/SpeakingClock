// 函数: sub_46ebd0
// 地址: 0x46ebd0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_403c68(arg1[-3])
fsbase->NtTib.ExceptionList = arg3
int32_t result = ReleaseDC(sub_45f888(arg1[-1]), arg1[-4])
*arg1
return result
