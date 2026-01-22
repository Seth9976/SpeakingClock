// 函数: sub_491cd9
// 地址: 0x491cd9
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char entry_ebx
void* esp

if (entry_ebx != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    void arg_10
    esp = &arg_10

*esp
*(esp + 4)
*(esp + 8)
*(esp + 0xc)
return arg1
