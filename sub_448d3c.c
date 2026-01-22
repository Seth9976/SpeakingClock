// 函数: sub_448d3c
// 地址: 0x448d3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax_1 = *(arg1 + 0x18)

if (eax_1[1] != 0)
    sub_404c20(arg1 - 8, eax_1[1])
else
    sub_404c20(arg1 - 8, *(*data_4ac2fc + 0x50))

sub_406550(arg1 - 4)
char result = sub_4252bc(arg1 - 4)

if (result != 0)
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18_1)() = j_sub_4042b4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 - 8)
    *(*data_4ac2fc + 0x30)
    (*(**(arg1 - 4) + 0x20))(*eax_1, 1)
    result = 0
    fsbase->NtTib.ExceptionList = ExceptionList

return result
