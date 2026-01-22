// 函数: sub_4054a4
// 地址: 0x4054a4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4145b4
data_4145b4 += 1

if (temp1 == 0xffffffff)
    sub_402860(0x414048)
    sub_402860(0x414214)
    sub_402860(0x4143e0)
    sub_401a2c()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
