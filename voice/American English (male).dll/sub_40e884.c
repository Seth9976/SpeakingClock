// 函数: sub_40e884
// 地址: 0x40e884
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
sub_403160(arg1, arg2)
char var_9 = arg2.b
EnterCriticalSection(&data_414824)
int32_t* var_10_1 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax
eax.w = arg1[1].w

if (eax.w != 0)
    *(data_414820 + (zx.d(eax.w) << 2) - 0x400) = data_413328

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_2)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40e8ee
return LeaveCriticalSection(&data_414824)
