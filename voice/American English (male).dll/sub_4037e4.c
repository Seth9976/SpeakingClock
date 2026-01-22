// 函数: sub_4037e4
// 地址: 0x4037e4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ecx
ecx.b = 0x10
int32_t i = data_413000

do
    int32_t eax_3
    eax_3.b = ecx.b
    (*"Runtime error     at 00000000")[eax_3] = (mods.dp.d(sx.q(i), 0xa)).b + 0x30
    i = divs.dp.d(sx.q(i), 0xa)
    ecx -= 1
while (i != 0)

ecx.b = 0x1c
uint32_t i_1 = data_413004

do
    void* edx_6
    edx_6.b = *((i_1 & 0xf) + 0x413088)
    int32_t ebx
    ebx.b = ecx.b
    (*"Runtime error     at 00000000")[ebx] = edx_6.b
    i_1 u>>= 4
    ecx -= 1
while (i_1 != 0)

return i_1
