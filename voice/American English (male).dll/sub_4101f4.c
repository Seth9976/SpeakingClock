// 函数: sub_4101f4
// 地址: 0x4101f4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t __saved_edx
int32_t __saved_edx_4 = __saved_edx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t var_14 = 0
int32_t var_10 = 0
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_40ffe8(arg1)
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40338c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0xc))(ExceptionList, var_34, var_30, ExceptionList_1, var_28, var_24)
int32_t var_c = (*(*arg1 + 0x18))(arg1)
(*(*arg1 + 0xc))()
(*(*arg1 + 0x20))()
(*(*arg1 + 0x18))()
(*(*arg1 + 0x24))()
(*(*arg1 + 0x20))()
(*(*arg1 + 0x24))()
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_4102b1
return sub_4100a4(arg1)
