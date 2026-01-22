// 函数: sub_410628
// 地址: 0x410628
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t esi
int32_t var_c = esi
int32_t ecx_1 = arg2
arg2.b = 1
int32_t* eax = sub_4114b8(ecx_1, arg2, sub_40f441+0xdb, 0x20)
int32_t* var_10_1 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x6c))(ExceptionList, var_14, var_10_1)
fsbase->NtTib.ExceptionList = eax
__return_addr = sub_410677
return sub_402eb0(eax)
