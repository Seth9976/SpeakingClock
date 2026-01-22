// 函数: sub_4a06a8
// 地址: 0x4a06a8
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

sub_403c38(ecx, 0)
int32_t* edx = arg1

if (edx != 0)
    edx -= 0xffffffb8

sub_406568(&data_4b1dcc, edx)
arg1[0x10].b = 0
data_4b1dd0 = 0

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
