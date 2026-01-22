// 函数: sub_41067c
// 地址: 0x41067c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t var_c = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_40ffe8(arg1)
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40338c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403adc(&var_c, 0, 
    (**arg2)(ExceptionList, var_28, var_24, ExceptionList_1, var_1c, var_18) - sub_4111b8(arg2))
(*(*arg2 + 0xc))(arg1)
(*(*arg1 + 0x2c))()
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_410703
return sub_4100a4(arg1)
