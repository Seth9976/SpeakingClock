// 函数: sub_4a84c0
// 地址: 0x4a84c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1e28
data_4b1e28 += 1

if (temp1 == 0xffffffff)
    sub_404b88(0x4b1df0)
    sub_404b88(&data_4b1df4)
    sub_404b88(&data_4b1df8)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
