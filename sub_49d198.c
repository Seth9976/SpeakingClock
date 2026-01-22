// 函数: sub_49d198
// 地址: 0x49d198
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
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
sub_49c414(arg1, 0)
arg1[0x14] |= 0x20
arg1[0xbf].b = 0
int32_t edx
edx.b = 1
int32_t* eax_3
int32_t edx_1
eax_3, edx_1 = sub_494a20(&data_494870, edx)
arg1[0xbe] = eax_3
eax_3[3] = arg1
eax_3[2] = *(*arg1 + 0x15c)
arg1[0xbc].b = 4
edx_1.b = 1
int32_t* eax_6 = sub_487534(sub_4873e4+0x48, edx_1)
arg1[0xbd] = eax_6
eax_6[3] = arg1
eax_6[2] = *(*arg1 + 0x15c)

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
