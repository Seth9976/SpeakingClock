// 函数: sub_4946cc
// 地址: 0x4946cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t* esp = &var_c

if (arg2.b != 0)
    void var_1c
    esp = &var_1c
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

sub_4866c0(arg1, 0)
int32_t edx
edx.b = 1
int32_t* eax_1
int32_t edx_1
eax_1, edx_1 = sub_430618(sub_42a104+0x140, edx)
arg1[6] = eax_1
eax_1[5] = arg1
edx_1.w = 0xfffd
eax_1[4] = sub_403e7c(arg1, edx_1)
edx_1.b = 1
int32_t* eax_4
int32_t edx_2
eax_4, edx_2 = sub_430618(sub_42a104+0x140, edx_1)
arg1[9] = eax_4
edx_2.b = 1
int32_t* eax_5
int32_t edx_3
eax_5, edx_3 = sub_48ce70(sub_48c8fe+0x192, edx_2)
arg1[7] = eax_5
eax_5[3] = arg1
edx_3.w = 0xfffd
eax_5[2] = sub_403e7c(arg1, edx_3)
arg1[8].b = 2
*(arg1 + 0x21) = 3

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
return arg1
