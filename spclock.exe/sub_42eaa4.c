// 函数: sub_42eaa4
// 地址: 0x42eaa4
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

sub_42dcdc(arg1, 0)
arg1[0xb].b = 1
*(arg1 + 0x21) = 1
(*(*arg1 + 8))()

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1 = &esp_1[4]

*esp_1
esp_1[1]
return arg1
