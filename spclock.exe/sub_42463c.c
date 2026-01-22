// 函数: sub_42463c
// 地址: 0x42463c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* const result = arg1

if (*(result + 0x42) != 0)
    int32_t __saved_ebp
    int32_t* var_18_1 = &__saved_ebp
    int32_t (* var_1c_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x44)
    (*(arg1 + 0x40))(ExceptionList, var_1c_1, var_18_1)
    result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList

return result
