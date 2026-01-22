// 函数: sub_42f268
// 地址: 0x42f268
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[0xa] == 0)
    sub_42edf0(arg1)

void* result = arg1[0xa]
*(result + 0x1c) = 0

if (arg2 == *(result + 0xc))
    return result

sub_42f37c(arg1)
*(arg1[0xa] + 0xc) = arg2
return (*(*arg1 + 0x10))()
