// 函数: sub_41f130
// 地址: 0x41f130
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
sub_4202e0(*(arg1 - 4), &var_14)
sub_416cb8(*(arg1 - 8), *(arg1 - 0xc), &var_14)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_18_1)(int32_t* arg1 @ ebp) = sub_41f186
int32_t* result = &var_14
sub_4107c4(result)
return result
