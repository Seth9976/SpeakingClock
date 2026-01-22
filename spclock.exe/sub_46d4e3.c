// 函数: sub_46d4e3
// 地址: 0x46d4e3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_404b88(&arg1[-0x45])
int32_t arg_c
int32_t* esp = &arg_c

if (*(arg1 - 5) != 0)
    sub_404024(arg1[-1])
    fsbase->NtTib.ExceptionList = arg_c
    void arg_1c
    esp = &arg_1c

*esp
*arg1
return arg1[-1]
