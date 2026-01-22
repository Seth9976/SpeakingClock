// 函数: sub_4109ac
// 地址: 0x4109ac
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
sub_403be4(ecx, arg2)
(*(*arg1 + 0x2c))(ExceptionList, var_18, var_14)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4109f6
int32_t* result = &var_8
sub_4039ec(result)
return result
