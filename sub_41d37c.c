// 函数: sub_41d37c
// 地址: 0x41d37c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
int32_t* esp = &var_10

if (arg2.b != 0)
    void var_20
    esp = &var_20
    arg3 = sub_403fcc(arg1, arg2)

arg3[1] = arg1
arg3[2] = sub_402ea8(arg4)
arg3[3] = arg4

if (arg2.b != 0)
    sub_404024(arg3)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
return arg3
