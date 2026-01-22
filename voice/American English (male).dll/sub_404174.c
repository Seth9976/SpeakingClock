// 函数: sub_404174
// 地址: 0x404174
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx
int32_t var_4 = ebx
void* esi = arg1
void* edi = arg2

if (arg1 != arg2)
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
        
        if (edx_1 != 0)
            while (true)
                if (*esi == *edi)
                    int32_t edx_2 = edx_1 - 1
                    
                    if (edx_1 == 1)
                        esi += 4
                        edi += 4
                        break
                    
                    if (*(esi + 4) == *(edi + 4))
                        esi += 8
                        edi += 8
                        edx_1 = edx_2 - 1
                        
                        if (edx_2 == 1)
                            break
                        
                        continue
                
                goto label_4041f4
        
        if ((edx & 2) != 0)
            int32_t ecx
            ecx.w = *esi
            ebx.w = *edi

label_4041f4:
