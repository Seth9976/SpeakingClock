// 函数: sub_416ec8
// 地址: 0x416ec8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b19b0
data_4b19b0 += 1

if (temp1 == 0xffffffff)
    sub_405724(&data_4aab40, sub_4010aa+0x16, 2)
    sub_404b88(&data_4aab48)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
