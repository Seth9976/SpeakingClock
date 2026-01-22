// 函数: sub_45a640
// 地址: 0x45a640
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t* esp_1 = &var_14
int64_t* var_c = nullptr

if (arg2.b != 0)
    void var_24
    esp_1 = &var_24
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

char var_5 = arg2.b
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
sub_456638(arg1, 0)
*(esp_1 - 0x10) = arg1
*(esp_1 - 0x14) = sub_45c554
int32_t eax_1
int32_t edx
eax_1, edx = sub_424a14()
arg1[0x70] = eax_1
edx.b = 1
int32_t* eax_2 = sub_42ba08(&data_429b1c, edx)
arg1[0x69] = eax_2
sub_42bbb0(eax_2, arg1[0x1c])
*(arg1 + 0x1dd) = 1
arg1[0x75] = 0xffffffff
arg1[0x6e].b = 3

if (*(data_4ac4e0 + 4) != 0x11)
    sub_474564(*data_4ac4b8, &var_c)
    sub_404bdc(&arg1[0x6f], var_c)
else
    sub_404b88(&arg1[0x6f])

*(arg1 + 0x1db) = 0
*(arg1 + 0x192) = 0xf
*(arg1 + 0x193) = 2
arg1[0x65].b = 1
arg1[0x66] = 1
arg1[0x56].b = 1
int32_t edx_2
edx_2.b = 1
int32_t* eax_9 = sub_465308(&data_45204c, edx_2, arg1)
arg1[0x68] = eax_9
eax_9[7] = arg1
eax_9[6] = sub_460da4
*(esp_1 - 4)
fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
*(esp_1 - 4) = sub_45a761
int64_t** result = &var_c
sub_404b88(result)
return result
