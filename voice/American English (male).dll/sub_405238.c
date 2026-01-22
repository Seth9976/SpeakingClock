// 函数: sub_405238
// 地址: 0x405238
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
void* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4039ec(arg2)
sub_404174(arg1, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4052de
void** result = &var_8
sub_4039ec(result)
return result
