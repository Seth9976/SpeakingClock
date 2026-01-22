// 函数: sub_49634c
// 地址: 0x49634c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
char result = arg1[0x18]

if (arg2 == result)
    return result

if (result == 6)
    arg1[0x19] = 0

arg1[0x18] = arg2

if (arg2 == 6)
    arg1[0x19] = arg2

char* esi
esi.w = 0xfffc
return sub_403e64(arg1, esi)
