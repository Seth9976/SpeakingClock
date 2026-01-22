// 函数: sub_40a053
// 地址: 0x40a053
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char entry_ebx
void* esp

if (entry_ebx != 0)
    sub_403150(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    void arg_10
    esp = &arg_10

*esp
*(esp + 4)
*(esp + 8)
*(esp + 0x10)
*(esp + 0x14)
return arg1
