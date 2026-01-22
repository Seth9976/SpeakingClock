// 函数: sub_484d34
// 地址: 0x484d34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* esp_1 = &var_10

if (arg2.b != 0)
    void var_20
    esp_1 = &var_20
    arg1 = sub_403fcc(ecx, arg2)

var_8:3.b = arg2.b
sub_43b86c(arg1, 0)
arg1[0x14] |= 0x20000
*(esp_1 - 4) = 0
int32_t edx
edx.b = 1
int32_t eax_4
int32_t edx_1
eax_4, edx_1 = sub_4836e4(arg1, edx, 0x47ea90)
arg1[0xa1] = eax_4
*(esp_1 - 4) = 1
edx_1.b = 1
int32_t eax_6
int32_t edx_2
eax_6, edx_2 = sub_4836e4(arg1, edx_1, 0x47ea90)
arg1[0xa2] = eax_6
edx_2.b = 1
int32_t* eax_7
int32_t ecx_4
int32_t edx_3
eax_7, ecx_4, edx_3 = sub_483ce4(sub_47eafb+0x29, edx_2, arg1)
arg1[0xa3] = eax_7
edx_3.b = 1
void* eax_9 = sub_403c38(ecx_4, edx_3)
arg1[0xa6] = eax_9
*(eax_9 + 0x18) = arg1
sub_45fb58(arg1, 1)
sub_456ec8(arg1, 0xb9)
sub_456efc(arg1, 0x59)
(*(*arg1 + 0x60))()
arg1[0x90].b = 0
arg1[0xaa].b = 1
sub_485498(arg1, 1)
*(esp_1 - 4) = 0
int32_t eax_15 = GetDC()
*(esp_1 - 4) = 0x5a
*(esp_1 - 8) = eax_15
arg1[0xa5] = GetDeviceCaps()
arg1[0xab] = 0x47ecf0
*(esp_1 - 4) = eax_15
*(esp_1 - 8) = 0
ReleaseDC()
arg1[0xa4].b = arg1[0x9d].b
*(esp_1 - 4) = 0
sub_458ac8(arg1)
void* esp_15 = esp_1

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_15
    esp_15 += 0x10

*esp_15
*(esp_15 + 4)
*(esp_15 + 8)
*(esp_15 + 0xc)
return arg1
