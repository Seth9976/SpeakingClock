// 函数: sub_487144
// 地址: 0x487144
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

sub_4866c0(arg1, 0)
arg1[6].b = 0
*(arg1 + 0x19) = 1
*(arg1 + 0x1a) = 1
arg1[7] = 0xff000014
arg1[8] = 0xff000010
arg1[9].b = 0
arg1[0xa] = 0
*(arg1 + 0x25) = 2

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
