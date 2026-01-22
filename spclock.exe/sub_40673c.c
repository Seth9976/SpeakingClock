// 函数: sub_40673c
// 地址: 0x40673c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == 0)
    return 0

int32_t result = 0xffffffff
int32_t eax = 0
int32_t esi_1 = 0

if (arg3 != 0)
    while (esi_1 u< arg4)
        if (eax u>= arg2)
            break
        
        uint32_t ecx = zx.d(arg1[esi_1])
        esi_1 += 1
        
        if ((ecx.b & 0x80) == 0)
            *(arg3 + (eax << 1)) = ecx.w
        else
            if (esi_1 u>= arg4)
                return result
            
            int32_t ecx_1 = ecx & 0x3f
            
            if ((ecx_1.b & 0x20) != 0)
                char edx_2 = arg1[esi_1]
                esi_1 += 1
                
                if ((edx_2 & 0xc0) != 0x80 || esi_1 u>= arg4)
                    return result
                
                ecx_1 = (zx.d(edx_2) & 0x3f) | ecx_1 << 6
            
            char edx_6 = arg1[esi_1]
            esi_1 += 1
            
            if ((edx_6 & 0xc0) != 0x80)
                return result
            
            *(arg3 + (eax << 1)) = (zx.w(edx_6) & 0x3f) | (ecx_1 << 6).w
        
        eax += 1
    
    if (eax u>= arg2)
        eax = arg2 - 1
    
    *(arg3 + (eax << 1)) = 0
else if (0 u< arg4)
    while (true)
        char edx_11 = arg1[esi_1]
        esi_1 += 1
        
        if ((edx_11 & 0x80) != 0)
            if (esi_1 u>= arg4)
                return result
            
            if ((edx_11 & 0x20) != 0)
                char edx_13 = arg1[esi_1]
                esi_1 += 1
                
                if ((edx_13 & 0xc0) != 0x80)
                    return result
                
                if (esi_1 u>= arg4)
                    return result
            
            char edx_15 = arg1[esi_1]
            esi_1 += 1
            
            if ((edx_15 & 0xc0) != 0x80)
                return result
        
        eax += 1
        
        if (esi_1 u>= arg4)
            return eax + 1

return eax + 1
