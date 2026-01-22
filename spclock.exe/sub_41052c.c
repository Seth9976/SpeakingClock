// 函数: sub_41052c
// 地址: 0x41052c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result

do
    result.b = *(arg2 - 0x300 + (arg1 << 3) + 4) + *(arg2 - 0x300 + (arg1 << 3))
        s> *(arg2 + (arg1 << 2) - 0x100)
    arg1 -= 1
    
    if (result.b == 0)
        break
while (arg1 s>= 0)

return result
