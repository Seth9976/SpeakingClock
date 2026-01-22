// 函数: sub_406a90
// 地址: 0x406a90
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4ad5b4
data_4ad5b4 += 1

if (temp1 == 0xffffffff)
    sub_403410(0x4ad04c)
    sub_403410(0x4ad218)
    sub_403410(0x4ad3e4)
    sub_402e3c()
    sub_404b88(&data_4aa040)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
