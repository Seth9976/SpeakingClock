// 函数: sub_41e098
// 地址: 0x41e098
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 8)
*(arg1 + 0xc)
int32_t eax_1
int32_t edx_1
eax_1, edx_1 = (*(**(arg1 + 4) + 0xc))()
*(arg1 + 0x14) = eax_1

if (eax_1 == 0)
    edx_1.b = 1
    sub_40451c(sub_40cf6c(sub_41715c+0x210, edx_1, data_4ac41c))

*(arg1 + 0x10) = 0
return 0
