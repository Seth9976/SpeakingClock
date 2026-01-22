// 函数: sub_406aba
// 地址: 0x406aba
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

uint8_t* var_8 = arg3

do
    int32_t edx = 0
    arg3 -= 1
    uint8_t edx_1 = (modu.dp.d(edx:arg1, 0xa)).b + 0x30
    
    if (edx_1 u>= 0x3a)
        edx_1 += 7
    
    *arg3 = edx_1
    arg1 = divu.dp.d(edx:arg1, 0xa)
while (arg1 != 0)

void* ecx_1 = var_8 - arg3
char* edx_3 = arg2 - ecx_1

if (arg2 u> ecx_1)
    arg1.b = 0x30
    void* esi = arg3 - edx_3
    
    while (true)
        char* temp4_1 = edx_3
        edx_3 -= 1
        
        if (temp4_1 == 1)
            break
        
        *(edx_3 + esi) = 0x30
    
    *esi = 0x30

return arg1
