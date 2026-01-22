// 函数: sub_41c7d8
// 地址: 0x41c7d8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x26) == 0)
    int32_t cchCount1_1 = arg2
    
    if (cchCount1_1 != 0)
        cchCount1_1 = *(cchCount1_1 - 4)
    
    int32_t cchCount2_1 = arg3
    
    if (cchCount2_1 != 0)
        cchCount2_1 = *(cchCount2_1 - 4)
    
    char* lpString2_1 = sub_405018(arg3)
    return CompareStringA(0x400, 1, sub_405018(arg2), cchCount1_1, lpString2_1, cchCount2_1) - 2

int32_t cchCount1 = arg2

if (cchCount1 != 0)
    cchCount1 = *(cchCount1 - 4)

int32_t cchCount2 = arg3

if (cchCount2 != 0)
    cchCount2 = *(cchCount2 - 4)

char* lpString2 = sub_405018(arg3)
return CompareStringA(0x400, 0, sub_405018(arg2), cchCount1, lpString2, cchCount2) - 2
