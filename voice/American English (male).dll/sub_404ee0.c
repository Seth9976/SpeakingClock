// 函数: sub_404ee0
// 地址: 0x404ee0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1]
sub_404e74()
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_404f4b
int32_t* i

if (arg1 != data_413030)
    for (i = data_413030; i != 0; i = *i)
        if (*i == arg1)
            *i = *arg1
            break
else
    i = *arg1
    data_413030 = i

return i
