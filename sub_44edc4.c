// 函数: sub_44edc4
// 地址: 0x44edc4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = *(arg1 + 0x7c)

if (eax != 0)
    sub_467aa8(eax, *(arg1 + 0x78))

*(arg1 + 0x7c) = arg2

if (arg2 != 0)
    sub_467aec(arg2, *(arg1 + 0x78))
    sub_423408(*(arg1 + 0x7c), arg1)

return sub_44ee34(arg1)
