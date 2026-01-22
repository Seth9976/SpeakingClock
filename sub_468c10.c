// 函数: sub_468c10
// 地址: 0x468c10
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = *(arg1 + 0x38)

if (eax != 0)
    sub_467aa8(eax, *(arg1 + 0x34))

*(arg1 + 0x38) = arg2

if (arg2 == 0)
    return arg2

sub_467aec(arg2, *(arg1 + 0x34))
return sub_423408(*(arg1 + 0x38), arg1)
