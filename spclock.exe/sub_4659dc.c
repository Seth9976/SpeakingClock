// 函数: sub_4659dc
// 地址: 0x4659dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp = &var_8
int32_t ecx

if (arg2.b != 0)
    void var_18
    esp = &var_18
    arg1 = sub_403fcc(ecx, arg2)

sub_403c38(ecx, 0)
*(arg1 + 5) = sub_4333e0()
int32_t* eax_2
eax_2.b = sub_40d724(sub_465a3b+5) u>= 0x60000
arg1[1].b = eax_2.b
sub_466640(arg1)

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
