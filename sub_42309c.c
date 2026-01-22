// 函数: sub_42309c
// 地址: 0x42309c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (GetCurrentThreadId() == *data_4ac4d8)
    *(arg2 + 0xc)
    return (*(arg2 + 8))()

void** var_10
void var_1c

if (arg1 == 0)
    var_10 = &var_1c
else
    var_10 = sub_402ea8(0xc)
char ebx_1 = arg1 ^ 1
BOOL ExceptionList_2

if (ebx_1 == 0)
    var_10[2] = 0
else
    PSTR lpName = nullptr
    BOOL bInitialState = 0
    ExceptionList_2 = 0xffffffff
    var_10[2] = CreateEventA(nullptr, ExceptionList_2, bInitialState, lpName)

int32_t __saved_ebp
int32_t* var_24_1 = &__saved_ebp
int32_t (* var_28_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t ecx = EnterCriticalSection(&data_4b19d4)
int32_t* var_30_3 = &__saved_ebp
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
var_10[1].b = arg1

if (data_4aac00 == 0)
    uint32_t edx_2
    edx_2.b = 1
    data_4aac00 = sub_403c38(ecx, edx_2)

*var_10 = arg2
sub_419f9c(data_4aac00, var_10)
sub_422b2c()

if (data_4aab6c:2.w != 0)
    **var_10
    data_4aab70
    data_4aab6c()

if (ebx_1 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    BOOL (* var_30_4)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4231f2
    return LeaveCriticalSection(&data_4b19d4)

LeaveCriticalSection(&data_4b19d4)
int32_t* var_3c_1 = &__saved_ebp
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
WaitForSingleObject(var_10[2], 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_3c_2 = 0x4231d3
return EnterCriticalSection(&data_4b19d4)
