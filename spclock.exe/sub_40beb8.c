// 函数: sub_40beb8
// 地址: 0x40beb8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

while (true)
    uint32_t result = sub_404e48(arg1)
    
    if (result s< *arg2)
        return result
    
    result.b = *(arg1 + *arg2 - 1) - 0x30
    char temp0_1 = result.b
    result.b -= 0xa
    
    if (temp0_1 u< 0xa)
        return result
    
    if (not(test_bit(data_4aa800, zx.d(*(arg1 + *arg2 - 1)))))
        *arg2 += 1
    else
        *arg2 = sub_40db38(arg1, *arg2)
