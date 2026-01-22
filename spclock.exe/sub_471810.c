// 函数: sub_471810
// 地址: 0x471810
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = *(arg1 - 4)

if (*(result + 0x271) != 0)
    result = *(arg1 - 4)
    
    if ((*(result + 0x270) & 1) != 0)
        result = *(arg1 - 4)
        
        if (*(result + 0x277) != 1)
            HMENU hMenu = GetSystemMenu(sub_45f888(*(arg1 - 4)), 0)
            
            if (*(*(arg1 - 4) + 0x271) == 3)
                DeleteMenu(hMenu, 0xf130, MF_BYCOMMAND)
                DeleteMenu(hMenu, 7, MF_BYPOSITION)
                DeleteMenu(hMenu, 5, MF_BYPOSITION)
                DeleteMenu(hMenu, 0xf030, MF_BYCOMMAND)
                DeleteMenu(hMenu, 0xf020, MF_BYCOMMAND)
                DeleteMenu(hMenu, 0xf000, MF_BYCOMMAND)
                return DeleteMenu(hMenu, 0xf120, MF_BYCOMMAND)
            
            if ((*(*(arg1 - 4) + 0x270) & 2) == 0)
                EnableMenuItem(hMenu, 0xf020, MF_GRAYED)
            
            result = *(arg1 - 4)
            
            if ((*(result + 0x270) & 4) == 0)
                return EnableMenuItem(hMenu, 0xf030, MF_GRAYED)

return result
