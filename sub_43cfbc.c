// 函数: sub_43cfbc
// 地址: 0x43cfbc
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
sub_43bed0(arg1, 0)
int32_t ecx_1
int32_t edx_1
edx_1, ecx_1 = (*(*arg1 + 0x10c))()
edx_1.b = 1
void* eax_2 = sub_403c38(ecx_1, edx_1)
arg1[0xa1] = eax_2
*(eax_2 + 0x18) = arg1
arg1[0xa0] = 0x10
*(arg1 + 0x2be) = 0
arg1[0xad] = 0
arg1[0xac].b = 1
arg1[0xb6].b = 0
arg1[0xb7] = 0x1f4

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
