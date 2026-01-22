// 函数: sub_40f85c
// 地址: 0x40f85c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* result = *(arg1 + 4)
int32_t i = *(result + 8) - 1

if (i s>= 0)
    do
        int32_t* eax_1 = sub_40fa54(*(arg1 + 4), i)
        sub_40f6d0(eax_1, arg2)
        result = eax_1[3]
        
        if (*(result + 8) == 0)
            sub_402eb0(eax_1)
            result = sub_40f964(*(arg1 + 4), i)
        
        i -= 1
    while (i != 0xffffffff)

return result
