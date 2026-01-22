// 函数: sub_425340
// 地址: 0x425340
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

int32_t ecx_1
int32_t edx
ecx_1, edx = sub_403c38(ecx, 0)
edx.b = 1
int32_t eax_2
int32_t ecx_2
int32_t edx_1
eax_2, ecx_2, edx_1 = sub_403c38(ecx_1, edx)
arg1[4] = eax_2
edx_1.b = 1
arg1[5] = sub_403c38(ecx_2, edx_1)
sub_404b88(&arg1[8])
arg1[6] = 1

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
