// 函数: sub_471158
// 地址: 0x471158
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp_1 = &var_8
int32_t* eax = arg1[0x9a]
int32_t* esi_1

if (eax != 0 && arg1[0xa6] == 0)
    esi_1 = eax
else if (arg1[0xc] == 0 || arg1[0xa6] != 0)
    esi_1 = arg1
else
    char var_c_1 = 1
    int32_t var_10 = 0
    esp_1 = &var_10
    int32_t ecx
    ecx.b = 1
    esi_1 = sub_45fd4c(arg1, 0, ecx, var_10.b, var_c_1)
    
    if (esi_1 == 0)
        esi_1 = arg1

*(esp_1 - 4) = sub_45f888(esi_1)
SetFocus()
void* esp_3 = esp_1
int32_t eax_6 = sub_45f888(esi_1)
HWND result = GetFocus()

if (eax_6 == result)
    *(esp_3 - 4) = 0
    result = sub_458ac8(esi_1)

*esp_3
*(esp_3 + 4)
return result
