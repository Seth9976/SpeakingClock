// 函数: sub_494500
// 地址: 0x494500
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char ecx = *(arg1 + 0x20)

if (ecx != 1 && ecx != 3)
    if (ecx == 4)
        return (*(**(arg1 + 0x24) + 0x24))()
    
    if (ecx == 5)
        return sub_48cd68(*(arg1 + 0x1c))
    
    return 0

return (*(**(arg1 + 0x18) + 0x24))()
