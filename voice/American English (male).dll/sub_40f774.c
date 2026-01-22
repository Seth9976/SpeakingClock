// 函数: sub_40f774
// 地址: 0x40f774
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t* esp_1 = &var_c
int32_t ecx

if (arg2.b != 0)
    void var_1c
    esp_1 = &var_1c
    arg1 = sub_4030f8(ecx, arg2)

int32_t ecx_1
int32_t edx
ecx_1, edx = sub_402e80(ecx, 0)
edx.b = 1
arg1[1] = sub_402e80(ecx_1, edx)
*(esp_1 - 4) = &arg1[2]
InitializeCriticalSection()
void* esp_3 = esp_1
int32_t edx_1
edx_1.b = 1
int32_t* eax_4 = sub_40f5f4(sub_40f441+0x14f, edx_1, &data_40f118)
sub_40f918(arg1[1], eax_4)
eax_4[4].b = 1

if (arg2.b != 0)
    sub_403150(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_3
    esp_3 += 0x10

*esp_3
*(esp_3 + 4)
*(esp_3 + 8)
return arg1
