// 函数: sub_49df50
// 地址: 0x49df50
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

int32_t ecx_1 = sub_403c38(ecx, 0)
*(esp_1 - 4) = 0
*(esp_1 - 8) = 0
sub_49e024(ecx_1, 0x3e8, arg1)
void* esp_4 = esp_1

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_4
    esp_4 += 0x10

*esp_4
*(esp_4 + 4)
return arg1
