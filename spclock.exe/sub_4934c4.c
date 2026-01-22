// 函数: sub_4934c4
// 地址: 0x4934c4
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
sub_486db0(arg1, 0)
int32_t edx
edx.b = 1
int32_t* eax_1
int32_t edx_1
eax_1, edx_1 = sub_492eb0(&data_4927fc, edx)
arg1[0x14] = eax_1
eax_1[0xf] = arg1
edx_1.w = 0xffef
eax_1[0xe] = sub_403e7c(arg1, edx_1)
edx_1.b = 1
int32_t* eax_4
int32_t edx_2
eax_4, edx_2 = sub_48ac70(&data_489a10, edx_1)
arg1[0x15] = eax_4
eax_4[0xf] = arg1
edx_2.w = 0xffef
eax_4[0xe] = sub_403e7c(arg1, edx_2)
edx_2.b = 1
int32_t* eax_7
int32_t edx_3
eax_7, edx_3 = sub_49217c(sub_491e8c+0x48, edx_2)
arg1[0x17] = eax_7
eax_7[0xf] = arg1
edx_3.w = 0xffef
eax_7[0xe] = sub_403e7c(arg1, edx_3)
edx_3.b = 1
int32_t* eax_10
int32_t edx_4
eax_10, edx_4 = sub_492600(sub_4921e8+0x188, edx_3)
arg1[0x16] = eax_10
eax_10[0xf] = arg1
edx_4.w = 0xffef
eax_10[0xe] = sub_403e7c(arg1, edx_4)

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
