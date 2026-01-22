// 函数: sub_463b94
// 地址: 0x463b94
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t var_1c = 0
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg2 + 0x10))(ExceptionList, var_2c, var_28)
(*(*arg2 + 0x10))(arg2)
*(arg1 + 0x64)
int32_t ecx_3
int32_t edx_3
edx_3, ecx_3 = (*(*arg2 + 0x10))()
edx_3.b = 1
int32_t* eax_8 = sub_403c38(ecx_3, edx_3)
int32_t* var_c_1 = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t ebx_5 = sub_45e23c(var_c_1[5]) - 1

if (ebx_5 s>= 0)
    int32_t i_2 = ebx_5 + 1
    int32_t var_10_1 = 0
    int32_t i
    
    do
        void* eax_14 = sub_45e250(var_c_1[5], var_10_1)
        
        if (*(eax_14 + 0x57) == 0 && *(eax_14 + 8) != 0)
            *(eax_14 + 8)
            (*(*eax_8 + 0x38))()
        
        var_10_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

ExceptionList_1 = (*(*eax_8 + 0x14))()
(*(*arg2 + 0x10))()

if (ExceptionList_1 - 1 s>= 0)
    struct _EXCEPTION_REGISTRATION_RECORD* ebx_9 = ExceptionList_1
    int32_t var_10_2 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* i_1
    
    do
        ebp_1[-3]
        void* edx_8 = (*(*ebp_1[-5] + 0xc))(ebp_1)
        ebp_1 = sub_463a08(ebp_1[-6], edx_8)
        ebp_1[-3] += 1
        i_1 = ebx_9
        ebx_9 -= 1
    while (i_1 != 1)

fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_463cbb
return sub_403c68(ebp_1[-5])
