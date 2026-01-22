// 函数: sub_473185
// 地址: 0x473185
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr

if (*(data_4b1ce4 + 0x48) != arg1[-6])
    sub_474614(data_4b1ce4, 0)
else
    sub_474614(data_4b1ce4, *(arg1 - 0x12))

sub_46bb4c(arg1[-3])

if (*(*(data_4b1ce4 + 0x7c) + 8) s<= 0)
    *(data_4b1ce4 + 0x78) = 0
else
    *(data_4b1ce4 + 0x78) = sub_41a0ec()
    sub_41a290(*(data_4b1ce4 + 0x7c))

if (arg1[-7] != 0)
    SetActiveWindow(arg1[-7])

sub_46b8e8(arg1[-4])
void* eax_14 = arg1[-1]
*(eax_14 + 0x358) &= 0xf7
fsbase->NtTib.ExceptionList = arg3
sub_4757a0(data_4b1ce0)
fsbase->NtTib.ExceptionList = arg5
sub_404b88(&arg1[-8])
*arg1
return arg1[-2]
