// 函数: sub_41f889
// 地址: 0x41f889
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebp = sub_41d914(*(arg1 - 8), 0)

if (ebp[-2] == 0)
    sub_403c68(ebp[-3])

sub_404544()
sub_404598(arg2)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2
(*(*data_4b19b4 + 0x18))()
fsbase->NtTib.ExceptionList = arg4
sub_404bac(&ebp[-0xc], 6)
*ebp
return ebp[-3]
