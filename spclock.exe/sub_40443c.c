// 函数: sub_40443c
// 地址: 0x40443c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((*(arg1 + 4) & 6) != 0)
    int32_t ebp
    int32_t var_10_1 = ebp
    int32_t var_14_1 = ebp
    int32_t (* var_18_1)(void* arg1, void* arg2) = sub_4044bc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    int32_t edx_1 = *(arg1 + 0x18)
    int32_t ecx_1 = *(arg1 + 0x14)
    int32_t* eax = sub_406b68()
    int32_t var_30 = *eax
    *eax = &var_30
    int32_t ecx_2 = *(arg2 + 4)
    *(arg2 + 8)
    *(arg2 + 4) = sub_4044bc
    sub_404124()
    (ecx_2 + 5)(var_30, ecx_1, edx_1, arg1, ExceptionList_1, ExceptionList, var_18_1)
    int32_t* eax_1 = sub_406b68()
    *eax_1 = **eax_1
    fsbase->NtTib.ExceptionList = ExceptionList

return 1
