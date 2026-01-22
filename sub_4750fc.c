// 函数: sub_4750fc
// 地址: 0x4750fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10c = ebx
int32_t esi
int32_t var_110 = esi
int32_t* esp_1 = &var_110
int32_t* ecx

if (arg2.b != 0)
    void var_120
    esp_1 = &var_120
    arg1 = sub_403fcc(ecx, arg2)

char var_5 = arg2.b
int32_t ecx_1
int32_t edx
ecx_1, edx = sub_423334(arg1, 0, ecx)

if (*(data_4ac22c + 2) == 0)
    void* eax_2 = data_4ac22c
    *(eax_2 + 4) = arg1
    *eax_2 = sub_476e5c

if (*(data_4ac320 + 2) == 0)
    void* eax_4 = data_4ac320
    *(eax_4 + 4) = arg1
    *eax_4 = sub_477068

arg1[0xd].b = 0
edx.b = 1
int32_t eax_6
int32_t ecx_2
int32_t edx_1
eax_6, ecx_2, edx_1 = sub_403c38(ecx_1, edx)
arg1[0x24] = eax_6
edx_1.b = 1
int32_t eax_8
int32_t ecx_3
int32_t edx_2
eax_8, ecx_3, edx_2 = sub_403c38(ecx_2, edx_1)
arg1[0x26] = eax_8
edx_2.b = 1
int32_t eax_10
int32_t edx_3
eax_10, edx_3 = sub_403c38(ecx_3, edx_2)
arg1[0x2c] = eax_10
arg1[0x18] = 0
arg1[0x21] = 0
arg1[0x17] = 0xff000018
arg1[0x1e] = 0x1f4
arg1[0x1f].b = 1
arg1[0x20] = 0
arg1[0x1d] = 0x9c4
arg1[0x22].b = 0
*(arg1 + 0xa5) = 1
arg1[0x2f].b = 1
edx_3.b = 1
int32_t* eax_11 = sub_43234c(sub_42a369+0x23, edx_3)
arg1[0x28] = eax_11
*(esp_1 - 4) = &data_47530c
*(esp_1 - 8) = *data_4ac118
int32_t* result
int32_t* ebp_1
result, ebp_1 = sub_432720(eax_11, LoadIconA())
void* eax_16 = result[0x28]
*(eax_16 + 0x14) = result
*(eax_16 + 0x10) = sub_477834
*(esp_1 - 4) = 0x100
*(esp_1 - 8) = ebp_1 - 0x101
*(esp_1 - 0xc) = *data_4ac118
GetModuleFileNameA()
*(esp_1 - 4) = ebp_1 - 0x101
*(esp_1 - 8) = ebp_1 - 0x101
OemToCharA()
void* eax_23 = sub_40dd80(ebp_1 - 0x101, 0x5c)

if (eax_23 != 0)
    sub_409ca0(ebp_1 - 0x101, eax_23 + 1)

void* eax_26 = sub_40ddb4(ebp_1 - 0x101, 0x2e)

if (eax_26 != 0)
    *eax_26 = 0

*(esp_1 - 4) = ebp_1 - 0x101
*(esp_1 - 4) = CharNextA()
CharLowerA()
sub_404df8(&result[0x23], ebp_1 - 0x101, 0x100)
result[0x35].b = 0
*(esp_1 - 4) = result
*(esp_1 - 8) = sub_4768d0
void* esp_18 = esp_1
result[0x32] = sub_424ad0()

if (*data_4abfa4 == 0)
    ebp_1 = sub_475450(result)

*(result + 0x59) = 1
*(result + 0x5a) = 1
*(result + 0x5b) = 1
*(result + 0xa6) = 1
result[0x2a] = 0
sub_477a48(result)
sub_4785ac(result)

if (*(ebp_1 - 1) != 0)
    sub_404024(result)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_18
    esp_18 += 0x10

*esp_18
*(esp_18 + 4)
*ebp_1
return result
