// 函数: sub_42a518
// 地址: 0x42a518
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp_1 = &var_8

if (arg2.b != 0)
    void var_18
    esp_1 = &var_18
    arg1 = sub_403fcc(arg3, arg2)

arg1[8].w = arg3.w
*(esp_1 - 4) = &arg1[2]
InitializeCriticalSection()
void* esp_3 = esp_1

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_3
    esp_3 += 0x10

*esp_3
*(esp_3 + 4)
return arg1
