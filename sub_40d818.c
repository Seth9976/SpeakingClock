// 函数: sub_40d818
// 地址: 0x40d818
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (arg1 != 0 && arg1[arg2] != 0)
    if (arg2 != 0)
        int32_t i
        
        for (i = arg2 - 1; i s>= 0; i -= 1)
            if (not(test_bit(data_4aa800, zx.d(arg1[i]))))
                break
        
        int32_t ecx_5 = (arg2 - i) & 0x80000001
        
        if (ecx_5 s< 0)
            ecx_5 = ((ecx_5 - 1) | 0xfffffffe) + 1
        
        if (ecx_5 == 0)
            result.b = 2
        else if (test_bit(data_4aa800, zx.d(arg1[arg2])))
            result.b = 1
    else if (test_bit(data_4aa800, zx.d(*arg1)))
        result.b = 1

return result
