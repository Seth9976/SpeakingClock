// 函数: sub_409de0
// 地址: 0x409de0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edi = arg2
void* esi = arg1
int32_t result = 0
int32_t i = arg3

if (i != 0)
    while (i != 0)
        bool cond:0_1 = 0 != *edi
        edi += 1
        i -= 1
        
        if (not(cond:0_1))
            break
    
    int32_t ecx = arg3 - i
    void* edi_1 = arg2
    bool cond:2_1 = true
    
    while (true)
        if (ecx != 0)
            char temp0_1 = *esi
            char temp1_1 = *edi_1
            cond:2_1 = temp0_1 == temp1_1
            esi += 1
            edi_1 += 1
            ecx -= 1
            
            if (temp0_1 == temp1_1)
                continue
        
        if (cond:2_1)
            break
        
        result.b = *(esi - 1)
        
        if (result.b u>= 0x61 && result.b u<= 0x7a)
            result.b -= 0x20
        
        int32_t edx
        edx.b = *(edi_1 - 1)
        
        if (edx.b u>= 0x61 && edx.b u<= 0x7a)
            edx.b -= 0x20
        
        int32_t result_1 = result
        result -= edx
        cond:2_1 = result_1 == edx
        
        if (result_1 != edx)
            break

return result
