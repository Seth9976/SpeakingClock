// 函数: sub_48839c
// 地址: 0x48839c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t var_c
int32_t* eax_1 = sub_48828c(arg2, arg3, arg4, &var_c)
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg5 != 0)
    (*(*arg1 + 0x10))()

(*(*arg1 + 0x10))()
fsbase->NtTib.ExceptionList = arg3
__return_addr = sub_48840d
return sub_402ec4(eax_1)
