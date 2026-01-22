// 函数: sub_404ad4
// 地址: 0x404ad4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_403b24()
int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t var_c = 0x404680
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx_1 = *arg1
int32_t var_14 = arg1[1]
sub_402ec4(arg1)
int32_t result = edx_1(ExceptionList, var_c, var_8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
