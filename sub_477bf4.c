// 函数: sub_477bf4
// 地址: 0x477bf4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_477aac(arg1)
char eax_1 = *(arg1 + 0x89)
char temp0 = eax_1

if (temp0 u< 1)
    int32_t point
    GetCursorPos(&point)
    return sub_477f40(arg1, &point)

if (temp0 != 1)
    return eax_1 - 1

return sub_477c2c(arg1)
