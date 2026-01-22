// 函数: sub_427774
// 地址: 0x427774
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ExceptionList_1
int32_t __saved_edx
int32_t __saved_edx_1 = __saved_edx
arg2.b = 1
int32_t var_10 = sub_403c38(arg3, arg2)
int32_t* var_c = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x40))(ExceptionList, var_10_1, var_c)
var_c:3.b = (*(*var_10_1 + 0x54))(arg3) s> 0xffffffff
fsbase->NtTib.ExceptionList = arg3
__return_addr = sub_4277d9
return sub_403c68(var_10_1)
