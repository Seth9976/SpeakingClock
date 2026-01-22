// 函数: sub_46ce20
// 地址: 0x46ce20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax = arg1

if (*(eax + 0x260) == 0)
    eax = sub_45fc28(arg1)
    
    if (eax.b != 0)
        int32_t __saved_ebp
        int32_t* var_c = &__saved_ebp
        int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        *(arg1 + 0x260) = 1
        
        if (sub_46c3b0(*(arg1 + 0x254)) == 0)
            if (sub_46c3b0(*(arg1 + 0x250)) == 0)
                sub_46ca28(*(arg1 + 0x254), 0, 0)
                sub_46ca28(*(arg1 + 0x250), 1, 0)
            else
                sub_46ca28(*(arg1 + 0x254), 0, 1)
                sub_46ca28(*(arg1 + 0x250), 1, 0)
        else
            sub_46ca28(*(arg1 + 0x250), 0, 1)
            sub_46ca28(*(arg1 + 0x254), 1, 0)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        void* const var_c_1 = &data_46cf12
        *(arg1 + 0x260) = 0
        return arg1

return eax
