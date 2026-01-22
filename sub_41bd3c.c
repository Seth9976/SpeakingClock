// 函数: sub_41bd3c
// 地址: 0x41bd3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t ecx_1 = arg2
arg2.b = 1
int32_t* eax = sub_41cd8c(ecx_1, arg2, &data_417f68, -1)
int32_t* var_10_1 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x78))(ExceptionList, var_14, var_10_1)
fsbase->NtTib.ExceptionList = eax
__return_addr = sub_41bd8e
return sub_403c68(eax)
