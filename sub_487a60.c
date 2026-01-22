// 函数: sub_487a60
// 地址: 0x487a60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg2
arg2.b = 1
int32_t eax_1 = sub_403c38(arg3, arg2)

if (*(arg1 + 0x18) == 0)
    int32_t __saved_ebp
    int32_t* var_1c_1 = &__saved_ebp
    int32_t (* var_20_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x18) = eax_1
    fsbase->NtTib.ExceptionList = ExceptionList

int32_t result = (***(arg1 + 0x18))()
int32_t result_1 = result

if (arg3.b != 0)
    result = sub_41cad8(esi, &result_1, 4)

if (result_1 == 0)
    return result

return sub_41cad8(esi, *(*(arg1 + 0x18) + 4), result_1)
