// 函数: sub_487b90
// 地址: 0x487b90
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t* esp_1 = &var_c

if (arg2.b != 0)
    void var_1c
    esp_1 = &var_1c
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

sub_4866c0(arg1, 0)
(*(*arg1 + 0x1c))()

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1 = &esp_1[4]

*esp_1
esp_1[1]
esp_1[2]
return arg1
