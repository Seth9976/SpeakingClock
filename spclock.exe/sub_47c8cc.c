// 函数: sub_47c8cc
// 地址: 0x47c8cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 u< 0)
    arg2 = 1
else if (arg2 u> 4)
    arg2 = 4

void* result = arg1[0x99]

if (arg2 == *(result + 0x20))
    return result

sub_47a060(result, arg2)
return (*(*arg1 + 0x80))()
