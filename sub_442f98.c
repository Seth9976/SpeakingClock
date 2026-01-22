// 函数: sub_442f98
// 地址: 0x442f98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = *arg2
LRESULT result
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList

if (ExceptionList_1 != 0x113)
    LPARAM lParam = arg2[2]
    WPARAM wParam = arg2[1]
    ExceptionList = ExceptionList_1
    result = DefWindowProcA(arg1[0xd], ExceptionList, wParam, lParam)
    arg2[3] = result
else
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)() = j_sub_404188
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ExceptionList_1.w = 0xffef
    sub_403e64(arg1, ExceptionList_1)
    result = 0
    fsbase->NtTib.ExceptionList = ExceptionList
return result
