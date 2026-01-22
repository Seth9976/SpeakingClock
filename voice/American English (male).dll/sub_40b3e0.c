// 函数: sub_40b3e0
// 地址: 0x40b3e0
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
arg1[3] = 0xffff
*(esp_1 - 4) = 0
*(esp_1 - 8) = 0xffffffff
*(esp_1 - 0xc) = 0xffffffff
*(esp_1 - 0x10) = 0
arg1[4] = CreateEventA()
*(esp_1 - 4) = 0
*(esp_1 - 8) = 0
*(esp_1 - 0xc) = 0
*(esp_1 - 0x10) = 0
int32_t eax_2
int32_t ecx_1
int32_t edx
eax_2, ecx_1, edx = CreateEventA()
void* esp_11 = esp_1
arg1[5] = eax_2
arg1[6] = 0xffffffff
edx.b = 1
arg1[8] = sub_402e80(ecx_1, edx)

if (arg2.b != 0)
    sub_403150(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_11
    esp_11 += 0x10

*esp_11
*(esp_11 + 4)
return arg1
