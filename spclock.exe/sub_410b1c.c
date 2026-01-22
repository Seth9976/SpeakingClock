// 函数: sub_410b1c
// 地址: 0x410b1c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
void pvarg
VariantInit(&pvarg)
int32_t* var_24_1 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_410ad8(&pvarg, arg2)
data_4b1988(ExceptionList, var_28, var_24_1)
long double x87_r0
long double x87_r1
sub_410da4(arg1, &pvarg, zx.d(arg3), x87_r0, x87_r1)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_410b7f
return sub_4107b0(&pvarg)
