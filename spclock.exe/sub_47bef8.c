// 函数: sub_47bef8
// 地址: 0x47bef8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* esp = &var_14

if (arg2.b != 0)
    void var_24
    esp = &var_24
    arg1 = sub_403fcc(ecx, arg2)

var_8:3.b = arg2.b
arg2.b = 1
int32_t* eax = sub_479e88(0x479c48, arg2)
arg1[0x99] = eax
eax[0xb] = arg1
eax[0xa] = sub_47c634
sub_43e144(arg1, 0)
int32_t edx
edx.b = 1
arg1[0x98] = sub_42bd40(sub_429971+0x26f, edx)
arg1[0x9a].b = 0
*(arg1 + 0x269) = 0
*(arg1 + 0x26a) = 0
arg1[0x9b] = 4
arg1[0x9c] = 0xffffffff
arg1[0x14] |= 0x4000
arg1[0x90].b = 1

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
esp[4]
return arg1
