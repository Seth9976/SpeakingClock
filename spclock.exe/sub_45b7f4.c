// 函数: sub_45b7f4
// 地址: 0x45b7f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int32_t ecx = *(arg1 + 0x1cc)

if (ecx != 0)
    result = *(ecx + 8)

int32_t ecx_1 = *(arg1 + 0x1d0)

if (ecx_1 == 0)
    return result

return result + *(ecx_1 + 8)
