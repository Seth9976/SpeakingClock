// 函数: sub_41ac50
// 地址: 0x41ac50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp = &var_8

if (arg2.b != 0)
    void var_18
    esp = &var_18
    arg1 = sub_403fcc(arg3, arg2)

char ebx_1 = arg2.b
arg1[1] = arg3
arg2.b = 1
arg1[2] = sub_403c38(arg3, arg2)
int32_t* result = sub_41aa08(arg1)

if (ebx_1 != 0)
    sub_404024(result)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return result
