// 函数: sub_476ce4
// 地址: 0x476ce4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
*(arg1 + 0xad) = 1
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_408c84(sub_46ba00)
BOOL eax_2 = *(arg1 + 0x44)

if (eax_2 != 0)
    int32_t edx_2 = *data_4ac2a8
    
    if (edx_2 == 3)
        int32_t edx_3
        edx_3.b = 2
        sub_46fed0(eax_2, edx_3.b)
    else if (edx_2 == 7)
        *(eax_2 + 0x273) = 1
    
    if (*(arg1 + 0x5b) != 0)
        int32_t* eax_5 = *(arg1 + 0x44)
        
        if (*(eax_5 + 0x273) == 1 || data_4abaa4 == 1)
            sub_476368(arg1)
            
            if (data_4abaa4 == 1)
                sub_472e7c(*(arg1 + 0x44))
        else
            sub_46e590(eax_5, 1)
    
    do
        int32_t* var_24_1 = &var_4
        int32_t (* var_28_1)() = j_sub_404188
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        sub_476a98(arg1)
        fsbase->NtTib.ExceptionList = ExceptionList
    while (*(arg1 + 0xa4) == 0)

fsbase->NtTib.ExceptionList = ExceptionList_1
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_476de6
*(arg1 + 0xad) = 0
return arg1
