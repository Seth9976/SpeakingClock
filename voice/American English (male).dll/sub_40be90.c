// 函数: sub_40be90
// 地址: 0x40be90
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
uint8_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx

if (arg4 != 0)
    *arg4 = 0

int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 == 0x400)
    int32_t var_1c_1 = arg2
    int32_t var_20_1 = arg1
    sub_404148(sub_407d50(&var_8), var_8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_40bef7
int32_t* result = &var_8
sub_4039ec(result)
return result
