// 函数: sub_4494fc
// 地址: 0x4494fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1bf2:2
data_4b1bf2:2 += 1

if (temp1 == 0xffffffff)
    sub_403c68(data_4b1bf8)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
