// 函数: sub_46f0a4
// 地址: 0x46f0a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t ecx
HANDLE eax_2 = sub_454230(*(*(arg2 + 4) + 4), arg2, ecx)
void* result

if (eax_2 != 0)
    result = *(arg2 + 4)

if (eax_2 == 0 || *(result + 8) == 0)
    int32_t eax_4 = sub_405cb0(*(arg1 + 0x33c))
    int32_t var_10_1 = eax_4 + 1
    sub_405e6c()
    *(*(arg1 + 0x33c) + (eax_4 << 3)) = **(arg2 + 4)
    result = *(arg1 + 0x33c)
    *(result + (eax_4 << 3) + 4) = *(arg2 + 8)

return result
