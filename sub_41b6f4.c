// 函数: sub_41b6f4
// 地址: 0x41b6f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t __saved_edx
int32_t __saved_edx_2 = __saved_edx
int64_t* var_c = nullptr
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0xc))(ExceptionList, var_1c, var_18)
void* ebp_1 = sub_41b670(arg1, var_c, arg3)
fsbase->NtTib.ExceptionList = arg3
__return_addr = sub_41b74c
sub_404b88(ebp_1 - 8)
return ebp_1 - 8
