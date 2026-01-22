// 函数: sub_42b724
// 地址: 0x42b724
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

int32_t eax_1
char ebx_2
eax_1, ebx_2 = sub_42a590(data_4b1a98, 0x4aaea4)
arg1[4] = eax_1
arg1[6].b = 4

if (ebx_2 != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
