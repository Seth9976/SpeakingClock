// 函数: sub_4110c0
// 地址: 0x4110c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
void pvarg
VariantInit(&pvarg)
int32_t* var_20_1 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_410ad8(&pvarg, arg1)
data_4b1988(ExceptionList, var_24, var_20_1)
fsbase->NtTib.ExceptionList = sub_411168(&pvarg)
__return_addr = sub_41111b
return sub_4107b0(&pvarg)
