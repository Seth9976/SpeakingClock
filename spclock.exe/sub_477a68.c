// 函数: sub_477a68
// 地址: 0x477a68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_477aac(arg1)
int16_t result = SetTimer(nullptr, 0, arg2, sub_474d94)
*(arg1 + 0x8a) = result
*(arg1 + 0x89) = arg3

if (*(arg1 + 0x8a) != 0)
    return result

return sub_477ca0(arg1)
