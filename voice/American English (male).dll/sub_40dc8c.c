// 函数: sub_40dc8c
// 地址: 0x40dc8c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
uint32_t var_18 = 0
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void pvarg
VariantInit(&pvarg)
int32_t* var_30_1 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40338c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40410c(
    sub_40cde8(
        (*data_413524)(&pvarg, arg1, 0x400, 0, 8, ExceptionList, var_34, var_30_1, ExceptionList_1, 
            var_28, var_24), 
        *arg1, 8), 
    arg2)
sub_4041f8(0x7fffffff, 1, var_18, arg2)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40dd20
return sub_40d0f4(&pvarg)
