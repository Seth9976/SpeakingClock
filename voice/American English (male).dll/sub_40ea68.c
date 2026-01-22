// 函数: sub_40ea68
// 地址: 0x40ea68
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_41481c
data_41481c += 1

if (temp1 == 0xffffffff)
    sub_40e70c()
    DeleteCriticalSection(&data_414824)
    sub_4048ac(&data_414820, 0x40e6ec)
    sub_404398(&data_41332c, 0x401004, 0x15)
    sub_4039ec(&data_413320)
    sub_40d108(0x4147fc)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
