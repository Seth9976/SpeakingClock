// 函数: sub_488ea4
// 地址: 0x488ea4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_34 = ebx
int32_t esi
int32_t var_38 = esi
int64_t* var_1c = nullptr
int32_t var_30 = 0
char ebx_1 = arg2.b
int32_t* var_3c = &var_4
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14
struct _EXCEPTION_REGISTRATION_RECORD* arg_4

if (arg3 == 0)
    arg2.b = 1
    esp_1 = &arg_4
    var_14 = sub_403c38(arg3, arg2)
    void var_18
    char eax_4
    eax_4, arg2 = sub_488d7c(arg1, &var_18, var_14)
    
    if (ebx_1 != eax_4)
        sub_403c68(var_14)
        sub_406a30(data_4ac3c4, &var_30)
        int32_t var_2c = var_30
        char var_28_1 = 0xb
        int32_t var_24_1 = arg1
        char var_20_1 = 0xb
        sub_40a37c(1, &var_2c, "%s: %s", &var_1c)
        esp_1 = &arg_4
        int32_t edx_3
        edx_3.b = 1
        sub_40451c(sub_40ceb0(sub_407f68+0x68, edx_3, var_1c))
else
    var_14 = arg3

*(esp_1 - 4) = 0
arg2.b = 1
int32_t* eax_10 = sub_41cd8c(arg1, arg2, &data_417f68)
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
*(esp_1 - 0x10) = arg_4
char var_9 = sub_488e6c(arg4, var_14, eax_10)
*(esp_1 - 4)
fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
*(esp_1 - 4) = sub_488fa8
int32_t result = sub_403c68(eax_10)

if (arg3 != 0)
    return result

return sub_403c68(var_14)
