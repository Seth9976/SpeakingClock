// 函数: sub_415ea0
// 地址: 0x415ea0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1990
data_4b1990 += 1

if (temp1 == 0xffffffff)
    sub_415a40()
    DeleteCriticalSection(&data_4b1998)
    sub_4107c4(0x4b1970)
    sub_404b88(&data_4aaa14)
    sub_405724(&data_4aaad8, sub_4010aa+0x16, 0x15)
    sub_405e78(&data_4b1994, 0x415a20)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
