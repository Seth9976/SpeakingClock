// 函数: sub_410b84
// 地址: 0x410b84
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

sub_403160(arg1, arg2)
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
int32_t edx
edx.b = arg2.b & 0xfc
sub_40fe20(arg1, edx)
int32_t eax_1 = arg1[5]

if (eax_1 != 0)
    sub_404398(arg1[4], sub_40f2b0, eax_1)

arg1[5] = 0
int32_t result = (*(*arg1 + 0x28))()

if (arg2.b s<= 0)
    return result

return sub_403148(arg1)
