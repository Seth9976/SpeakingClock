// 函数: sub_466960
// 地址: 0x466960
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

sub_423334(arg3, 0, nullptr)
arg3[0xd] = arg1
arg3[0xc] = arg4
(*(*arg3 + 0x34))()

if (arg2.b != 0)
    sub_404024(arg3)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1 = &esp_1[4]

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return arg3
