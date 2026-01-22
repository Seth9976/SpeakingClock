// 函数: sub_42900c
// 地址: 0x42900c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_403578(arg2, 0x1c, 0)
enum WIN32_ERROR result
result.b = RegQueryInfoKeyA(*(arg1 + 4), nullptr, nullptr, nullptr, arg2, &arg2[2], nullptr, 
    &arg2[4], &arg2[6], &arg2[8], nullptr, &arg2[0xa]) == NO_ERROR

if (*(data_4ac4e0 + 0xc) != 0 && *data_4ac4d0 == 2)
    *(arg2 + 4) *= 2
    *(arg2 + 0xc) *= 2

return result
