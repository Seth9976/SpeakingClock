// 函数: sub_419878
// 地址: 0x419878
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp = &var_4

if (arg2.b != 0)
    void var_14
    esp = &var_14
    arg3 = sub_403fcc(arg1, arg2)

arg3[1] = arg1
arg3[2] = arg5
arg3[3] = arg4

if (arg2.b != 0)
    sub_404024(arg3)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
