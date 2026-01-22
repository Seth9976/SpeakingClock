// 函数: sub_449ef0
// 地址: 0x449ef0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
char temp0 = arg1[0x43070008]
arg1[0x43070008] += arg1.b

if (not(add_overflow(temp0, arg1.b)))
    jump(0x449f00)

*arg7 += arg7.b
undefined
