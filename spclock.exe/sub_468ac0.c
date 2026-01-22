// 函数: sub_468ac0
// 地址: 0x468ac0
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
int32_t ecx_1
int32_t edx
ecx_1, edx = sub_423334(arg1, 0, ecx)
edx.b = 1
int32_t eax_2
int32_t ecx_2
int32_t edx_1
eax_2, ecx_2, edx_1 = sub_403c38(ecx_1, edx)
arg1[0xc] = eax_2
edx_1.b = 1
void* eax_4 = sub_403c38(ecx_2, edx_1)
arg1[0xd] = eax_4
*(eax_4 + 0xc) = arg1
*(eax_4 + 8) = sub_468c44
arg1[0x16].b = 0

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
