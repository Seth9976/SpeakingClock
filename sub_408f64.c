// 函数: sub_408f64
// 地址: 0x408f64
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == arg2)
    arg1.b = 1
else if (arg1 != 0)
    if (arg2 == 0)
        return 0
    
    int32_t ecx_1 = *(arg1 - 4)
    
    if (ecx_1 != *(arg2 - 4))
        return 0
    
    if (sub_408ec8(arg1, arg2, ecx_1) != 0)
        return 0
    
    arg1.b = 1

return arg1
