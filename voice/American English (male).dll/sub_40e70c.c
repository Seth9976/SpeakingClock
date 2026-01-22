// 函数: sub_40e70c
// 地址: 0x40e70c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
EnterCriticalSection(&data_414824)
int32_t* var_10_1 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = sub_4046e4(data_414820) - 1

if (i s>= 0)
    do
        int32_t* eax_3 = *(data_414820 + (i << 2))
        
        if (eax_3 != data_413328)
            sub_402eb0(eax_3)
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_2)(int32_t arg1, int32_t arg2) = sub_40e774
return sub_40e762() __tailcall
