// 函数: sub_4159a8
// 地址: 0x4159a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = zx.d(*arg1)

if (result.w == 0x400c)
    *(arg1 + 8)
    return sub_4159a8()

*arg2 = result.w
result.b = (*(arg2 + 1) & 0x20) != 0

if (result.b == 0)
    *arg3 = 0
else if ((*(arg2 + 1) & 0x40) == 0)
    *arg3 = *(arg1 + 8)
else
    *arg3 = **(arg1 + 8)

return result
