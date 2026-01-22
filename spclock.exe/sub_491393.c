// 函数: sub_491393
// 地址: 0x491393
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_404bac(&arg1[-6], 2)
sub_404b88(&arg1[-1])
int32_t arg_c
int32_t* esp = &arg_c

if (*(arg1 - 9) != 0)
    sub_404024(arg1[-2])
    fsbase->NtTib.ExceptionList = arg_c
    void arg_1c
    esp = &arg_1c

*esp
*arg1
return arg1[-2]
