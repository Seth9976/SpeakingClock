// 函数: sub_41033c
// 地址: 0x41033c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
void* var_24 = nullptr
void* var_1c = nullptr
void* var_20 = nullptr
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_4 = (*(*arg1 + 0x14))(ExceptionList, var_38, var_34)
int32_t ebx_1 = 0
sub_403a84(&var_20, sub_41045b+5)

if (i_4 - 1 s>= 0)
    int32_t i_2 = i_4
    int32_t var_10_1 = 0
    int32_t i
    
    do
        (*(*arg1 + 0xc))(arg1)
        ebx_1 += sub_403c88(var_24) + sub_403c88(var_20)
        var_10_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

sub_403adc(arg2, 0, ebx_1)
int32_t var_18 = *arg2

if (i_4 - 1 s>= 0)
    int32_t i_3 = i_4
    int32_t var_10_2 = 0
    int32_t i_1
    
    do
        (*(*arg1 + 0xc))(arg1)
        int32_t eax_12 = sub_403c88(var_1c)
        
        if (eax_12 != 0)
            sub_4027b0(var_1c, var_18, eax_12)
            var_18 += eax_12
        
        int32_t eax_15 = sub_403c88(var_20)
        
        if (eax_15 != 0)
            sub_4027b0(var_20, var_18, eax_15)
            var_18 += eax_15
        
        var_10_2 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_41044e
return sub_403a10(&var_24, 3)
