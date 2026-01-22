// 函数: sub_418c54
// 地址: 0x418c54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* esp = &var_14

if (arg2.b != 0)
    void var_24
    esp = &var_24
    arg1 = sub_403fcc(arg3, arg2)

var_8:3.b = arg2.b
int32_t ecx
int32_t edx
ecx, edx = sub_403c38(arg3, 0)
edx.b = 1
int32_t* eax_2 = sub_403c38(ecx, edx)
arg1[3] = eax_2
sub_419f9c(eax_2, arg3)

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
esp[4]
return arg1
