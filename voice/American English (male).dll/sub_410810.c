// 函数: sub_410810
// 地址: 0x410810
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_10 = 0
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_4118a8()
sub_40ffe8(arg1)
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40338c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x44))(ExceptionList, var_24, var_20, ExceptionList_1, var_18, var_14, var_10, arg2)

while (sub_4117fc(ebp_1[-2]) == 0)
    ebp_1 = sub_4118f4(ebp_1[-2], &ebp_1[-3])
    ebp_1[-3]
    (*(*ebp_1[-1] + 0x38))(arg1)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_410896
return sub_4100a4(ebp_1[-1])
