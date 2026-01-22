// 函数: sub_4037c0
// 地址: 0x4037c0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t i_1 = *arg1
void* esi = arg1 + 4
int32_t result
int32_t i

do
    result = **(esi + 4) + *(esi + 8)
    **esi = result
    esi += 0xc
    i = i_1
    i_1 -= 1
while (i != 1)
return result
