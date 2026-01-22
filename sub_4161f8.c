// 函数: sub_4161f8
// 地址: 0x4161f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == 0)
    return 

char* ecx_1 = arg2

if (arg2 != 0)
    ecx_1.b = arg2[0xfffffffc]
    ecx_1:1.b = *arg2
    ecx_1 &= 0xdfff

while (true)
    int32_t ebx_1
    ebx_1.b = *(arg1 + 1)
    void* esi_1 = arg1 + ebx_1 + 2
    ebx_1.b = *(esi_1 + 0xa)
    uint32_t i_1 = zx.d(*(esi_1 + ebx_1 + 0xb))
    
    if (i_1 != 0)
        arg1 = esi_1 + ebx_1 + 0xd
        uint32_t i
        
        do
            ebx_1.w = *(arg1 + 0x1a)
            ebx_1:1.b &= 0xdf
            
            if (ebx_1 == ecx_1)
                ebx_1:1.b = 0
                
                while (true)
                    ecx_1:1.b = arg2[ebx_1 - 1]
                    ecx_1:1.b ^= *(arg1 + ebx_1 + 0x1a)
                    
                    if ((ecx_1:1.b & 0xdf) != 0)
                        break
                    
                    int32_t temp1_1 = ebx_1
                    ebx_1 -= 1
                    
                    if (temp1_1 == 1)
                        return 
                
                ecx_1:1.b = *arg2
                ecx_1:1.b &= 0xdf
                ebx_1.b = *(arg1 + 0x1a)
            
            ebx_1:1.b = 0
            i = i_1
            i_1 -= 1
            arg1 = arg1 + ebx_1 + 0x1b
        while (i != 1)
    
    arg1 = *(esi_1 + 4)
    
    if (arg1 == 0)
        break
    
    arg1 = *arg1
