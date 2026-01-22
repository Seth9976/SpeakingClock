// 函数: sub_401968
// 地址: 0x401968
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = &var_4
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
InitializeCriticalSection(&data_4145c4)

if (data_414045 != 0)
    EnterCriticalSection(&data_4145c4)

sub_40132c(&data_4145e4)
sub_40132c(&data_4145f4)
sub_40132c(&data_414620)
data_41461c = LocalAlloc(LMEM_FIXED, 0xff8)

if (data_41461c != 0)
    for (int32_t i = 3; i != 0x401; i += 1)
        *(data_41461c + (i << 2) - 0xc) = 0
    
    data_414608 = &data_414604
    data_414604 = &data_414604
    data_414610 = &data_414604
    data_4145bc = 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_8_1)() = sub_401a25

if (data_414045 == 0)
    return 0

return LeaveCriticalSection(&data_4145c4)
