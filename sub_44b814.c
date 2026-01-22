// 函数: sub_44b814
// 地址: 0x44b814
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebp = arg1

if ((ebp[7].b & 8) != 0)
    return 

if ((ebp[7].b & 2) != 0)
    ebp[0x1d].b = 1
else if (ebp[0x1b] == 0)
    int32_t i = GetMenuItemCount(sub_44b944(ebp))
    int32_t ebx
    ebx.b = i == 0
    
    for (; i s> 0; i -= 1)
        if ((GetMenuState(sub_44b944(ebp), i - 1, MF_BYPOSITION).b & 4) == 0)
            RemoveMenu(sub_44b944(ebp), i - 1, MF_BYPOSITION)
            ebx.b = 1
    
    if (ebx.b != 0)
        if (ebp[0x19] != 0)
            sub_44b6d4(ebp)
        else if (sub_403df4(ebp[0x1c], 0x44a270) == 0)
            sub_44b6d4(ebp)
        else if (GetMenuItemCount(sub_44b944(ebp)) != 0)
            sub_44b6d4(ebp)
        else
            DestroyMenu(ebp[0xd])
            ebp[0xd] = 0
        
        (*(*ebp + 0x3c))()
else
    sub_44b814()
