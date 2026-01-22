// 函数: sub_40bb00
// 地址: 0x40bb00
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_414790
data_414790 -= 1

if (temp1 u< 1)
    sub_403798(sub_40b6b0)
    sub_4037c0(sub_40b6b0+0xec)
    
    if (data_41465d != 0)
        sub_403a40(&data_413134, 0x40bb7c)
    
    sub_40a5a4()
    sub_40a6a8()
    sub_40b22c()
    sub_40ade0()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
