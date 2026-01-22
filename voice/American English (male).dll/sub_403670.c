// 函数: sub_403670
// 地址: 0x403670
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* result = data_414638

if (result != 0)
    int32_t esi_1 = *result
    int32_t ebx_1 = 0
    int32_t edi_1 = result[1]
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18_1)() = j_sub_403260
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (esi_1 s> 0)
        do
            int32_t eax = *(edi_1 + (ebx_1 << 3))
            ebx_1 += 1
            data_41463c = ebx_1
            
            if (eax != 0)
                eax()
        while (esi_1 s> ebx_1)
    
    result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList

return result
