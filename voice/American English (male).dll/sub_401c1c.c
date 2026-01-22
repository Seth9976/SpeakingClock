// 函数: sub_401c1c
// 地址: 0x401c1c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t edx_2 = *(arg1 - 4)

if ((edx_2 & 0x80000002) != 0x80000002)
    data_4145c0 = 4

int32_t result = edx_2 & 0x7ffffffc
char* eax = arg1 - result

if (((edx_2 ^ *eax) & 0xfffffffe) != 0)
    data_4145c0 = 5

if ((*eax & 1) == 0)
    return result

int32_t esi_1 = *(eax - 4)
int32_t* eax_1 = eax - esi_1

if (esi_1 != eax_1[2])
    data_4145c0 = 6

sub_401b0c(eax_1)
return result + esi_1
