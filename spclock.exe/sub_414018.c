// 函数: sub_414018
// 地址: 0x414018
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
uint32_t var_18 = 0
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void pvarg
VariantInit(&pvarg)
int32_t* var_30_1 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40548c(
    sub_41040c(
        (*data_4ac3b8)(&pvarg, arg1, 0x400, 0, 8, ExceptionList, var_34, var_30_1, ExceptionList_1, 
            var_28, var_24), 
        *arg1, 8), 
    arg2)
sub_405578(0x7fffffff, 1, var_18, arg2)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4140ac
return sub_4107b0(&pvarg)
