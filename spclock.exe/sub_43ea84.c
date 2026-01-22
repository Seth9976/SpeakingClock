// 函数: sub_43ea84
// 地址: 0x43ea84
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

sub_45a640(arg1, 0)
arg1[0x14] = 0x8aa
sub_456ec8(arg1, 0x41)
sub_456efc(arg1, 0x11)
*(arg1 + 0x251) = 1
arg1[0x96].b = 1
sub_43ec54(arg1)

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
