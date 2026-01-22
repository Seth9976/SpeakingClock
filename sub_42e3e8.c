// 函数: sub_42e3e8
// 地址: 0x42e3e8
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

char ebx_1 = arg2.b
arg2.b = 1
int32_t eax_1
int32_t ecx_1
int32_t edx
eax_1, ecx_1, edx = sub_403c38(ecx, arg2)
arg1[1] = eax_1
edx.b = 1
arg1[2] = sub_403c38(ecx_1, edx)
sub_42e494(arg1, 3, &data_42a100)
sub_42e494(arg1, 0xe, &data_42a100)
sub_42e494(arg1, 2, 0x42a244)

if (ebx_1 != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
