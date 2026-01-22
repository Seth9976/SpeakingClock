// 函数: sub_4311dc
// 地址: 0x4311dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
sub_430e88(arg1)
int32_t edx
edx.b = 1
int32_t* eax_1 = sub_41d17c(arg2, edx, sub_418024+0xc4, 2, arg3)
int32_t* var_18_1 = &var_4
int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4313e4(arg1, eax_1, (**eax_1)(0, ExceptionList, var_1c_1, var_18_1))
fsbase->NtTib.ExceptionList = eax_1
__return_addr = sub_431244
return sub_403c68(eax_1)
