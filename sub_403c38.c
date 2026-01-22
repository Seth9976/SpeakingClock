// 函数: sub_403c38
// 地址: 0x403c38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax
void* esp

if (arg2.b != 0)
    void var_10
    esp = &var_10
    eax = sub_403fcc(arg1, arg2)

if (arg2.b != 0)
    sub_404024(eax)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
