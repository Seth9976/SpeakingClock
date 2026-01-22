// 函数: sub_45c37c
// 地址: 0x45c37c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1
uint32_t eax

while (true)
    int32_t* esi_1 = ebx[0xc]
    
    if (esi_1 == 0)
        eax = arg1
        
        if ((*(eax + 0x1c) & 8) == 0)
            eax = sub_403df4(ebx, 0x46a11c)
            
            if (eax.b != 0 || ebx[0x71] != 0)
                return sub_45c20c(arg1)
        
        break
    
    ebx = esi_1
    
    if (*(ebx + 0x1da) == 0)
        eax = arg1
        
        if (*(eax + 0x1da) != 0)
            eax = *(arg1 + 0x50) & data_4ab924
            
            if (eax != data_4ab924)
                *(arg1 + 0x50) |= data_4ab924
                int32_t __saved_ebp
                int32_t* var_1c = &__saved_ebp
                int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
                TEB* fsbase
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                *(arg1 + 0x1da) = 0
                sub_458ac8(arg1, 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                void* const var_1c_1 = &data_45c466
                int32_t eax_10 = *(arg1 + 0x50) & not.d(data_4ab924)
                *(arg1 + 0x50) = eax_10
                return eax_10
        
        break

return eax
