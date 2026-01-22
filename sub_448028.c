// 函数: sub_448028
// 地址: 0x448028
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t ebx
int32_t var_15c = ebx
int32_t esi
int32_t var_160 = esi
int32_t* esp_1 = &var_160

if (arg2.b != 0)
    void var_170
    esp_1 = &var_170
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

*(esp_1 - 4) = 0
sub_46d55c(arg1, 0)
int32_t var_158 = 0x154
*(esp_1 - 4) = 0
*(esp_1 - 8) = &var_158
*(esp_1 - 0xc) = 0
*(esp_1 - 0x10) = 0x29
void* esp_8 = esp_1

if (SystemParametersInfoA() != 0)
    void var_40
    *(esp_8 - 4) = &var_40
    int32_t eax_2 = CreateFontIndirectA()
    sub_42b52c(arg1[0x1a], eax_2)

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_8
    esp_8 += 0x10

*esp_8
*(esp_8 + 4)
return arg1
