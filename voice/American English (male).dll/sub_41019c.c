// 函数: sub_41019c
// 地址: 0x41019c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t __saved_eax
int32_t __saved_eax_1 = __saved_eax
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4053d8(arg2, &var_8)
sub_410164(arg1, var_8)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4101eb
int32_t* result = &var_8
sub_4039ec(result)
return result
