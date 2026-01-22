// 函数: sub_446d98
// 地址: 0x446d98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esp

if (arg2.b != 0)
    void var_10
    esp = &var_10
    arg1 = sub_403fcc(arg3, arg2)

arg1[3] = arg3
arg1[4].b = 1

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
