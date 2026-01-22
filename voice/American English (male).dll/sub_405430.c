// 函数: sub_405430
// 地址: 0x405430
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
char* var_14 = nullptr
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void lCData
GetLocaleInfoA(arg1, 0x1004, &lCData, 7)
sub_403c5c(&var_14, &lCData, 7)
int32_t var_8
sub_402944(var_14, &var_8)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_1c_1)(int32_t* arg1 @ ebp) = sub_40549d
char** result = &var_14
sub_4039ec(result)
return result
