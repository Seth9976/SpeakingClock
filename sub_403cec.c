// 函数: sub_403cec
// 地址: 0x403cec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 u>= 0xff000000)
    return sub_406568(arg3, *((arg2 & 0xffffff) + arg1)) __tailcall

if (arg2 u< 0xfe000000)
    jump(arg2)

jump(*(sx.d(arg2.w) + *arg1))
