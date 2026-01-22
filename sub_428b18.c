// 函数: sub_428b18
// 地址: 0x428b18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* hKey = *(arg1 + 8)

if (arg2 == hKey)
    return hKey

if (*(arg1 + 0x14) != 0)
    RegCloseKey(hKey)
    *(arg1 + 0x14) = 0

*(arg1 + 8) = arg2
return sub_428ae8(arg1)
