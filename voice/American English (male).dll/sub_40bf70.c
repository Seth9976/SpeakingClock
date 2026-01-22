// 函数: sub_40bf70
// 地址: 0x40bf70
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
uint8_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx

if (arg3 != 0)
    *arg3 = 0

int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0x400)
    sub_404148(sub_406dcc((sbb.d(0, 0, arg1 u< 1)).b + 1, 0, &var_8), var_8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_40bfdb
int32_t* result = &var_8
sub_4039ec(result)
return result
