// 函数: sub_46cb44
// 地址: 0x46cb44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp_1 = &var_8

if (arg2.b != 0)
    void var_18
    esp_1 = &var_18
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

sub_45a640(arg1, 0)
arg1[0x14] |= 0x20000
*(esp_1 - 4) = 0
int32_t edx
edx.b = 1
int32_t eax_4
int32_t edx_1
eax_4, edx_1 = sub_46bfa4(arg1, edx, &data_46978c)
arg1[0x94] = eax_4
*(esp_1 - 4) = 1
edx_1.b = 1
void* esp_5 = esp_1
arg1[0x95] = sub_46bfa4(arg1, edx_1, &data_46978c)
arg1[0x96].b = 0

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_5
    esp_5 += 0x10

*esp_5
*(esp_5 + 4)
return arg1
