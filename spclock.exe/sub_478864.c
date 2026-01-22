// 函数: sub_478864
// 地址: 0x478864
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

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
    arg1 = sub_403fcc(arg3, arg2)

sub_403c38(arg3, 0)
arg1[1] = arg3
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[0xa].b = 0

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
return arg1
