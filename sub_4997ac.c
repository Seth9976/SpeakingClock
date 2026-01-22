// 函数: sub_4997ac
// 地址: 0x4997ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = arg1[0x9a]

if (eax != 0)
    sub_486e68(eax, arg1[0x9d])

arg1[0x9a] = arg2

if (arg2 != 0)
    sub_486e58(arg2, arg1[0x9d])
    sub_423408(arg1[0x9a], arg1)

return (*(*arg1 + 0x168))()
