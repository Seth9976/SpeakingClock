// 函数: sub_402f34
// 地址: 0x402f34
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg2 u>= 0xff000000)
    return sub_404f68(arg3, *((arg2 & 0xffffff) + arg1)) __tailcall

if (arg2 u< 0xfe000000)
    jump(arg2)

jump(*(sx.d(arg2.w) + *arg1))
