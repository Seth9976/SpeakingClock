// 函数: sub_414c54
// 地址: 0x414c54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
int32_t __saved_ecx
int32_t __saved_ecx_1 = __saved_ecx
void pvarg_1
VariantInit(&pvarg_1)
int32_t* var_38_1 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_410ad8(&pvarg_1, arg1)

if (*arg1 == 0x101)
    data_4b1988()

if (*arg2 != 0x101)
    char var_5_1 = sub_415528(&pvarg_1, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    uint32_t (* var_38_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_414d1e
    return sub_4107b0(&pvarg_1)

void pvarg
VariantInit(&pvarg)
int32_t* var_44_1 = &var_4
int32_t (* var_48)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_410ad8(&pvarg, arg2)
data_4b1988(ExceptionList, var_48, var_44_1)
char var_5 = sub_415528(&pvarg_1, &pvarg)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = &data_414d01
return sub_4107b0(&pvarg)
