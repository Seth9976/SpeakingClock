// 函数: sub_49bbe4
// 地址: 0x49bbe4
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
sub_49b324(arg1, 0)
int32_t edx
edx.b = 1
int32_t* eax_1 = sub_49667c(&data_49604c, edx)
arg1[0xb9] = eax_1
*(eax_1 + 0x39) = 1
eax_1[3] = arg1
eax_1[2] = *(*arg1 + 0x15c)
arg1[0xb0] = 0

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
