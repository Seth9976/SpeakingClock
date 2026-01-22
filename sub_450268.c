// 函数: sub_450268
// 地址: 0x450268
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = *(arg1 + 0x48)

if (eax != 0)
    sub_467aa8(eax, *(arg1 + 0x44))

*(arg1 + 0x48) = arg2

if (arg2 != 0)
    sub_467aec(arg2, *(arg1 + 0x44))
    sub_423408(*(arg1 + 0x48), arg1)

return sub_44f864(arg1)
