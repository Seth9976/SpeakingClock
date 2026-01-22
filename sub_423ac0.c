// 函数: sub_423ac0
// 地址: 0x423ac0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x20) == 0)
    return 0x8000ffff

return (*(**(arg1 + 0x20) + 0x1c))()
