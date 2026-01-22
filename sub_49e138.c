// 函数: sub_49e138
// 地址: 0x49e138
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1db0
data_4b1db0 += 1

if (temp1 == 0xffffffff && data_4abe24 != 0)
    sub_403c68(data_4abe24)
    data_4abe24 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return 0
