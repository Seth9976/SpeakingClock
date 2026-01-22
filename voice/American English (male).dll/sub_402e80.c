// 函数: sub_402e80
// 地址: 0x402e80
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* eax
void* esp

if (arg2.b != 0)
    void var_10
    esp = &var_10
    eax = sub_4030f8(arg1, arg2)

if (arg2.b != 0)
    sub_403150(eax)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
