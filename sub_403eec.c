// 函数: sub_403eec
// 地址: 0x403eec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
ebx.b = *arg2
void** result

while (true)
    int16_t* esi_1 = *(arg1 - 0x34)
    
    if (esi_1 != 0)
        int32_t i_1
        i_1.w = *esi_1
        void* esi_2 = &esi_1[1]
        int32_t i
        
        do
            char* ecx
            ecx.b = *(esi_2 + 6)
            
            if (ecx.b == ebx.b)
                ecx:1.b = 0
                
                while (true)
                    ebx.b = *(ecx + esi_2 + 6)
                    ebx.b ^= *(ecx + arg2)
                    ebx.b &= 0xdf
                    
                    if (ebx.b != 0)
                        ebx.b = *arg2
                        break
                    
                    char* temp1_1 = ecx
                    ecx -= 1
                    
                    if (temp1_1 == 1)
                        return *(esi_2 + 2)
            
            ecx.w = *esi_2
            esi_2 += ecx
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = *(arg1 - 0x24)
    
    if (result == 0)
        break
    
    arg1 = *result

return result
