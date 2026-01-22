// 函数: sub_4114b8
// 地址: 0x4114b8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t* esp_1 = &var_c

if (arg2.b != 0)
    void var_1c
    esp_1 = &var_1c
    arg3 = sub_4030f8(arg1, arg2)

int32_t* result = arg3
arg3.w = arg4
*(esp_1 - 4) = arg3
*(esp_1 - 8) = 0
void* esp_3 = esp_1 - 8
sub_4114fc(result, 0, arg1)

if (arg2.b != 0)
    sub_403150(result)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_3
    esp_3 += 0x10

*esp_3
*(esp_3 + 4)
*(esp_3 + 8)
return result
