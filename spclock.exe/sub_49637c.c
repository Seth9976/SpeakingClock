// 函数: sub_49637c
// 地址: 0x49637c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = *(arg1 + 0x19)

if (arg2 == result)
    return result

if (result == 6)
    arg1[6].b = 0

*(arg1 + 0x19) = arg2

if (arg2 == 6)
    arg1[6].b = arg2

int32_t* esi
esi.w = 0xfffc
return sub_403e64(arg1, esi)
