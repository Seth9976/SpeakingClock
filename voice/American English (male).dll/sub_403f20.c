// 函数: sub_403f20
// 地址: 0x403f20
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg1 == 0)
    return 

if (arg2 == 0)
    return 

char* esi_1 = arg1
void* edi_1 = arg2
int32_t ecx_1 = *(edi_1 - 4)
void* var_10_1 = edi_1
int32_t edx = *(esi_1 - 4)

if (edx - 1 s< 0)
    return 

arg1.b = *esi_1
void* esi_2 = &esi_1[1]
int32_t ecx_2 = ecx_1 - (edx - 1)
bool cond:1_1 = ecx_1 != edx - 1
bool cond:3_1 = ecx_1 == edx - 1

if (ecx_1 s<= edx - 1)
    return 

while (true)
    if (ecx_2 != 0)
        char temp2_1 = *edi_1
        cond:1_1 = arg1.b != temp2_1
        cond:3_1 = arg1.b == temp2_1
        edi_1 += 1
        ecx_2 -= 1
        
        if (arg1.b != temp2_1)
            continue
    
    if (cond:1_1)
        break
    
    void* var_14_1 = esi_2
    void* var_18_1 = edi_1
    int32_t i = edx - 1
    
    while (i != 0)
        char temp3_1 = *esi_2
        char temp4_1 = *edi_1
        cond:1_1 = temp3_1 != temp4_1
        cond:3_1 = temp3_1 == temp4_1
        esi_2 += 1
        edi_1 += 1
        i -= 1
        
        if (temp3_1 != temp4_1)
            break
    
    edi_1 = var_18_1
    esi_2 = var_14_1
    
    if (cond:3_1)
        break
