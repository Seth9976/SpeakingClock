// 函数: sub_456638
// 地址: 0x456638
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ecx
int32_t* var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* esp = &var_10

if (arg2.b != 0)
    void var_20
    esp = &var_20
    arg1 = sub_403fcc(ecx, arg2)

var_8:3.b = arg2.b
sub_423334(arg1, 0, ecx)
arg1[0xf] = arg1
arg1[0xe] = *(*arg1 + 0x78)
arg1[0x14] = 0xaa
int32_t edx
edx.b = 1
int32_t* eax_3
int32_t edx_1
eax_3, edx_1 = sub_42b0dc(sub_429834+0x48, edx)
arg1[0x1a] = eax_3
eax_3[3] = arg1
eax_3[2] = sub_457888
*(arg1 + 0x61) = 3
edx_1.b = 1
int32_t* eax_4
int32_t edx_2
eax_4, edx_2 = sub_4560c0(sub_451d5a+0x8e, edx_1, arg1)
arg1[0x1d] = eax_4
eax_4[7] = arg1
eax_4[6] = sub_458884
edx_2.b = 1
int32_t* eax_5 = sub_465308(&data_451f34, edx_2, arg1)
arg1[0x1e] = eax_5
eax_5[7] = arg1
eax_5[6] = sub_45a4ec
arg1[0x1c] = 0xff000005
*(arg1 + 0x57) = 1
arg1[0x16].b = 1
*(arg1 + 0x59) = 1
*(arg1 + 0x5a) = 1
*(arg1 + 0x8e) = 1
arg1[0x18].b = 1
*(arg1 + 0x5e) = 0
*(arg1 + 0x7e) = 0xfff4
arg1[0x2b] = 0x46b384
arg1[0x56].b = 1

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
return arg1
