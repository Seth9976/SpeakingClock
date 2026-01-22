// 函数: sub_43aeea
// 地址: 0x43aeea
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(*(arg1 - 4) + 0x250)
(*(**(arg1 - 4) + 0xd8))()
sub_43aa38(*(arg1 - 4), *(*(arg1 - 4) + 0x25d))

if (*(*(arg1 - 4) + 0x255) != 0)
    SendMessageA(sub_45f888(*(arg1 - 4)), 0xcc, zx.d(*(*(arg1 - 4) + 0x255)), 0)

if (*(*(arg1 - 4) + 0x26c) != 0xffffffff)
    (*(**(arg1 - 4) + 0xec))()
    *(*(arg1 - 4) + 0x26c) = 0xffffffff

if (*(*(arg1 - 4) + 0x268) != 0xffffffff)
    (*(**(arg1 - 4) + 0xe8))()

return sub_43afc8(*(arg1 - 4))
