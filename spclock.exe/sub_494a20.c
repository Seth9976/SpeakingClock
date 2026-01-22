// 函数: sub_494a20
// 地址: 0x494a20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp = &var_8

if (arg2.b != 0)
    void var_18
    esp = &var_18
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

sub_4946cc(arg1, 0)
int32_t edx
edx.b = 1
arg1[0xd] = sub_42ba08(&data_429b1c, edx)
arg1[0xe].b = 5
sub_486708(arg1)
sub_4944a0(arg1, 0)
arg1[0xa].b = 0
sub_486710(arg1, 0)
void* eax_5 = arg1[0xd]
*(eax_5 + 0xc) = arg1
*(esp - 4) = eax_5
int32_t edx_1
edx_1.w = 0xfffd
void* esp_2 = esp
*(*(esp - 4) + 8) = sub_403e7c(arg1, edx_1)

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_2
    esp_2 += 0x10

*esp_2
*(esp_2 + 4)
return arg1
