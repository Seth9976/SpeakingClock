// 函数: sub_46e528
// 地址: 0x46e528
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg1[0x15].b & 8) == 0)
    return sub_457164(arg1, arg2)

arg1[0xac] = arg2
char result = 4 | arg1[0x23].b
arg1[0x23].b = result
return result
