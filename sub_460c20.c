// 函数: sub_460c20
// 地址: 0x460c20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg2 + 0xc) == 1)
    return (*(*arg1 - 0x10))()

if ((*(arg2 + 8) & 1) != 0 && *(arg1 + 0x57) == 0)
    return (*(*arg1 - 0x10))()

int32_t nSavedDC = SaveDC(*(arg2 + 4))
int32_t __saved_ebp
int32_t* var_14_1 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_45cfb8(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_14_2 = 0x460ca6
ExceptionList = *(arg2 + 4)
return RestoreDC(ExceptionList, nSavedDC)
