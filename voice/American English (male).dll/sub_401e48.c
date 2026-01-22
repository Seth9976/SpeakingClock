// 函数: sub_401e48
// 地址: 0x401e48
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t var_1c = *arg1
int32_t var_18 = arg1[1]
sub_401dfc()
int32_t var_14
sub_40137c(&data_414620, &var_1c, &var_14)
int32_t ebx = var_14

if (ebx == 0)
    return 0

int32_t eax = var_1c

if (ebx u< eax)
    int32_t eax_1 = sub_401c1c(eax)
    var_1c -= eax_1
    var_18 += eax_1

int32_t* eax_3 = var_1c + var_18
int32_t var_10
int32_t esi_4 = ebx + var_10

if (eax_3 u< esi_4)
    int32_t eax_4 = sub_401c8c(eax_3)
    var_18 += eax_4

int32_t eax_6 = var_1c + var_18

if (esi_4 == eax_6)
    sub_401ba0(eax_6 - 4, 4)
    var_18 -= 4

data_414618 = var_1c
data_414614 = var_18
int32_t result
result.b = 1
return result
