// 函数: sub_404768
// 地址: 0x404768
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* const result = data_4af7cc

if (result != 0)
    int32_t i = data_4af7d0
    int32_t edi_1 = *(result + 4)
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    while (i s> 0)
        i -= 1
        data_4af7d0 = i
        int32_t esi_1 = *(edi_1 + (i << 3) + 4)
        
        if (esi_1 != 0)
            esi_1()
    
    result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList

return result
