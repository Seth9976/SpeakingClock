// 函数: sub_4958d4
// 地址: 0x4958d4
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
eax_1, edx_1 = sub_49520c(&data_494f0c, edx)
arg1[6] = eax_1
eax_1[3] = arg1
edx_1.w = 0xfffd
eax_1[2] = sub_403e7c(arg1, edx_1)
arg1[8].b = 0
*(arg1 + 0x22) = 0
*(arg1 + 0x1f) = 0
*(arg1 + 0x1d) = 0
*(arg1 + 0x21) = 0
*(arg1 + 0x1e) = 0
arg1[7].b = 0
arg1[0xa].w = 0
arg1[9] = 0

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
return arg1
