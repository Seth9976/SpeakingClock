// 函数: sub_4221cc
// 地址: 0x4221cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int32_t var_10 = 0
int32_t var_14 = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_416c78(*(arg1 - 0x10), *(arg1 - 8), &var_14)
sub_421940(arg1)
long double x87_r0
sub_422388(*(arg1 - 4), &var_14, x87_r0)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_42222c
int32_t* result = &var_14
sub_4107c4(result)
return result
