// 函数: sub_42e494
// 地址: 0x42e494
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = sub_419f9c(*(arg1 + 4), arg3)
int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_419f9c(*(arg1 + 8), zx.d(arg2))
fsbase->NtTib.ExceptionList = ExceptionList
return 0
