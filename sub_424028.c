// 函数: sub_424028
// 地址: 0x424028
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_41c8f8(*(arg1 + 0xc), arg2, arg3)
int32_t eax_2
int32_t edx_1
eax_2, edx_1 = (***(arg1 + 0xc))(ExceptionList, var_18, var_14)
bool cond:0 = edx_1 == arg3

if (edx_1 == arg3)
    cond:0 = eax_2 == arg2

int32_t result

result = cond:0 ? 0 : 0x80004005

fsbase->NtTib.ExceptionList = ExceptionList
return result
