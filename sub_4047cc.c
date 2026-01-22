// 函数: sub_4047cc
// 地址: 0x4047cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* result = data_4af7cc

if (result != 0)
    int32_t edi_1 = *result
    int32_t ebx_1 = 0
    var_8 = result[1]
    int32_t __saved_ebp
    int32_t* var_18_1 = &__saved_ebp
    int32_t (* var_1c_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (edi_1 s> 0)
        do
            int32_t esi_1 = *(var_8 + (ebx_1 << 3))
            ebx_1 += 1
            data_4af7d0 = ebx_1
            
            if (esi_1 != 0)
                esi_1()
        while (edi_1 s> ebx_1)
    
    result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList

return result
