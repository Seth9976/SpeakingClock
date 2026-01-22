// 函数: sub_413924
// 地址: 0x413924
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
OLECHAR* var_18 = nullptr
uint32_t var_1c = 0
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void pvarg
VariantInit(&pvarg)
int32_t* var_34_1 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
OLECHAR** var_c = &var_18
sub_40548c(
    sub_41040c(
        (*data_4ac3b8)(&pvarg, arg1, 0x400, 0, 8, ExceptionList, var_38, var_34_1, ExceptionList_1, 
            var_2c, var_28), 
        *arg1, 0x100), 
    var_c)
sub_404e10(sub_405578(0x7fffffff, 1, var_1c, var_c), var_18)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4139c8
return sub_4107b0(&pvarg)
