// 函数: sub_40ce1c
// 地址: 0x40ce1c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
void* var_8 = nullptr
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4053d8(data_4133a8, &var_8)
int32_t edx_1
edx_1.b = 1
sub_4033c4(sub_409ee8(sub_40c49c+0x4a0, edx_1, var_8))
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40ce6d
void** result = &var_8
sub_4039ec(result)
return result
