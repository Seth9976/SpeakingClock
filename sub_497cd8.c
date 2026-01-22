// 函数: sub_497cd8
// 地址: 0x497cd8
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

*(esp_1 - 4) = 0x497880
sub_41b148(ecx, 0, arg1)
void* esp_3 = esp_1

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_3
    esp_3 += 0x10

*esp_3
*(esp_3 + 4)
return arg1
