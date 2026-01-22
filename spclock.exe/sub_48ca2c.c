// 函数: sub_48ca2c
// 地址: 0x48ca2c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp0 = *(arg2 + 0x69)

if (temp0 != arg1:1.b)
    if (temp0 u>= arg1:1.b)
        jump(0x48caa4)
    
    jump(sub_48c9c6+0x6e)

char temp1 = *(arg4 + (arg3 << 1) + 0x44) | arg3.b
*(arg4 + (arg3 << 1) + 0x44) = temp1

if (temp1 u< 0)
    undefined

jump(0x48ca41)
