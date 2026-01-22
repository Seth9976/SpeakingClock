// 函数: sub_474fb0
// 地址: 0x474fb0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char eax = sub_474f58()

if (eax != 0)
    sub_474f88(0)

BOOL result = ShowWindow(arg1, arg2)

if (eax == 0)
    return result

result.b = 1
return sub_474f88(result)
