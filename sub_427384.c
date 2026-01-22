// 函数: sub_427384
// 地址: 0x427384
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t __saved_edx
int32_t __saved_edx_1 = __saved_edx
int32_t edi
int32_t var_20 = edi
void* var_8 = nullptr
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(**arg1)(&var_8, 0, ExceptionList, var_28, var_24)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = arg2
int32_t var_10 = arg3

if (var_8 != 0)
    int32_t* __saved_ecx_1 = &var_4
    int32_t (* var_10_1)() = j_sub_4042b4
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    ExceptionList_1.q = fconvert.d(sub_40c5cc(var_8))
    fsbase->NtTib.ExceptionList = ExceptionList_1

fsbase->NtTib.ExceptionList = var_8
__return_addr = &data_427430
void** result = &var_8
sub_404b88(result)
return result
