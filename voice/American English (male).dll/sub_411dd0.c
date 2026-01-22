// 函数: sub_411dd0
// 地址: 0x411dd0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi = arg2
int32_t i = arg3
void* edi = arg1

while (i != 0)
    int32_t ecx = *(edi + 0xc)
    int32_t i_1 = ecx - *(edi + 0x10)
    
    if (ecx u<= *(edi + 0x10))
        sub_411e1c(edi)
        i_1 = *(edi + 0xc)
    
    if (i_1 u>= i)
        i_1 = i
    
    i -= i_1
    arg1 = *(edi + 8) + *(edi + 0x10)
    *(edi + 0x10) += i_1
    int32_t esi_1
    int32_t edi_2
    edi_2, esi_1 = __builtin_memcpy(arg1, esi, i_1 u>> 2 << 2)
    esi = __builtin_memcpy(edi_2, esi_1, i_1 & 3)
