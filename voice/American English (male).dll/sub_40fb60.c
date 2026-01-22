// 函数: sub_40fb60
// 地址: 0x40fb60
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp_1 = &var_8
int32_t ecx

if (arg2.b != 0)
    void var_18
    esp_1 = &var_18
    arg1 = sub_4030f8(ecx, arg2)

sub_402e80(ecx, 0)
*(esp_1 - 4) = &arg1[2]
int32_t ecx_1
int32_t edx
ecx_1, edx = InitializeCriticalSection()
void* esp_3 = esp_1
edx.b = 1
arg1[1] = sub_402e80(ecx_1, edx)
arg1[8].b = 0

if (arg2.b != 0)
    sub_403150(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_3
    esp_3 += 0x10

*esp_3
*(esp_3 + 4)
return arg1
