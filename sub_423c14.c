// 函数: sub_423c14
// 地址: 0x423c14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *(arg1 + 0x10)

if (arg2 != result)
    if (result != 0)
        result = sub_423de4(result, arg1)
    
    *(arg1 + 0x10) = arg2
    
    if (arg2 != 0)
        return sub_423dd8(arg2, arg1)

return result
