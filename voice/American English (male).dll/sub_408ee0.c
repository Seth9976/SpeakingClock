// 函数: sub_408ee0
// 地址: 0x408ee0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
void* var_c = nullptr
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != 0)
    sub_408e28(arg1, arg2)
    sub_403ee0(sub_403c88(arg3), *arg2, arg1, &var_c)
    
    if (sub_406a04(arg3, var_c) == 0)
        int32_t eax_7 = sub_403c88(arg3)
        *arg2 += eax_7
        int32_t ebx_1
        ebx_1.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_408f60
void** result = &var_c
sub_4039ec(result)
return result
