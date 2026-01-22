// 函数: sub_44b944
// 地址: 0x44b944
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if (*(ebx + 0x34) == 0)
    if (sub_403df4(*(ebx + 4), 0x44a554) == 0)
        *(ebx + 0x34) = CreateMenu()
    else
        *(ebx + 0x34) = CreatePopupMenu()
    
    if (*(ebx + 0x34) == 0)
        ebx = sub_44a8ec(data_4ac028)
    
    sub_44b6d4(ebx)

return *(ebx + 0x34)
