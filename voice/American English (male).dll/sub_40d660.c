// 函数: sub_40d660
// 地址: 0x40d660
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
void pvarg
VariantInit(&pvarg)
int32_t* var_20_1 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40d41c(&pvarg, arg1)
data_414814(ExceptionList, var_24, var_20_1)
sub_40d748(arg2, &pvarg, arg2)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40d6bd
return sub_40d0f4(&pvarg)
