// 函数: sub_4228e0
// 地址: 0x4228e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_422834(sub_4069e0(arg2, &var_8), arg2, var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_42292c
char** result = &var_8
sub_404b88(result)
return result
