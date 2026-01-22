// 函数: sub_40cfa8
// 地址: 0x40cfa8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
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
    arg1 = sub_403fcc(arg3, arg2)

*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
*(esp_1 - 0x10) = &var_8
sub_406a30(arg3, &var_c)
sub_40a37c(arg4, arg5, var_c)
sub_404bdc(arg1 + 4, var_8)
*(esp_1 - 4)
fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
*(esp_1 - 4) = sub_40d01b
return sub_404bac(&var_c, 2)
