// 函数: sub_472c3c
// 地址: 0x472c3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if (*(arg1 + 0x59) == 0)
    return 

if (*(arg2 + 4) == 0)
    arg2.b = 1
    int32_t* eax_1 = sub_42b0dc(sub_429834+0x48, arg2)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(**(arg1 + 0x68) + 8))(ExceptionList, var_14, var_10)
    fsbase->NtTib.ExceptionList = eax_1
    __return_addr = &data_472ca1
    sub_403c68(eax_1)
    return 

*(arg2 + 8)
(*(**(arg1 + 0x68) + 8))()
