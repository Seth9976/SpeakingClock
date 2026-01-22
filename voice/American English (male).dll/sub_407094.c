// 函数: sub_407094
// 地址: 0x407094
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char* edi = arg2
int32_t ebx = arg3
bool cond:1 = arg3 != 0

if (arg3 != 0)
    while (arg3 != 0)
        char temp1_1 = *edi
        cond:1 = 0 != temp1_1
        edi = &edi[1]
        arg3 -= 1
        
        if (0 == temp1_1)
            break
    
    if (not(cond:1))
        arg3 += 1

int32_t ebx_1 = ebx - arg3
int32_t esi_2
int32_t edi_2
edi_2, esi_2 = __builtin_memcpy(arg1, arg2, ebx_1 u>> 2 << 2)
*__builtin_memcpy(edi_2, esi_2, ebx_1 & 3) = 0
return arg1
