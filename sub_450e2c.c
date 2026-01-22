// 函数: sub_450e2c
// 地址: 0x450e2c
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

sub_44f71c(arg1, 0, ecx)
arg1[0x16] = 0xffffffff
arg1[0x17] = 0xffffffff
void* eax_1 = arg1[0xd]
*(eax_1 + 0x8c) = arg1
*(eax_1 + 0x88) = *(*arg1 + 0x3c)
arg1[0xe] = *(*data_4ac2fc + 0x30)
*(arg1 + 0x61) = 1
sub_450de8(data_4b1c30, arg1, arg1)

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
