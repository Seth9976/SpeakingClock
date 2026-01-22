// 函数: sub_42f22c
// 地址: 0x42f22c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[0xa] == 0)
    sub_42edf0(arg1)

void* result = arg1[0xa]
*(result + 0x20) = 0

if (arg2 == *(result + 0x10))
    return result

sub_42f37c(arg1)
*(arg1[0xa] + 0x10) = arg2
return (*(*arg1 + 0x10))()
