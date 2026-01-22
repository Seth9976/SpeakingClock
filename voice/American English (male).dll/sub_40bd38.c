// 函数: sub_40bd38
// 地址: 0x40bd38
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
void* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0x400)
    int32_t ecx
    sub_403c74(ecx, arg1)
    *(((sub_409654(var_8, arg3) & 0x7f) << 2) + &data_413314)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_40bd99
int32_t* result = &var_8
sub_4039ec(result)
return result
