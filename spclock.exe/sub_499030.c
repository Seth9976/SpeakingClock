// 函数: sub_499030
// 地址: 0x499030
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result
result.w = *(arg1 + 0x1c) & 8

if (0 == result.w)
    result = *(arg1 + 0x4c)
    
    if (result != 0)
        return sub_41a290(result)

return result
