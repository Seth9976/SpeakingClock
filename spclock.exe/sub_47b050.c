// 函数: sub_47b050
// 地址: 0x47b050
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* esp_1 = &var_14

if (arg2.b != 0)
    void var_24
    esp_1 = &var_24
    arg1 = sub_403fcc(ecx, arg2)

var_8:3.b = arg2.b
arg2.b = 1
int32_t* eax = sub_479e88(0x479c48, arg2)
arg1[0x67] = eax
eax[0xb] = arg1
eax[0xa] = sub_47b978
sub_460efc(arg1, 0)
*(esp_1 - 4) = 0x17
*(esp_1 - 8) = 0x16
(*(*arg1 + 0x88))()
void* esp_4 = esp_1
arg1[0x14] = 0x82
sub_457904(arg1, 1)
sub_457978(arg1, 0xff00000f)
arg1[0x69] = 4
arg1[0x6b] = 0xffffffff
*(arg1 + 0x1a3) = 0
arg1[0x6a].b = 1
data_4abbe8 += 1

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_4
    esp_4 += 0x10

*esp_4
*(esp_4 + 4)
*(esp_4 + 8)
*(esp_4 + 0xc)
*(esp_4 + 0x10)
return arg1
