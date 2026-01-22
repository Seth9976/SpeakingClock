// 函数: sub_49520c
// 地址: 0x49520c
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

int32_t ecx_1
int32_t edx
ecx_1, edx = sub_4866c0(arg1, 0)
arg1[9] = 0
arg1[8] = 0
arg1[6] = 0
edx.b = 1
void* eax_2
int32_t edx_1
eax_2, edx_1 = sub_403c38(ecx_1, edx)
arg1[0xc] = eax_2
*(eax_2 + 0xc) = arg1
*(eax_2 + 8) = sub_4950b0
edx_1.b = 1
int32_t* eax_3
int32_t edx_2
eax_3, edx_2 = sub_494a20(&data_494870, edx_1)
arg1[0xb] = eax_3
eax_3[3] = arg1
edx_2.w = 0xfffd
eax_3[2] = sub_403e7c(arg1, edx_2)
arg1[8] = 0
arg1[9] = 0
arg1[7] = 0x3f19999a
arg1[0xa].b = 0

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
return arg1
