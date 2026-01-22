// 函数: sub_42bd40
// 地址: 0x42bd40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t* esp_1 = &var_c
int32_t ecx

if (arg2.b != 0)
    void var_1c
    esp_1 = &var_1c
    arg1 = sub_403fcc(ecx, arg2)

sub_403c38(ecx, 0)
*(esp_1 - 4) = &arg1[0xe]
InitializeCriticalSection()
void* esp_3 = esp_1
int32_t edx
edx.b = 1
int32_t* eax_2
int32_t edx_1
eax_2, edx_1 = sub_42b0dc(sub_429834+0x48, edx)
arg1[3] = eax_2
eax_2[3] = arg1
eax_2[2] = sub_42c990
eax_2[5] = &arg1[0xe]
edx_1.b = 1
int32_t* eax_4
int32_t edx_2
eax_4, edx_2 = sub_42b724(sub_429971+0xab, edx_1)
arg1[4] = eax_4
eax_4[3] = arg1
eax_4[2] = sub_42c9b0
eax_4[5] = &arg1[0xe]
edx_2.b = 1
int32_t* eax_6
struct _EXCEPTION_REGISTRATION_RECORD* ecx_1
eax_6, ecx_1 = sub_42ba08(&data_429b1c, edx_2)
arg1[5] = eax_6
eax_6[3] = arg1
eax_6[2] = sub_42c9d0
eax_6[5] = &arg1[0xe]
arg1[8] = 0xcc0020
arg1[2].b = 0
sub_41a434(data_4b1aa0, arg1, ecx_1)

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_3
    esp_3 += 0x10

*esp_3
*(esp_3 + 4)
*(esp_3 + 8)
return arg1
