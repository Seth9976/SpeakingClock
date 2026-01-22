// 函数: sub_41e148
// 地址: 0x41e148
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_41fad0(arg1, &var_8)

if (sub_4054e8(var_8) s> 1)
    sub_41da5c()

*var_8
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_41e19b
uint32_t* result = &var_8
sub_405368(result)
return result
