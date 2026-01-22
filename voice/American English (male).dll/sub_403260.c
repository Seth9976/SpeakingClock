// 函数: sub_403260
// 地址: 0x403260
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

EXCEPTION_RECORD* ExceptionRecord = arg1.ExceptionRecord

if ((ExceptionRecord->ExceptionFlags & 6) == 0)
    uint32_t ExceptionRecord_4 = ExceptionRecord->ExceptionInformation[1]
    void* ExceptionAddress = ExceptionRecord->ExceptionInformation[0]
    
    if (ExceptionRecord->ExceptionCode == 0xeedfade)
        goto label_4032ed
    
    sub_402e14()
    int32_t edx_1 = data_414010
    
    if (edx_1 != 0)
        uint32_t ExceptionRecord_3 = edx_1()
        
        if (ExceptionRecord_3 != 0)
            EXCEPTION_RECORD* ExceptionRecord_1 = arg1.ExceptionRecord
            
            if (ExceptionRecord_1->ExceptionCode != 0xeefface)
                sub_40318c(ExceptionRecord_1, arg2)
            
            uint32_t ExceptionRecord_2
            
            if (ExceptionRecord_1->ExceptionCode == 0xeefface || data_413028 u<= 0
                    || data_413024 u> 0)
                ExceptionRecord_4 = ExceptionRecord_3
                ExceptionRecord = arg1.ExceptionRecord
                ExceptionAddress = ExceptionRecord->ExceptionAddress
            label_4032ed:
                
                if (data_413028 u<= 1 || data_413024 u> 0)
                    goto label_403314
                
                ExceptionRecord_2 = ExceptionRecord
                bool cond:1_1 = UnhandledExceptionFilter(&arg1) == 0
                ExceptionRecord = ExceptionRecord_2
                
                if (not(cond:1_1))
                    goto label_403314
            else
                ExceptionRecord_2 = ExceptionRecord_3
                
                if (UnhandledExceptionFilter(&arg1) != 0)
                    ExceptionRecord_4 = ExceptionRecord_2
                    ExceptionRecord = arg1.ExceptionRecord
                    ExceptionAddress = ExceptionRecord->ExceptionAddress
                label_403314:
                    ExceptionRecord->ExceptionFlags |= 2
                    uint32_t ExceptionRecord_5
                    ExceptionRecord_2 = ExceptionRecord_5
                    int32_t esi
                    int32_t var_8_3 = esi
                    int32_t edi
                    int32_t var_c_2 = edi
                    int32_t ebp
                    int32_t var_10_2 = ebp
                    TEB* fsbase
                    data_414018(arg1.ContextRecord, 0x403338, ExceptionRecord, 0, ExceptionAddress, 
                        ExceptionRecord_4, ExceptionRecord, fsbase->NtTib.ExceptionList)
                    uint32_t** eax_3 = sub_4056cc()
                    ExceptionRecord_2 = *eax_3
                    *eax_3 = &ExceptionRecord_2
                    *(arg3 + 8)
                    int32_t ebx_1 = *(arg3 + 4)
                    *(arg3 + 4) = 0x403364
                    sub_4031c8()
                    jump(ebx_1 + 5)

return 1
