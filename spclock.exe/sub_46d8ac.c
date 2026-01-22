// 函数: sub_46d8ac
// 地址: 0x46d8ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (*(arg1 + 0x31a) != 0)
    int32_t __saved_ebp
    int32_t* var_18_1 = &__saved_ebp
    int32_t (* var_1c_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[0xc7]
    arg1[0xc6](ExceptionList, var_1c_1, var_18_1)
    fsbase->NtTib.ExceptionList = ExceptionList

if ((arg1[0xd6].b & 2) == 0)
    return arg1

struct _EXCEPTION_REGISTRATION_RECORD* edx
edx.b = 1
return sub_46e590(arg1, edx.b)
