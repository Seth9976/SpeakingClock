// 函数: sub_46fd6c
// 地址: 0x46fd6c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *(arg1 + 0x334)

if (arg2 != result)
    if (result != 0)
        sub_423648(result, arg1)
    
    *(arg1 + 0x334) = arg2
    
    if (arg2 != 0)
        sub_423408(arg2, arg1)
        *(arg1 + 0x330) = 2
    
    *(arg1 + 0x340) = 0
    *(arg1 + 0x344) = 0
    result = sub_45fc28(arg1)
    
    if (result.b != 0 && (*(arg1 + 0x1c) & 0x10) == 0)
        return sub_45c168(arg1)

return result
