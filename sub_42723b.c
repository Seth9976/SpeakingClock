// 函数: sub_42723b
// 地址: 0x42723b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*(arg1 * 2) += arg1:1.b
*arg1 += arg1.b
int32_t ebp
int32_t var_4 = ebp
void* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t __saved_edx
int32_t __saved_edx_1 = __saved_edx
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_409340(arg3, &var_8)
(*(*arg1 + 4))(var_8, ExceptionList, var_1c, var_18)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_427297
void** result = &var_8
sub_404b88(result)
return result
