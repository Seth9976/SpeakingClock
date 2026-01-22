// 函数: sub_422dd0
// 地址: 0x422dd0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t* esp_1 = &var_1c
void* var_14 = nullptr

if (arg2.b != 0)
    void var_2c
    esp_1 = &var_2c
    arg1 = sub_403fcc(arg3, arg2)

char ebx_1 = arg3.b
char var_5 = arg2.b
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
sub_403c38(arg3, 0)
sub_422b38()
*(arg1 + 0xe) = ebx_1
*(arg1 + 0xc) = ebx_1
esp_1[4] = arg1
esp_1[3] = 4
esp_1[2] = arg1 + 8
int32_t eax_3 = sub_404b0c(sub_422d28, 0, 0)
void* esp_9 = &esp_1[5]
*(arg1 + 4) = eax_3

if (eax_3 == 0)
    sub_40c69c(GetLastError(), &var_14)
    void* var_10 = var_14
    char var_c_1 = 0xb
    *(esp_9 - 4) = &var_10
    *(esp_9 - 8) = 0
    int32_t edx_2
    edx_2.b = 1
    int32_t eax_7
    eax_7, ebp_1 = sub_40cfa8(0x4184d0, edx_2, data_4ac444)
    sub_40451c(eax_7)

*(esp_9 + 8)
fsbase->NtTib.ExceptionList = *esp_9
*(esp_9 + 8) = sub_422e81
sub_404b88(&ebp_1[-4])
return &ebp_1[-4]
