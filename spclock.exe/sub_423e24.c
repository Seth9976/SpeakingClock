// 函数: sub_423e24
// 地址: 0x423e24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *(arg1 + 0x30)

if (arg2 != result)
    if (result != 0)
        sub_423648(result, arg1)
    
    result = arg2
    *(arg1 + 0x30) = result
    
    if (result != 0)
        return sub_423408(result, arg1)

return result
