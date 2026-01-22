// 函数: sub_46e55c
// 地址: 0x46e55c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg1[0x15].b & 8) == 0)
    return sub_4571a8(arg1, arg2)

arg1[0xad] = arg2
char result = 8 | arg1[0x23].b
arg1[0x23].b = result
return result
