// 函数: sub_404c4c
// 地址: 0x404c4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 s<= 0)
    return 0

int32_t eax_1 = (arg1 + 0xa) & 0xfffffffe
void* eax_2 = sub_402ea8(eax_1)
*(eax_1 + eax_2 - 2) = 0
*(eax_2 + 4) = arg1
*eax_2 = 1
return eax_2 + 8
