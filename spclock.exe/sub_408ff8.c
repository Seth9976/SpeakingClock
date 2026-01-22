// 函数: sub_408ff8
// 地址: 0x408ff8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t cchCount1 = arg1

if (cchCount1 != 0)
    cchCount1 = *(cchCount1 - 4)

int32_t cchCount2 = arg2

if (cchCount2 != 0)
    cchCount2 = *(cchCount2 - 4)

char* lpString2 = sub_405018(arg2)
return CompareStringA(0x400, 1, sub_405018(arg1), cchCount1, lpString2, cchCount2) - 2
