// 函数: sub_411820
// 地址: 0x411820
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t edi = arg2
int32_t i = arg3
void* esi = arg1

while (i != 0)
    int32_t ecx = *(esi + 0x14)
    int32_t i_1 = ecx - *(esi + 0x10)
    
    if (ecx u<= *(esi + 0x10))
        sub_41186c(esi)
        i_1 = *(esi + 0x14)
    
    if (i_1 u>= i)
        i_1 = i
    
    i -= i_1
    arg1 = *(esi + 8) + *(esi + 0x10)
    *(esi + 0x10) += i_1
    int32_t esi_2
    int32_t edi_1
    edi_1, esi_2 = __builtin_memcpy(edi, arg1, i_1 u>> 2 << 2)
    edi = __builtin_memcpy(edi_1, esi_2, i_1 & 3)
