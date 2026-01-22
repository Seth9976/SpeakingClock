// 函数: sub_48b704
// 地址: 0x48b704
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int32_t* edx = *(arg1 + 4)

if (edx != 0)
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x4d) u<= 1 || *(arg1 + 0x61) != 0)
        result = sub_45f888(edx)
    else
        result = edx[0xa7]
    
    fsbase->NtTib.ExceptionList = ExceptionList

return result
