// 函数: sub_403ab0
// 地址: 0x403ab0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg1 s<= 0)
    return 0

int32_t eax_1 = (arg1 + 0xa) & 0xfffffffe
void* eax_2 = sub_402628(eax_1)
*(eax_1 + eax_2 - 2) = 0
*(eax_2 + 4) = arg1
*eax_2 = 1
return eax_2 + 8
