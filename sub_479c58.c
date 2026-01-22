// 函数: sub_479c58
// 地址: 0x479c58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t* esp_1 = &var_c

if (arg2.b != 0)
    void var_1c
    esp_1 = &var_1c
    arg3 = sub_403fcc(arg1, arg2)

*(esp_1 - 4) = arg4
int32_t ecx
int32_t edx_1
ecx, edx_1 = sub_466960(arg1, 0, arg3)
void* esp_3 = esp_1
edx_1.b = 1
arg3[0x20] = sub_403c38(ecx, edx_1)

if (arg2.b != 0)
    sub_404024(arg3)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_3
    esp_3 += 0x10

*esp_3
*(esp_3 + 4)
*(esp_3 + 8)
return arg3
