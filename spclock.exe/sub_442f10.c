// 函数: sub_442f10
// 地址: 0x442f10
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp_1 = &var_8
int32_t* ecx

if (arg2.b != 0)
    void var_18
    esp_1 = &var_18
    arg1 = sub_403fcc(ecx, arg2)

sub_423334(arg1, 0, ecx)
arg1[0x10].b = 1
arg1[0xc] = 0x3e8
*(esp_1 - 4) = arg1
*(esp_1 - 8) = sub_442f98
void* esp_4 = esp_1
arg1[0xd] = sub_424ad0()

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_4
    esp_4 += 0x10

*esp_4
*(esp_4 + 4)
return arg1
