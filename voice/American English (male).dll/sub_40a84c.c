// 函数: sub_40a84c
// 地址: 0x40a84c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* var_10 = sub_403c88(arg3)
int32_t esi = 1
void* ebx = 1
void* eax_1

while (ebx s< var_10)
    if (esi s>= arg2)
        break
    
    esi += 1
    eax_1.b = *(arg3 + ebx - 1)
    
    if (not(test_bit(data_413114, eax_1 & 0xff)))
        ebx += 1
    else
        ebx = sub_40aa04(arg3, ebx)

if (esi == arg2 && ebx s< var_10)
    eax_1.b = *(arg3 + ebx - 1)
    
    if (test_bit(data_413114, eax_1 & 0xff))
        ebx = sub_40aa04(arg3, ebx) - 1

*arg1 = esi
*arg4 = ebx
return arg4
