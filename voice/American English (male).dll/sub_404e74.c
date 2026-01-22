// 函数: sub_404e74
// 地址: 0x404e74
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t eax
int32_t var_8 = eax
int32_t* result = data_413034

for (int32_t* i = result; i != 0; i = result)
    int32_t __saved_ebp
    int32_t* var_1c_1 = &__saved_ebp
    int32_t (* var_20_1)() = j_sub_403260
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    i[1](ExceptionList, var_20_1, var_1c_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    result = *i

return result
