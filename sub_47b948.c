// 函数: sub_47b948
// 地址: 0x47b948
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 u< 0)
    arg2 = 1
else if (arg2 u> 4)
    arg2 = 4

void* result = arg1[0x67]

if (arg2 == *(result + 0x20))
    return result

sub_47a060(result, arg2)
return (*(*arg1 + 0x80))()
