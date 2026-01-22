// 函数: sub_40ceec
// 地址: 0x40ceec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
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
    arg1 = sub_403fcc(ecx, arg2)

*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
*(esp_1 - 0x10) = &var_8
sub_40a37c(arg3, arg4, ecx)
sub_404bdc(arg1 + 4, var_8)
*(esp_1 - 4)
fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
*(esp_1 - 4) = sub_40cf4d
int64_t** result = &var_8
sub_404b88(result)
return result
