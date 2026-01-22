// 函数: sub_426078
// 地址: 0x426078
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i = *(*(arg1 + 0x14) + 8) - 1

if (i s>= 0)
    do
        if (arg2 == *(sub_41a0f4(*(arg1 + 0x14), i) + 8))
            sub_419fe8(*(arg1 + 0x14), i)
            break
        
        i -= 1
    while (i != 0xffffffff)

int32_t* result = *(arg1 + 0x10)
int32_t i_1 = result[2] - 1

if (i_1 s>= 0)
    do
        result = sub_41a0f4(*(arg1 + 0x10), i_1)
        
        if (arg2 == result[2])
            sub_419fe8(*(arg1 + 0x10), i_1)
            return sub_403c68(result)
        
        i_1 -= 1
    while (i_1 != 0xffffffff)

return result
