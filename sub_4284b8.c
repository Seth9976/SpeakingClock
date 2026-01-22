// 函数: sub_4284b8
// 地址: 0x4284b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t __saved_edx
int32_t __saved_edx_2 = __saved_edx
sub_41b378(arg3)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg3 + 0x44))(ExceptionList, var_18, var_14)

if ((*(**(arg1 + 8) + 0x54))(arg3) s>= 0)
    (*(**(arg1 + 8) + 0x18))()
    (*(*arg3 + 8))()

fsbase->NtTib.ExceptionList = arg3
__return_addr = sub_428524
return sub_41b434(arg3)
