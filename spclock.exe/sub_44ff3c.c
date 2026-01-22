// 函数: sub_44ff3c
// 地址: 0x44ff3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = data_4ac4e0

if (*(result + 0xd) != 0 && arg1[0xe] != 0)
    HMENU hmenu = (*(*arg1 + 0x34))()
    MENUITEMINFOA lpmii
    lpmii.cbSize = 0x2c
    lpmii.fMask = 0x10
    void var_58
    lpmii.dwTypeData = &var_58
    lpmii.cch = 0x50
    result = GetMenuItemInfoA(hmenu, 0, 0xffffffff, &lpmii)
    
    if (result != 0)
        result = sub_4502d0(arg1)
        int32_t edx_3 = lpmii.fType & 0x6000
        
        if (result.b != (sbb.d(edx_3, edx_3, edx_3 u< 1)).b + 1)
            lpmii.fType = ((sub_4502d0(arg1) & 0x7f) * 0x6000) | (lpmii.fType & 0xffff9fff)
            lpmii.fMask = 0x10
            result = SetMenuItemInfoA(hmenu, 0, 0xffffffff, &lpmii)
            
            if (result != 0)
                return DrawMenuBar(arg1[0xe])

return result
