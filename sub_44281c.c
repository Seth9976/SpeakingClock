// 函数: sub_44281c
// 地址: 0x44281c
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
sub_460efc(arg1, 0)
arg1[0x14] |= 0x80800
int32_t edx
edx.b = 1
int32_t* eax_3
int32_t edx_1
eax_3, edx_1 = sub_42e53c(sub_429eaa+0xea, edx)
arg1[0x66] = eax_3
eax_3[5] = arg1
eax_3[4] = sub_442d7c
eax_3[9] = arg1
edx_1.w = 0xffc6
eax_3[8] = sub_403e7c(arg1, edx_1)
sub_456efc(arg1, 0x69)
sub_456ec8(arg1, 0x69)

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
