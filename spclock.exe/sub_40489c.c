// 函数: sub_40489c
// 地址: 0x40489c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

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
