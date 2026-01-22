// 函数: sub_44e854
// 地址: 0x44e854
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char eax_1

if (*(arg1 + 0x64) == 0)
    eax_1 = sub_403df4(*(arg1 + 4), 0x44a174)

void* result

if (*(arg1 + 0x64) != 0 || eax_1 == 0)
    result = arg1
else
    result = nullptr

if (*(arg1 + 0x82) == 0)
    return result

*(arg1 + 0x84)
return (*(arg1 + 0x80))(arg2)
