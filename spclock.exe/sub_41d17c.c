// 函数: sub_41d17c
// 地址: 0x41d17c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
int32_t* esp_1 = &var_10

if (arg2.b != 0)
    void var_20
    esp_1 = &var_20
    arg3 = sub_403fcc(arg1, arg2)

sub_403c38(arg1, 0)
*(esp_1 - 4) = arg4
*(esp_1 - 8) = 0
sub_41d2c8(sub_405018(arg5), arg1, arg3)
void* esp_4 = esp_1

if (arg2.b != 0)
    sub_404024(arg3)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_4
    esp_4 += 0x10

*esp_4
*(esp_4 + 4)
*(esp_4 + 8)
*(esp_4 + 0xc)
return arg3
