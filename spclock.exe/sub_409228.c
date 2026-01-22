// 函数: sub_409228
// 地址: 0x409228
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
uint32_t ecx = arg1

if (ecx != 0)
    ecx = *(ecx - 4)

if (ecx != 0)
    ecx.b = *arg1 - 0x41
    char temp0_1 = ecx.b
    ecx.b -= 0x1a
    
    if (temp0_1 u< 0x1a)
        ecx.b = 1
    else
        char temp1_1 = ecx.b
        ecx.b -= 4
        
        if (temp1_1 == 4)
            ecx.b = 1
        else
            ecx.b -= 2
            char temp2_1 = ecx.b
            ecx.b -= 0x1a
            
            if (temp2_1 u< 0x1a)
                ecx.b = 1
            else
                ecx = 0
    
    ecx.b ^= 1
else
    ecx.b = 1

if (ecx.b == 0)
    if (arg2 == 0)
        char* edx_3 = arg1
        
        if (edx_3 != 0)
            edx_3 = *(edx_3 - 4)
        
        if (edx_3 s>= 2)
            void* i_3 = edx_3 - 1
            int32_t esi_2 = 2
            void* i
            
            do
                char ecx_3 = arg1[esi_2 - 1] - 0x30
                
                if (ecx_3 u>= 0xa && ecx_3 - 0x11 u>= 0x1a && ecx_3 != 0x2f
                        && ecx_3 - 0x31 u>= 0x1a)
                    return result
                
                esi_2 += 1
                i = i_3
                i_3 -= 1
            while (i != 1)
    else
        char* edx = arg1
        
        if (edx != 0)
            edx = *(edx - 4)
        
        if (edx s>= 2)
            void* i_2 = edx - 1
            int32_t esi_1 = 2
            void* i_1
            
            do
                char ecx_2 = arg1[esi_1 - 1]
                
                if (ecx_2 != 0x2e && ecx_2 - 0x30 u>= 0xa && ecx_2 - 0x41 u>= 0x1a && ecx_2 != 0x5f
                        && ecx_2 - 0x61 u>= 0x1a)
                    return result
                
                esi_1 += 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    result.b = 1

return result
