// 函数: sub_409fa4
// 地址: 0x409fa4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

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
    arg1 = sub_4030f8(arg3, arg2)

sub_4053d8(arg3, &arg1[1])

if (arg2.b != 0)
    sub_403150(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
return arg1
