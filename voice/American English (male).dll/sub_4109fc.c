// 函数: sub_4109fc
// 地址: 0x4109fc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
void* var_c = nullptr
char* ebx_1 = arg2
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_40ffe8(arg1)
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40338c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x44))(ExceptionList, var_24, var_20, ExceptionList_1, var_18, var_14)

if (ebx_1 != 0)
    while (*ebx_1 != 0)
        char* eax_2 = ebx_1
        
        while (true)
            char edx_1 = *ebx_1
            
            if (edx_1 == 0)
                break
            
            if (edx_1 == 0xa)
                break
            
            if (edx_1 == 0xd)
                break
            
            ebx_1 = &ebx_1[1]
        
        sub_403adc(&var_c, eax_2, ebx_1 - eax_2)
        (*(*arg1 + 0x38))(arg1)
        
        if (*ebx_1 == 0xd)
            ebx_1 = &ebx_1[1]
        
        if (*ebx_1 == 0xa)
            ebx_1 = &ebx_1[1]

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_410a9a
return sub_4100a4(arg1)
