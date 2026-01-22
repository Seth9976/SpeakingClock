// 函数: sub_42c5ac
// 地址: 0x42c5ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
EnterCriticalSection(&data_4b1a7c)
int32_t* var_10_1 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
var_8:3.b = *(arg1 + 0x50) == 0

if (var_8:3.b != 0)
    sub_42c308(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (__stdcall* var_10_2)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42c5ff
return LeaveCriticalSection(&data_4b1a7c)
