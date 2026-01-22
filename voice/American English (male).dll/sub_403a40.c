// 函数: sub_403a40
// 地址: 0x403a40
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg2 != 0)
    if (*(arg2 - 8) s> 0xffffffff)
        *(arg2 - 8) += 1
    else
        void* eax_1 = sub_403ab0(*(arg2 - 4))
        sub_4027b0(arg2, eax_1, *(arg2 - 4))
        arg2 = eax_1

void* temp0 = *arg1
*arg1 = arg2

if (temp0 == 0 || *(temp0 - 8) s< 1)
    return 

int32_t temp3_1 = *(temp0 - 8)
*(temp0 - 8) -= 1

if (temp3_1 == 1)
    sub_402648(temp0 - 8)
