// 函数: sub_403f7c
// 地址: 0x403f7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
ebx.b = *arg2
int32_t* var_10 = arg1

do
    void* eax = *arg1
    int16_t* esi_1 = *(eax - 0x38)
    
    if (esi_1 != 0)
        int32_t j_1
        j_1.w = *esi_1
        void* esi_2 = &esi_1[3]
        int32_t j
        
        do
            char* ecx
            ecx.b = *(esi_2 + 6)
            
            if (ecx.b == ebx.b)
                while (true)
                    ebx.b = *(ecx + esi_2 + 6)
                    ebx.b ^= *(ecx + arg2)
                    ebx.b &= 0xdf
                    
                    if (ebx.b != 0)
                        ebx.b = *arg2
                        ecx.b = *(esi_2 + 6)
                        break
                    
                    char* temp1_1 = ecx
                    ecx -= 1
                    
                    if (temp1_1 == 1)
                        return *esi_2 + var_10
            
            esi_2 = ecx + esi_2 + 7
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    arg1 = *(eax - 0x24)
while (arg1 != 0)

return arg1
