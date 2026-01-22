// 函数: sub_4243cc
// 地址: 0x4243cc
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
(*(*data_4b19b4 + 0x14))()
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
*(esp_1 - 0x10) = 0
(*(*arg1 + 0x38))()
void* esp_10 = esp_1 - 0xc

if (sub_403b40(arg1) != 0x418928 && (arg1[7].b & 0x10) == 0)
    if (sub_419d24(arg1) == 0)
        void var_114
        sub_403b48(*arg1, &var_114)
        void* var_14 = &var_114
        char var_10_1 = 4
        *(esp_10 - 4) = &var_14
        *(esp_10 - 8) = 0
        sub_406a30(data_4ac1e8, &var_118)
        int32_t edx_5
        edx_5.b = 1
        int32_t eax_11
        eax_11, ebp_1 = sub_40ceec(0x417478, edx_5)
        sub_40451c(eax_11)
    
    if (*(ebp_1[-1] + 0x50) != 0)
        (*(*ebp_1[-1] + 0x30))()

*(esp_10 + 8)
fsbase->NtTib.ExceptionList = *esp_10
*(esp_10 + 8) = sub_4244cb
return (*(*data_4b19b4 + 0x18))()
