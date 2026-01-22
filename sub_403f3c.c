// 函数: sub_403f3c
// 地址: 0x403f3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

while (true)
    int16_t* esi_1 = arg1[-0xd]
    
    if (esi_1 != 0)
        int32_t ecx
        ecx.w = *esi_1
        void* esi_2 = &esi_1[1]
        
        while (arg2 != *(esi_2 + 2))
            int32_t ebx
            ebx.w = *esi_2
            esi_2 += ebx
            int32_t temp0_1 = ecx
            ecx -= 1
            
            if (temp0_1 == 1)
                goto label_403f63
        
        int32_t ecx_1
        ecx_1.b = *(esi_2 + 6)
        __builtin_memcpy(arg3, esi_2 + 6, ecx_1 + 1)
        return 
    
label_403f63:
    arg1 = arg1[-9]
    
    if (arg1 == 0)
        *arg3 = arg1.b
        return 
    
    arg1 = *arg1
