// 函数: sub_406a54
// 地址: 0x406a54
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi = sub_403c88(arg1)
int32_t i

for (i = 1; esi s>= i; i += 1)
    if (*(arg1 + i - 1) u> 0x20)
        break

if (esi s< i)
    sub_4039ec(arg2)
    return arg2

while (*(arg1 + esi - 1) u<= 0x20)
    esi -= 1

return sub_403ee0(esi - i + 1, i, arg1, arg2)
