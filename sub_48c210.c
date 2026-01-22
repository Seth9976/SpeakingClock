// 函数: sub_48c210
// 地址: 0x48c210
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

sub_491920(arg1, 0)
*(arg1 + 0x6f) = 2
*(arg1 + 0x6e) = 1
arg1[0x1c].w = 0x3039
*(arg1 + 0x73) = 0
sub_404b88(&arg1[0x15])
arg1[0x12].b = 1
arg1[0x16].b = 0
arg1[0x17] = 0
arg1[0x18].b = 1
sub_404b88(&arg1[0x19])
arg1[0x1b].b = 0
*(arg1 + 0x6d) = 0x10

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
