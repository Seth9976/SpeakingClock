// 函数: sub_412188
// 地址: 0x412188
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
void* var_c = nullptr
void* var_10 = nullptr
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
sub_403e78(arg1)
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4039ec(arg2)
int32_t i_1 = sub_403c88(arg1)

if (i_1 s> 0)
    int32_t ebx_1 = 1
    int32_t i
    
    do
        int32_t eax_5 = ebx_1 & 0x80000001
        
        if (eax_5 s< 0)
            eax_5 = ((eax_5 - 1) | 0xfffffffe) + 1
        
        if (eax_5 != 0)
            void* edx_2
            edx_2.b = *(arg1 + ebx_1 - 1)
            edx_2.b += 3
            sub_403bd4()
            sub_403c90(arg2, var_10)
        else
            void* edx
            edx.b = *(arg1 + ebx_1 - 1)
            edx.b -= 0xc
            sub_403bd4()
            sub_403c90(arg2, var_c)
        
        ebx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41223b
return sub_403a10(&var_10, 3)
