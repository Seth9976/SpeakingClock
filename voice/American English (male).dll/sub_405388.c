// 函数: sub_405388
// 地址: 0x405388
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
int32_t ecx
sub_404148(ecx, arg1)
void* ebp_1 = sub_405238(var_8, arg2)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4053d2
sub_403ffc(ebp_1 - 4)
return ebp_1 - 4
