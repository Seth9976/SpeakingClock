// 函数: sub_4894c0
// 地址: 0x4894c0
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

int32_t ecx_1
int32_t edx
ecx_1, edx = sub_486db0(arg1, 0)
arg1[0x14].b = 0
edx.b = 1
arg1[0x16] = sub_403c38(ecx_1, edx)
*(arg1 + 0x52) = 0
sub_404b88(&arg1[0x15])
*(arg1 + 0x51) = 2

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
