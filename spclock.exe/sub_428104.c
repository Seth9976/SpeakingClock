// 函数: sub_428104
// 地址: 0x428104
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t edx
edx.b = 1
int32_t* result = sub_403c38(ecx, edx)
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
int32_t (* var_1c)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_41c85c(result, sub_428218(arg1))
(*(**(arg1 + 8) + 0x3c))(ExceptionList, var_1c, var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
