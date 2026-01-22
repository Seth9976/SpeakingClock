// 函数: sub_40f8ac
// 地址: 0x40f8ac
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
sub_40f844(data_414858)
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40f85c(data_414858, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_40f8f5
return sub_40f850(data_414858)
