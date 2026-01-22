// 函数: sub_430618
// 地址: 0x430618
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

int32_t ecx_1
int32_t edx
ecx_1, edx = sub_42dcdc(arg1, 0)
arg1[0xd] = 0x20000000
edx.b = 1
void* eax_2
int32_t edx_1
eax_2, edx_1 = sub_403c38(ecx_1, edx)
arg1[0xa] = eax_2
sub_42fb70(eax_2)

if (data_4aac70 != 0)
    edx_1.b = 1
    (*(*arg1 + 0x70))()

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1 = &esp_1[4]

*esp_1
esp_1[1]
esp_1[2]
return arg1
