// 函数: sub_40be10
// 地址: 0x40be10
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t var_c = 0
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0x400)
    int32_t ecx
    sub_403c74(ecx, arg1)
    char var_5
    void* eax_3 = sub_406d30(var_c, &var_5) & 0x7f
    *((eax_3 << 2) + &data_413314)
    *arg3 = (sbb.d(eax_3, eax_3, var_5 u< 1 ^ 1)).w

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_40be84
int32_t* result = &var_c
sub_4039ec(result)
return result
