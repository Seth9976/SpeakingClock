// 函数: sub_4502e8
// 地址: 0x4502e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg2 & 0x10) == 0)
    uint32_t eax_2
    int32_t ecx_1
    eax_2, ecx_1 = GetMenuItemID(arg1, arg3)
    
    if (eax_2 != 0xffffffff)
        sub_44f914(*(arg5 - 4))
else
    HMENU eax
    int32_t ecx
    eax, ecx = GetSubMenu(arg1, arg3)
    ecx.b = 1
    sub_44f914(*(arg5 - 4))

return 0
