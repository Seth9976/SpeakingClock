// 函数: sub_43ff50
// 地址: 0x43ff50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 != 0 && arg2 != 0 && arg3 s>= 1)
    int32_t ebx_1 = *(arg1 - 4)
    void* esi_2 = *(arg2 - 4) - (arg3 - 1)
    void* edx = arg2 + arg3 - 1
    
    if (esi_2 s>= ebx_1 && ebx_1 s> 0)
        void* esi_3 = esi_2 + edx
        void* edx_1 = edx + ebx_1 - 1
        void* eax = arg1 + ebx_1 - 1
        void* ecx_1 = arg3 - 1 - edx_1
        char ecx_2 = *eax
        
        while (true)
        label_43ff8d:
            
            if (ecx_2 == *edx_1)
                goto label_43ffc0
            
            if (ecx_2 == *(edx_1 + 1))
                break
            
            while (true)
                edx_1 += 4
                
                if (edx_1 u>= esi_3)
                    edx_1 -= 2
                    
                    if (edx_1 u< esi_3)
                        goto label_43ff8d
                    
                    goto label_43ffaf
                
                if (ecx_2 != *(edx_1 - 2))
                    if (ecx_2 != *(edx_1 - 1))
                        break
                    
                    edx_1 += 1
                
                edx_1 -= 2
            label_43ffc0:
                edx_1 -= 1
            label_43ffc3:
                int32_t esi_4 = neg.d(ebx_1 - 1)
                
                if (esi_4 != 0)
                label_43ffce:
                    
                    if (*(eax + esi_4) != *(edx_1 + esi_4 + 1))
                        continue
                    else if (esi_4 s< 0xfffffffe)
                        if (*(eax + esi_4 + 2) != *(edx_1 + esi_4 + 3))
                            continue
                        else
                            int32_t temp1_1 = esi_4
                            esi_4 += 4
                            
                            if (temp1_1 s< 0xfffffffc)
                                goto label_43ffce
                
                if (edx_1 + 2 u> esi_3)
                    goto label_43ffaf
                
                return ecx_1 + edx_1 + 2
        
        goto label_43ffc3

label_43ffaf:
return 0
