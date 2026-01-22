// 函数: sub_4980ac
// 地址: 0x4980ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1da8
data_4b1da8 += 1

if (temp1 == 0xffffffff)
    sub_497ec8()
    sub_403c68(data_4b1dac)
    sub_405724(&data_4abdc4, sub_4010aa+0x16, 7)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
