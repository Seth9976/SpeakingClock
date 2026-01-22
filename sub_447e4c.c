// 函数: sub_447e4c
// 地址: 0x447e4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i = 0
uint8_t string[0x1a]
uint8_t (* edx)[0x1a] = &string

do
    *edx = i.b + 0x41
    i += 1
    edx = &(*edx)[1]
while (i != 0x1a)

int32_t i_1 = 0
void var_22
void* edx_1 = &var_22

do
    *edx_1 = i_1.b + 0x61
    i_1 += 1
    edx_1 += 1
while (i_1 != 0x1a)

GetTextExtentPointA(sub_42c73c(arg1), &string, 0x34, arg2)
int32_t result = divs.dp.d(sx.q(*arg2), 0x34)
*arg2 = result
return result
