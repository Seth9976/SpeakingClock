// 函数: sub_402564
// 地址: 0x402564
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp

if (data_4145bc == 0)
    char eax
    eax, ebp = sub_401968()
    
    if (eax == 0)
        ebp[-1] = 0
        return ebp[-1]

int32_t* var_18 = ebp
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_414045 != 0)
    EnterCriticalSection(&data_4145c4)

if (sub_402388(arg1, arg2) == 0)
    int32_t eax_4 = sub_402054(arg2)
    int32_t eax_9 = (*(arg1 - 4) & 0x7ffffffc) - 4
    
    if (arg2 s< eax_9)
        eax_9 = arg2
    
    if (eax_4 != 0)
        sub_4027b0(arg1, eax_4, eax_9)
        sub_4021e4(arg1)
    
    ebp[-1] = eax_4
else
    ebp[-1] = arg1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_18_1 = 0x40261c

if (data_414045 == 0)
    return 0

return LeaveCriticalSection(&data_4145c4)
