// 函数: sub_46d928
// 地址: 0x46d928
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* const result = arg1

if (*(result + 0x322) != 0)
    int32_t __saved_ebp
    int32_t* var_18_1 = &__saved_ebp
    int32_t (* var_1c_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x324)
    (*(arg1 + 0x320))(ExceptionList, var_1c_1, var_18_1)
    result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList

return result
