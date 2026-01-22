// 函数: sub_491bc4
// 地址: 0x491bc4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = *arg2
LRESULT result
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList

if (ExceptionList_1 != 0x312)
    LPARAM lParam = arg2[2]
    WPARAM wParam = arg2[1]
    ExceptionList = ExceptionList_1
    result = DefWindowProcA(*(arg1 + 0x58), ExceptionList, wParam, lParam)
    arg2[3] = result
else
    result = arg1
    
    if (*(result + 0x52) != 0)
        int32_t __saved_ebp
        int32_t* var_1c_1 = &__saved_ebp
        int32_t (* var_20_1)() = j_sub_404188
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t var_c
        sub_44a944(*(arg1 + 0x4c), &var_c:2, &var_c:1)
        *(arg1 + 0x54)
        (*(arg1 + 0x50))(zx.d(var_c:1.b))
        result = nullptr
        fsbase->NtTib.ExceptionList = ExceptionList
return result
