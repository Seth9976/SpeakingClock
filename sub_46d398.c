// 函数: sub_46d398
// 地址: 0x46d398
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_11c = ebx
int32_t* esp_1 = &var_11c
int32_t var_118 = 0

if (arg2.b != 0)
    void var_12c
    esp_1 = &var_12c
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

char var_9 = arg2.b
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
(*(**data_4ac4a8 + 0x14))()
esp_1[0x47] = &var_4
esp_1[0x46] = j_sub_40443c
esp_1[0x45] = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &esp_1[0x45]
esp_1[0x44] = 0
(*(*arg1 + 0xf0))()

if (sub_403b40(arg1) == 0x46a498 || (arg1[7].b & 0x10) != 0)
    esp_1[0x4a]
    fsbase->NtTib.ExceptionList = esp_1[0x48]
    esp_1[0x4a] = sub_46d4e3
    return (*(**data_4ac4a8 + 0x18))()

arg1[0xd6].b |= 1
esp_1[0x47] = &var_4
esp_1[0x46] = j_sub_40443c
esp_1[0x45] = fsbase->NtTib.ExceptionList
void* esp_13 = &esp_1[0x45]
fsbase->NtTib.ExceptionList = esp_13

if (sub_419d24(arg1) == 0)
    void var_114
    sub_403b48(*arg1, &var_114)
    void* var_14 = &var_114
    char var_10_1 = 4
    *(esp_13 - 4) = &var_14
    *(esp_13 - 8) = 0
    sub_406a30(data_4ac1e8, &var_118)
    int32_t edx_5
    edx_5.b = 1
    int32_t eax_13
    eax_13, ebp_1 = sub_40ceec(0x417478, edx_5)
    sub_40451c(eax_13)

*(esp_13 + 8)
fsbase->NtTib.ExceptionList = *esp_13
*(esp_13 + 8) = 0x46d4ab
void* result = ebp_1[-1]
*(result + 0x358) &= 0xfe
return result
