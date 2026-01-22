// 函数: sub_410918
// 地址: 0x410918
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
(*(*arg1 + 0x1c))(ExceptionList, var_18, var_14)
int32_t eax_2 = sub_403c88(var_8)
sub_4113bc(arg2, var_8, eax_2)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41096c
void** result = &var_8
sub_4039ec(result)
return result
