// 函数: sub_4102e8
// 地址: 0x4102e8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x1c))(ExceptionList, var_14, var_10)
sub_407188(sub_403e88(var_8))
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_410334
int32_t* result = &var_8
sub_4039ec(result)
return result
