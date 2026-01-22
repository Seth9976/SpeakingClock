// 函数: sub_481c38
// 地址: 0x481c38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
sub_45ed1c(arg1)
char result = *(arg1 + 0x1da)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
int32_t __saved_ebp
int32_t esi
TEB* fsbase

if (result != 0)
    int32_t* var_18_1 = &__saved_ebp
    int32_t (* var_1c_1)() = j_sub_404188
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    esi.w = 0xffaf
    sub_403e64(arg1, esi)
    result = 0
    fsbase->NtTib.ExceptionList = ExceptionList
else if (result == 0)
    int32_t* var_18_2 = &__saved_ebp
    int32_t (* var_1c_2)() = j_sub_404188
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    esi.w = 0xffb0
    sub_403e64(arg1, esi)
    result = 0
    fsbase->NtTib.ExceptionList = ExceptionList
return result
