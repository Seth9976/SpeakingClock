// 函数: sub_403610
// 地址: 0x403610
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* const result = data_414638

if (result != 0)
    int32_t i = data_41463c
    int32_t esi_1 = *(result + 4)
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18_1)() = j_sub_403260
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    while (i s> 0)
        i -= 1
        data_41463c = i
        int32_t eax = *(esi_1 + (i << 3) + 4)
        
        if (eax != 0)
            eax()
    
    result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList

return result
