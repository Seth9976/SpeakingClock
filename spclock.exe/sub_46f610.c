// 函数: sub_46f610
// 地址: 0x46f610
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x277) != 2 || *(arg1 + 0x29c) == 0)
    return nullptr

LRESULT eax_2
uint32_t ecx_1
int32_t edx_1
eax_2, ecx_1, edx_1 = SendMessageA(*(arg1 + 0x29c), 0x229, 0, 0)
return sub_454230(eax_2, edx_1, ecx_1)
