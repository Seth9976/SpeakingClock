// 函数: sub_421740
// 地址: 0x421740
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_24
__builtin_memset(&var_24, 0, 0x20)
int32_t ebx
int32_t var_28 = ebx
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14
sub_416c78(*(arg1 - 4), *(arg1 - 8), &var_14)

if (*(arg1 - 9) == 0)
    sub_415898(&var_14)
else
    sub_416c78(*(arg1 - 0x10), *(arg1 - 8), &var_24)
    sub_41590c(&var_14, &var_24)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_2c_1)(int32_t* arg1 @ ebp) = sub_4217ce
int32_t* result = &var_24
sub_405724(result, 0x4010cc, 2)
return result
