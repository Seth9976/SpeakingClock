// 函数: sub_4a7a00
// 地址: 0x4a7a00
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_1 = &var_4
int32_t i_1 = 0xb
int32_t i

do
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0
    esp_1 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
*(esp_1 - 4) = i_1
int32_t entry_ebx
*(esp_1 - 8) = entry_ebx
*(esp_1 - 0xc) = arg1
*(esp_1 - 0x10) = arg2
int32_t eax
int32_t var_c = eax
*(esp_1 - 0x14) = &var_4
*(esp_1 - 0x18) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0x1c
int32_t edx
edx.b = 1
int32_t* eax_1 = sub_428a78(sub_42891c+0xa8, edx)
*(esp_1 - 0x20) = &var_4
*(esp_1 - 0x24) = j_sub_40443c
*(esp_1 - 0x28) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0x28
sub_428b18(eax_1, 0x80000001)
eax_1[6] = 0xf003f
void* ebp_1 = sub_428b80(eax_1, "\Software\Lux Aeterna\Speaking Clock Lite", 1)
sub_42911c(*(ebp_1 - 0xc), "BinSettings", ebp_1 - 0x10)
sub_404bdc(*(ebp_1 - 8) + 0x454, *(ebp_1 - 0x10))
sub_42911c(*(ebp_1 - 0xc), "LNumSettings", ebp_1 - 0x14)
sub_404bdc(*(ebp_1 - 8) + 0x458, *(ebp_1 - 0x14))
sub_42911c(*(ebp_1 - 0xc), "SNumSettings", ebp_1 - 0x18)
sub_404bdc(*(ebp_1 - 8) + 0x45c, *(ebp_1 - 0x18))
sub_42911c(*(ebp_1 - 0xc), "WaveFileName", ebp_1 - 0x1c)
sub_404bdc(&data_4b1df4, *(ebp_1 - 0x1c))
*(esp_1 - 0x2c) = ebp_1
*(esp_1 - 0x30) = j_sub_404188
*(esp_1 - 0x34) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0x34
sub_42911c(*(ebp_1 - 0xc), "SelLang", ebp_1 - 0x20)
data_4b1e24 = sub_40947c(*(ebp_1 - 0x20))
*(esp_1 - 0x2c)
fsbase->NtTib.ExceptionList = *(esp_1 - 0x34)
sub_42911c(*(ebp_1 - 0xc), "CurrentVer", ebp_1 - 4)
sub_404fb0(*(ebp_1 - 4), "2.6")

if (*(ebp_1 - 4) == 0)
    sub_4290ec(*(ebp_1 - 0xc), "CurrentVer", 0x4a8350)

*(esp_1 - 0x20)
fsbase->NtTib.ExceptionList = *(esp_1 - 0x28)
*(esp_1 - 0x20) = &data_4a7bb0
sub_428ae8(*(ebp_1 - 0xc))
return sub_403c68(*(ebp_1 - 0xc))
