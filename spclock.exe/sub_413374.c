// 函数: sub_413374
// 地址: 0x413374
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
void pvarg
VariantInit(&pvarg)
int32_t* var_24_1 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_410ad8(&pvarg, arg1)
data_4b1988(ExceptionList, var_28, var_24_1)
sub_413424(&pvarg)
int64_t var_c = int.q(arg2)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4133d0
return sub_4107b0(&pvarg)
