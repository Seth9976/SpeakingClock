// 函数: sub_470ba8
// 地址: 0x470ba8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if (arg1[0x6d] != 0)
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
    
    if (arg1[0xcb] != 0)
        int32_t* eax_3 = sub_46fc94(arg1)
        int32_t eax_7 = *(arg1[0xcb] + 8) - 1
        
        if (eax_7 s>= 0)
            int32_t var_c = 0
            
            if ((*(arg1 + 0x55) & 0x20) != 0)
                void* eax_12
                int32_t edx_1
                eax_12, edx_1 = sub_41a0f4(arg1[0xcb], 0)
                edx_1.b = 1
                sub_460db8(eax_12, edx_1)
            
            int32_t* var_20_1 = &var_4
            int32_t (* var_24_1)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_419f9c(eax_3, sub_41a0f4(arg1[0xcb], var_c))
            int32_t edx_5 = *sub_41a0f4(arg1[0xcb], var_c)
            (*(edx_5 + 0xb0))(ExceptionList, var_24_1, var_20_1, eax_7 + 1, eax_3)
            fsbase->NtTib.ExceptionList = arg1
            __return_addr = &data_470c95
            
            if ((*(arg1 + 0x55) & 0x20) == 0)
                return arg1
            
            return sub_460db8(sub_41a0f4(arg1[0xcb], var_c), 0)
    
    int32_t var_14 = arg1[0x6d]
    int32_t* eax_26
    eax_26.b = (*(arg1 + 0x55) & 0x20) != 0
    char var_10_1 = eax_26.b
    LPARAM lParam = &var_14
    WNDENUMPROC lpfn = sub_470b64
    ExceptionList = GetCurrentThreadId()
    EnumThreadWindows(ExceptionList, lpfn, lParam)

return sub_45c0f4(arg1)
