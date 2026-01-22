// 函数: sub_484764
// 地址: 0x484764
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg4 = 0

if (*arg1 != 0)
    arg1[1]
    *arg4 = (*(**arg1 + 4))(arg3)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
