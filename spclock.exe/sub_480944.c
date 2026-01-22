// 函数: sub_480944
// 地址: 0x480944
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_34 = ebx
int32_t esi
int32_t var_38 = esi
int64_t* var_24 = nullptr
char* var_28 = nullptr
int32_t* var_3c = &var_4
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lParam = 8
int32_t ecx
int32_t var_8 = ecx

if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x1306, arg2, &lParam) == 0)
    sub_406a30(data_4abff8, &var_28)
    char* eax_4 = var_28
    WPARAM var_30 = arg2
    char var_2c_1 = 0
    sub_40a37c(0, &var_30, eax_4, &var_24)
    sub_48058c(var_24)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_3c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4809db
return sub_404bac(&var_28, 2)
