// 函数: sub_4757dc
// 地址: 0x4757dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0xd0)
int32_t result = sub_405cb8()

if (result s>= 0)
    int32_t i_1 = result + 1
    result = 0
    int32_t i
    
    do
        int32_t esi_1 = result * 3
        
        if (arg2 == *(*(arg1 + 0xd0) + (esi_1 << 2) + 4))
            *(*(arg1 + 0xd0) + (esi_1 << 2) + 4) = 0
            result = *(arg1 + 0xd0)
            *(result + (esi_1 << 2)) = 0xffffffff
            break
        
        result += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
