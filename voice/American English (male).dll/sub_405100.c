// 函数: sub_405100
// 地址: 0x405100
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg1 == 0)
    return 0

int32_t result = 0xffffffff
int32_t eax = 0
int32_t esi_1 = 0

if (arg3 != 0)
    while (esi_1 u< arg4)
        if (eax u>= arg2)
            break
        
        int32_t ecx
        ecx.b = arg1[esi_1]
        esi_1 += 1
        
        if ((ecx.b & 0x80) == 0)
            *(arg3 + (eax << 1)) = ecx.w
        else
            if (esi_1 u>= arg4)
                return result
            
            int32_t ecx_1 = ecx & 0x3f
            
            if ((ecx_1.b & 0x20) != 0)
                char* edx_1
                edx_1.b = arg1[esi_1]
                esi_1 += 1
                
                if ((edx_1.b & 0xc0) != 0x80 || esi_1 u>= arg4)
                    return result
                
                edx_1.b &= 0x3f
                ecx_1 = (edx_1 & 0xff) | ecx_1 << 6
            
            char* edx_4
            edx_4.b = arg1[esi_1]
            esi_1 += 1
            
            if ((edx_4.b & 0xc0) != 0x80)
                return result
            
            edx_4.b &= 0x3f
            *(arg3 + (eax << 1)) = (edx_4.w & 0xff) | (ecx_1 << 6).w
        
        eax += 1
    
    if (eax u>= arg2)
        eax = arg2 - 1
    
    *(arg3 + (eax << 1)) = 0
else if (0 u< arg4)
    while (true)
        char* edx_8
        edx_8.b = arg1[esi_1]
        esi_1 += 1
        
        if ((edx_8.b & 0x80) != 0)
            if (esi_1 u>= arg4)
                return result
            
            edx_8.b &= 0x3f
            
            if ((edx_8.b & 0x20) != 0)
                char* edx_9
                edx_9.b = arg1[esi_1]
                esi_1 += 1
                edx_9.b &= 0xc0
                
                if (edx_9.b != 0x80)
                    return result
                
                if (esi_1 u>= arg4)
                    return result
            
            char* edx_10
            edx_10.b = arg1[esi_1]
            esi_1 += 1
            edx_10.b &= 0xc0
            
            if (edx_10.b != 0x80)
                return result
        
        eax += 1
        
        if (esi_1 u>= arg4)
            return eax + 1

return eax + 1
