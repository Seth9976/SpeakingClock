// 函数: sub_427614
// 地址: 0x427614
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t __saved_edx
int32_t __saved_edx_1 = __saved_edx
int32_t __saved_ecx
int32_t __saved_ecx_1 = __saved_ecx
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = arg3
int32_t var_28 = arg2
sub_40bc44(&var_8, nullptr)
(*(*arg1 + 4))(var_8, ExceptionList, var_1c, var_18)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_42766c
int32_t* result = &var_8
sub_404b88(result)
return result
