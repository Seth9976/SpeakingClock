// 函数: sub_4242c4
// 地址: 0x4242c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    *(arg2 + 4) = 2
    int32_t eax_2
    int32_t edx_2
    eax_2, edx_2 = (***(arg1 + 0xc))()
    *(arg2 + 8) = eax_2
    *(arg2 + 0xc) = edx_2
    __builtin_memset(arg2 + 0x10, 0, 0x18)
    *(arg2 + 0x2c) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return 0
