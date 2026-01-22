// 函数: sub_491c60
// 地址: 0x491c60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* esp_1 = &var_10

if (arg2.b != 0)
    void var_20
    esp_1 = &var_20
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
sub_409340(sub_491920(arg1, 0), &var_8)
*(esp_1 - 0x10) = sub_405018(var_8)
*(arg1 + 0x4a) = GlobalAddAtomA()
*(esp_1 - 0x10) = arg1
*(esp_1 - 0x14) = sub_491bc4
arg1[0x16] = sub_46bd60(&var_4)
arg1[0x12].b = 1
*(esp_1 - 4)
fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
*(esp_1 - 4) = sub_491cd9
int32_t* result = &var_8
sub_404b88(result)
return result
