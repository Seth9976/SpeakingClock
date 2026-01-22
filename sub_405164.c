// 函数: sub_405164
// 地址: 0x405164
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 != 0 && arg1 != 0)
    void* esi_1 = *(arg2 - 4)
    int32_t ebx_1 = *(arg1 - 4)
    
    if (esi_1 s>= ebx_1 && ebx_1 s> 0)
        void* esi_2 = esi_1 + arg2
        void* edx = arg2 + ebx_1 - 1
        void* eax = arg1 + ebx_1 - 1
        void* var_14_1 = edx
        int32_t ebx_3 = neg.d(ebx_1 - 1)
        char ecx_1 = *eax
        
        if (ebx_3 != 0)
            while (true)
                if (ecx_1 == *edx)
                label_405288:
                    int32_t esi_6 = ebx_3
                    
                    while (*(eax + esi_6) == *(edx + esi_6))
                        int32_t temp0_1 = esi_6
                        esi_6 += 2
                        
                        if (temp0_1 s>= 0xfffffffe)
                            return edx + 1 - var_14_1
                
                if (ecx_1 == *(edx + 1))
                label_40525b:
                    int32_t esi_5 = ebx_3
                    
                    while (*(eax + esi_5) == *(edx + esi_5 + 1))
                        int32_t temp1_1 = esi_5
                        esi_5 += 2
                        
                        if (temp1_1 s>= 0xfffffffe)
                            if (edx + 2 u> esi_2)
                                return nullptr
                            
                            return edx + 2 - var_14_1
                
                edx += 2
                
                if (edx u< esi_2 - 2)
                    while (true)
                        if (ecx_1 == *edx)
                            goto label_405288
                        
                        if (ecx_1 == *(edx + 1))
                            goto label_40525b
                        
                        if (ecx_1 == *(edx + 2))
                            edx += 2
                            goto label_405288
                        
                        if (ecx_1 == *(edx + 3))
                            edx += 2
                            goto label_40525b
                        
                        edx += 4
                        
                        if (edx u>= esi_2 - 2)
                            if (edx u< esi_2)
                                break
                            
                            return nullptr
                else
                    if (edx u>= esi_2)
                        break
            
            return nullptr
        
        while (true)
            if (ecx_1 == *edx)
                return edx + 1 - var_14_1
            
            if (ecx_1 == *(edx + 1))
            label_4051fb:
                
                if (edx + 2 u> esi_2)
                    return 0
                
                return edx + 2 - var_14_1
            
            edx += 2
            
            if (edx u< esi_2 - 2)
                while (true)
                    if (ecx_1 == *edx)
                        return edx + 1 - var_14_1
                    
                    if (ecx_1 == *(edx + 1))
                        goto label_4051fb
                    
                    if (ecx_1 == *(edx + 2))
                        return edx + 3 - var_14_1
                    
                    if (ecx_1 == *(edx + 3))
                        edx += 2
                        goto label_4051fb
                    
                    edx += 4
                    
                    if (edx u>= esi_2 - 2)
                        if (edx u< esi_2)
                            break
                        
                        return 0
            else
                if (edx u>= esi_2)
                    break

return 0
