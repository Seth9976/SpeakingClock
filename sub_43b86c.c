// 函数: sub_43b86c
// 地址: 0x43b86c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
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
sub_43a880(arg1, 0)
sub_456ec8(arg1, 0xb9)
sub_456efc(arg1, 0x59)
int32_t ecx_2
int32_t edx_1
edx_1, ecx_2 = (*(*arg1 + 0x60))()
*(arg1 + 0x276) = 1
*(arg1 + 0x277) = 1
edx_1.b = 1
void* eax_5 = sub_403c38(ecx_2, edx_1)
arg1[0x9c] = eax_5
*(eax_5 + 0x18) = arg1
(*(*arg1 + 0xc8))()

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1 = &esp_1[4]

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return arg1
