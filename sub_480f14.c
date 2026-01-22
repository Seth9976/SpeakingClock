// 函数: sub_480f14
// 地址: 0x480f14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = *(arg1 + 0x25c)

if (eax != 0)
    sub_467aa8(eax, *(arg1 + 0x258))

*(arg1 + 0x25c) = arg2

if (arg2 == 0)
    sub_458ac8(arg1, 0)
    return 0

sub_467aec(arg2, *(arg1 + 0x258))
sub_423408(*(arg1 + 0x25c), arg1)
sub_458ac8(arg1, sub_466cac(*(arg1 + 0x25c)))
return 0
