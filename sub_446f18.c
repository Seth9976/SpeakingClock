// 函数: sub_446f18
// 地址: 0x446f18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp = &var_8
int32_t* ecx

if (arg2.b != 0)
    void var_18
    esp = &var_18
    arg1 = sub_403fcc(ecx, arg2)

int32_t ecx_1
int32_t edx
ecx_1, edx = sub_423334(arg1, 0, ecx)
edx.b = 1
int32_t eax_2
int32_t edx_1
eax_2, edx_1 = sub_403c38(ecx_1, edx)
arg1[0x13] = eax_2
arg1[0x14] = 1
edx_1.b = 1
int32_t* eax_3
int32_t edx_2
eax_3, edx_2 = sub_41ac50(sub_444348+0x14c, edx_1, 0x444390)
arg1[0x15] = eax_3
arg1[0x16] = 0
arg1[0x18] = 0
edx_2.b = 1
arg1[0x10] = sub_41ac50(sub_4446be-0x32, edx_2, 0x444540)
sub_406550(&arg1[0x19])
sub_406550(&arg1[0x1a])

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
