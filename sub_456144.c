// 函数: sub_456144
// 地址: 0x456144
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 u< 1)
    if (arg3 != arg1[2])
        arg1[2] = arg3
        
        if (arg3 u> 0 && arg3 u< arg1[4])
            arg1[4] = arg3
        
        (*(*arg1 + 0xc))()
else if (arg2 == 1)
    if (arg3 != arg1[3])
        arg1[3] = arg3
        
        if (arg3 u> 0 && arg3 u< arg1[5])
            arg1[5] = arg3
        
        (*(*arg1 + 0xc))()
else if (arg2 == 2)
    if (arg3 != arg1[4])
        arg1[4] = arg3
        int32_t eax_4 = arg1[2]
        
        if (eax_4 u> 0 && eax_4 u< arg3)
            arg1[2] = arg3
        
        (*(*arg1 + 0xc))()
else if (arg2 == 3 && arg3 != arg1[5])
    arg1[5] = arg3
    int32_t eax_7 = arg1[3]
    
    if (eax_7 u> 0 && eax_7 u< arg3)
        arg1[3] = arg3
    
    (*(*arg1 + 0xc))()
