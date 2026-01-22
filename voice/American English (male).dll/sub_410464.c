// 函数: sub_410464
// 地址: 0x410464
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_10 = 0
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_2 = (*(*arg1 + 0x14))(ExceptionList, var_24, var_20) - 1

if (esi_2 s>= 0)
    int32_t i_1 = esi_2 + 1
    int32_t var_c_1 = 0
    int32_t i
    
    do
        (*(*arg1 + 0xc))(arg2)
        
        if ((*(*arg1 + 0x34))() == 0)
            goto label_4104cb
        
        var_c_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_c_2 = 0xffffffff
label_4104cb:
fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_4104e3
int32_t* result = &var_10
sub_4039ec(result)
return result
