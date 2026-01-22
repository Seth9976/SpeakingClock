// 函数: sub_40fbb4
// 地址: 0x40fbb4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
sub_403160(arg1, arg2)
char var_9 = arg2.b
sub_40fc30(arg1)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t edx
ecx, edx = sub_402eb0(arg1[1])
edx.b = var_9
edx.b &= 0xfc
sub_402ea0(ecx, edx)
fsbase->NtTib.ExceptionList = ExceptionList
void (__stdcall* var_10_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40fc1d
sub_40fc44(arg1)
return DeleteCriticalSection(&arg1[2])
