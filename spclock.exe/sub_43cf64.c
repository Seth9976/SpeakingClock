// 函数: sub_43cf64
// 地址: 0x43cf64
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
var_8 = arg2
sub_405008(var_8)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(**(arg1 + 0x284) + 0x3c))(ExceptionList, var_18, var_14)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_43cfb4
int32_t* result = &var_8
sub_404b88(result)
return result
