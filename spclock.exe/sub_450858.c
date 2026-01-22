// 函数: sub_450858
// 地址: 0x450858
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
int32_t (* var_1c)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x10))(ExceptionList, var_1c, var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
