// 函数: sub_4048c0
// 地址: 0x4048c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
ebx.b = 0x10
int32_t i = data_4aa000

do
    (*"Runtime error     at 00000000")[zx.d(ebx.b)] = (mods.dp.d(sx.q(i), 0xa)).b + 0x30
    i = divs.dp.d(sx.q(i), 0xa)
    ebx -= 1
while (i != 0)

ebx.b = 0x1c
uint32_t i_1 = data_4aa004
uint32_t result

do
    (*"Runtime error     at 00000000")[zx.d(ebx.b)] = *((i_1 & 0xf) + 0x4aa780)
    result = divu.dp.d(0:i_1, 0x10)
    i_1 = result
    ebx -= 1
while (i_1 != 0)

return result
