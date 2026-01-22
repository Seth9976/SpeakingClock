// 函数: sub_4197c4
// 地址: 0x4197c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
sub_419250(data_4b19c8)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = *(data_4b19c8 + 0x20)
sub_418f4c(data_4b19c8, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_419819
return sub_419308(data_4b19c8)
