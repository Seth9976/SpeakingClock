// 函数: sub_4042b4
// 地址: 0x4042b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg3[1] & 6) == 0)
    void* eax
    
    if (*arg3 == 0xeedfade)
        eax = *arg3[6]
    label_4042f6:
        EXCEPTION_POINTERS ExceptionInfo
        ExceptionInfo.ContextRecord = arg1
        ExceptionInfo.ExceptionRecord = arg2
        void* ecx_1 = *(arg4 + 4)
        int32_t ebx_1 = *(ecx_1 + 5)
        void* esi = ecx_1 + 9
        
        while (true)
            int32_t* eax_5 = *esi
            
            if (eax_5 == 0)
                break
            
            void* edi = eax
            
            while (true)
                void* eax_2 = *eax_5
                
                if (eax_2 == edi)
                    goto label_40434d
                
                if (*(eax_2 - 0x28) == *(edi - 0x28))
                    char* eax_3 = *(eax_2 - 0x2c)
                    char* edx_3 = *(edi - 0x2c)
                    int32_t ecx_3
                    ecx_3.b = *eax_3
                    
                    if (ecx_3.b == *edx_3)
                        sub_403508(&eax_3[1], &edx_3[1], ecx_3)
                        
                        if (edx_3 == 0xffffffff)
                            goto label_40434d
                
                void** edi_1 = *(edi - 0x24)
                eax_5 = *esi
                
                if (edi_1 == 0)
                    esi += 8
                    int32_t temp0_1 = ebx_1
                    ebx_1 -= 1
                    
                    if (temp0_1 != 1)
                        break
                    
                    return 1
                
                edi = *edi_1
        
    label_40434d:
        int32_t* ExceptionList_2 = arg3
        int32_t* ExceptionList_4 = ExceptionList_2[6]
        int32_t ecx_4 = ExceptionList_2[5]
        int32_t* ExceptionList
        
        if (*ExceptionList_2 == 0xeedfade)
            if (data_4aa028 u<= 1 || data_4aa024 u> 0)
                goto label_4043cc
            
            ExceptionList = ExceptionList_2
            bool cond:1_1 = UnhandledExceptionFilter(&ExceptionInfo) == 0
            ExceptionList_2 = ExceptionList
            
            if (not(cond:1_1))
                goto label_4043cc
        else
            int32_t* ExceptionList_1
            int32_t ecx_5
            ExceptionList_1, ecx_5 = data_4ad010()
            sub_4040a0(ecx_5, arg5)
            bool cond:2_1
            
            if (data_4aa028 u> 0 && data_4aa024 u<= 0)
                ExceptionList = ExceptionList_1
                cond:2_1 = UnhandledExceptionFilter(&ExceptionInfo) == 0
                ExceptionList_1 = ExceptionList
            
            if (data_4aa028 u<= 0 || data_4aa024 u> 0 || not(cond:2_1))
                ExceptionList_4 = ExceptionList_1
                ExceptionList_2 = arg3
                ecx_4 = ExceptionList_2[3]
            label_4043cc:
                TEB* fsbase
                ExceptionList = fsbase->NtTib.ExceptionList
                ExceptionList_2[1] |= 2
                data_4ad018(arg4, 0x4043e8, ExceptionList_2, 0, esi, ecx_4, ExceptionList_4, 
                    ExceptionList_2)
                int32_t* ExceptionList_3 = ExceptionList
                int32_t*** eax_8 = sub_406b68()
                ExceptionList = *eax_8
                *eax_8 = &ExceptionList
                *(arg6 + 8)
                *(arg6 + 4) = 0x404414
                sub_4040dc()
                jump(*(ExceptionList_3 + 4))
    else
        sub_403b24()
        int32_t edx_1 = data_4ad00c
        
        if (edx_1 != 0)
            eax = edx_1()
            
            if (eax != 0)
                goto label_4042f6

return 1
