// 函数: sub_41f80d
// 地址: 0x41f80d
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
arg2 = &data_41f830
sub_403c68(*(*(arg1 - 4) + 0x84))
arg2 = arg1
int32_t arg_4 = 0x41f855
__return_addr = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &__return_addr
sub_41d748()
fsbase->NtTib.ExceptionList = __return_addr
fsbase->NtTib.ExceptionList = arg3
fsbase->NtTib.ExceptionList = arg5
arg6 = 0x41f8ca
return (*(*data_4b19b4 + 0x18))()
