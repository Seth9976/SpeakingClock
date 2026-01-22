// 函数: sub_40f6d0
// 地址: 0x40f6d0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t i = *(*(arg1 + 0xc) + 8) - 1

if (i s>= 0)
    do
        if (sub_40f6b0(sub_40fa54(*(arg1 + 0xc), i), arg2) != 0)
            sub_40f964(*(arg1 + 0xc), i)
        
        i -= 1
    while (i != 0xffffffff)

int32_t i_1 = *(*(arg1 + 4) + 8) - 1

if (i_1 s>= 0)
    do
        if (sub_40f6b0(sub_40fa54(*(arg1 + 4), i_1), arg2) != 0)
            sub_40f964(*(arg1 + 4), i_1)
        
        i_1 -= 1
    while (i_1 != 0xffffffff)

void* result = (*(**(arg1 + 8) + 0x14))()
void* i_2 = result - 1

if (i_2 s>= 0)
    do
        result = sub_40f6b0((*(**(arg1 + 8) + 0x18))(), arg2)
        
        if (result.b != 0)
            result = (*(**(arg1 + 8) + 0x48))()
        
        i_2 -= 1
    while (i_2 != 0xffffffff)

return result
