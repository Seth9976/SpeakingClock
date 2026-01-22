// 函数: sub_4260e8
// 地址: 0x4260e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b19f8
data_4b19f8 += 1

if (temp1 == 0xffffffff)
    sub_406550(&data_4b19fc)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
