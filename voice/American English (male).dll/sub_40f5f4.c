// 函数: sub_40f5f4
// 地址: 0x40f5f4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* esp = &var_14

if (arg2.b != 0)
    void var_24
    esp = &var_24
    arg1 = sub_4030f8(arg3, arg2)

var_8:3.b = arg2.b
int32_t ecx
int32_t edx
ecx, edx = sub_402e80(arg3, 0)
edx.b = 1
int32_t eax_2
int32_t ecx_1
int32_t edx_1
eax_2, ecx_1, edx_1 = sub_402e80(ecx, edx)
arg1[1] = eax_2
edx_1.b = 1
int32_t eax_4
int32_t ecx_2
int32_t edx_2
eax_4, ecx_2, edx_2 = sub_402e80(ecx_1, edx_1)
arg1[2] = eax_4
edx_2.b = 1
int32_t* eax_6 = sub_402e80(ecx_2, edx_2)
arg1[3] = eax_6
sub_40f918(eax_6, arg3)

if (var_8:3.b != 0)
    sub_403150(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
esp[4]
return arg1
