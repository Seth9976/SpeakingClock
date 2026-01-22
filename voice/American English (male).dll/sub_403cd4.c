// 函数: sub_403cd4
// 地址: 0x403cd4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg2 == 0)
    return sub_403a40(arg1, arg3) __tailcall

if (arg3 == 0)
    return sub_403a40(arg1, arg2) __tailcall

if (arg2 == *arg1)
    return sub_403c90(arg1, arg3) __tailcall

if (arg3 != *arg1)
    sub_403a40(arg1, arg2)
    return sub_403c90(arg1, arg3) __tailcall

void* eax_5 = sub_403ab0(*(arg2 - 4) + *(arg3 - 4))
sub_4027b0(arg2, eax_5, *(arg2 - 4))
sub_4027b0(arg3, eax_5 + *(arg2 - 4), *(arg3 - 4))

if (eax_5 != 0)
    *(eax_5 - 8) -= 1

return sub_403a40(arg1, eax_5)
