// 函数: sub_41b148
// 地址: 0x41b148
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t* esp = &var_c

if (arg2.b != 0)
    void var_1c
    esp = &var_1c
    arg3 = sub_403fcc(arg1, arg2)

arg3[6] = arg1
sub_41ac50(arg3, 0, arg4)

if (arg2.b != 0)
    sub_404024(arg3)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
return arg3
