// 函数: sub_4021e4
// 地址: 0x4021e4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
data_4145c0 = 0
char eax

if (data_4145bc == 0)
    eax, ebp = sub_401968()

if (data_4145bc != 0 || eax != 0)
    int32_t* var_18_1 = ebp
    int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_40338c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_414045 != 0)
        EnterCriticalSection(&data_4145c4)
    
    int32_t* esi_2 = arg1 - 4
    int32_t ebx_1 = *esi_2
    
    if ((ebx_1.b & 2) == 0)
        data_4145c0 = 9
    label_402352:
        ebp[-1] = data_4145c0
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_18_2 = 0x40237d
        
        if (data_414045 == 0)
            return 0
        
        return LeaveCriticalSection(&data_4145c4)
    
    data_4145ac -= 1
    data_4145b0 -= (ebx_1 & 0x7ffffffc) - 4
    
    if ((ebx_1.b & 1) == 0)
        goto label_4022b8
    
    int32_t edx_1 = *(esi_2 - 4)
    
    if (edx_1 s< 0xc || (edx_1 & 0x80000003) != 0)
        data_4145c0 = 0xa
        goto label_402352
    
    void* eax_7 = esi_2 - edx_1
    
    if (edx_1 != *(eax_7 + 8))
        data_4145c0 = 0xa
        goto label_402352
    
    ebx_1 += edx_1
    esi_2 = eax_7
    sub_401b0c(eax_7)
label_4022b8:
    void* ebx_2 = ebx_1 & 0x7ffffffc
    void* eax_9 = esi_2 + ebx_2
    
    if (eax_9 != data_414618)
        int32_t edx_2 = *eax_9
        
        if ((edx_2.b & 2) == 0)
            if (*(eax_9 + 4) == 0 || *eax_9 == 0 || *(eax_9 + 8) s< 0xc)
                data_4145c0 = 0xb
            else
                ebx_2 += *(eax_9 + 8)
                sub_401b0c(eax_9)
                sub_401d74(esi_2, ebx_2)
        else if ((edx_2 & 0x7ffffffc) s>= 4)
            *eax_9 |= 1
            sub_401d74(esi_2, ebx_2)
        else
            data_4145c0 = 0xb
        
        goto label_402352
    
    data_414618 -= ebx_2
    data_414614 += ebx_2
    
    if (data_414614 s> 0x3c00)
        sub_401dfc()
    
    ebp[-1] = 0
    sub_403470(ExceptionList, var_1c_1)
else
    data_4145c0 = 8
    ebp[-1] = 8

return ebp[-1]
