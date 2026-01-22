// 函数: sub_409f24
// 地址: 0x409f24
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
void* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* esp_1 = &var_14
int32_t ecx

if (arg2.b != 0)
    void var_24
    esp_1 = &var_24
    arg1 = sub_4030f8(ecx, arg2)

*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40338c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
*(esp_1 - 0x10) = &var_8
sub_4075f4(arg3, arg4, ecx)
sub_403a40(arg1 + 4, var_8)
*(esp_1 - 4)
fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
*(esp_1 - 4) = sub_409f85
void** result = &var_8
sub_4039ec(result)
return result
