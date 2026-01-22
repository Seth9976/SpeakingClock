// 函数: sub_41045b
// 地址: 0x41045b
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*arg2 += 1
*arg1 += arg1.b
*0x5500000a += arg3
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_c = 0
void* const* var_1c = &__return_addr
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_2 = (*(*arg1 + 0x14))(ExceptionList, var_20, var_1c) - 1
int32_t var_8_1

if (esi_2 s>= 0)
    int32_t i_1 = esi_2 + 1
    var_8_1 = 0
    int32_t i
    
    do
        (*(*arg1 + 0xc))(var_8_1, arg2)
        
        if ((*(*arg1 + 0x34))() == 0)
            goto label_4104cb
        
        var_8_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

var_8_1 = 0xffffffff
label_4104cb:
fsbase->NtTib.ExceptionList = var_8_1
__return_addr = sub_4104e3
int32_t* result = &var_c
sub_4039ec(result)
return result
