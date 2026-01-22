// 函数: sub_48ba54
// 地址: 0x48ba54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1d80
data_4b1d80 += 1

if (temp1 == 0xffffffff)
    sub_403c68(data_4b1d84)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
