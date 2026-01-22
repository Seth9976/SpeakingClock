// 函数: sub_40e9b0
// 地址: 0x40e9b0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ecx
int32_t var_8 = ecx
int16_t ebx = arg1

if (data_414820 == 0 || ebx u< 0x100 || ebx u> 0x7ff)
    arg1 = 0
else
    arg1.b = 1

var_8:3.b = arg1.b

if (var_8:3.b == 0)
    arg1.b = var_8:3.b
    return arg1

EnterCriticalSection(&data_414824)
int32_t __saved_ebp
int32_t* var_18_1 = &__saved_ebp
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edi = zx.d(ebx)
var_8:3.b = sub_4046e4(data_414820) s> edi - 0x100

if (var_8:3.b != 0)
    *arg2 = *(data_414820 + (edi << 2) - 0x400)
    int32_t eax_4
    
    if (*arg2 == 0 || *arg2 == data_413328)
        eax_4 = 0
    else
        eax_4.b = 1
    
    var_8:3.b = eax_4.b

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_18_2 = 0x40ea5f
return LeaveCriticalSection(&data_414824)
