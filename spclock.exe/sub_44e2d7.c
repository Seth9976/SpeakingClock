// 函数: sub_44e2d7
// 地址: 0x44e2d7
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*0xb0000000 += arg3:1.b

if (arg2 != arg1[0x48])
    arg1[0x48] = arg2
    (*(*arg1 + 0x3c))()
