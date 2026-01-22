// 函数: sub_4139f0
// 地址: 0x4139f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
void pvarg
VariantInit(&pvarg)
int32_t* var_20_1 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_410ad8(&pvarg, arg1)
data_4b1988(ExceptionList, var_24, var_20_1)
sub_413adc(arg2, &pvarg, arg2)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_413a4d
return sub_4107b0(&pvarg)
