// 函数: sub_49f72c
// 地址: 0x49f72c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
var_8 = arg2
sub_405008(var_8)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404bdc(&arg1[0x10], var_8)
(*(*arg1 + 0x3c))(ExceptionList, var_14, var_10)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_49f77b
int64_t** result = &var_8
sub_404b88(result)
return result
