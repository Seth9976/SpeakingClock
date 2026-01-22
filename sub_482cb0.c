// 函数: sub_482cb0
// 地址: 0x482cb0
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
sub_456ec8(arg1, 0x96)
sub_456efc(arg1, 0x2d)
sub_45fb58(arg1, 1)
arg1[0x99] = 0
arg1[0x9a] = 0xa
arg1[0x9c] = 0
arg1[0x95] = 1
arg1[0x96] = 2
arg1[0x9d].b = 0
arg1[0x9b] = 1
arg1[0x9e] = 0
arg1[0x9f] = 0
arg1[0x97] = 0x14
*(arg1 + 0x251) = 0
*(arg1 + 0x252) = 1
arg1[0x94].b = 0
arg1[0x14] &= 0xffffff7f
arg1[0x98].b = 1
arg1[0xa0].b = 1

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
