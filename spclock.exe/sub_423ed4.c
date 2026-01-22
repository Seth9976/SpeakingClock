// 函数: sub_423ed4
// 地址: 0x423ed4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 != 0)
    int32_t eax_2 = (*(**(arg1 + 0xc) + 0xc))()
    
    if (arg4 != 0)
        *arg4 = eax_2
    
    result = 0
    fsbase->NtTib.ExceptionList = ExceptionList
else
    result = 0x80030009
    fsbase->NtTib.ExceptionList = ExceptionList

return result
