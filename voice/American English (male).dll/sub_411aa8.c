// 函数: sub_411aa8
// 地址: 0x411aa8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t i = 0
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

do
    int32_t ecx = sub_4118b8(arg1, &i, ecx)
while (i != 0)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_411aeb
int32_t* result = &i
sub_4039ec(result)
return result
