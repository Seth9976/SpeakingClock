// 函数: sub_473950
// 地址: 0x473950
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
*(esp_1 - 4) = 0
(*(*arg1 + 0xf0))()
void* esp_3 = esp_1
sub_46cdc4(arg1, 0)
sub_46f3d4(arg1, 5)
int32_t edx_2
edx_2.b = 1
int32_t edx_3
uint32_t ebx_2
void* ebp_1
edx_3, ebx_2, ebp_1 = sub_45e3b0(arg1, edx_2)
edx_3.b = 3
int32_t* result = sub_46f7f4(ebx_2, edx_3)

if (*(ebp_1 - 1) != 0)
    sub_404024(result)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_3
    esp_3 += 0x10

*esp_3
*(esp_3 + 4)
*(esp_3 + 8)
*(esp_3 + 0xc)
return result
