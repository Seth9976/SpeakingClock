// 函数: sub_4283dc
// 地址: 0x4283dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t __saved_edx
int32_t __saved_edx_3 = __saved_edx
int32_t var_10 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_41b378(arg3)
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg3 + 0x44))(ExceptionList, var_2c, var_28, ExceptionList_1, var_20, var_1c)

if ((*(**(arg1 + 8) + 0x54))(arg3) s>= 0)
    int32_t* eax_5 = (*(**(arg1 + 8) + 0x18))()
    int32_t ebx_3 = (*(*eax_5 + 0x14))() - 1
    
    if (ebx_3 s>= 0)
        int32_t i_1 = ebx_3 + 1
        int32_t __saved_edx_2 = 0
        int32_t i
        
        do
            sub_41b6f4(eax_5, __saved_edx_2, &var_10)
            (*(*arg3 + 0x38))()
            __saved_edx_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

fsbase->NtTib.ExceptionList = arg3
__return_addr = sub_428484
return sub_41b434(arg3)
