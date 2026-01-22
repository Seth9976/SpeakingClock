// 函数: sub_4107fc
// 地址: 0x4107fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = 1
*(arg2 + (arg1 << 2) - 0x100) += 1
int32_t ecx_2 = *(arg2 + (arg1 << 3) - 0x2fc)

if (ecx_2 + *(arg2 + (arg1 << 3) - 0x300) s> *(arg2 + (arg1 << 2) - 0x100))
    return result

if (arg1 == 0)
    return 0

*(arg2 + (arg1 << 2) - 0x100) = ecx_2
return sub_4107fc(arg2)
