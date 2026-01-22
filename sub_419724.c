// 函数: sub_419724
// 地址: 0x419724
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
sub_419250(data_4b19c8)
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4192b8(data_4b19c8, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_41976d
return sub_419308(data_4b19c8)
