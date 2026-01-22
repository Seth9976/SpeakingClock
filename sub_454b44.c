// 函数: sub_454b44
// 地址: 0x454b44
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
sub_454a34(arg1, 0, ecx)
arg1[0xe].b = 1
int32_t edx
edx.b = 1
arg1[0x12] = sub_42ba08(&data_429b1c, edx)
sub_432d8c(0, 0xffffff)
sub_42bb84()

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
