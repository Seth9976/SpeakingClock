// 函数: sub_49e7a8
// 地址: 0x49e7a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp_1 = &var_8
int32_t ecx

if (arg2.b != 0)
    void var_18
    esp_1 = &var_18
    arg1 = sub_403fcc(ecx, arg2)

sub_403c38(ecx, 0)
arg1[1] = 0
*(esp_1 - 4) = arg1
*(esp_1 - 8) = 0x49e870
void* esp_4 = esp_1
arg1[2] = sub_424ad0()

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_4
    esp_4 += 0x10

*esp_4
*(esp_4 + 4)
return arg1
