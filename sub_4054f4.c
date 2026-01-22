// 函数: sub_4054f4
// 地址: 0x4054f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

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
                
                goto label_405574
        
        if ((edx & 2) != 0)
            int32_t ecx
            ecx.w = *esi
            ebx.w = *edi

label_405574:
