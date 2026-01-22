// 函数: sub_473e7c
// 地址: 0x473e7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ecx
int32_t* var_8 = ecx
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
sub_423334(arg1, 0, ecx)
void* eax_1 = data_4ac090
*(eax_1 + 4) = arg1
*eax_1 = sub_474220
void* eax_2 = data_4ac0a0
*(eax_2 + 4) = arg1
*eax_2 = sub_47422c
sub_474238(arg1)
*(esp_1 - 4) = 0
int32_t eax_4
int32_t ecx_1
int32_t edx
eax_4, ecx_1, edx = GetKeyboardLayout()
arg1[0xf] = eax_4
edx.b = 1
int32_t eax_6
int32_t ecx_2
int32_t edx_1
eax_6, ecx_2, edx_1 = sub_403c38(ecx_1, edx)
arg1[0x13] = eax_6
edx_1.b = 1
int32_t eax_8
int32_t ecx_3
int32_t edx_2
eax_8, ecx_3, edx_2 = sub_403c38(ecx_2, edx_1)
arg1[0x14] = eax_8
edx_2.b = 1
int32_t eax_10
int32_t ecx_4
int32_t edx_3
eax_10, ecx_4, edx_3 = sub_403c38(ecx_3, edx_2)
arg1[0x15] = eax_10
edx_3.b = 1
int32_t eax_12
int32_t ecx_5
int32_t edx_4
eax_12, ecx_5, edx_4 = sub_403c38(ecx_4, edx_3)
arg1[0x16] = eax_12
edx_4.b = 1
arg1[0x1f] = sub_403c38(ecx_5, edx_4)
*(esp_1 - 4) = 0
int32_t eax_15 = GetDC()
*(esp_1 - 4) = 0x5a
*(esp_1 - 8) = eax_15
arg1[0x10] = GetDeviceCaps()
*(esp_1 - 4) = eax_15
*(esp_1 - 8) = 0
ReleaseDC()
*(esp_1 - 4) = arg1[0x16]
*(esp_1 - 8) = sub_46f6e0
*(esp_1 - 0xc) = 0
*(esp_1 - 0x10) = 0
(*data_4ac254)()
void* esp_16 = esp_1
int32_t edx_5
edx_5.b = 1
int32_t* eax_20
int32_t edx_6
eax_20, edx_6 = sub_42b0dc(sub_429834+0x48, edx_5)
arg1[0x21] = eax_20
edx_6.b = 1
int32_t* eax_21
int32_t edx_7
eax_21, edx_7 = sub_42b0dc(sub_429834+0x48, edx_6)
arg1[0x22] = eax_21
edx_7.b = 1
arg1[0x20] = sub_42b0dc(sub_429834+0x48, edx_7)
int32_t* result
void* ebp_1
result, ebp_1 = sub_4746b0(arg1)
void* eax_24 = result[0x21]
*(eax_24 + 0xc) = result
*(eax_24 + 8) = sub_474580
void* eax_25 = result[0x22]
*(eax_25 + 0xc) = result
*(eax_25 + 8) = sub_474580
void* eax_26 = result[0x20]
*(eax_26 + 0xc) = result
*(eax_26 + 8) = sub_474580

if (*(ebp_1 - 1) != 0)
    sub_404024(result)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_16
    esp_16 += 0x10

*esp_16
*(esp_16 + 4)
*(esp_16 + 8)
*(esp_16 + 0xc)
return result
