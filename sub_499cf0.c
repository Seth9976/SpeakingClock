// 函数: sub_499cf0
// 地址: 0x499cf0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_45de4c(arg1)
BOOL result = PostMessageA(sub_45f888(arg1), 0xb0d0, 0, 0)

if (arg1[0xaa] == 0)
    return result

return (*(*arg1 + 0x15c))()
