// 函数: sub_491920
// 地址: 0x491920
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp = &var_8
int32_t* ecx

if (arg2.b != 0)
    void var_18
    esp = &var_18
    arg1 = sub_403fcc(ecx, arg2)

sub_423334(arg1, 0, ecx)
arg1[0x10].b = 1

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
