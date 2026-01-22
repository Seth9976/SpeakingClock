// 函数: sub_423fa4
// 地址: 0x423fa4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg3 s< 0 || arg3 s> 2)
    result = 0x80030001
    fsbase->NtTib.ExceptionList = ExceptionList
else
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q((*(**(arg1 + 0xc) + 0x14))())
    
    if (arg4 != 0)
        *arg4 = eax_3
        arg4[1] = edx_2
    
    result = 0
    fsbase->NtTib.ExceptionList = ExceptionList

return result
