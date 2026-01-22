// 函数: sub_403484
// 地址: 0x403484
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax
eax.b = *arg1
int32_t edx
edx.b = *arg2
void* esi_1 = &arg1[1]
void* edi_1 = &arg2[1]
int32_t result = eax - edx

if (eax u<= edx)
    edx += result

uint32_t edx_1 = edx u>> 2
int32_t ecx

if (edx_1 == 0)
label_4034c8:
    int32_t edx_4 = edx & 3
    
    if (edx_4 == 0)
        return result * 2
    
    ecx.b = *esi_1
    
    if (ecx.b == *edi_1)
        if (edx_4 == 1)
            return result * 2
        
        ecx.b = *(esi_1 + 1)
        
        if (ecx.b == *(edi_1 + 1))
            if (edx_4 == 2)
                return result * 2
            
            ecx.b = *(esi_1 + 2)
            
            if (ecx.b == *(edi_1 + 2))
                return result * 2
else
    while (true)
        ecx = *esi_1
        int32_t ebx_1 = *edi_1
        
        if (ecx == ebx_1)
            int32_t edx_2 = edx_1 - 1
            
            if (edx_1 == 1)
                esi_1 += 4
                edi_1 += 4
                goto label_4034c8
            
            ecx = *(esi_1 + 4)
            ebx_1 = *(edi_1 + 4)
            
            if (ecx == ebx_1)
                esi_1 += 8
                edi_1 += 8
                edx_1 = edx_2 - 1
                
                if (edx_2 == 1)
                    goto label_4034c8
                
                continue
        
        if (ecx.b != ebx_1.b)
            break
        
        break
return result
