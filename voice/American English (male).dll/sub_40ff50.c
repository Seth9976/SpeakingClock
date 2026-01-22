// 函数: sub_40ff50
// 地址: 0x40ff50
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx

if (sub_40303c(arg2, &data_40f1ec) == 0)
    return sub_40fc7c(ecx, arg2)

sub_40ffe8(arg1)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x44))(ExceptionList, var_18, var_14)
arg1[1].b = arg2[1].b
*(arg1 + 7) = *(arg2 + 7)
*(arg1 + 6) = *(arg2 + 6)
*(arg1 + 5) = *(arg2 + 5)
(*(*arg1 + 0x40))(arg1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_40ffe1
return sub_4100a4(arg1)
