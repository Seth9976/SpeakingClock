// 函数: sub_45c20c
// 地址: 0x45c20c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax_7

if (((*(arg1 + 0x57) == 0 || ((arg1[7].b & 0x10) != 0 && (*(arg1 + 0x55) & 8) != 0))
        && ((arg1[7].b & 0x10) == 0 || (*(arg1 + 0x55) & 8) != 0 || (*(arg1 + 0x51) & 4) != 0))
        || (arg1[0x15].b & 8) != 0 || (arg1[7].b & 8) != 0)
    eax_7 = nullptr
else
    eax_7.b = 1

char var_9 = eax_7.b

if (var_9 != 0)
    if (arg1[0x6d] == 0)
        (*(*arg1 + 0x98))()
    
    void* eax_11 = arg1[0x74]
    
    if (eax_11 != 0)
        int32_t ebx_2 = *(eax_11 + 8) - 1
        
        if (ebx_2 s>= 0)
            int32_t i_1 = ebx_2 + 1
            int32_t esi_1 = 0
            int32_t i
            
            do
                sub_41a0f4(arg1[0x74], esi_1)
                sub_45c20c()
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)

uint32_t eax_15 = arg1

if (*(eax_15 + 0x1b4) != 0)
    eax_15 = zx.d(*(arg1 + 0x1da))
    
    if (eax_15.b != var_9)
        *(arg1 + 0x1da) = var_9
        int32_t __saved_ebp
        int32_t* var_1c = &__saved_ebp
        int32_t (* var_20)() = j_sub_404188
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        arg1[0x14] |= data_4ab924
        int32_t* var_28 = &__saved_ebp
        int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        sub_458ac8(arg1, 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_28_1 = 0x45c34b
        arg1[0x14] &= not.d(data_4ab924)
        return arg1

return eax_15
