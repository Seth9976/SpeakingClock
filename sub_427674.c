// 函数: sub_427674
// 地址: 0x427674
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
long double var_2c_1 = fconvert.t(arg2)
sub_40aac4(&var_8)
var_2c_1:8.d = var_8
(*(*arg1 + 4))()
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4276ce
int32_t* result = &var_8
sub_404b88(result)
return result
