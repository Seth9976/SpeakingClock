// 函数: sub_422ca0
// 地址: 0x422ca0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1[-2] + 4) != 0)
    sub_402ec4(*arg1[-2])
    sub_402ec4(arg1[-2])
else
    SetEvent(*(arg1[-2] + 8))

TEB* fsbase

if (*(arg1[-3] + 8) s<= 0)
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403c68(arg1[-3])
    fsbase->NtTib.ExceptionList = arg3
    LeaveCriticalSection(&data_4b19d4)
    *arg1
    return zx.d(*(arg1 - 1))

arg1[-2] = sub_41a0f4(arg1[-3], 0)
sub_419fe8(arg1[-3], 0)
LeaveCriticalSection(&data_4b19d4)
int32_t* var_4_3 = arg1
int32_t (* var_8)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t* var_10 = arg1
int32_t (* var_14)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_1 = *arg1[-2]
*(ebx_1 + 0xc)
(*(ebx_1 + 8))(ExceptionList)
fsbase->NtTib.ExceptionList = var_14
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_422ca0
return EnterCriticalSection(&data_4b19d4)
