// 函数: sub_4622bc
// 地址: 0x4622bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((*(arg1[-3] + 0x1c) & 0x10) == 0)
    void* eax = arg1[-1]
    void* edx_2 = *(arg1[-1] + 0x14)
    *(eax + 0x30) = *(edx_2 + 0x38)
    *(eax + 0x34) = *(edx_2 + 0x3c)
    void* eax_2 = *(arg1[-1] + 0x14)
    *(eax_2 + 0x3c) = arg1[-1]
    *(eax_2 + 0x38) = sub_463f60

void* esp

if (*(arg1 - 5) != 0)
    sub_404024(arg1[-1])
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    void arg_10
    esp = &arg_10

*esp
*(esp + 4)
*(esp + 8)
*arg1
return arg1[-1]
