// 函数: sub_468fbc
// 地址: 0x468fbc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp = &var_8

if (arg2.b != 0)
    void var_18
    esp = &var_18
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

sub_423c58(arg1, 0)
*(arg1 + 0x6a) = 1
arg1[0x20] = 0xffffffff
*(arg1 + 0x86) = 1
arg1[0x24] = 0

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
