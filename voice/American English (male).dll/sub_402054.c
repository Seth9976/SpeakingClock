// 函数: sub_402054
// 地址: 0x402054
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp

if (data_4145bc != 0)
    if (arg1 s<= 0x7ffffff8)
        goto label_402085
    
    ebp[-1] = 0
else
    char eax
    eax, ebp = sub_401968()
    
    if (eax == 0 || arg1 s> 0x7ffffff8)
        ebp[-1] = 0
    else
    label_402085:
        int32_t* var_1c_1 = ebp
        int32_t (* var_20_1)(void* arg1, void* arg2) = j_sub_40338c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        
        if (data_414045 != 0)
            EnterCriticalSection(&data_4145c4)
        
        int32_t ebx_2 = (arg1 + 7) & 0xfffffffc
        
        if (ebx_2 s< 0xc)
            ebx_2 = 0xc
        
        int32_t* edx_2
        
        if (ebx_2 s<= 0x1000)
            int32_t eax_1 = ebx_2
            
            if (eax_1 s< 0)
                eax_1 += 3
            
            edx_2 = *(data_41461c + (eax_1 s>> 2 << 2) - 0xc)
        
        if (ebx_2 s> 0x1000 || edx_2 == 0)
            if (ebx_2 s> data_414614)
                ebp[-1] = sub_401f60(ebx_2)
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t var_1c_2 = 0x4021d7
                
                if (data_414045 == 0)
                    return 0
                
                return LeaveCriticalSection(&data_4145c4)
            
            data_414614 -= ebx_2
            
            if (data_414614 s< 0xc)
                ebx_2 += data_414614
                data_414614 = 0
            
            int32_t* eax_10 = data_414618
            data_414618 += ebx_2
            *eax_10 = ebx_2 | 2
            ebp[-1] = &eax_10[1]
            data_4145ac += 1
            data_4145b0 += ebx_2 - 4
            sub_403470(ExceptionList, var_20_1)
        else
            int32_t* eax_4 = edx_2 + ebx_2
            *eax_4 &= 0xfffffffe
            int32_t* eax_5 = edx_2[1]
            
            if (edx_2 != eax_5)
                int32_t ecx_2 = ebx_2
                
                if (ecx_2 s< 0)
                    ecx_2 += 3
                
                *(data_41461c + (ecx_2 s>> 2 << 2) - 0xc) = eax_5
                ebp[-2] = *edx_2
                *(ebp[-2] + 4) = eax_5
                *eax_5 = ebp[-2]
            else
                int32_t eax_6 = ebx_2
                
                if (eax_6 s< 0)
                    eax_6 += 3
                
                *(data_41461c + (eax_6 s>> 2 << 2) - 0xc) = 0
            
            *edx_2 = edx_2[2] | 2
            ebp[-1] = &edx_2[1]
            data_4145ac += 1
            data_4145b0 += ebx_2 - 4
            sub_403470(ExceptionList, var_20_1)

return ebp[-1]
