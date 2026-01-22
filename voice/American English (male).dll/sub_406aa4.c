// 函数: sub_406aa4
// 地址: 0x406aa4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

arg3.b = arg3.b

if (arg3.b == 0)
    if (arg1 s>= 0)
        return sub_406aba(arg1, arg2, arg4) __tailcall
    
    uint32_t eax_3
    int32_t ecx_1
    eax_3, ecx_1 = sub_406aba(neg.d(arg1), arg2, arg4)
    eax_3.b = 0x2d
    *(arg4 - 1) = 0x2d
    return eax_3

uint8_t* var_8 = arg4

do
    int32_t edx_1 = 0
    arg4 -= 1
    uint8_t edx_2 = (modu.dp.d(edx_1:arg1, arg3)).b + 0x30
    
    if (edx_2 u>= 0x3a)
        edx_2 += 7
    
    *arg4 = edx_2
    arg1 = divu.dp.d(edx_1:arg1, arg3)
while (arg1 != 0)

void* ecx_4 = var_8 - arg4
char* edx_4 = arg2 - ecx_4

if (arg2 u> ecx_4)
    arg1.b = 0x30
    void* esi_1 = arg4 - edx_4
    
    while (true)
        char* temp4_1 = edx_4
        edx_4 -= 1
        
        if (temp4_1 == 1)
            break
        
        *(edx_4 + esi_1) = 0x30
    
    *esi_1 = 0x30

return arg1
