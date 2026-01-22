// 函数: sub_402f64
// 地址: 0x402f64
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t* var_c = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3 = 0
void* eax_1 = sub_402ff8(*arg1, var_8)

if (eax_1 != 0)
    int32_t eax_2 = *(eax_1 + 0x14)
    
    if (eax_2 == 0)
        sub_402f34(arg1, *(eax_1 + 0x18), &var_c)
        sub_404f68(arg3, var_c)
    else
        *arg3 = arg1 + eax_2
        
        if (*arg3 != 0)
            int32_t* eax_3 = *arg3
            (*(*eax_3 + 4))(eax_3)
            esp = &var_8

void* ebx_1
ebx_1.b = *arg3 != 0
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_402fef
int32_t* result = &var_c
sub_404f50(result)
return result
