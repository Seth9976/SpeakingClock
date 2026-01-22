// 函数: sub_463a08
// 地址: 0x463a08
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
void* var_8 = arg1
sub_405008(var_8)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_1 = var_8

if (eax_1 != 0)
    eax_1 = *(eax_1 - 4)

(*(**(arg2 - 4) + 0x10))()

if (eax_1 s> 0)
    (*(**(arg2 - 4) + 0x10))()

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_463a7e
void** result = &var_8
sub_404b88(result)
return result
