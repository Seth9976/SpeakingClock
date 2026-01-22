// 函数: sub_454a34
// 地址: 0x454a34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esp

if (arg2.b != 0)
    void var_10
    esp = &var_10
    arg1 = sub_403fcc(arg3, arg2)

arg1[0x10] = arg3

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
