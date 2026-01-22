// 函数: sub_411b80
// 地址: 0x411b80
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
int32_t eax_2
int32_t edx_1
eax_2, edx_1 = sub_411c38(&pvarg)
int32_t var_c = eax_2
fsbase->NtTib.ExceptionList = edx_1
__return_addr = sub_411bde
return sub_4107b0(&pvarg)
