// 函数: sub_412180
// 地址: 0x412180
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
int32_t ecx
int32_t edx_1
edx_1, ecx = data_4b1988(ExceptionList, var_24, var_20_1)
char var_5 = sub_412230(&pvarg, edx_1, ecx)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4121db
return sub_4107b0(&pvarg)
