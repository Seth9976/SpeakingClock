// 函数: sub_415ce4
// 地址: 0x415ce4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int16_t ebx = arg1

if (data_4b1994 == 0 || ebx u< 0x100 || ebx u> 0x7ff)
    arg1 = 0
else
    arg1.b = 1

var_8:3.b = arg1.b

if (var_8:3.b == 0)
    return zx.d(var_8:3.b)

EnterCriticalSection(&data_4b1998)
int32_t __saved_ebp
int32_t* var_18_1 = &__saved_ebp
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edi = zx.d(ebx)
var_8:3.b = sub_405cb0(data_4b1994) s> edi - 0x100

if (var_8:3.b != 0)
    *arg2 = *(data_4b1994 + (edi << 2) - 0x400)
    int32_t eax_4
    
    if (*arg2 == 0 || *arg2 == data_4aaa38)
        eax_4 = 0
    else
        eax_4.b = 1
    
    var_8:3.b = eax_4.b

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_18_2 = 0x415d93
return LeaveCriticalSection(&data_4b1998)
