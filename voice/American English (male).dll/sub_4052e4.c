// 函数: sub_4052e4
// 地址: 0x4052e4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
uint32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403ffc(arg2)

if (arg1 != 0)
    sub_404244(&var_8, sub_403c88(arg1))
    int32_t eax_5 = sub_403c88(arg1)
    int32_t eax_8 = sub_404168(var_8) + 1
    int32_t eax_13 = sub_405100(sub_403e88(arg1), eax_8, sub_404158(var_8), eax_5)
    
    if (eax_13 s<= 0)
        sub_403ffc(&var_8)
    else
        sub_404244(&var_8, eax_13 - 1)
    
    sub_404038(arg2, var_8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_405382
uint32_t* result = &var_8
sub_403ffc(result)
return result
