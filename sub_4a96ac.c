// 函数: sub_4a96ac
// 地址: 0x4a96ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1ce8
data_4b1ce8 -= 1

if (temp1 u< 1)
    sub_40489c(sub_478b7c)
    sub_478550()
    data_4b1cec = RegisterWindowMessageA(sub_4a970c)
    sub_419a58(sub_46bce0)
    data_4b1d0c = 0

fsbase->NtTib.ExceptionList = ExceptionList
return 0
