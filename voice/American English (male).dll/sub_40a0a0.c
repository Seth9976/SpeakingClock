// 函数: sub_40a0a0
// 地址: 0x40a0a0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t i = 0
int32_t esi = sub_402790()

for (; i s<= 6; i += 1)
    if (esi == *((i << 3) + &data_413224))
        break

int32_t* result

if (i s> 6)
    int32_t var_10 = esi
    char var_c = 0
    result, esi = sub_409fe0(sub_405ccc+0x168, 1, data_413404, 0, &var_10)
else
    result = sub_409ee8(sub_405ccc+0x168, 1, *((i << 3) + &data_413228))

result[3] = esi
return result
