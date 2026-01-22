// 函数: sub_483898
// 地址: 0x483898
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_48 = ebx
void* var_8 = arg2
sub_405008(var_8)
int32_t* var_4c = &var_4
int32_t (* var_50)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void var_44
int32_t ecx
sub_483730(ecx, &var_44)
int32_t var_40 = 0x20000000
void var_2a
sub_409d34(&var_2a, var_8, 0x1f)
sub_48378c(arg1, &var_44)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_4c_1)(int32_t* arg1 @ ebp) = sub_483902
int32_t* result = &var_8
sub_404b88(result)
return result
