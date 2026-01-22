// 函数: sub_428ae8
// 地址: 0x428ae8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* hKey = *(arg1 + 4)

if (hKey != 0)
    if (*(arg1 + 0xc) == 0)
        RegFlushKey(hKey)
    
    RegCloseKey(*(arg1 + 4))
    *(arg1 + 4) = 0
    hKey = arg1 + 0x10
    sub_404b88(hKey)

return hKey
