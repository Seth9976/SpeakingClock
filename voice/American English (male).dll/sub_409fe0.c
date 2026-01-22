// 函数: sub_409fe0
// 地址: 0x409fe0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
void* var_8 = nullptr
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t* esp_1 = &var_18

if (arg2.b != 0)
    void var_28
    esp_1 = &var_28
    arg1 = sub_4030f8(arg3, arg2)

*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40338c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
*(esp_1 - 0x10) = &var_8
sub_4053d8(arg3, &var_c)
sub_4075f4(arg4, arg5, var_c)
sub_403a40(arg1 + 4, var_8)
*(esp_1 - 4)
fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
*(esp_1 - 4) = sub_40a053
return sub_403a10(&var_c, 2)
