// 函数: sub_499dcc
// 地址: 0x499dcc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_45de30(arg1)
BOOL result = PostMessageA(sub_45f888(arg1), 0xb0cf, 0, 0)

if (arg1[0xaa] == 0)
    return result

return (*(*arg1 + 0x15c))()
