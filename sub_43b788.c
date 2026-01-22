// 函数: sub_43b788
// 地址: 0x43b788
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t var_c = 0
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int64_t* ebx_1 = arg2
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg2.b = 1
void* ebp_1 = sub_4090b0(ebx_1, arg2.b, &var_8)
LPARAM lParam = *(ebp_1 - 4)
LPARAM lParam_1 = lParam

if (lParam_1 != 0)
    lParam_1 = *(lParam_1 - 4)

*(arg1 + 0x18)
int32_t ecx_1 = sub_457748()
bool eax_2

if (lParam_1 == 0)
    *(arg1 + 0x18)
    sub_4577d8(ecx_1, ebp_1 - 8)
    sub_404fb0(*(ebp_1 - 4), *(ebp_1 - 8))
    eax_2 = lParam_1 != 0
else
    eax_2 = true

if (eax_2 != 0)
    int32_t var_30_1 = 0
    int32_t var_34_1 = 0xc
    struct _EXCEPTION_REGISTRATION_RECORD** esp_2 = &ExceptionList
    
    if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc, 0, lParam) == 0)
        sub_406a30(data_4ac36c, ebp_1 - 0xc)
        int32_t edx_3
        edx_3.b = 1
        sub_40451c(sub_40ceb0(sub_417654+0x48, edx_3, *(ebp_1 - 0xc)))
        esp_2 = &var_8
    
    *(esp_2 - 4) = 0
    sub_458ac8(*(arg1 + 0x18))
    esp_1 = esp_2

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_43b863
sub_404b88(ebp_1 - 0xc)
sub_404b88(ebp_1 - 8)
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
