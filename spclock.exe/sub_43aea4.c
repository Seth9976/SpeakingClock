// 函数: sub_43aea4
// 地址: 0x43aea4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
arg1[0x97].b = 1
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_45baac(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_c_1)(void* arg1 @ ebp, int32_t arg2) = sub_43aeea
arg1[0x97].b = 0
return arg1
