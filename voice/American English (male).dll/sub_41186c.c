// 函数: sub_41186c
// 地址: 0x41186c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*(arg1 + 8)
*(arg1 + 0xc)
int32_t eax_1
int32_t edx_1
eax_1, edx_1 = (*(**(arg1 + 4) + 0xc))()
*(arg1 + 0x14) = eax_1

if (eax_1 == 0)
    edx_1.b = 1
    sub_4033c4(sub_409fa4(sub_40edd1+0x123, edx_1, data_41353c))

*(arg1 + 0x10) = 0
return 0
