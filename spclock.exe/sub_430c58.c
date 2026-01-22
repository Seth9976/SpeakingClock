// 函数: sub_430c58
// 地址: 0x430c58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* const result = *(arg1 + 0x28)
int32_t edx = *(result + 8)

if (edx == 0 || edx == *(result + 0x14))
    if (*(result + 0x14) != 0)
        return 0
    
    if (*(result + 0x30) != 0)
        return nullptr
    
    result.b = 1
else
    result.b = 1

return result
