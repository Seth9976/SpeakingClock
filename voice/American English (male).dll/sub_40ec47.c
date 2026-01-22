// 函数: sub_40ec47
// 地址: 0x40ec47
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*arg3 += 1
*arg1 += arg1.b
*arg5 += arg3:1.b
*arg1 += arg1.b
*(arg4 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2, eflags)
void* var_4 = arg4
int32_t var_8 = 0x40ec96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_414840
data_414840 += 1

if (temp1 == 0xffffffff)
    sub_4039ec(&data_41339c)
    sub_404398(&data_413394, 0x401004, 2)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
