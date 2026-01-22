// 函数: sub_439d88
// 地址: 0x439d88
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

sub_460efc(arg1, 0)
arg1[0x14] |= 0x800
sub_456ec8(arg1, 0x41)
sub_456efc(arg1, 0x11)
*(arg1 + 0x19d) = 1
arg1[0x68].b = 1

if (sub_465ac4(sub_4659bc()) == 0)
    arg1[0x14] |= 0x40
else
    arg1[0x14] &= 0xffffffbf

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
