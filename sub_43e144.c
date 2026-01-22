// 函数: sub_43e144
// 地址: 0x43e144
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

sub_43df34(arg1, 0)
arg1[0x14] = 0xa0
sub_456ec8(arg1, 0x4b)
sub_456efc(arg1, 0x19)
sub_45fb58(arg1, 1)

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
