// 函数: sub_416148
// 地址: 0x416148
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx

if (arg2 != 0)
    char* ecx_1
    ecx_1.b = *(arg1 + 1)
    void* eax_1 = **(arg1 + ecx_1 + 0xb)
    ecx_1.b = *(eax_1 + 1)
    void* esi_1 = eax_1 + ecx_1 + 0xf
    int32_t edi_1 = *(eax_1 + ecx_1 + 7)
    int32_t result = 0
    
    do
        ecx_1.b = *esi_1
        
        if (ecx_1 == *(arg2 - 4))
            while (true)
                ebx.b = *(ecx_1 + arg2 - 1)
                ebx.b ^= *(ecx_1 + esi_1)
                
                if ((ebx.b & 0xdf) != 0)
                    break
                
                char* temp0_1 = ecx_1
                ecx_1 -= 1
                
                if (temp0_1 == 1)
                    return result
            
            ecx_1.b = *esi_1
        
        result += 1
        esi_1 = ecx_1 + esi_1 + 1
    while (result s<= edi_1)

return 0xffffffff
