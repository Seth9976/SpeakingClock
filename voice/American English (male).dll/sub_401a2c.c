// 函数: sub_401a2c
// 地址: 0x401a2c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (data_4145bc == 0)
    return 

int32_t __saved_ebp
int32_t* var_c = &__saved_ebp
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_414045 != 0)
    EnterCriticalSection(&data_4145c4)

data_4145bc = 0
LocalFree(data_41461c)
data_41461c = 0

for (void** i = data_4145e4; i != &data_4145e4; i = *i)
    VirtualFree(i[2], 0, MEM_RELEASE)

sub_40132c(&data_4145e4)
sub_40132c(&data_4145f4)
sub_40132c(&data_414620)

for (int32_t* hMem = data_4145dc; hMem != 0; hMem = data_4145dc)
    data_4145dc = *hMem
    LocalFree(hMem)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_c_1 = 0x401b09

if (data_414045 != 0)
    LeaveCriticalSection(&data_4145c4)

DeleteCriticalSection(&data_4145c4)
