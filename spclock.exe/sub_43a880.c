// 函数: sub_43a880
// 地址: 0x43a880
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

if (*data_4ac1d0 == 0)
    arg1[0x14] = 0x802b8
else
    arg1[0x14] = 0x802a8

sub_456ec8(arg1, 0x79)
sub_456efc(arg1, 0x19)
sub_45fb58(arg1, 1)
sub_4579cc(arg1, 0)
arg1[0x95].b = 1
*(arg1 + 0x257) = 1
arg1[0x96].b = 1
*(arg1 + 0x259) = 1
sub_43b004(arg1)
arg1[0x9a] = 0xffffffff
arg1[0x9b] = 0xffffffff

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
