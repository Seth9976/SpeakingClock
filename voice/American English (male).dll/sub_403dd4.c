// 函数: sub_403dd4
// 地址: 0x403dd4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* esi = arg1
void* edi = arg2

if (arg1 == arg2)
    return 

if (esi == 0)
    *(edi - 4)
else if (edi == 0)
    *(esi - 4)
else
    int32_t eax = *(esi - 4)
    void* edx = *(edi - 4)
    
    if (eax u<= edx)
        edx = eax
    
    uint32_t edx_1 = edx u>> 2
    
    if (edx_1 == 0)
    label_403e24:
        
        if ((edx & 3) != 0)
            *esi
            *edi
    else
        while (true)
            int32_t ecx_1 = *esi
            int32_t ebx_1 = *edi
            
            if (ecx_1 == ebx_1)
                int32_t edx_2 = edx_1 - 1
                
                if (edx_1 == 1)
                    esi += 4
                    edi += 4
                    goto label_403e24
                
                ecx_1 = *(esi + 4)
                ebx_1 = *(edi + 4)
                
                if (ecx_1 == ebx_1)
                    esi += 8
                    edi += 8
                    edx_1 = edx_2 - 1
                    
                    if (edx_2 == 1)
                        goto label_403e24
                    
                    continue
            
            if (ecx_1.b != ebx_1.b)
                break
            
            break
