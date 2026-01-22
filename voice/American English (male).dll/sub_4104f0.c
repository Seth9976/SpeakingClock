// 函数: sub_4104f0
// 地址: 0x4104f0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t var_1c = 0
int32_t var_18 = 0
void* var_10 = nullptr
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_2 = (*(*arg1 + 0x14))(ExceptionList, var_2c, var_28) - 1

if (eax_2 s>= 0)
    int32_t i_1 = eax_2 + 1
    int32_t* var_c_1 = nullptr
    int32_t i
    
    do
        (*(*arg1 + 0xc))(arg2)
        sub_410b50(arg1)
        sub_403bd4()
        void* eax_8 = sub_40aa40(var_18, var_10)
        
        if (eax_8 != 0)
            var_c_1 = &var_1c
            sub_403ee0(eax_8 - 1, 1, var_10, var_c_1)
            
            if ((*(*arg1 + 0x34))() == 0)
                goto label_410595
        
        var_c_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_c_2 = 0xffffffff
label_410595:
fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_4105ba
sub_403a10(&var_1c, 2)
void** result = &var_10
sub_4039ec(result)
return result
