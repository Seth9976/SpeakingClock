// 函数: sub_40b0a8
// 地址: 0x40b0a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = 0x100 - *(arg3 - 0x104)

if (arg2 s< ebx)
    ebx = arg2

if (ebx != 0)
    sub_4030d0(arg1, arg3 + *(arg3 - 0x104) - 0x100, ebx)

*(arg3 - 0x104) += ebx
return arg3
